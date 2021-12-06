#include <iostream>
#include <vector>
using namespace std;

const int mr = 100, mc = 100;
void inputBound(int (&mat)[mr][mc], int n, int m)
{

  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < m; j++)
    {
      cin >> mat[i][j];
    }
  }
}

int main(int argc, char** argv)
{


  int mat[mr][mc] = {0};
  int n, m;
  cin >> n >> m;

  inputBound(mat, n, m);

  int count=0;
  int s=n*m;
  
  vector<int>v;
  int k=0;
  int i=0;
  int j=0;
  int row=n;
  int col=m;
  
  while(count<s)
  {
      if(count!=s)
      {
          
        for(i; i<row;i++)
        {
            
            v.push_back(mat[i][j]);
            count++;
        }
      }
      i--;
      j++;
      if(count!=s)
      {
           
        for(j; j<col;j++)
        {
           
            v.push_back(mat[i][j]);
            count++;
        }
      }
      j--;
      i--;

      if(count!=s)
      {
           
        for(i; i>=k;i--)
        {
            
            v.push_back(mat[i][j]);
            count++;
        }
      }

      i++;
      j--;

      if(count!=s)
      {
        for(j; j>k;j--)
        {
            
            v.push_back(mat[i][j]);
            count++;
        }
      }
      j++;
      i++;

      k++;
      row--;
      col--;
    }

    for (int i = 0; i < s; i++)
    {
        cout<<v[i]<<endl;
    }
  

}