#include <stdio.h>
int arr[100000];
int n;
int check_if_two_array_equal(int l, int r, int len){
    int same=1;
    for(int i=0; i<len; i++){
        if(arr[l+i] != arr[r+i]){
            same = 0;
            break;
        }
    }
    return same;
}
int is_it_good(int arr1[], int len){
    int good=1;
    for(int i=1; i<=len/2; i++){
        if(check_if_two_array_equal(len - 2*i, len - i, i) == 1){
            good = 0;
        }
    }
    return good;
}

int created = 0;
int create(int length){
    if(length == n){
        for(int i=0; i<n; i++){
            printf("%d", arr[i]);
        }
        printf("\n");
        return 1;
    }
    for(int i=1; i<4; i++){
        arr[length] = i;
        if(is_it_good(arr, length+1) == 1){
            if(create(length+1)==1){
                return 1;
            }
        }
    }
    return -1;
}
int main(){
    scanf("%d", &n);
    create(0);

    return 0;
}