#include <iostream>
#include <bits/stdc++.h>
#include <vector>
#include <algorithm>
using namespace std;

void rotate(int n, vector<vector<int>> &arr)
{
    for(int i=0;i<n; i++)
    {
        for(int j=0;j<i; j++)
        {
            swap(arr[i][j],arr[j][i]);
        }

    }

    for (int i = 0; i < n; i++)
    {
        reverse(arr[i].begin(), arr[i].end());
    }




    for (int i = 0; i < n; i++)
    {   for (int j = 0; j < n; j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}

int main()
{
    int n;
    cin >> n;
    vector<vector<int>> arr(n, vector<int>(n));
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            cin >> arr[i][j];
    rotate(n, arr);
}