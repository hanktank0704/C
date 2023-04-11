#include <iostream>
using namespace std;
int a;
int b;
int c;
int divide(int target){
    // cout << "divide " << target << " exe" << endl;
    if(target==1) return a%c;
    long long temp = 1;
    long long abc = divide(target/2);
    temp = (temp * abc * abc )% c;
    for(int i=0; i<target%2; i++){
        temp = temp * a;
        temp = temp % c;
    }
    return temp;
}
int main(){
    cin >> a;
    cin >> b;
    cin >> c;

    int answer= divide(b);
    cout << answer << endl;
    // int gop=1;
    // for(int i=0; i<b; i++){
    //     gop = gop * a;
    //     gop = gop % c;
    // }
    // cout << gop << endl;
    return 0;
}