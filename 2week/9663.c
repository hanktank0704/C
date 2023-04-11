#include <stdio.h>
int x[20];
int diagonal1[100];
int diagonal2[100];

int answer=0;
int n;
void nqueen(int line){
    if(line == n){
        answer++;
        return;
    }

    for(int i=0; i<n; i++){
        if(x[i]==1 || diagonal1[i + line]==1 || diagonal2[n + line - i -1] == 1){
            continue;
        }
        x[i]=1;
        diagonal1[i + line]=1;
        diagonal2[n + line - i -1] = 1;
        nqueen(line+1);
        x[i]=0;
        diagonal1[i + line]=0;
        diagonal2[n + line - i -1] = 0;
    }
}

int main(){
    scanf("%d", &n);
    nqueen(0);
    printf("%d\n", answer);

    return 0;
}