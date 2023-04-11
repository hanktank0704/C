#include<stdio.h>
#include<stdlib.h>
#include <string.h>
int main(){
    int alphabet[26];
    int N;
    char arr[100];
    int answer=0;

    scanf("%d", &N);

    for(int i=0; i<N; i++){
        int size=0;
        int pass = 1;
        for(int k=0; k<26; k++){
            alphabet[k]=0;
        }

        scanf("%s", arr);
        while(arr[size]!='\0'){
            size++;
        }

        for(int j=0; j<size; j++){
            if(alphabet[arr[j] - 'a']==0){
                alphabet[arr[j] - 'a'] = 1;
            }
            else{
                if(arr[j]==arr[j-1]){
                    continue;
                }
                else{
                    pass = 0;
                }
            }
        }
        answer += pass;
    }
    printf("%d", answer);

    return 0;
}