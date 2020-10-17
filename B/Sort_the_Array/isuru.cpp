#include <stdio.h>

int main(){
    int n;  
    scanf("%d",&n);   //get the number of integers
    int arr[n];
    for(int i=0 ; i<n ; i++){    //loop for get the integers
        scanf("%d",&arr[i]);     //get the intergers
    }
    int first = 0;       
    int last;
    int done = 0;
    for(int i=0 ; i<n-1 ; i++){   //loop the number list
        if(arr[i]<=arr[i+1]){     //check if this element is lower than the next element in the list
            if(!last){            //check if theres already a change has happend
                first = i+1;     
            }
            //if theres aready a change should happen
            else{
                if(arr[first-1]<=arr[last] && arr[first]<=arr[i+1]){  //rearrange the list
                    done = 1;      //to check if there's one change or more than one change
                }
                //if there's two changes possible
                else{
                    done = 2;    //to check if there's one change or more than one change
                    break;       //breakbecause we dont have to look more posibilities it should be ended and print "no"
                }
            }
            
        }
        //if a change should happen
        else{
            if(done == 0){
                last = i+1;
            }
            else{
                done = 2;
                break;
            }
            
        }
    }
    if(done ==2){     //done=2 means thereshould more changes than one
        printf("no");
    }
    else{
        printf("yes\n%d %d",arr[last],arr[first]);
    }
    return 0;
}
