#include <stdio.h>
int arr[100001];

int how_long_is_int(int num){
    int index=0;
    while(num/10 != 0){
        num = num/10;
        index++;
    }
    return index+1;
}

int turn_int_to_mirror(int num){
    int mirror_int=0;
    int int_len = how_long_is_int(num);
    for(int i=0; i<int_len; i++){
        int temp=0;
        temp = num%10;
        num = num/10;
        mirror_int = mirror_int*10 + temp;
    }
    return mirror_int;
}
void isit_mirror(int num){
    if(num == turn_int_to_mirror(num)){
        printf("YES\n");
    }
    else{
        printf("NO\n");
    }
}

int find_first(int num){
    while(num/10 != 0){
        num = num/10;
    }
    return num;
}


int main(){
    int N;
    scanf("%d", &N);

    for(int i=0; i<N; i++){
        scanf("%d", &arr[i]);
    }

    for(int i=0; i<N; i++){
        int temp;
        temp = arr[i] + turn_int_to_mirror(arr[i]);
        isit_mirror(temp);
    }
    return 0;
}