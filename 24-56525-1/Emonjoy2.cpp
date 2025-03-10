#include<iostream>
using namespace std;

int main()
{
    int arr[] = {23,5,2,44,44,64,22,23};
    int size =  sizeof(arr) / sizeof(arr[0]);
    int new_arr[size];

    bool chk = false;

    for(int i=0; i<size ; i++)
    {
        for(int j = i + 1; j<size; j++)
        {
            if(arr[i] == arr[j])
            {
                arr[i] = 0;
                chk = true;
            }
            new_arr[i] = arr[i];

        }
    }

    for(int i=0; i<size; i++)
    {
        if(chk){
         cout<<new_arr[i]<<" ";
        }
    }
    if(!chk)
        {
            cout<<"Array is already unique";
        }
    return 0;
}
