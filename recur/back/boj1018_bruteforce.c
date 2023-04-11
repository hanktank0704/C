#include <stdio.h>

int main(){
    int N, M;
    char arr[50][50];

    char chess1[8][8];
    char chess2[8][8];

    int answer = 1000;

    scanf("%d %d",&N,&M);
    for(int i=0; i<N; i++){
        scanf("%s", &arr[i]);
    }

    for(int i=0; i<8; i++){
        for(int j=0; j<8; j++){
            if(i+j%2==0){
                chess1[i][j] = 'B';
                chess2[i][j] = 'w';
            }
            else{
                chess1[i][j] = 'w';
                chess2[i][j] = 'B';
            }
        }
    }

    for(int i=0; i<N-7; i++){
        for(int j=0; j<M-7; j++){
            int change1=0;
            int change2=0;
            for(int k=0; k<8; k++){
                for(int w=0; w<8; w++){
                    if(arr[i+k][j+w] != chess1[k][w]){
                        change1++;
                    } 
                    if(arr[i+k][j+w] != chess2[k][w]){
                        change2++;
                    } 
                }
            }
            if(change1 < answer){
                answer = change1;
            }
            if(change2 < answer){
                answer = change2;
            }

            printf("\n %d %d \n", change1,change2);
        }
    }


    printf("%d", answer);

    return 0;
}