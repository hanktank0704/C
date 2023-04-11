#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int N;
int M;
int arr1[500001];
int arr2[500001];

int static compare (const void* first, const void* second)
{
    if (*(int*)first > *(int*)second)
        return 1;
    else if (*(int*)first < *(int*)second)
        return -1;
    else
        return 0;
}

int find_upper_bound(int arr1[], int l, int r, int target){
    int answer=-1;
    while(l<=r){
        int mid = l + (r-l)/2;
        if(arr1[mid] == target){
            l = mid+1;
            answer = mid;
        }
        else if(arr1[mid] < target){
            l = mid+1;
        }
        else{
            r = mid-1;
        }
    }
    return answer;
}
int findlower_bound(int arr1[], int l, int r, int target){
    int answer=-1;
    while(l<=r){
        int mid = (l+r)/2;
        if(arr1[mid] == target){
            answer = mid;
            r = mid-1;
        }
        else if(arr1[mid] < target){
            l = mid+1;
        }
        else{
            r= mid-1;
        }
    }
    return answer;
}
int main(){
    scanf("%d", &N);
    for(int i=0; i<N; i++){
        scanf("%d", &arr1[i]);
    }
    scanf("%d", &M);
    for(int i=0; i<M; i++){
        scanf("%d", &arr2[i]);
    }
    qsort(arr1,N, sizeof(int), compare);

    // for(int i=0; i<N; i++){
    //     printf("%d ", arr1[i]);
    // }

    for(int i=0; i<M; i++){
        int upper = find_upper_bound(arr1,0,N-1,arr2[i]);
        int lower = findlower_bound(arr1,0,N-1,arr2[i]);
        int temp = upper - lower;

        // printf("upper: %d, lower: %d\n", find_upper_bound(arr1,0,N-1,arr2[i]),findlower_bound(arr1,0,N-1,arr2[i]) );
        if(lower == -1){
            printf("0 ");
        }
        else{
            printf("%d ", temp+1);
        }
    }

    
    // for(int i=0; i<N; i++){
    //     printf("%d ", arr1[i]);
    // }
    // for(int i=0; i<M; i++){
    //     printf("%d ", arr2[i]);
    // }

    return 0;
}