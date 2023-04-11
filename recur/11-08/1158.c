#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int arr[100000];
typedef struct node{
    int val;
    node * next;
}node;

int main(){
    int N, K;
    scanf("%d %d", &N, &K);
    for(int i=0; i<N; i++){
        arr[i] = i+1;
    }

    return 0;
}