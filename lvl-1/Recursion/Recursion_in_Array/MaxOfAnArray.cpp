#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int m=INT_MIN;


int max(int arr[], int idx, int n){
    if(idx==n) return m;
    
    if(::m<arr[idx])
    {
        ::m=arr[idx];
    }
    ++idx;
    max(arr,idx, n);
    
    
}

int main(){
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    int p = max(arr, 0, n);
    cout << p << endl;
}
