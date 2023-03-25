#include<studio.h>
#include<conio.h>
int main()
{
    int a,b;
    printf("Enter a number:");
    sacnf(a);
    printf("\nEnter another number:");
    scanf("%d",b);
    int sum=a+b;
    printf("%d+%d=%d",sum);
}