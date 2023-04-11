#include <iostream>
#include <string>
using namespace std;

char arr[100000];
int howmany=0;
int penetration = 0;

int main()
{
    string temp;
    cin >> temp;

    int length = temp.length();

    int index=0;
    for(int i=0; i<length; i++)
    {
        if(temp[i] == '(')
        {
            arr[index] = '(';
            index++;
        }
        if(temp[i] == ')')
        {
            if(temp[i-1] == '(')
            {
                arr[index] = ' ';
                index--;

                penetration += index;
            }
            else
            {
                index--;
                howmany++;
            }
        }
    }

    cout << howmany + penetration << endl;
    return 0;
}