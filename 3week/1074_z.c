#include<stdio.h>
int n, r, c;

int answer=0;
void find(int length, int r1, int c1){
    // printf("%d %d %d %d\n", answer, length, r1, c1); 
    if(length == 1){
        printf("%d\n", answer);
    }
    else{
        int r1_index = r1 / (length/2);
        int c1_index = c1 / (length/2);
        int half = length/2;

        if(r1_index == 0 && c1_index == 0){ // 1
            answer += 0 * length*length/4;
            find(length/2, r1%(length/2), c1%(length/2)) ;
        }
        if(r1_index == 0 && c1_index == 1){ // 2
            answer += 1 * length*length/4;
            find(length/2, r1%(length/2), c1%(length/2)) ;

        }
        if(r1_index == 1 && c1_index == 0){ // 3
            answer += (long long)2 * length*length/4;
            find(length/2, r1%(length/2), c1%(length/2)) ;

        }
        if(r1_index == 1 && c1_index == 1){ // 4
            answer += (long long)3 * (length/2) * (length/2);
            find(length/2, r1%(length/2), c1%(length/2)) ;

        }
    }
}
int main(){
    scanf("%d %d %d", &n, &r, &c);
    find(1<<n, r, c);

    return 0;
}