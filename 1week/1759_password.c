#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char possible[100];
char answer[100];
void print_recursion(char answer[], int length, int index){
    if(length==4){
        printf("answer: %s\n", answer);
        return;
    }
    
    for(int i=0; i<index; i++){
        answer[length] = possible[i];
        print_recursion(answer, length+1, i+1);
        answer[length] = '%';
        print_recursion(answer,length, index+1);
    }

}
int main(){
    int L,C;
    scanf("%d %d", &L, &C);
    for(int i=0; i<C; i++){
        scanf(" %c", &possible[i]);
    }
    // printf("answerr1: %s", answer);
    // printf("possible1: %s", possible);

    print_recursion(answer,0,0);

    // printf("answerr1: %s", answer);
    // printf("possible1: %s", possible);
    return 0;
}