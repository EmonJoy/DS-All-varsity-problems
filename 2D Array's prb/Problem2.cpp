#include<iostream>
using namespace std;


string encode(string s, int j)
{

    for(int i=j; i<s.length(); i+=(j+1))
    {
        s[i]+= 2;
    }
    return s;


}



int main()
{
    string s="I am a student";
    int j=2;

    cout<<encode(s,j)<<"endl";



    return 0;
}
