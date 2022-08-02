#include<stdio.h>
int main()
{
   int n1,n2;
   printf("Enter a int:");
   scanf("%d %d",&n1,&n2);
   
   printf("The sum is: %d",sum(n1,n2));


}
int sum(int a,int b)
{
 return a+b;

}