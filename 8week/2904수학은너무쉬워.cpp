#include <iostream>
using namespace std;

int eras_arr[1000001];
int prime_list[10000];
int n;
int input[100];

int arr_of_soinsus[1000];

void soinsu(int target)
{
    while(eras_arr[target] != 0)
    {
        // cout << eras_arr[target] << endl;
        arr_of_soinsus[eras_arr[target]] += 1;
        target = target / eras_arr[target];
    }
    arr_of_soinsus[target]+=1;
    // cout << target << endl;
}
void eras()
{
    eras_arr[1] = 0;
    for(long long i=2; i<1000001; i++)
    {
        if(eras_arr[i] != 0) continue;
        for(long long j=i*i; j<1000001; j+=i)
        {
            if(eras_arr[j] != 0) continue;
            eras_arr[j] = i;
        }
    }
}

int main()
{
    eras();

    cin >> n;
    for(int i=0; i<n; i++)
    {
        cin >> input[i];
        soinsu(input[i]);
    }

    for(int i=0; i<1000; i++)
    {
        arr_of_soinsus[i] = arr_of_soinsus[i]/n;
    }

    int answer=1;
    for(int i=0; i<1000; i++)
    {
        if(arr_of_soinsus[i] != 0)
        {
            for(int j=0; j<arr_of_soinsus[i]; j++)
            {
                answer = answer * i;
            }
        }
    }
    cout << answer << endl;

    


    // for(int i=0; i<1000; i++)
    // {
    //     cout << arr_of_soinsus[i] << " ";
    //     if(i%20 == 0) cout << endl;
    // }


    return 0;
}