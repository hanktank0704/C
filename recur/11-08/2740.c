#include <stdio.h>
int matrix1[101][101];
int matrix2[101][101];
int answer_matrix[101][101];

int main(){
    int N, M;
    int K;    
    scanf("%d %d", &N, &M);
    for(int i=0; i<N; i++){
        for(int j=0; j<M; j++){
            scanf("%d", &matrix1[i][j]);
        }
    }
    scanf("%d %d", &M, &K);
    for(int i=0; i<M; i++){
        for(int j=0; j<K; j++){
            scanf("%d", &matrix2[i][j]);
        }
    }
    for(int i=0; i<N; i++){
        for(int j=0; j<K; j++){
            int answer=0;
            for(int k=0; k<M; k++){
                answer += matrix1[i][k] * matrix2[k][j];
            }
            answer_matrix[i][j] = answer;
        }
    }


    for(int i=0; i<N; i++){
        for(int j=0; j<K; j++){
            printf("%d ", answer_matrix[i][j]);
        }
        printf("\n");
    }



    return 0;
}