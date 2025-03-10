#include<iostream>
using namespace std;

int main()
{
    int arr1[] ={23,4,656,2};
    int arr2[] ={33,4,11,21};


    int size1 = sizeof(arr1) / sizeof(arr1[0]);
    int size2 = sizeof(arr2) / sizeof(arr2[0]);
    int newarr[size1 + size1];


    cout<<"Common element are: ";
    for(int i=0; i<size1 ; i++)
    {
        for(int j=0; j<size2; j++)
            if(arr1[i] == arr2[j])
        {
            cout<<arr1[i];
        }
    }



    return 0;
}
