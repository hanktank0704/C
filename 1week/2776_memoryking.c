#include <stdio.h>
#include <stdlib.h>
int arr1[10000001];
int arr2[10000001];

int static compare (const void* first, const void* second)
{
    if (*(int*)first > *(int*)second)
        return 1;
    else if (*(int*)first < *(int*)second)
        return -1;
    else
        return 0;
}

int isit_in_binary_search(int arr[], int l,int r,int target){
    while(l<=r){
        int mid = l + (r-l)/2 ;
        if(target == arr[mid]){
            return 1;
        }
        else if(target < arr[mid]){
            r=mid-1;
        }
        else{
            l=mid+1;
        }
    }
    return 0;
    
}
int main(){
    int T;
    scanf("%d", &T);
    for(int i=0; i<T; i++){

        int N=0;
        scanf("%d", &N);
        for(int j=0; j<N; j++){
            scanf("%d", &arr1[j]);
        }

        int M=0;
        scanf("%d", &M);
        for(int j=0; j<M; j++){
            scanf("%d", &arr2[j]);
        }

        // for(int j=0; j<M; j++){
        //     printf("%d ", arr1[j]);
        // }
        // printf("\n");

        // // int temp = sizeof(arr1)/sizeof(int);
        qsort(arr1, N, sizeof(int), compare);

        // for(int j=0; j<M; j++){
        //     printf("%d ", arr1[j]);
        // }
        // printf("\n");

        // printf("\n");
        // for(int j=0; j<M; j++){
        //     printf("%d ", arr2[j]);
        // }

        for(int k=0; k<M; k++){
            int answer = isit_in_binary_search(arr1,0,N-1,arr2[k]);
            printf("%d\n", answer);
        }

    }
    

    return 0;
}