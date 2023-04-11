#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define STACK_SIZE 100

typedef char item_t;
typedef struct stack_t_{
    item_t items[STACK_SIZE];
    size_t top;
}stack_t_;

void s_init(stack_t_ * s){
    s->top = 0;
}

int s_push(stack_t_ * s, char item){
    if(s->top >= STACK_SIZE) return -1;
    s->items[s->top++] = item;
    return 0;
}

int s_isempty(stack_t_ * s){
    return s->top==0;
}

int s_pop(stack_t_ * s, item_t * res){
    if(s_isempty(s)){
        *res = NULL;
        return -1;
    }
    *res = s->items[--s->top];
    return 0;
}

int s_peek(stack_t_ * s, item_t * res){
    if(s_isempty(s)){
        *res = NULL;
        return -1;
    }
    *res = s->items[s->top - 1];
    return 0;
}

int answer=0;
char arr[30];
int main(){
    stack_t_ s;
    s_init(&s);

    int answer=0;
    int temp=1;
    scanf("%s", &arr);
    
    int i=0;
    while(arr[i++] != '\n'){
        if(arr[i] == '('){
            temp = temp*2;
            s_push(&s, '(');
        }
        else if(arr[i] == '['){
            temp = temp*3;
            s_push(&s, '[');
        }
        else if(arr[i] == ')'){
            temp = temp*3;
            int res;
            s_pop(&s,&res);
        }
        else if(arr[i] == '['){
            temp = temp*3;
            s_push(&s, '[');
        }
        
    }
    return 0;
}