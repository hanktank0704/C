#include <stdio.h>
#include <stdlib.h>
int static compare (const void* first, const void* second)
{
    if (*(int*)first > *(int*)second)
        return 1;
    else if (*(int*)first < *(int*)second)
        return -1;
    else
        return 0;
}

int n;
int arr[100001];
int temp[100001];

void binary_search(int target){
    int l=0;
    int r=0;
    while(l<=r){

    }
}


int main(){
    scanf("%d", &n);
    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
        temp[i]= arr[i];
    }
    qsort(arr,n,4,compare);
    
    for(int i=0; i<n; i++){
        printf("%d ", arr[i]);
    }
    return 0;
}