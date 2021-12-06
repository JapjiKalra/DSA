#include<iostream>
#include<string>
//#include <string>
using namespace std;


void printallperm(string str)
{
    string m=str;
    int s=str.size();
    int fact=1;
    for(int i=1; i<=s; i++)
    {
        fact*=i;
    }
    //cout<<fact;
    for(int i=0;i<fact;i++)
    {
        int temp=i;
        for(int div=s;div>=1;div--)
        {
            int q=temp/div;
            int r= temp%div;

            cout<<str[r];
            str.erase(str.begin() + r);
            temp=q;


        }
        str=m;
        cout<<endl;

    }
}
int main()
{
 string str;
 getline(cin,str);
 
 printallperm(str);
}