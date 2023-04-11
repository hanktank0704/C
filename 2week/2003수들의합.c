#include <stdio.h>
int arr[100000];
int n, m;
int answer=0;

long long find_sum(int arr[], int l, int r){
    long long sum=0;
    for(int i=l; i<r+1; i++){
        sum += arr[i];
    }
    return sum;
}

void find_answer(int arr[]){
    int l=0;
    int r=0;

    while(l<=r){
        // printf("l: %d r: %d\n", l, r);
        long long sum = find_sum(arr, l ,r);
        // printf("sum: %d\n", sum);

        if(sum == m){
            answer++;
            r++;
            l++;
            if(l == n || r == n){
                break;
            }
        }
        else if(sum < m){
            r++;
            if(r == n){
                break;
            }
        }
        else{
            if(l==r){
                r++;
            }
            l++;
            if(l == n){
                break;
            }
            if(r == n){
                break;
            }
        }

        if(r>n-1){
            r = n-1;
        }
    } 
    printf("%d", answer);
}

int main(){
    scanf("%d %d", &n, &m);
    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }
    find_answer(arr);
    
    return 0;
}