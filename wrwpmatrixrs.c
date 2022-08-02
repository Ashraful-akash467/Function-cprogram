#include<stdio.h>
void Akashinp(int X[10][10]);
void Akashout(int X[10][10]);


void Akashinp(int X[10][10])

{
    int i,j,n;

    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&X[i][j]);
        }
    }

}


void Akashout(int X[10][10])
{

    int i,j,n;
     for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d\t",X[i][j]);
        }
        printf("\n");
    }


}


void main()
{
    int A[10][10],B[10][10],C[10][10];

   

   
   printf("Enter the elements of A:\n");
   Akashinp(A);

   
   printf("Enter the elements of B:\n");
   Akashinp(B);

  
   printf("Enter the elements of C:\n");
    Akashinp(C);


  
   printf("The Elements of A are :\n");
    Akashout(A);

   
   printf("The Elements of B are :\n");
   Akashout(B);
   
   
   printf("The Elements of C are :\n");
   Akashout(C);
  
 
}