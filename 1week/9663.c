#include <stdio.h>

int isused_x[100];
int isused_left_side_diagonal[100];
int isused_right_side_diagonal[100];

int answer=0;
int n;

int check_if_available(int i){
    int answer=1;
    if(isused_x[i] == 1) answer=0;
    if(isused_left_side_diagonal[i] == 1) answer=0;
    if(isused_right_side_diagonal[i] == 1) answer=0;
}

void get_answer(int whatline){
    if(whatline== n){
        answer++;
        return;
    }
    for(int i=0; i<n; i++){
    }

    // for(int i=0; i<n; i++){
    //     for(int j=0; j<n; j++){
    //         if(isused[i][j]==1){
    //             continue;
    //         }
    //         for(int k=0; k<n; k++){
    //             isused[i][k] = 1;
    //         }
    //         for(int k=0; k<n; k++){
    //             isused[k][j] = 1;
    //         }
    //         for(int k=0; k<i+j+1; k++){
    //             isused[i+j-k][k] = 1;
    //         }
    //         for(int k=0; k<2*n; k++){
    //             if(i>j){
    //                 isused[i-j+k][k] = 1;
    //             }
    //             else{
    //                 isused[k][j-i+k] = 1;
    //             }
    //         }

            
    //     }
    //     get_answer(whatline+1);
        
    //     for(int j=0; j<n; j++){
    //         if(isused[i][j]==0){
    //             continue;
    //         }
    //         for(int k=0; k<n; k++){
    //             isused[i][k] = 0;
    //         }
    //         for(int k=0; k<n; k++){
    //             isused[k][j] = 0;
    //         }
    //         for(int k=0; k<i+j+1; k++){
    //             isused[i+j-k][k] = 0;
    //         }
    //         for(int k=0; k<2*n; k++){
    //             if(i>j){
    //                 isused[i-j+k][k] = 0;
    //             }
    //             else{
    //                 isused[k][j-i+k] = 0;
    //             }
    //         }
    //     }
    // }
}

int main(){
    scanf("%d",&n);
    printf("%d", answer);


    return 0;
}