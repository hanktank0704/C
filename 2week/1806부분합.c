#include <stdio.h>
int n, s;
int arr[1000000];
int answer_found = 0;

// long long find_sum(int l, int r){
//     long long sum = 0;
//     for(int i=l; i<r+1; i++){
//         sum += arr[i];
//     }
//     return sum;
// }

void find_shortest_length(int arr[]){
    int answer=2147483647;
    int l=0; int r=0;
    
    long long sum = arr[0];

    while(l<=r && r < n){
        if(sum < s){
            r++;
            sum += arr[r];
        }
        else if(sum >= s){
            int temp = r - l + 1;
            if(temp < answer){
                answer = temp;
            }

            if(l==r){
                sum -= arr[l];
                l++;
                r++;
                sum += arr[r];
            }
            else{
                sum -= arr[l];
                l++;
            }

        }
    }
    if(answer == 2147483647){
        answer = 0;
    }

    printf("%d", answer);
}

int main(){
    scanf("%d %d", &n, &s);
    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }

    find_shortest_length(arr);

    // for(int i=0; i<n; i++){
    //     printf("%d ", arr[i]);
    // }
    return 0;
}