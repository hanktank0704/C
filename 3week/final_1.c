#include <stdio.h>
int s, k, u;
char answer[1000];

void recursion(char arr[], int num_s, int num_k, int num_u, int len){
    int left_num = num_s + num_k + num_u ;
    if(left_num == 0){
        for(int i=0; i<len; i++){
            printf("%c", arr[i]);
        }
        printf("\n");
        return;
    }

    if(num_k!=0){
        arr[len] = 'k';
        recursion(arr, num_s, num_k-1, num_u, len+1);
    }
    if(num_s!=0){
        arr[len] = 's';
        recursion(arr, num_s-1, num_k, num_u, len+1);
    }
    if(num_u!=0){
        arr[len] = 'u';
        recursion(arr, num_s, num_k, num_u-1, len+1);
    }
}
int main(){
    scanf("%d %d %d", &s, &k, &u);
    recursion(answer, s, k, u, 0);

    return 0;
}