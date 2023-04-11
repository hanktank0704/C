#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define QUEUE_SIZE 100000000
int n,k;
int answer[10000];

typedef int item_t_;
// typedef struct item_t_ {
//     int r, c, num;
// }item_t_;

typedef struct queue_t_ {
    item_t_ items[QUEUE_SIZE];
    size_t front, rear;
}queue_t_;

void q_init(queue_t_ * q){
    q->front = q->rear = 0;
}

int q_enqueue(queue_t_ * q, item_t_ item){
    if(q->rear >= QUEUE_SIZE) return -1;
    q->items[q->rear++] = item;
    return 0;
}
int q_dequeue(queue_t_ * q, item_t_ *res){
    if(q_is_empty(q)){
        return -1;
    }

    *res = q->items[q->front++];
    return 0;
}
int q_is_empty(queue_t_ * q){
    return q->front == q->rear;
}

int main(){
    queue_t_ queue;
    q_init(&queue);

    scanf("%d %d", &n, &k);

    for(int i=0; i<n; i++){
        q_enqueue(&queue, i+1);
    }
    int index=1;
    printf("<");
    while(1){
        if(index == k*n+1) break;
        else if(index == k){
            int res;
            q_dequeue(&queue, &res);
            printf("%d", res);
            index++;
            continue;
        }
        else if(index%k == 0){
            int res;
            q_dequeue(&queue, &res);
            printf(", %d", res);
            index++;
            continue;
        }
        int res;
        q_dequeue(&queue, &res);
        q_enqueue(&queue, res);
        index++;
    }
    printf(">");
    return 0;
}