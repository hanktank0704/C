#include <stdio.h>

int matrix[6][6];
int answer_matrix[6][6];
int n, b;

void matrix_calc(int how_many_times){
    for(int a=0; a<how_many_times; a++){
        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                for(int k=0; k<n; k++){
                    answer_matrix[i][j] += answer_matrix[i][k] * matrix[k][j];
                }
            }
        }
    }
}


void divide_conquer_matrix(int how_many_times){
    int temp_matrix[6][6];
    if(how_many_times == 1){
        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                answer_matrix[i][j] = answer_matrix[i][j] % 1000;
            }
        }
        return;
    }
    else if(how_many_times%2 == 0){
        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                for(int k=0; k<n; k++){
                    temp_matrix[i][j] += answer_matrix[i][k] * answer_matrix[k][j];
                }
            }
        }
    }
    else{

    }
}
int main(){
    scanf("%d %d", &n, &b);
    // divide_conquer_matrix(b);
    return 0;
}