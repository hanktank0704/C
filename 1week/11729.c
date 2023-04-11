#include <stdio.h>
int K=0;

void hanoi_how(int how_big, int start, int end){
    if(how_big==0){
        return;
    }
    K++;
    
    int temporary_stop = 6 - start - end;
    hanoi_how(how_big-1, start, temporary_stop);
    printf("%d %d\n", start, end);
    hanoi_how(how_big-1, temporary_stop, end);
}
int main(){
    int N;
    scanf("%d", &N);
    int how_many= 1;
    for(int i=0; i<N; i++){
        how_many = how_many*2;
    }
    how_many--;

    printf("%d\n", how_many);
    hanoi_how(N,1,3);
    // printf("%d\n", K);

    return 0;
}