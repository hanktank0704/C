#include <stdio.h>

int main(){
    int N;
    scanf("%d", &N);
    int weight[50]={0,};
    int height[50]={0,};
    int howmany[50]={0,};

    for(int i=0; i<N; i++){
        scanf("%d %d", &weight[i], &height[i]);
    }

    for(int i=0; i<N; i++){
        for(int j=0; j<N; j++){
            if(weight[i] < weight[j] && height[i] < height[j]){
                howmany[i]++;
            }
        }
    }

    for(int i=0; i<N; i++){
        printf("%d ", howmany[i] + 1);
    }


    return 0;
}