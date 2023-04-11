#include <iostream>
#include <stdlib.h>
#include <algorithm>

using namespace std;
int n;
int arr[1000001];
int unsorted_arr[1000001];
int sorted_arr[1000001];

int delete_repeat(){
    sorted_arr[0] = arr[0];
    int sorted_index=1;
    for(int i=1; i<n; i++){
        if(arr[i] != arr[i-1]){
            sorted_arr[sorted_index] = arr[i];
            sorted_index++;
        }
    }
    return sorted_index;
}

void binary_search(int target, int index){
    int l=0;
    int r=index-1;
    // cout << "l and r ";
    // cout << l << " " << r  << " ";
    while(l <= r){
        // cout << l << " " << r << endl;
        int mid = (l+r)/2;
        if(sorted_arr[mid] == target){
            cout << mid << " ";
            return;
        }
        else if(sorted_arr[mid] < target){
            l = mid+1;
        }
        else{
            r = mid-1;
        }
    }
}

int main(){
    cin >> n;
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    for(int i=0; i<n; i++){
        unsorted_arr[i] = arr[i];
    }
    sort(arr, arr+n);

    // for(int i=0; i<n; i++){
    //     cout << arr[i] << " ";
    // }
    int sorted_index = delete_repeat();
    // cout << endl;
    // for(int i=0; i<n; i++){
    //     cout << sorted_arr[i] << " ";
    // }

    // cout << sorted_index << endl;
    for(int i=0; i<n; i++){
        binary_search(unsorted_arr[i], sorted_index);
    }

    return 0;
}