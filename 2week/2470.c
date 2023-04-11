#include <stdio.h>
#include <stdlib.h>
int n;
int arr[1000000];

int static compare (const void* first, const void* second)
{
    if (*(int*)first > *(int*)second)
        return 1;
    else if (*(int*)first < *(int*)second)
        return -1;
    else
        return 0;
}

int abs(int a){
    if(a<0){
        a = -a;
        return a;
    }
    return a;
}
void find_answer(int arr[]){
    int l=0;
    int r=n-1;
    int zero_closest = 2000000000;

    int answer_x;
    int answer_y;

    while(l < r){
        int sum = arr[l] + arr[r];
        // printf("%d\n", sum);
        int temp = abs(sum);
        if(temp < zero_closest){
            zero_closest = temp; 
            answer_x = l;
            answer_y = r;
            // printf("%d\n", l);
        }
        if(sum < 0){
            l++;
        }
        else if(sum > 0){
            r--;
        }
        else{
            // printf("%d\n", l);
            printf("%d %d", arr[l], arr[r]);
            return;
        }
    }
    printf("%d %d", arr[answer_x], arr[answer_y]);

}

int main(){
    scanf("%d", &n);
    for(int i=0; i<n ;i++){
        scanf("%d", &arr[i]);
    }

    qsort(arr, n, 4, compare);

    // for(int i=0; i<n ;i++){
    //     // printf("%d ", arr[i]);
    // }

    find_answer(arr);
    return 0;
}