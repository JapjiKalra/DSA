#include<iostream>
using namespace std;
int AnyToDec(int n,int b){
//write your code here.
int num=0;
int mul=1;
while(n>0)
{
    num+=(n%10)*mul;
    n=n/10;
    mul*=b;
}

return num;
}
int main(){
    int n;
    int b;
    cin >> n;
    cin >> b;
    int res = AnyToDec(n,b);
    cout<<res<<endl;
}