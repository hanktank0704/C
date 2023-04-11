#include <iostream>
#include <stdlib.h>
#include <typeinfo>
#include <vector>
#include <string.h>
#include <algorithm>
using namespace std;
int n;
bool compare(string a, string b){
    if(a.length() == b.length()){
        return a<b;
    }
    return a.length() < b.length();
}

int main(){
    vector<string> arr;
    string temp;
    cin >> n;
    for(int i=0; i<n; i++){
        cin >> temp;
        arr.push_back(temp); 
        // cout << arr[i] << endl;
    }
    // for(int i=0; i<n; i++){
    //     cout << arr[i] << endl;
    // }
    // cout << sizeof(arr) << endl;

    sort(arr.begin(), arr.end(), compare);

    cout << arr[0] << endl;
    for(int i=1; i<arr.size(); i++){
        if(arr[i] == arr[i-1]) continue;
        cout << arr[i] << "\n";
    }

    // cout << sizeof(arr[0]) << endl;
    // cout << arr[0] << endl;
    // cout << typeid(arr[0]).name() << endl;
    
    return 0;
}