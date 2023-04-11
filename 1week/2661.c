#include <stdio.h>
int arr[100];
int N;
int isit_bad(int arr[]){
    int answer=0;

    return answer;
}

void find_good_recur(int arr[], int length){
    if(length == N){

        int bad = isit_bad(arr);

        if(bad == 0){
            for(int i=0; i<N; i++){
                printf("%d", arr[i]);
            }
            return;
        }
        printf("\n");
        return;
    }
    for(int i=1; i<4; i++){
        arr[length] = i;
        find_good_recur(arr, length+1);
    }

}
int main(){

    return 0;
}