#include<iostream>
#include<string.h>
#include<string>
using namespace std;


void String_compression01(string str)
{
   string s1="";
   s1+=str[0];
   for(int i=1;i<str.length();i++)
   {
       if(str[i]==str[i-1])
       {
           continue;
       }
       s1+=str[i];

   }

   cout<<s1<<endl;
}
void String_compression02(string str)
{
   string s2="";
   s2+=str[0];
   int count=0;
   string c;
   for(int i=1;i<str.length();i++)
   {
       if(str[i]==str[i-1])
       {
           count++;
           continue;
       }
       if(count!=0)
       {
        count++;
        c=to_string(count);
       //c=(char)count;
       s2+=c;
       }
       
       count=0;
       s2+=str[i];
       

   }
   if(count!=0){
    count++;
   c=to_string(count);
   s2+=c;}
   cout<<s2<<endl;
}

int main()
{
    string str;
    getline(cin,str);
    String_compression01(str);
    String_compression02(str);
}