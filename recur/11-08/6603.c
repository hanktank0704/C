#include <stdio.h>
int k;
int arr[100];
int temp[100];
// int index=0;

void length_6_arr(int arr[], int length,int index){
    if(index > k){
        return;
    }
    if(length==6){
        for(int i=0; i<6; i++){
            printf("%d ", temp[i]);
        }
        printf("\n");
        return ;
    }

    temp[length] = arr[index];
    // index++;
    length_6_arr(arr, length+1,index+1);
    temp[length] = -1;
    length_6_arr(arr, length,index+1);
    // index--;
}
int main(){
    while(1){
        
        scanf("%d", &k);
        if(k==0){
            break;
        }

        for(int i=0; i<k; i++){
            scanf("%d", &arr[i]);
        }
        length_6_arr(arr, 0,0);
        printf("\n");
    }

    return 0;
}