#include <stdio.h>
#include <stdlib.h>
int main(){

    char a[10] = {'a','b','c','d'};

    printf("%s", a);
    printf("%c", a[3]);
    strcat(a,'e');
    printf("%s", a);


    return 0;
}