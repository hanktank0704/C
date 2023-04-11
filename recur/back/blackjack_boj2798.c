#include <stdio.h>
#include <string.h>

int num[100]={0,};

int main(){
    int N;
    int M;
    int sum=0;
    int answer=0;

    scanf("%d %d",&N,&M);

    for(int i=0; i<N; i++){
        scanf("%d",&num[i]);
    }

    for(int i=0; i<N; i++){
        for(int j=i+1; j<N; j++){
            for(int k=j+1; k<N; k++){
                sum = num[i] + num[j] +num[k];
                if(sum <= M && sum > answer){
                    answer = sum;
                }
            }
        }
    }

    printf("%d",answer);

    return 0;
}