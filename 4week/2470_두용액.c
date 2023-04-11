#include<stdio.h>
#include <stdlib.h>

int static compare (const void* first, const void* second)
{
    if (*(int*)first > *(int*)second)
        return 1;
    else if (*(int*)first < *(int*)second)
        return -1;
    else
        return 0;
}
int n;
int arr[100001];

long long abs_1(long long num){
    if(num<0){
        return -num;
    }
    return num;
}

int answer_x;
int answer_y;
long long answer_sum = 2000000000;

void binary_search(int target){

    int l = target+1;
    int r = n-1;
    //-99 -2 -1 4 98

    while(l<=r){
        int mid = (l+r)/2;
        long long sum = (long long)arr[target] + arr[mid];
        if(answer_sum > abs_1(sum)){
            answer_x = target;
            answer_y = mid;
            answer_sum = abs_1(sum);
        }

        if(sum < 0){
            l = mid+1;
        }
        else if(sum == 0){
            break;
        }
        else if(sum > 0){
            r = mid - 1;
        }
    }
}

int main(){
    scanf("%d", &n);
    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }
    qsort(arr, n, 4, compare);

    for(int i=0; i<n; i++){
        binary_search(i);
    }

    printf("%d %d", arr[answer_x], arr[answer_y]);

    return 0;
}