#include <iostream>
#include <vector>
using namespace std;

void upperDiagonal_traverse(int n, vector<vector<int>> &arr)
{
    // write your code here
    //int n=arr.size();
    
    int count=n;
    int i=0;
    int j=0;
    int a,b;
    
        
     for(j; j<n;j++)
     {
        a=i;
        b=j;
        count=n-j;
        while(count)
        {
            
            cout<<arr[a][b]<<endl;
            a++;b++;
            count--;

        }

        
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
    
    upperDiagonal_traverse(n, arr);
}