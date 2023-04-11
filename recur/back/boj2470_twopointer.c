#include <stdio.h>

int numchange(int a){
    if(a<0){
        return (-a);
    }
    else{
        return a;
    }
}

int main(){
    int n;
    int num[100000];
    int minus_pointer=0;
    int plus_pointer=0;
    int answer1=0;
    int answer2=0;

    int sum_array[100000];

    scanf("%d", &n);
    for(int i=0; i<n; i++){
        scanf("%d",&num[i]);
    }

    for(int i=0; i<n; i++){
        if(num[i] > 0){
            plus_pointer = i;
        }
    }

    int startof_plus = plus_pointer;

    printf("%d", plus_pointer);
    
    answer1 = 0;
    answer2 = n;

    while(minus_pointer!=plus_pointer){
        int sum= num[minus_pointer]+num[plus_pointer];
        int beforesum= num[answer1]+ num[answer2];

        if(sum==0){printf("%d %d",num[minus_pointer], num[plus_pointer]);}
        else if(sum<0){
            minus_pointer++;
            if(numchange(sum) < numchange(beforesum)){
                answer1 = minus_pointer;
                answer2 = plus_pointer;
            }
        }
        else{
            plus_pointer++;
            if(numchange(sum) < numchange(beforesum)){
                answer1 = minus_pointer;
                answer2 = plus_pointer;
            }
        }
    }
    printf("%d %d", answer1, answer2);

    return 0;
}