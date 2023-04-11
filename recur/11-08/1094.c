#include <stdio.h>
int arr[10000];
int sum_of_arr(int arr[]){
    int sum=0;
    int index=0;
    while(arr[index]!='\0'){
        sum = sum + arr[index];
        index++;
    }
    return sum;
}
int length_of_arr(int arr[]){
    int index=0;
    while(arr[index]!='\0'){
        index++;
    }
    return index;
}

void int_to_binary(int X){
    int answer=0;
    int index=0;
    while(X!=0){
        arr[index] = X%2;
        answer += X%2;
        // printf("%d", X%2);
        X = X/2;
        index++;
    }
    printf("%d", answer);
    
    // printf("\n%d\n", length_of_arr(arr));
    // for(int i=0; i<length_of_arr(arr); i++){
    //     printf("%d ", arr[i]);
    // }

    // printf("\n%d", sum_of_arr(arr));
}
int main(){
    int X;
    scanf("%d", &X);
    int_to_binary(X);

    return 0;
}