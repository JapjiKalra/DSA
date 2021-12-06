#include<iostream>
using namespace std;

int AnyToAny(int n, int b1, int b2){
    //if non dec ->conv to dec
    int dec=0;
    int temp=n;
    if(b1!=10)
    {
        int mul=1;
        while(n>0)
        {
            int r= n%10;
            dec+=(r*mul);
            mul*=b1;
            n=n/10;
        }
        
    }
    else
    {
        dec=temp;
    }
    //cout<<dec;

    //conv decimal num to b2
    int num=0;
    int m=1;
    while(dec>0)
    {
        int r=dec%b2;
        dec=dec/b2;
        num+=r*m;
        m*=10;

    }
    return num;
    
}
int main(){
    int n;
    int b1;
    int b2;
    cin >> n;
    cin >> b1;
    cin >> b2;
    int res = AnyToAny(n,b1,b2);
    cout << res <<endl;
}