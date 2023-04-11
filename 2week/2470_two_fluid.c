#include <stdio.h>
#include <stdlib.h>
//binary search solution
int n;
int arr[1000000];

int static compare (const void* first, const void* second)
{
    if (*(int*)first > *(int*)second)
        return 1;
    else if (*(int*)first < *(int*)second)
        return -1;
    else
        return 0;
}

int main(){
    scanf("%d", &n);
    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }
    printf("\n");
    qsort(arr,n,4,compare);
    for(int i=0; i<n; i++){
        printf("%d ", arr[i]);
    }

    return 0;
}