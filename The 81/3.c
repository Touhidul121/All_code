#include<stdio.h>
int res1[100][100];
int res2[100][100];
int res3[100][100];

void fun1()
{
   int r1=3,c1=3,i,j,k;
    int A[3][3]={
        {1,5,6},
        {5,2,4},
        {-2,4,3},
    };
     int res[r1][c1];
    for(i = 0; i < r1; ++i){
        for(j = 0; j < c1; ++j){
                res[i][j]=0;
            for(k = 0; k < c1; ++k)
            {
                res[i][j] += A[i][k] * A[k][j];
            }
        }
     }
      for(i = 0; i < r1; ++i){
        for(j = 0; j < c1; ++j){
                res1[i][j]=0;
            for(k = 0; k < c1; ++k)
            {
                res1[i][j] += A[i][k] * res[k][j];
            }
        }
     }

}

void fun2()
{


   int r1=3,r2=3,c1=3,c2=3,i,j,k;
    int A[3][3]={
        {1,5,6},
        {5,2,4},
        {-2,4,3},
    };
    int B[3][3]={
        {-1,2,6},
        {1,2,-4},
        {6,4,-3},
    };
     int res[r1][c2];
    for(i = 0; i < r1; ++i){
        for(j = 0; j < c2; ++j){
                res2[i][j]=0;
            for(k = 0; k < c1; ++k)
            {
                res2[i][j] += A[i][k] * B[k][j];
            }
        }
     }



}

int main()
{
    fun1();
    fun2();
    int B[3][3]={
        {-1,2,6},
        {1,2,-4},
        {6,4,-3},
   };

   for(int i=0;i<3;i++)
   {
       for(int j=0;j<3;j++)
       {
           res3[i][j]=res1[i][j]+res2[i][j]-2*B[i][j];
       }
   }

   for(int i=0;i<3;i++)
   {
       for(int j=0;j<3;j++)
       {
           printf("%d ",res3[i][j]);
       }
       printf("\n");
   }
   return 0;
}







