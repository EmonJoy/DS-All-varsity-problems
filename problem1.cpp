#include<iostream>
using namespace std;

int main()
{
    int arr[3][3]={
        {23,44,55},
        {222,555,2255},
        { 1,4,5}};

        bool found=false;

        int key= 2255;

    for(int i=0;i<3;i++)
    {
            for(int j=0;j<3;j++)
        {
            if(arr[i][j]==key)
            {
                cout<<"Found at index "<<i<<","<<j<<endl;
                found = true;
                break;
            }
            if(found){
                break;
            }
        }
    }

    if(!found)
    {
        cout<<"Key not found";
    }



    return 0;
}
