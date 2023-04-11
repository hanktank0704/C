#include <stdio.h>
#include <string.h>

int main(){
    char word[1000000];
    scanf("%s",word);

    int alphabet[26];
    int length = strlen(word);

    // printf("howlong: %d",length);

    for(int i=0; i<length; i++){
        if(word[i] - 'a' >= 0){
            alphabet[word[i] - 'a'] += 1;
        }
        if(word[i] - 'a' < 0){
            alphabet[word[i] - 'A'] += 1;
        }
    }

    int arr[26];

    for(int i=0; i<26; i++){
        arr[i] = alphabet[i];
    }
    for(int i=0; i<26; i++){
        for(int j=0; j<26; j++){
            int temp=0;
            if(arr[i]>arr[j]){
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    if(arr[0] == arr[1]){
        printf("?");
    }
    else{
        for(int i=0; i<26; i++){
            if(alphabet[i] == arr[0]){
                printf("%c", i+'A');
            }
        }
    }

    // for(int i=0; i<26; i++){
    //     printf("%d ",alphabet[i]);
    // }
    

    return 0;
}