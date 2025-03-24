#include<iostream>
using namespace std;

int main()
{

    int arr[] ={0,1, 2, 3, 4, 5, 6, 7, 8, 9};
    int new_arr[10];

    for(int i=0; i<10;i++)
    {
       new_arr[i] = arr[i] * 3;
    }



    for(int i=9; i>=0;i--)
    {
       cout<<new_arr[i]<<" ";
    }


    return 0;
}

