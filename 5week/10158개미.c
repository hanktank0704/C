#include <stdio.h>
int w, h;
int p, q;
int t;
int answer_p;
int answer_q;

int main(){
    scanf("%d %d", &w, &h);
    scanf("%d %d", &p, &q);
    scanf("%d", &t);

    int add_t_p = p + t;
    int add_t_q = q + t;

    int p_idx = add_t_p / w;
    int q_idx = add_t_q / h;

    if(p_idx % 2 == 0){
        answer_p = add_t_p % (2*w);
    }
    else{
        answer_p = (2*w) - add_t_p % (2*w);
    }

    if(q_idx % 2 == 0){
        answer_q = add_t_q % (2*h);
    }
    else{
        answer_q = (2*h) - add_t_q % (2*h);
    }

    printf("%d %d", answer_p, answer_q);

    return 0;
}