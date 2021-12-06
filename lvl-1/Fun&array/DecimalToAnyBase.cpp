#include<iostream>
#include<math.h>
using namespace std;
int DecToAny(int n, int b){
//write your code here
int div=1;
int num=0;
while(n>0)
{
    num+=(n%b)*div;
    n=n/b;
    div=div*10;

}
return num;
}
int main(){
    int n;
    int b;
    cin >> n;
    cin >> b;
    int res = DecToAny(n,b);
    cout << res << endl;
}