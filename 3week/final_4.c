#include<stdio.h>
int n,m,k;
int arr[1000000];
int answer=0;

int sum_of_stairs(int arr[], int len){
    int sum=0;
    for(int i=0; i<len; i++){
        sum += arr[i];
    }
    return sum;
}
void recursion(int arr[], int len){
    int stairs = sum_of_stairs(arr, len);
    if(stairs > n) return;
    if(stairs == n){
        for(int i=0; i<len; i++){
            printf("%d ", arr[i]);
        }
        printf("\n");
        answer++;
        return;
    }
    for(int i=1; i<m+1; i++){
        if(i==k) continue;
        arr[len] = i;
        recursion(arr, len+1);
        arr[len] = 0;
    }
}

int main(){
    scanf("%d %d %d", &n, &m, &k);
    recursion(arr, 0);
    printf("%d\n", answer);
    return 0;
}