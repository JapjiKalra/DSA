#include<bits/stdc++.h>
#include<iostream>
#include<string>
#include<vector>
using namespace std;


void display(vector<vector<int>>&arr){
    
    for(int i=0;i<arr.size();i++){
        for(int j=0;j<arr[0].size();j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}

int main()
{
    int n, m, s, r;
    cin >> n >> m;
    vector<vector<int>> arr(n, vector<int>(m));
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            cin >> arr[i][j];
    cin >> s >> r;
    int minr=s-1;
    int minc=s-1;
    int maxr=n-s;
    int maxc=m-s;
    int sz=2*(maxr-minr+1)+2*(maxc-minc+1)-4;
    vector<int>v;
    int i,j;
    //lc
    for(i=minr,j=minc; i<=maxr;i++)
    {
        v.push_back(arr[i][j]);
    }

    //br
     for(i=maxr,j=minc+1; j<=maxc;j++)
    {
        v.push_back(arr[i][j]);
    }

    //rc

    for(i=maxr-1,j=maxc; i>=minr;i--)
    {
        v.push_back(arr[i][j]);
    }

    //tr

     for(i=minr,j=maxc-1; j>=minc +1 ;j--)
    {
        v.push_back(arr[i][j]);
    }

    r=r%sz;
    if(r<0)
    {
        r=r+sz;
    }
    int p=sz-r;

    reverse(v.begin(),v.begin()+p);
    reverse(v.begin()+p, v.end());
    reverse(v.begin(), v.end());

    int l=0;

    for(i=minr,j=minc; i<=maxr;i++)
    {
        arr[i][j]=v[l];
        l++;
    }

    //br
     for(i=maxr,j=minc+1; j<=maxc;j++)
    {
        arr[i][j]=v[l];
        l++;
    }

    //rc

    for(i=maxr-1,j=maxc; i>=minr;i--)
    {
       arr[i][j]=v[l];
        l++;
    }

    //tr

     for(i=minr,j=maxc-1; j>=minc +1 ;j--)
    {
        arr[i][j]=v[l];
        l++;
    }

    display(arr);


}