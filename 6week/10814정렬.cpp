#include <iostream>
#include <vector>
#include <algorithm>
int n;
using namespace std;

class orderagename{
    public:
    int order;
    int age;
    string name;
    bool operator <(const orderagename &other) const{
        if(age == other.age){
            return order < other.order;
        }
        return age < other.age;
    }
};
int main(){
    cin >> n;
    orderagename temp;
    vector<orderagename> arr;
    for(int i=0; i<n; i++){
        cin >> temp.age;
        cin >> temp.name;
        temp.order = i;
        arr.push_back(temp);
    }
    sort(arr.begin(), arr.end());

    for(int i=0; i<arr.size(); i++){
        cout << arr[i].age << " " << arr[i].name << "\n";
    }
    return 0;
}