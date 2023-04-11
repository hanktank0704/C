#include <stdio.h>
int n;
int arr[64][64];

int isit_pure64(int length, int arr[64][64]){
    int pure = arr[0][0];
    for(int i=0; i<length; i++){
        for(int j=0; j<length; j++){
            if(arr[i][j] != arr[0][0]){
                pure = -1;
                break;
            }
        }
    }
    return pure;
}

void divide_conq(int length, int arr[64][64]){
    int purity = isit_pure64(length, arr);

    if(purity == 1){
        printf("1");
        return;
    }
    else if(purity == 0){
        printf("0");
        return;
    }
    else{
        printf("(");
        int temp_arr00[64][64];
        int temp_arr01[64][64];
        int temp_arr10[64][64];
        int temp_arr11[64][64];
        int half = length/2;

        for(int i=0; i< half; i++){
            for(int j=0; j<half; j++){
                temp_arr00[i][j] = arr[i][j];
                temp_arr01[i][j] = arr[i][j+half];
                temp_arr10[i][j] = arr[i+half][j];
                temp_arr11[i][j] = arr[i+half][j+half];
            }
        }
        divide_conq(half, temp_arr00);
        divide_conq(half, temp_arr01);
        divide_conq(half, temp_arr10);
        divide_conq(half, temp_arr11);
        printf(")");
    }
    //함수 쪼개고 순수하진 확인

    
    // 순수하면 순수한 수수자 출력
    // 수순않으면 divide conq 또 실행
        // (

        // )
}

int main(){
    scanf("%d", &n);
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            scanf("%1d", &arr[i][j]);
        }
    }

    divide_conq(n, arr);
    // printf("\n");
    // for(int i=0; i<n; i++){
    //     for(int j=0; j<n; j++){
    //         printf("%d", arr[i][j]);
    //     }
    //     printf("\n");
    // }

    return 0;
}