#include <stdio.h>
int n;
int m;
long long arr[100001];

void binary_search(){
    long long l=1;
    long long r= m*arr[0];
    long long answer=-1;
    while(l<=r){
        long long mid = (l+r)/2;

        long long available_people = 0;
        for(int i=0; i<n; i++){
            available_people += mid / arr[i];
        }
        // printf("%d %d people: %d\n", l, r, available_people);

        if(available_people > m){
            answer = mid;
            r = mid-1;
        }
        else if(available_people == m){
            answer = mid;
            r = mid-1;
        }
        else{
            l = mid+1;
        }
    }
    printf("%lld", answer);

}
int main(){
    scanf("%d %d", &n, &m);
    for(int i=0; i<n; i++){
        scanf("%lld", &arr[i]);
    }
    // printf("\n");
    // printf("\n");
    binary_search();

    return 0;
}