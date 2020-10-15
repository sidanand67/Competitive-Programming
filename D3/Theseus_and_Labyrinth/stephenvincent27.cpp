#include <iostream>
#include <queue>

#define N 1010
#define M 1010
using namespace std;

// Struct that describes a cell using its coordinates, current rotation and distance from source cell
typedef struct Cell
{
    int x, y, rot, dist;
} Cell;

/*
    The convention that I have used for directions is:
    0 -> up
    1 -> right
    2 -> down
    3 -> left
*/

bool dir[N][M][4]; // Stores whether a direction is accessible from a cell, at 0 degree rotation
bool vis[N][M][4]; // Visited array for bfs, note that the rotation needs to be included as an additional state
int dx[] = {-1, 0, 1, 0}, dy[] = {0, 1, 0, -1}; // Directional vector for all directions (up, right, down, left)

// Checks whether a move from Cell c is valid or not
bool isValid(Cell c, int dx, int dy, int n, int m)
{
    int nx = c.x + dx, ny = c.y + dy; // Coordinates of the next cell

    bool inbounds = (nx >= 0 && nx < n && ny >= 0 && ny < m);   // The next cell needs to be in bounds
    bool notvis = !vis[nx][ny][c.rot];                          // The next state needs to be unvisited
    bool door;                                                  // There's a door from A -> B and B -> A, given the current rotation

    // We check this for the given direction in which we are going to move
    if(dx == -1 && dy == 0) door = dir[c.x][c.y][(0 - c.rot + 4)%4] && dir[nx][ny][(2 - c.rot + 4)%4];
    else if(dx == 0 && dy == 1) door = dir[c.x][c.y][(1 - c.rot + 4)%4] && dir[nx][ny][(3 - c.rot + 4)%4];
    else if(dx == 1 && dy == 0) door = dir[c.x][c.y][(2 - c.rot + 4)%4] && dir[nx][ny][(0 - c.rot + 4)%4];
    else if(dx == 0 && dy == -1) door = dir[c.x][c.y][(3 - c.rot + 4)%4] && dir[nx][ny][(1 - c.rot + 4)%4];

    return inbounds && notvis && door;
}

int bfs(int srcx, int srcy, int dstx, int dsty, int n, int m)
{
    queue<Cell> q;
    q.push(Cell{srcx, srcy, 0, 0});

    while(!q.empty())
    {
        Cell cur = q.front();
        q.pop();

        if(vis[cur.x][cur.y][cur.rot]) continue;

        vis[cur.x][cur.y][cur.rot] = true;
        if(cur.x == dstx && cur.y == dsty) return cur.dist; // We have reached the destination

        // Rotating all cells clockwise by 90 degrees
        if(!vis[cur.x][cur.y][(cur.rot + 1)%4])
            q.push(Cell{cur.x, cur.y, (cur.rot + 1)%4, cur.dist + 1});

        // Trying to move in all directions, given the current rotation
        for(int i=0; i<4; i++)
        {
            if(!isValid(cur, dx[i], dy[i], n, m)) continue;
            q.push(Cell{cur.x + dx[i], cur.y + dy[i], cur.rot, cur.dist + 1});
        }
    }

    // We couldn't reach the destination
    return -1;
}

int main()
{
    int n, m;
    cin >> n >> m;

    char ch;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            cin >> ch;

            if(ch == '+') dir[i][j][0] = dir[i][j][1] = dir[i][j][2] = dir[i][j][3] = true;
            else if(ch == '-') dir[i][j][1] = dir[i][j][3] = true;
            else if(ch == '|') dir[i][j][0] = dir[i][j][2] = true;
            else if(ch == '^') dir[i][j][0] = true;
            else if(ch == '>') dir[i][j][1] = true;
            else if(ch == 'v') dir[i][j][2] = true;
            else if(ch == '<') dir[i][j][3] = true;
            else if(ch == 'L') dir[i][j][0] = dir[i][j][1] = dir[i][j][2] = true;
            else if(ch == 'R') dir[i][j][0] = dir[i][j][2] = dir[i][j][3] = true;
            else if(ch == 'U') dir[i][j][1] = dir[i][j][2] = dir[i][j][3] = true;
            else if(ch == 'D') dir[i][j][0] = dir[i][j][1] = dir[i][j][3] = true;
        }
    }

    int xt, yt, xm, ym;
    cin >> xt >> yt >> xm >> ym;
    xt--, yt--, xm--, ym--;

    cout << bfs(xt, yt, xm, ym, n, m);
}