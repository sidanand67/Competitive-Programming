#include <algorithm>
#include <iostream>

#define inf 2e18
#define N 110
using namespace std;

// Represents a friend, where x: cost, k: monitors, p: problem subset
class F
{
public:
    long long x, k, p;

    bool operator <(F const &f2)
    {
        return k < f2.k;
    } 
};

F fr[N];

int main()
{
    long long n, m, b;
    cin >> n >> m >> b;

    for(int i=0; i<n; i++)
    {
        int psize, pi;
        cin >> fr[i].x >> fr[i].k >> psize; 

        for(int j=0; j<psize; j++)
        {
            cin >> pi;
            fr[i].p |= (1ll << (pi - 1));
        } 
    }

    // Sort friends based on number of monitors required
    sort(fr, fr + n);

    // cur and prev are dp arrays, which will be used in rotation due to memory constraints
    long long cur[(1 << m)], prev[(1 << m)], ans = inf;
    for(int i=0; i<(1 << m); i++) prev[i] = inf;
    prev[0] = 0; // Base case

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<(1 << m); j++) cur[j] = prev[j];                 // We don't include this friend

        for(int j=0; j<(1 << m); j++)
            cur[j|fr[i].p] = min(cur[j|fr[i].p], prev[j] + fr[i].x);    // We include this friend

        long long curAns = cur[(1 << m) - 1];                  
        curAns += fr[i].k * b;                                          // Adding the cost of monitors

        ans = min(ans, curAns);
        
        memcpy(prev, cur, sizeof(prev));                                // Making the current array the previous one
    }

    if(ans == inf) cout << -1;
    else cout << ans;
}