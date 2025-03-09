#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the size of the array: "; cin>>n;
    int arr[n];

    for(int i=0; i<n; i++)
    {
        cin>>arr[i];

    }

    cout<<"------------------------------------------"<<endl;

    for(int i=0; i<n; i++)
    {
            if(arr[i]%2 == 0)
        {
            cout<<0<<endl;
        }else
        {
            cout<<1<<endl;
        }


    }




    return 0;
}
