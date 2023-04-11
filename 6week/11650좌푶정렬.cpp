#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int n;
bool compare(pair <int ,int> a, pair<int, int > b){
    if(a.first != b.first){
        return a.first < b.first;
    }
    else{
        return a.second < b.second;
    }
}
int main(){
    pair<int, int> xy;
    vector<pair<int, int>> arr;

    cin >> n;
    for(int i=0; i<n; i++){
        cin >> xy.first >> xy.second;
        arr.push_back(xy);
    }
    // for(int i=0; i<n; i++){
    //     cout << arr[i].first <<" " << arr[i].second << endl;
    // }

    sort(arr.begin(), arr.end(), compare);
    for(int i=0; i<n; i++){
        cout << arr[i].first <<" " << arr[i].second << "\n";
    }
    return 0;
}