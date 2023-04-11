#include <stdio.h>
int x;
int y;
int w;
int h;

int direction_x = 1;
int direction_y = 1;

int what_is_next_x(int cur_x){
    if(cur_x == w){
        direction_x = -direction_x;
    }
    if(cur_x == 0){
        direction_x = -direction_x;
    }

    cur_x = cur_x + direction_x;
    return cur_x;
}
int what_is_next_y(int cur_y){
    if(cur_y == h){
        direction_y = -direction_y;
    }
    if(cur_y == 0){
        direction_y = -direction_y;
    }

    cur_y = cur_y + direction_y;
    return cur_y;
}
int main(){
    int t;
    scanf("%d %d", &w, &h);
    scanf("%d %d", &x, &y);
    scanf("%d", &t);

    for(int i=0; i<t; i++){
        x = what_is_next_x(x);
        y = what_is_next_y(y);
    }

    printf("%d %d", x,y);

    return 0;
}