#include <stdio.h>
int N;
int arr[1000];
int temp_arr[1000];
int visited[1000];
int max_answer=0;

int abs(int a){
    if(a<0){
        a = -a;
        return a;
    }
    else{
        return a;
    }
}
int find_answer(int arr[]){
    int answer=0;
    for(int i=0; i<N-1; i++){
        answer += abs(arr[i+1]-arr[i]);
    }
    return answer;
}
void permutation(int temp_arr[], int length){
    // printf("start\n");
    if(length == N){
        int answer = find_answer(temp_arr);
        if(max_answer < answer){
            max_answer = answer;
        }
        return;
    }
    for(int i=0; i<N; i++){
        
        if(visited[i] == 1) continue;
        temp_arr[length] = arr[i];
        visited[i] = 1;
        permutation(temp_arr, length+1);
        visited[i] = 0;
    }

    // printf("end\n");
}

int main(){
    scanf("%d", &N);
    for(int i=0; i<N; i++){
        scanf("%d", &arr[i]);
    }

    permutation(temp_arr, 0);
    // for(int i=0; i<N; i++){
    //     printf("%d ", temp_arr[i]);
    // }
    printf("%d\n", max_answer);

    return 0;
}