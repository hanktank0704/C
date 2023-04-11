#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int k, n;
int arr[100001];

int static compare (const void* first, const void* second)
{
    if (*(int*)first > *(int*)second)
        return 1;
    else if (*(int*)first < *(int*)second)
        return -1;
    else
        return 0;
}
int find_max(int arr[]){
    int max=0;
    for(int i=0; i<k; i++){
        if(arr[i] > max){
            max = arr[i];
        }
    }
    return max;
}
long long how_many_line(long long length){
    int answer=0;
    for(int i=0; i<k; i++){
        answer += arr[i] / length;
    } 
    return answer;
}

void find_max_length(long long l, long long r){
    l = 1;
    r = find_max(arr);
    int answer=-1;
    while(l <= r){
        long long mid = l + (r-l)/2;
        long long howmany = how_many_line(mid);
        if(howmany == n){
            if(answer < mid){
                answer = mid;
            }
            l = mid+1;
        }
        else if(howmany > n){
            if(answer < mid){
                answer = mid;
            }
            l = mid+1;
        }
        else{
            r = mid-1;
        }
    }
    printf("%d", answer);
}
int main(){
    scanf("%d %d", &k, &n);
    for(int i=0; i<k; i++){
        scanf("%d", &arr[i]);
    }

    qsort(arr, k, 4, compare);

    // for(int i=0; i<k; i++){
    //     printf("%d ", arr[i]);
    // }
    // printf("\n");
    find_max_length(0,10000);

    return 0;
}