#include <stdio.h>
#include <string.h>
#include <stdlib.h>
char A[51];
char B[51];

int how_long(char A[]){
    int index=0;
    while(A[index]!='\0'){
        index++;
    }
    return index;
}

// int how_many_difference(char A[], char B[]){
//     int index=0;
//     int answer=0;
//     for(int i=0; i<how_long(A); i++){
//         if(A[i] != B[i]){
//             answer++;
//         }
//     }

//     return answer;
// }

void find_answer(char A[], char B[]){
    int length_diff = how_long(B) - how_long(A)+1;
    int answer=50;
    for(int i=0; i<length_diff; i++){
        int temp=0;
        for(int j=0; j<how_long(A); j++){
            if(A[j]!=B[i+j]){
                temp++;
                // printf("%d", temp);
            }
        }
        if(temp < answer){
            answer = temp;
        }
    }
    printf("%d", answer);
}

int main(){

    scanf("%s %s", &A, &B);
    find_answer(A,B);
    return 0;
}