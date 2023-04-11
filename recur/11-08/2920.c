#include <stdio.h>

int check(int arr[]){
    int index=0;
    for(int i=1; i<8; i++){
        if(arr[i]-arr[i-1]== 1){
            index = 1;
        }
        else if(arr[i-1]-arr[i]== 1){
            index = 2;
        }
        else{
            index = 0;
            break;
        }
    }

    return index;
}
int main(){
    int arr[8];
    for(int i=0; i<8; i++){
        scanf("%d", &arr[i]);
    }

    if(check(arr) == 0){
        printf("mixed");
    }
    else if(check(arr) == 1){
        printf("ascending");
    }
    else{
        printf("descending");
    }

    


    return 0;
}