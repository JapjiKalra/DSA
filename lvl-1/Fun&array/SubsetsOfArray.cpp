#include<iostream>
#include<string>
#include<math.h>
#include<vector>
#include <bits/stdc++.h>
using namespace std;

int main(){
    

    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        
    }
    //int size = sizeof(arr)/sizeof(arr[0]);
    int lim=pow(2,n);
    for(int i=0;i<lim;i++)
    {
        int temp=i;
        string s ="";
        for(int j=n-1;j>=0;j--)
        {
            int r=temp%2;
            temp=temp/2;
            if(r==0)
            {
                s="-\t"  +s;
               
            }
            else
            {
                
                s=to_string(arr[j])+"\t" +s;
            }
        }
        cout<<s<<endl;
        
    }

}