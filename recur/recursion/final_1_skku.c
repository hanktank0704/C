#include <stdio.h>
#include <stdlib.h>
#include <string.h>
char answer[20];

void append(char *dst, char c) {
    char *p = dst;
    while (*p != '\0') p++; // 문자열 끝 탐색
    *p = c;
    *(p+1) = '\0'; 
}

void permutation(char answer[], int s_left, int k_left, int u_left){
    char temp_answer1[30];
    char temp_answer2[30];
    char temp_answer3[30];

    for(int i=0; i<30; i++){
        temp_answer1[i]=answer[i];
    }

    for(int i=0; i<30; i++){
        temp_answer2[i]=answer[i];
    }

    for(int i=0; i<30; i++){
        temp_answer3[i]=answer[i];
    }

    int temp_s_left = s_left;
    int temp_k_left = k_left;
    int temp_u_left = u_left;

    if(temp_s_left + temp_k_left + temp_u_left == 0){
        printf("%s\n", answer);
    }


    else{
            if(temp_s_left!=0){
                append(temp_answer1,'s');
                permutation(temp_answer1,temp_s_left-1,temp_k_left,temp_u_left);
            }
            if(temp_k_left!=0){
                append(temp_answer2,'k');
                permutation(temp_answer2,temp_s_left,temp_k_left-1,temp_u_left);
            }
            if(temp_u_left!=0){
                append(temp_answer3,'u');
                permutation(temp_answer3,temp_s_left,temp_k_left,temp_u_left-1);
            }
    }
}

int main(){
    for(int i=0; i<30; i++){
        answer[i] = '\0';
    }
    permutation(answer,1,1,2);


    return 0;
}