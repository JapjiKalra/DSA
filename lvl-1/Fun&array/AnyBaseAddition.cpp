#include<iostream>

using namespace std;

int getSum(int b, int n1, int n2) {
    // write your code here
    int carry=0;
    int mul=1;
    int d1,d2;
    int res=0;
    int temp;
    while(carry>0 || n1>0 || n2>0)
    {
        d1=n1%10;
        d2=n2%10;
        temp = carry+d1+d2;
        int q=temp/b;
        int r=temp%b;
        carry=q;
        res+=r*mul;
        mul*=10;
        n1/=10;
        n2/=10;

    }

return res;
    
}


int main() {
    int b, n1, n2;
    cin >> b >> n1 >> n2;
    cout << getSum(b, n1, n2) << endl;
}