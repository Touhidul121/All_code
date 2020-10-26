#include<stdio.h>

int main()
{
   int r1=3,r2=3,c1=3,c2=3,i,j,k;
    int A[r1][c1]={
        {1,5,6},
        {5,2,4},
        {-2,4,3},
    };

    int B[r2][c2]={
        {-1,2,6},
        {1,2,-4},
        {6,4,-3},
    };
     int res[r1][c2];
    for(i = 0; i < r1; ++i){
        for(j = 0; j < c2; ++j){
                res[i][j]=0;
            for(k = 0; k < c1; ++k)
            {
                res[i][j] += A[i][k] * B[k][j];
            }
        }
     }
      for(i = 0; i < r1; ++i){
        for(j = 0; j < c2; ++j){
        printf("%d ",res[i][j]);
        }
        printf("\n");
     }
}
