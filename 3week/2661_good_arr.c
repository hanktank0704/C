#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int n;
int arr[1000];

int good_arr_check(int start, int len){
    int answer=0;
    for(int i=start; i<start+len; i++){
        if(arr[i] == arr[i+len]){
            answer++;
        }
    }
    if(answer == len){
        return 0;
    }
    else{
        return 1;
    }
}

int isit_good_arr(int arr[], int len){
    int answer=1;
    for(int i=1; i<=len/2; i++){
        for(int j=0; j<=)

        ////////////
    }

}
void recursion(int arr[], int len){
    if(len == n){
        for(int i=0; i<len; i++){
            printf("%d", arr[i]);
        }
    }
    for(int i=1; i<4; i++){
        arr[len] = i;
        recursion(arr, len+1);
        arr[len] = 0;
    }
}
int main(){

    return 0;
}