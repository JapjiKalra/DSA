#include<iostream>
#include<vector>
#include<iterator>
using namespace std;
bool isprime(int n)
{
    bool p= true;
    for(int i=2; i*i<=n; i++)
    {
        if(n%i==0)
        {
            p=false;
            return p;
        }
    }
    return p;
}
void removeprimes(vector<int> v)
{
    //vector<int>::iterator it;
    for (auto it = v.begin(); it != v.end(); ++it)
    {
        if(isprime(*it)){
            v.erase(it);
            --it;
        }
    }
    cout<<"[";
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i];
        if(i<v.size()-1)
        {
            cout<<", ";
        }
    }
    cout<<"]";
}



int main()
{
    int n;
    cin>>n;
    vector<int> v(n,0);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    removeprimes(v);
}