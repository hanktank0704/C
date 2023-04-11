// 전단계의 어레이에서 별이면 처음 것을 출력
// 공백이면 3*3 공백 출력
#include <stdio.h>

char star_arr[3*3*3*3*3*3*3][3*3*3*3*3*3*3] = {'*',};
char new_star_arr[3*3*3*3*3*3*3][3*3*3*3*3*3*3] = {'*',};

// void print_star_arr(char star_arr[][], int N){
//     for(int i=0; i<N; i++){
//         for(int j=0; j<N; j++){
//             printf("%c", star_arr[i][j])
//         }
//     }
// }

void make_star_arr(int N){
    int level = 0;
    while(N/3 > 0){
        N = N/3;
        level++;
    }

    if(level == 1){
        star_arr[0][0] = '*';
        star_arr[0][1] = '*';
        star_arr[0][2] = '*';
        star_arr[1][0] = '*';
        star_arr[1][1] = ' ';
        star_arr[1][2] = '*';
        star_arr[2][0] = '*';
        star_arr[2][1] = '*';
        star_arr[2][2] = '*';
    }
    else{
        for(int i=0; i<N/3; i++){
            for(int j=0; j<N/3; j++){
                if(star_arr[i][j] == ' '){
                    new_star_arr[3*i][3*j] = ' ';
                    new_star_arr[3*i][3*j+1] = ' ';
                    new_star_arr[3*i][3*j+2] = ' ';
                    new_star_arr[3*i+1][3*j] = ' ';
                    new_star_arr[3*i+1][3*j+1] = ' ';
                    new_star_arr[3*i+1][3*j+2] = ' ';
                    new_star_arr[3*i+2][3*j] = ' ';
                    new_star_arr[3*i+2][3*j+1] = ' ';
                    new_star_arr[3*i+2][3*j+2] = ' ';
                }
                else{
                    new_star_arr[3*i][3*j] = '*';
                    new_star_arr[3*i][3*j+1] = '*';
                    new_star_arr[3*i][3*j+2] = '*';
                    new_star_arr[3*i+1][3*j] = '*';
                    new_star_arr[3*i+1][3*j+1] = ' ';
                    new_star_arr[3*i+1][3*j+2] = '*';
                    new_star_arr[3*i+2][3*j] = '*';
                    new_star_arr[3*i+2][3*j+1] = '*';
                    new_star_arr[3*i+2][3*j+2] = '*';
                }
            }
        }        
    }
    for(int i=0; i<N; i++){
        for(int j=0; j<N; j++){
            star_arr[i][j] = new_star_arr[i][j]
        }
    }

}

int main(){
    int N;
    scanf("%d", &N);



    return 0;
}