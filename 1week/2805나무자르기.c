#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int N,M;
int arr[10000001];

int static compare (const void* first, const void* second)
{
    if (*(int*)first > *(int*)second)
        return 1;
    else if (*(int*)first < *(int*)second)
        return -1;
    else
        return 0;
}
int find_max(int arr[]){
    int max=0;
    for(int i=0; i<N; i++){
        if(arr[i] > max){
            max = arr[i];
        }
    }
    return max;
}
int find_min(int arr[]){
    int min=arr[0];
    for(int i=0; i<N; i++){
        if(arr[i] < min){
            min = arr[i];
        }
    }
    return min;
}

long long how_much_tree(long long cut){
    
    long long answer=0;
    for(int i=0; i<N; i++){
        long long tree = arr[i] - cut;
        if(tree >0){
            answer += tree;
        }
    }
    return answer;
}

void find_answer(int l, int r){
    l = 0;
    r = find_max(arr);
    int answer = -1;
    while(r-l >= 1){
        long long mid = l + (r-l)/2;
        long long temp_tree = how_much_tree(mid);
        if(temp_tree == M){
            answer = mid;
            l = mid+1;
        }
        else if(temp_tree > M){
            answer = mid;
            l = mid+1;
        }
        else{
            r = mid;
        }
    }
    printf("%d",answer);
}

int main(){
    scanf("%d %d", &N, &M);
    for(int i=0; i<N; i++){
        scanf("%d", &arr[i]);
    }

    qsort(arr, N, 4, compare);

    // for(int i=0; i<N; i++){
    //     printf("%d ", arr[i]);
    // }
    // printf("\n max: %d min: %d\n", find_max(arr), find_min(arr));

    find_answer(0,N-1);

    return 0;
}