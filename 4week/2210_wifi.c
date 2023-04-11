#include <stdio.h>
#include <stdlib.h>
long long arr[200001];
int n;
int c;
int static compare (const void* first, const void* second)
{
    if (*(int*)first > *(int*)second)
        return 1;
    else if (*(int*)first < *(int*)second)
        return -1;
    else
        return 0;
}
int isit_possible(long long length){//3
    long long index=0;
    int start = arr[0];
    int end;
    int howmany=1;
    // 1 2 4 8 9
    
    for(int i=1; i<n; i++){
        if(arr[i] >= start + length){
            howmany++;
            if(length == 3){
                // printf("%d\n", arr[i]);
            }
            start = arr[i];
        }
    }
    if(howmany >= c){
        // printf("howmanY: %d\n", howmany);
        return 1;
    }
    else{
        return 0;
    }
    
    //arr[i] > start + length
    // c 
    //
    
}

void binary_search(){
    long long answer=0;
    long long l=0;
    long long r=1000000000;
    // printf("%lld %lld\n", l, r);
    while(l<=r){
        // printf("%lld %lld\n", l, r);
        long long mid = (l+r)/2;
        int possible = isit_possible(mid);

        if(possible == 0){
            r = mid-1;
        }
        else{
            answer = mid;
            l = mid+1;
        }
    }
    printf("%lld\n", answer);
}
int main(){
    scanf("%d %d", &n, &c);
    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }
    qsort(arr, n, sizeof(long long), compare);

    for(int i=0; i<n; i++){
        // printf("%d ", arr[i]);
    }

    binary_search();

    return 0;
}