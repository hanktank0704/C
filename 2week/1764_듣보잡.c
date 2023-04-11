#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int n, m;
char arr1[1000000][30];
char arr2[1000000][30];
char answer_arr[1000000][100];
int how_many_answer=0;

int compare(const void * a, const void * b){
    return strcmp(a, b);
}

void binary_search_string(int l, int r, char * target){
    while(l<=r){
        int mid = (l+r)/2;
        if(strcmp(target, arr2[mid]) < 0){
            r= mid-1;
        }
        else if(strcmp(target, arr2[mid]) == 0){
            strcpy(answer_arr[how_many_answer], target);
            how_many_answer++;
            return;
        }
        else{
            l = mid + 1;
        }
    }
}


int main(){
    scanf("%d %d", &n, &m);
    for(int i=0; i<n; i++){
        scanf("%s", &arr1[i]);
    }
    for(int i=0; i<m; i++){
        scanf("%s", &arr2[i]);
    }

    qsort(arr1, n, sizeof(arr1[0]), compare);
    qsort(arr2, m, sizeof(arr2[0]), compare);

    for(int i=0; i<n; i++){
        binary_search_string(0, m-1, arr1[i]);
    }

    printf("%d\n", how_many_answer);
    for(int i=0; i<how_many_answer; i++){
        printf("%s\n", answer_arr[i]);
    }

    // printf("\n");

    // for(int i=0; i<n; i++){
    //     printf("%s\n", arr1[i]);
    // }
    // for(int i=0; i<m; i++){
    //     printf("%s\n", arr2[i]);
    // }

    return 0;
}