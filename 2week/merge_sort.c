#include <stdio.h>
int arr[1000000];
int temp[1000000];
int n;
// 한 어레이를 쪼개요.
// 쪼개진 거를 합쳐야지


void merge_sort(int l, int r){
    int mid = (l+r)/2;
    if(r-l == 0){
        temp[l] = arr[l];
        return;
    }
    merge_sort(l, mid);
    merge_sort(mid+1, r);

    int li = l;
    int ri = mid+1;
    int index = l;

    while(li < mid+1 && ri < r+1){
        if(arr[li] < arr[ri]){
            temp[index++] = arr[li++];
        }
        else{
            temp[index++] = arr[ri++];
        }
    }
    while(li < mid+1){
        temp[index++] = arr[li++];
    }
    while(ri < r+1){
        temp[index++] = arr[ri++];
    }
    for(int i=l; i<r+1; i++){
        arr[i] = temp[i];
    }
}
int main(){
    scanf("%d", &n);
    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }
    // for(int i=0; i<n; i++){
    //     printf("%d ", arr[i]);
    // }

    merge_sort(0, n-1);

    for(int i=0; i<n; i++){
        printf("%d\n", temp[i]);
    }


    return 0;
}