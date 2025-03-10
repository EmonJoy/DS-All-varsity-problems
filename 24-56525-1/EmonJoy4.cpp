#include<iostream>
using namespace std;
int main()
{
    int A[10];
    int count=0;
    int key;
    for(int i=0; i<10; i++)
    {
        cin>>A[i];
    }

    cout<<"Enter number you wanna search: ";
    cin>>key;

    for(int i=0; i<10; i++)
    {

       if(A[i]==key){
          count++;
       }

    }

    cout<<"The number occurs "<<count<<" times in the array";


    return 0;
}
