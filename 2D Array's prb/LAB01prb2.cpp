/*Initialize an integer array of 10 elements and print
how many numbers are odd and how many numbers are even.
*/

#include<iostream>
using namespace std;

void Arr(int arr[], int size)
{
    int even = 0;
    int odd = 0;
    for(int i=0;i<size; i++)
    {
        if(arr[i] % 2==0)
        {
            even++;
        }else{

            odd++;

        }
    }
    cout<<odd<<" odd number"<<endl;
    cout<<even<<" even number";

}

int main()
{
    int arr[10]={12, 32, 43, 1, 54, 53 ,15 ,64 ,3, 13};
    Arr(arr, 10);



    return 0;
}
