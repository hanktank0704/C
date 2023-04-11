#include <stdio.h>
#include <string.h>

int main(){
    int T;
    int R;
    char S[20];
    int size=0;

    scanf("%d", &T);
    for(int j=0; j<T; j++){
        scanf("%d %s", &R, S);
        while(S[size]!='\0'){
            size++;
        }

        for(int i=0; i<size; i++){
            for(int a=0; a<R; a++){
                printf("%c", S[i]);
            }
        }
        size=0;
        printf("\n");
    }
    // scanf("%d", &T);
    // for(int j=0; j<T; j++){
    //     scanf("%d", &R);
    //     for(int i=0; i<T; i++){
    //         scanf("%c", &S[i]);
    //         size++;
    //     }

    //     for(int a=0; a<size; a++){
    //         for(int b=0; b<R; b++){
    //             printf("%c", S[a]);
    //         }
    //     }
    //     size=0;
    // }

    return 0;
}