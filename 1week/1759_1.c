#include <stdio.h>
#include <stdlib.h>
#include <string.h>
char possible[100];
char answer[100];
int L;
int C;

void sort_char(char arr[]){
    int len = strlen(arr);
    for(int i=0; i<len; i++){
        for(int j=i+1; j<len; j++){
            if(arr[i] > arr[j]){
                char temp;
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    return;
}

int aeiou(char x){
    if(x=='a' || x=='e' || x=='i' || x=='o' || x=='u'){
        return 1;
    }
    else{
        return 0;
    }
}

void print_length_recursion(char answer[], int length, int index){
    // printf("%d", length);
    
    if(length==L){
        int how_many_aeiou = 0;
        for(int i=0; i<strlen(answer); i++){
            how_many_aeiou += aeiou(answer[i]);
        }
        int how_many_not_aeiou = strlen(answer) - how_many_aeiou;
        // printf("strlen: %d, aeiou: %d,not aeiou: %d\n", strlen(answer), how_many_aeiou, how_many_not_aeiou);
        if(how_many_aeiou>0 && how_many_not_aeiou>1){
            printf("%s\n", answer);
        }
        return;
    }

    // if(length==4){
    //     printf("%s\n", answer);
    //     return;
    // }
    for(int i=index; i<C; i++){
        // printf("%d", i);
        answer[length] = possible[i];
        print_length_recursion(answer, length+1, i+1);
    }
}
int main(){
    scanf("%d %d", &L,&C);
    for(int i=0; i<C; i++){
        scanf(" %c", &possible[i]);
    }
    sort_char(possible);

    // printf("%s", possible);
    print_length_recursion(answer,0,0);

    return 0;
}