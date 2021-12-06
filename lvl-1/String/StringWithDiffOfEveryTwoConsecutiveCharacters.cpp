#include<iostream>
#include<string.h>

using namespace std;

void printstr(string str)
{
   string s="";
   s+=str[0];
   int diff;
   string c="";
   for(int i=1;i<str.size();i++)
   {
       diff=str[i]-str[i-1];
       c=to_string(diff);
       s+=c;
       s+=str[i];
   }

  cout<<s;
}
int main()
{
    string str;
    getline(cin,str);
    printstr(str);
    return 0;
}