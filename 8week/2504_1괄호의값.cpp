#include <iostream>
#include <string.h>
#include <stack>

using namespace std;
int main()
{
    char input[31];
    stack<int> sta;
    cin >> input;
    int length = strlen(input);
    int index = 1;
    // cout << length << endl;

    // ( : 0        [ : 1
    for(int i=0; i<length; i++)
    {
        if(input[i] == '(')
        {
            sta.push(0);
        }
        if(input[i] == '[')
        {
            sta.push(1);
        }
        if(input[i] == ')')
        {
            if(sta.top() == 0)
            {
                sta.pop();
                sta.push(2);
                // cout << "pushed 2"<< endl;
            }
            else
            {
                int temp=0;
                while(sta.top() != 0)
                {
                    if(sta.top() == 1)
                    {
                        index = 0;
                        break;
                    }
                    temp += int(sta.top());
                    sta.pop();
                }
                sta.pop();
                sta.push((temp * 2));
                // cout << "pushed " << temp * 2 << endl;
            }
        }
        if(input[i] == ']')
        {
            if(sta.top() == 1)
            {
                sta.pop();
                sta.push(3);
                // cout << "pushed 3"<< endl;
            }
            else
            {
                int temp=0;
                while(sta.top() != 1)
                {
                    if(sta.top() == 0)
                    {
                        index = 0;
                        break;
                    }
                    temp += int(sta.top());
                    sta.pop();
                }
                sta.pop();
                sta.push((temp * 3));
                // cout << "pushed " << temp * 3 << endl;
            }
        }
    }

    int answer=0;
    // cout <<"size of stack is " << sta.size() << endl;

    if(index==0)
    {
        cout << 0;
        return 0;
    }

    int temp = sta.size();
    for(int i=0; i<temp; i++)
    {
        // cout << (sta.top()) << endl;
        answer += int(sta.top());
        sta.pop();
    }

    cout << answer;
    return 0;
}