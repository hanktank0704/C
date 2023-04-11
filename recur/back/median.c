#include <stdio.h>
#include <stdlib.h>
void sort(int * arr, int N){
    for(int i=0; i<N; i++){
        for(int j=0; j<N; j++){
            if(arr[i] > arr[j]){
                int temp;
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

int main(){
    int N;
    int arr[100];
    int sum=0;

    scanf("%d", &N);

    for(int i=0; i<N; i++){
        scanf("%d", &arr[i]);
    }

    sort(arr, N);
    int answer = arr[N/2];

    printf("%d", answer);

    printf("\n");
    for(int i=0; i<N; i++){
        printf("%d ", arr[i]);
    }

    return 0;
}