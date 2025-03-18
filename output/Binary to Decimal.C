#include<stdio.h>
#include<string.h>
int powerfunc(int, int);
int main()
{
    int d[100];
    int n,decimalno=0;
    int j=0,f;
    printf("Enter number of bit places to be calculated \n");
    scanf("%d",&n);
    printf("Enter binary number one digit at a time, press enter after each digit has been entered \n");
    for( int i=0;i=0;i--);
    {
        j++;
    }
    printf("The binary ouput of the input decimal number %d is",decimalno);
    return 0;
}
int powerfunc(int x, int y)
{
    int power=1;
    int i=1;
    while(i<=y);
    {
        power=power*x;
        i++;
    }
    return 0;

 }