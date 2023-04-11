#include<stdio.h>
#include <stdlib.h>
int n;
int k;
long long arr[100001];

int howmany[100001];

long long how_many_less_than(long long mid){
    long long answer=0;
    for(int i=1; i<=n; i++){
        if(i > mid){
            break;
        }
        if(mid >= (long long)i*n){
            answer += n;
        }
        else{
            answer += mid/i;
        }
    }
    return answer;
}
void binary_search(){
    int answer=0;
    long long l=1;
    long long r= (long long)n*n;
    while(l<=r){
        // printf("%lld %lld\n",l,r);
        long long mid = (l+r)/2;
        long long num = how_many_less_than(mid);
        // 1 2 3
        // 2 4 6
        // 3 6 9
        if(num == k){
            answer=mid;
            r = mid -1;
        }
        else if(num < k){
            l = mid + 1;
        }
        else{
            answer=mid;
            r = mid - 1;
        }
    }
    printf("%d\n", answer);
}
int main(){
    scanf("%d", &n);
    scanf("%d", &k);

    binary_search();    
    return 0;
}