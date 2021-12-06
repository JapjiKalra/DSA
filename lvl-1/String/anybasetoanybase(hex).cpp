#include <cmath>
#include <cstdio>
#include <string>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    //any base to decimal
    
    string s;
    cin>>s;
    int b1,b2;
    cin>>b1>>b2;
    int mul=1;
    int res=0;
    for(int i=s.length()-1; i>=0;i--)
    {
        if(s[i]>='a' && s[i]<='z')
        {
            res+=(mul*(s[i]-'a'+10));
        }
        else{
            res+=(mul*(s[i]-'0'));
        }
        mul*=b1;
    }
    string op="";
    int dec =res;
    // dec to any base
    if(b2!=10)
    {
        while(dec>0)
        {
            int r=dec%b2;
            if(r>=0 && r<=9)
            {
                op=to_string(r)+op;
            }
            else{
                char ch=r-10+'a';
                 op=ch+op;

            }
            dec=dec/b2;

        }
     cout<<op;
    }
    else{
        cout<<res;
    }
    