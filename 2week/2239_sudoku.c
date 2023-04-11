#include <stdio.h>
int arr[10][10];

int x_numbers[10];
int y_numbers[10];

int section00[10];
int section01[10];
int section02[10];
int section10[10];
int section11[10];
int section12[10];
int section20[10];
int section21[10];
int section22[10];

void sudoku(int a, int b){
    if(a==8 && b==8){
        return;
    }
    for(int i=1; i<10; i++){
        if(arr[a][b] != 0) continue;

        arr[a][b] = i;
        if(b==8){
            sudoku(a+1, 0);
        } 
        else{
            sudoku(a, b+1);
        } 
        arr[a][b] = 0;
    }

}
int main(){
    for(int i=0; i<9; i++){
        for(int j=0; j<9; j++){
            scanf("%d", &arr[i][j]);
        }
    }

    // sudoku(0, 0);
    for(int i=0; i<9; i++){
        for(int j=0; j<9; j++){
            printf("%d", arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}