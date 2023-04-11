#include <stdio.h>
int r,c;
char arr[100][100];
int visited_alpha[27];
int dx[4] = {1,0,-1,0};
int dy[4] = {0,1,0,-1};
int max=0;

void recur(int x, int y, int cnt){
    visited_alpha[arr[x][y] - 'A'] = 1;
    for(int i=0; i<4; i++){
        int next_x = x + dx[i];
        int next_y = y + dy[i];

        if(next_x >= 0 && next_y >= 0 && next_x < r && next_y < c && visited_alpha[arr[next_x][next_y] - 'A'] != 1){
            recur(next_x, next_y, cnt+1);
        }
    }
    if(cnt > max){
        max = cnt;
    }
    visited_alpha[arr[x][y] - 'A'] = 0;
}

int main(){
    scanf("%d %d", &r, &c);
    for(int i=0; i<r; i++){
        scanf("%s", &arr[i]);
    }
    recur(0,0,1);

    printf("%d", max);

    // for(int i=0; i<r; i++){
    //     printf("%s\n", arr[i]);
    // }

    return 0;
}