#include <stdio.h>
#include <string.h>

int count;
char s[1000][1000];

int cot(){
    count+=1;
    return count;
}
int recursion(const char *s, int l, int r){
    if(l >= r) return 1; 
    else if(s[l] != s[r]) return 0;
    else{ 
        cot();
        return recursion(s, l+1, r-1);}
}

int isPalindrome(const char *s){
    return recursion(s, 0, strlen(s)-1);
}

int main(){
    int T;
    scanf("%d", &T);

    for(int i=0; i<T; i++){
        scanf("%s", &s[i]);
    }

    for(int i=0; i<T; i++){
        printf("%d %d",isPalindrome(s[i]), cot());
        count = 0;
    }

    
    
    // printf("ABBA: %d\n", isPalindrome("ABBA")); // 1
    // printf("ABC: %d\n", isPalindrome("ABC"));   // 0
}