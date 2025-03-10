
/*
Initialize TWO integer arrays of different sizes.
Merge the input arrays and create a new array.
Then print the new array in reverse order.
*/

#include<iostream>
using namespace std;

int main()
{

    int arr1[] = {10,20,30,40,50};
    int arr2 []={1,2,3,4,5,6,7,8};

    int size1 = sizeof(arr1) / sizeof(arr1[0]);
    int size2 = sizeof(arr2) / sizeof(arr2[0]);

    int mrge[size1+size2];

    for(int i=0; i<size1 ; i++)
    {
        mrge[i] = arr1[i];
    }


        for(int i=0; i<size2 ; i++)
    {
        mrge[size1 + i] = arr2[i];
    }

        for(int i=0; i<size1 + size2 ; i++)
    {
        // print kore check korar jnne...

        cout<<mrge[size1+size2 - i - 1]<<" ";
    }





    return 0;
}
