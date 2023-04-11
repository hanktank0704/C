#include<iostream>
#include <queue>

using namespace std;

int main()
{
    queue <int> pac;
    int N;
    int temp = 1;
    cin >> N;
    while(true)
    {
        cin >> temp;
        if(temp == -1) break;

        if(temp == 0)
        {
            pac.pop();
            continue;
        }
        
        if(pac.size() >= N) continue;
        pac.push(temp);
    }

    if(pac.empty() == true)
    {
        cout << "empty" << "\n";
    }
    else
    {
        while(pac.empty() != true)
        {
            cout << pac.front() << " ";
            pac.pop();
        }
    }
    

    return 0;
}