#include<iostream>
using namespace std;

int getDifference(int b, int n1, int n2){
    int borrow=0;
    int res=0;
    int mul=1;
    int d1,d2;
    int temp;
    while(n2>0)
    {
        d1=n1%10;
        d2=n2%10;
        temp=d2-d1+borrow;
        if(temp<0)
        {
            res+=(temp+b)*mul;
            borrow=-1;
        }
        else
        {
            res+=temp*mul;
            borrow=0;
        }
        mul*=10;
        n1/=10;
        n2/=10;
    }
    return res;
}


int main(){
    int b, n1, n2;
    cin>>b>>n1>>n2;
    
    cout<<getDifference(b,n1,n2);
}