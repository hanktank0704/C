#include <iostream>
#include <string.h>
using namespace std;

int input[31];
char temp[31];
int answer = 0;

int main()
{
    cin >> temp;

    int index=0;
    int length = strlen(temp);
    for(int i=0; i<length; i++)
    {
        // ( : 0
        // [ : 1
        if(temp[i] == '(')
        {
            input[index] = 0;
            index++;
        }
        if(temp[i] == '[')
        {
            input[index] = 1;
            index++;
        }
        if(temp[i] == ')')
        {
            if(temp[i-1] == '(')
            {
                index--;
                input[index] = 2;
                index++;
            }
            else
            {
                while(input[index] == 0)
                {
                    cout << "index: " << index << "input: " << input[index] << endl;
                    answer += input[index];
                    index--;
                }
                answer = answer * 2;
            }
        }

        if(temp[i] == ']')
        {
            if(temp[i-1] == '[')
            {
                index--;
                input[index] = 3;
                index++;
            }
            else
            {
                while(input[index] == 1)
                {
                    answer += input[index];
                    index--;
                }
                answer = answer * 3;
            }
        }

    }

    cout << answer << endl;

    return 0;
}