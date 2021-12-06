#include<iostream>
#include<string.h>
using namespace std;

bool ispalin(string s)
{
    bool p= true;
    int sz=s.size();
    int i=0;
    int j=sz-1;
    while(i<=j)
    {
        if(s[i]!=s[j])
        {
            p=false;
            return p;
        }
        i++;
        j--;
    }
    return p;

}

void printallpralindrome(string str)
{
  string s="";
  for(int i=0; i<str.size(); i++)
  {
      for(int j=i; j<str.size(); j++)
      {
          for(int k=i; k<=j ;k++)
           { //cout<<str[k];
            s+=str[k];
           }

           if(ispalin(s))
           {
               cout<<s<<endl;
           }
            //cout<<endl;
           s="";
           
      }
  }
}

int main()
{
    string str;
    getline(cin,str);
    printallpralindrome(str);
    return 0;
}