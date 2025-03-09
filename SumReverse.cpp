#include<iostream>
using namespace std;
int main()
{

    int arr[]= {23,55,33,11,56,787,43};
    int arr2[]= {45,88,56,99,32,335,6};
    int size = sizeof(arr2)/ sizeof(arr2[0]);
    int rev[size];
    int sum[size];

    for(int i=0;i<size; i++)
    {
        cout<<arr2[size-i-1]<<endl;
        rev[i] = arr2[size-i-1];
    }
    cout<<"Arr2 reverse index has been stored in rev\n\n";

    cout<<"Modify array \n\n";

    for(int i=0; i<size; i++)
    {
        sum[i] = arr[i] + rev[i];
    }

    return 0;
}
