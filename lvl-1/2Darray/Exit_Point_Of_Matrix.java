import java.io.*;
import java.util.*;

public class Exit_Point_Of_Matrix{

    public static void main(String[] args) throws Exception {
        // write your code here
      Scanner scn= new Scanner(System.in);
      int n=scn.nextInt();
      int m=scn.nextInt();
      int [][] arr= new int[n][m];
      for(int k=0;k<n;k++)
      {
        for(int l=0;l<m;l++)
        {
          arr[k][l]=scn.nextInt();
        }
      }
        int dir=0;
        int i=0;
        int j=0;


        while(true)
        {
          dir=(dir+arr[i][j])%4;
          if(dir==0)
          {
            j++;
          }
          else if(dir==1)
          {
            i++;
          }
          else if(dir==2)
          {
            j--;
          }
          else if(dir==3)
          {
            i--;
          }


          if(i<0)
          {
            i++;
            break;
          }
          else if(j<0)
          {
            j++;
            break;
          }
          else if(i==arr.length)
          {
            i--;
            break;
          }
           else if(j==arr.length)
          {
            j--;
            break;
          }

        }

        System.out.println(i);
        System.out.println(j);
      
    }

}