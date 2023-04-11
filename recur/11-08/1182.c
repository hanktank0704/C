#include <stdio.h>
int arr[21];
int answer=0;
int S=0;
int N=0;

int temp[21];

void find_sum_of_subset(int arr[], int index, int sum){
    if(index ==N){
        if(sum == S){
            answer++;
            // for(int i=0; i<N; i++){
            //     printf("%d ", temp[i]);
            // }
            // printf("\n");
        }
        return ;
    }
    temp[index] = arr[index];
    find_sum_of_subset(arr, index+1, sum+arr[index]);
    temp[index] = -1;
    find_sum_of_subset(arr, index+1, sum);
}

int main(){
    scanf("%d %d", &N, &S);

    for(int i=0; i<N; i++){
        scanf("%d", &arr[i]);
    }

    find_sum_of_subset(arr,0,0);

    if(S==0){
        answer--;
    }
    printf("%d\n", answer);

    return 0;
}