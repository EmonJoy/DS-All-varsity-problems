/*
  Initialize an array of 10 elements and print the array
  elements both in normal and reverse order.
*/
#include<iostream>
using namespace std;

void Arr(int arr[], int size)
{
    cout<<"Normal order"<<endl;
    for(int t=0; t<size; t++)
    {
        cout<<arr[t]<<" ";
    }
    cout<<endl;

    cout<<"reverse order"<<endl;
    for(int t1=0; t1<size; t1++)
    {
        cout<<arr[size - t1-1]<<" ";
    }



}


int main()
{

    int arr[] ={23,55,32,55,75};
    Arr(arr, 5);




    return 0;
}
