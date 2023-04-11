#include <stdio.h>
int visited_alphabet[27];
char alpha_arr[30][30];
int dx[4] = {0,1,0,-1};
int dy[4] = {1,0,-1,0};// right, down, left, up
int r;
int c;
int max_answer=0;

void find_route(int x, int y, int answer){
    // printf("%d %d %d\n", x, y, answer);
    // visited_alphabet[alpha_arr[x][y] - 'A'] = 1;
    for(int a=0; a<4; a++){
        int next_x = x + dx[a];
        int next_y = y + dy[a];
        if(next_x < r && next_x >= 0 && next_y < c && next_y >= 0 && visited_alphabet[alpha_arr[next_x][next_y] - 'A'] != 1 ){
            visited_alphabet[alpha_arr[next_x][next_y]-'A'] = 1; 
            find_route(next_x, next_y, answer+1);
            visited_alphabet[alpha_arr[next_x][next_y]-'A'] = 0; 
        }
    }
    // printf("func fin\n");
    if(max_answer < answer){
        max_answer = answer;
    }
    // visited_alphabet[alpha_arr[x][y] - 'A']= 0;
}

int main(){
    scanf("%d %d", &r, &c);
    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            scanf(" %c", &alpha_arr[i][j]);
        }
    }

    visited_alphabet[alpha_arr[0][0] - 'A'] = 1;
    find_route(0,0, 1);
    visited_alphabet[alpha_arr[0][0] - 'A'] = 0;

    printf("%d", max_answer);


    return 0;
}