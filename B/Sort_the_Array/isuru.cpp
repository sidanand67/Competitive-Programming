#include <stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0 ; i<n ; i++){
        scanf("%d",&arr[i]);
    }
    int first = 0;
    int last;
    int done = 0;
    for(int i=0 ; i<n-1 ; i++){
        if(arr[i]<=arr[i+1]){
            if(!last){
                first = i+1;
            }
            else{
                if(arr[first-1]<=arr[last] && arr[first]<=arr[i+1]){
                    done = 1;
                }
                else{
                    done = 2;
                    break;
                }
            }
            
        }
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
    if(done ==2){
        printf("no");
    }
    else{
        printf("yes\n%d %d",arr[last],arr[first]);
    }
    return 0;
}#include <stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0 ; i<n ; i++){
        scanf("%d",&arr[i]);
    }
    int first = 0;
    int last;
    int done = 0;
    for(int i=0 ; i<n-1 ; i++){
        if(arr[i]<=arr[i+1]){
            if(!last){
                first = i+1;
            }
            else{
                if(arr[first-1]<=arr[last] && arr[first]<=arr[i+1]){
                    done = 1;
                }
                else{
                    done = 2;
                    break;
                }
            }
            
        }
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
    if(done ==2){
        printf("no");
    }
    else{
        printf("yes\n%d %d",arr[last],arr[first]);
    }
    return 0;
}#include <stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0 ; i<n ; i++){
        scanf("%d",&arr[i]);
    }
    int first = 0;
    int last;
    int done = 0;
    for(int i=0 ; i<n-1 ; i++){
        if(arr[i]<=arr[i+1]){
            if(!last){
                first = i+1;
            }
            else{
                if(arr[first-1]<=arr[last] && arr[first]<=arr[i+1]){
                    done = 1;
                }
                else{
                    done = 2;
                    break;
                }
            }
            
        }
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
    if(done ==2){
        printf("no");
    }
    else{
        printf("yes\n%d %d",arr[last],arr[first]);
    }
    return 0;
}#include <stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0 ; i<n ; i++){
        scanf("%d",&arr[i]);
    }
    int first = 0;
    int last;
    int done = 0;
    for(int i=0 ; i<n-1 ; i++){
        if(arr[i]<=arr[i+1]){
            if(!last){
                first = i+1;
            }
            else{
                if(arr[first-1]<=arr[last] && arr[first]<=arr[i+1]){
                    done = 1;
                }
                else{
                    done = 2;
                    break;
                }
            }
            
        }
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
    if(done ==2){
        printf("no");
    }
    else{
        printf("yes\n%d %d",arr[last],arr[first]);
    }
    return 0;
}#include <stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0 ; i<n ; i++){
        scanf("%d",&arr[i]);
    }
    int first = 0;
    int last;
    int done = 0;
    for(int i=0 ; i<n-1 ; i++){
        if(arr[i]<=arr[i+1]){
            if(!last){
                first = i+1;
            }
            else{
                if(arr[first-1]<=arr[last] && arr[first]<=arr[i+1]){
                    done = 1;
                }
                else{
                    done = 2;
                    break;
                }
            }
            
        }
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
    if(done ==2){
        printf("no");
    }
    else{
        printf("yes\n%d %d",arr[last],arr[first]);
    }
    return 0;
}#include <stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0 ; i<n ; i++){
        scanf("%d",&arr[i]);
    }
    int first = 0;
    int last;
    int done = 0;
    for(int i=0 ; i<n-1 ; i++){
        if(arr[i]<=arr[i+1]){
            if(!last){
                first = i+1;
            }
            else{
                if(arr[first-1]<=arr[last] && arr[first]<=arr[i+1]){
                    done = 1;
                }
                else{
                    done = 2;
                    break;
                }
            }
            
        }
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
    if(done ==2){
        printf("no");
    }
    else{
        printf("yes\n%d %d",arr[last],arr[first]);
    }
    return 0;
}#include <stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0 ; i<n ; i++){
        scanf("%d",&arr[i]);
    }
    int first = 0;
    int last;
    int done = 0;
    for(int i=0 ; i<n-1 ; i++){
        if(arr[i]<=arr[i+1]){
            if(!last){
                first = i+1;
            }
            else{
                if(arr[first-1]<=arr[last] && arr[first]<=arr[i+1]){
                    done = 1;
                }
                else{
                    done = 2;
                    break;
                }
            }
            
        }
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
    if(done ==2){
        printf("no");
    }
    else{
        printf("yes\n%d %d",arr[last],arr[first]);
    }
    return 0;
}#include <stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0 ; i<n ; i++){
        scanf("%d",&arr[i]);
    }
    int first = 0;
    int last;
    int done = 0;
    for(int i=0 ; i<n-1 ; i++){
        if(arr[i]<=arr[i+1]){
            if(!last){
                first = i+1;
            }
            else{
                if(arr[first-1]<=arr[last] && arr[first]<=arr[i+1]){
                    done = 1;
                }
                else{
                    done = 2;
                    break;
                }
            }
            
        }
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
    if(done ==2){
        printf("no");
    }
    else{
        printf("yes\n%d %d",arr[last],arr[first]);
    }
    return 0;
}#include <stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0 ; i<n ; i++){
        scanf("%d",&arr[i]);
    }
    int first = 0;
    int last;
    int done = 0;
    for(int i=0 ; i<n-1 ; i++){
        if(arr[i]<=arr[i+1]){
            if(!last){
                first = i+1;
            }
            else{
                if(arr[first-1]<=arr[last] && arr[first]<=arr[i+1]){
                    done = 1;
                }
                else{
                    done = 2;
                    break;
                }
            }
            
        }
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
    if(done ==2){
        printf("no");
    }
    else{
        printf("yes\n%d %d",arr[last],arr[first]);
    }
    return 0;
}#include <stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0 ; i<n ; i++){
        scanf("%d",&arr[i]);
    }
    int first = 0;
    int last;
    int done = 0;
    for(int i=0 ; i<n-1 ; i++){
        if(arr[i]<=arr[i+1]){
            if(!last){
                first = i+1;
            }
            else{
                if(arr[first-1]<=arr[last] && arr[first]<=arr[i+1]){
                    done = 1;
                }
                else{
                    done = 2;
                    break;
                }
            }
            
        }
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
    if(done ==2){
        printf("no");
    }
    else{
        printf("yes\n%d %d",arr[last],arr[first]);
    }
    return 0;
}