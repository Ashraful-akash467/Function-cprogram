#include<stdio.h>
#include<math.h>
int Arms();
int Arms(int n)
{
    int i,s=0,c,d=0;
    for (i=n;i!=0;i=i/10)
    {
        d++;
    }
    for (i=n;i!=0;i=i/10)
    {
        c=i%10;
        s=s+ pow(c,d);
    }
    if (s==n)
    {
        printf("Armstrong Number");
    }
    else
    {
        printf("Not Armstrong Number");
    }
    return 0;
}
int main ()
{
    int n;
    printf("Enter The Number: ");
    scanf("%d",&n);
    Arms(n);
}