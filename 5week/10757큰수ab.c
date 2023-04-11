#include <stdio.h>
#include <string.h>
char a[10001] = {'0', };
char b[10001];
int olim[10001];
char answer[10002];


int main(){
    scanf("%s", &a);
    scanf("%s", &b);

    int length_a = strlen(a);
    int length_b = strlen(b);
    int longer;
    int shorter;

    for(int i=0; i<length_a/2; i++){
        int temp = a[i];
        a[i] = a[length_a - i - 1];
        a[length_a - i - 1] = temp;
    }
    for(int i=0; i<length_b/2; i++){
        int temp = b[i];
        b[i] = b[length_b - i - 1];
        b[length_b - i - 1] = temp;
    }

    if(length_a > length_b){
        longer = length_a;
        shorter = length_b;
    }
    else{
        longer = length_b;
        shorter = length_a;
    }

    for(int i=0; i<longer; i++){
        int temp=0;
        temp = olim[i] + (a[i]) + (b[i]);
        if(a[i] > 0){
            temp -= '0';
        }
        if(b[i] > 0){
            temp -= '0';
        }

        if(temp >= 10){
            olim[i+1] = 1;
        }
        answer[i] = temp % 10;
    }
    answer[longer] = olim[longer];
    if(olim[longer] == 0){
        for(int i=longer-1; i>=0; i--){
            printf("%d", answer[i]);
        }
    }
    else{
        for(int i=longer; i>=0; i--){
            printf("%d", answer[i]);
        }
    }

    return 0;
}