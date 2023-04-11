#include <stdio.h>
#include <string.h>
int main(){
    char arr[16];
    scanf("%s",arr);

    int length= strlen(arr);
    int answer = 0;

    for(int i=0; i<length; i++){
        
        if(arr[i] == 'A' || arr[i] == 'B'|| arr[i] == 'C'){
            answer+=3;
        }
        if(arr[i] == 'D'|| arr[i] == 'E'|| arr[i] == 'F'){
            answer+=4;
        }
        if(arr[i] == 'G'|| arr[i] == 'H'|| arr[i] == 'I'){
            answer+=5;

        }
        if(arr[i] == 'J'|| arr[i] == 'K'|| arr[i] == 'L'){
            answer+=6;

        }
        if(arr[i] == 'M'|| arr[i] == 'N'|| arr[i] == 'O'){
            answer+=7;

        }
        if(arr[i] == 'P'|| arr[i] == 'Q'|| arr[i] == 'R'|| arr[i] == 'S'){
            answer+=8;

        }
        if(arr[i] == 'T'|| arr[i] == 'U'|| arr[i] == 'V'){
            answer+=9;

        }
        if(arr[i] == 'W'|| arr[i] == 'X'|| arr[i] == 'Y'|| arr[i] == 'Z'){
            answer+=10;

        }
}

    printf("%d", answer);

    return 0;
}