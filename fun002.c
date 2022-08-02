#include<stdio.h>
int main()
{
   int n1,n2;
   printf("Enter a int:");
   scanf("%d %d",&n1,&n2);

   int result = sum(n1,n2);
   printf("\n The sum is: %d",result);

   int result2 = sum(30,50);
   printf("\n The sum is: %d",result2);
    

}
int sum(int a,int b)
{
 return a+b;

}


