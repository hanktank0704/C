#include <stdio.h>
char arr[51];
char temp[51];
int stack_index=0;

int len_of_arr(char arr[]){
    int index=0;
    while(arr[index] != '\0'){
        index++;
    }
    return index;
}
void push(char a){
    arr[stack_index] = a;
    stack_index++;
}
void pop(){
    arr[stack_index] =' ' ;
    stack_index--;
}
int main(){
    int N;
    scanf("%d", &N);

    for(int i=0; i<N; i++){
        scanf("%s", &temp);
        
        int index=0;
        while(temp[i]!='\0'){
            if(temp[i]=='('){
                push('(');
            }
            else{
                if(arr[i-1]==' '){
                    printf("NO");
                    break;
                }
                else{
                    pop();
                }
            }
        }
    }



    // for(int i=0; i<N; i++){
    //     printf("%s\n", arr[i]);
    // }
    return 0;
}