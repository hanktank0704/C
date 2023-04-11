#include <stdio.h>
#include <string.h>

int find(int N){
    int answer=N;
    for(int i=0; i<8; i++){
        if(N==0){break;}
        answer+= N%10;
        N= N/10; 
    }
    return answer;
}

int main(){
    int N;
    scanf("%d", &N);

    for(int i=0; i<N; i++){
        if(N==find(i)){
            printf("%d", i);
            break;
        }
        if(i==N-1){printf("0");}
    }
    return 0;
}