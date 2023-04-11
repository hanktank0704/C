#include <stdio.h>

int longestMountain(int * arr, int arrSize){
    int longest = 0;
    int index = 0;

    while(index < arrSize){

        while(arr[index]<arr[index]){
            longest++;
            index++;
        }

        if(arr[index]==arr[index+1]){
            index++;
        }

        else if(arr[index]>arr[index+1]){
            while(arr[index]>arr[index+1]){
                index++;
                longest++;
            }
        }
    }
}