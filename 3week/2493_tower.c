#include <stdio.h>
int n;
int arr[5000000];
int sorted_arr[5000000];
int answer_arr[5000000];
int static compare (const void* first, const void* second)
{
    if (*(int*)first > *(int*)second)
        return 1;
    else if (*(int*)first < *(int*)second)
        return -1;
    else
        return 0;
}

void two_pointer(int where){
    int l = where;
    int r = where;
    while(l>=0 && r>=0){
        
    }
}

int main(){
    scanf("%d", &n);
    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
        sorted_arr[i] = arr[i];
    }

    qsort(sorted_arr,n,4,compare);

    return 0;
}