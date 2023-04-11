#include <stdio.h>

int factorial(int N){
    int answer=1;
    if(N==0){
        answer=1;
    }
    else{
        answer = N * factorial(N-1);
    }
    return answer;
}

int main(){
    int N;
    scanf("%d", &N);

    printf("%d", factorial(N));

    return 0;
}