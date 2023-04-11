#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char arr[51];
int main(){
    int T;
    scanf("%d", &T);

    for(int i=0; i<T; i++){
        int stack_index=0;
        scanf("%s", &arr);
        // printf("%s\n", arr);
        for(int i=0; i<strlen(arr); i++){
            if(arr[i]=='('){
                stack_index++;
            }
            else{
                stack_index--;
                if(stack_index<0){
                    break;
                }
            }
        }
        if(stack_index!=0){
            printf("NO\n");
        }    
        else{
            printf("YES\n");
        }
    }
    return 0;
}