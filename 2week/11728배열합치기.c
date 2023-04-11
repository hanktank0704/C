#include <stdio.h>
int n, m;
int arr1[1000000];
int arr2[1000000];

int answer[2000000];
int main(){
    scanf("%d %d", &n, &m);
    for(int i=0; i<n; i++){
        scanf("%d", &arr1[i]);
    }
    for(int i=0; i<m; i++){
        scanf("%d", &arr2[i]);
    }

    // printf("\n");
    // for(int i=0; i<n; i++){
    //     printf("%d ", arr1[i]);
    // }
    // printf("\n");
    // for(int i=0; i<m; i++){
    //     printf("%d ", arr2[i]);
    // }
    // printf("\n");
    int l=0;
    int r=0;
    int idx=0;

    while(l<n && r<m){
        if(arr1[l] < arr2[r]){
            answer[idx++] = arr1[l++];
        }
        else{
            answer[idx++] = arr2[r++];
        }
    }
    while(l<n){
        answer[idx++] = arr1[l++];
    }
    while(r<m){
        answer[idx++] = arr2[r++];
    }

    for(int i=0; i<n+m; i++){
        printf("%d ", answer[i]);
    }
    return 0;
}