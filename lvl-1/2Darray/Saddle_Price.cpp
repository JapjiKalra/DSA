#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;

void saddle_point(int n, vector<vector<int>> &arr)
{
    // write your code here
    int sp=-1;
    int p;
    int row=arr.size();
    int col=arr[0].size();

    for(int i=0;i<row;i++)
    {
        int min=INT_MAX;
        int max=INT_MIN;
        for(int j=0; j<col; j++)
        {
            if(arr[i][j]<min)
            {
                min=arr[i][j];
                p=j;
            }
        }
        for(int k=0; k<row;k++)
        {
            if(arr[k][p]>max)
            {
                max=arr[k][p];
            }
        }

        if(max==min)
        {
            sp=min;
            cout<<sp;
            return;
        }
    }
    cout<<"Invalid input";
}

int main()
{
    int n;
    cin >> n;
    vector<vector<int>> arr(n, vector<int>(n));
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            cin >> arr[i][j];
    
    saddle_point(n, arr);
}