#include<iostream>
#include <cctype>
using namespace std;
int main()
{
    char n[5];
    for(int i=0; i<5;i++)
    {
        cin>>n[i];
    }
      for(int i=0; i<5;i++)
    {
       if (tolower(n[i]) == 'a' || tolower(n[i]) == 'e' || tolower(n[i]) == 'i' ||
        tolower(n[i]) == 'o' || tolower(n[i]) == 'u')
        {
            cout<<(char) tolower(n[i]); //typecast kore lower e convert korlam...
        }
        else{
            break;
        }
    }



    return 0;
}
