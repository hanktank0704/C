#include <iostream>
#include <queue>
#include <vector>

using namespace std;

int importance_arr[101];
int is_there_something_bigger_arr[101];

int main()
{
    vector<pair<int, int>> arr;

    int howmany;
    cin >> howmany;

    for(int i=0; i<howmany; i++)
    {
        int howlong;
        cin >> howlong;

        int what_we_need_to_find;
        cin >> what_we_need_to_find;

        for(int i=0; i<howlong; i++)
        {
            pair<int, int> order_importance;

            order_importance.first = i;
            cin >> order_importance.second;
            arr.push_back(order_importance);
        }
        cout << endl;
        for(int i=0; i<howlong; i++)
        {
            cout << arr[i].first << " ";
        }
        cout << endl;
        for(int i=0; i<howlong; i++)
        {
            cout << arr[i].second<< " ";
        }
        cout << endl;
        
        //// importance arr 출력해보기
        // for(int i=0; i<howlong; i++)
        // {
        //     cout << importance_arr[i] << " ";
        // }
        // cout << endl;
    }


    return 0;
}