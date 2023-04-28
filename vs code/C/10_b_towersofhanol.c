#include<stdio.h>
#include<conio.h>
#include<math.h>
void tower(int n,char source,char temp,char destination)
{
    if(n==0)
    return;
    tower(n-1, source, destination,temp);
    printf("More disk %d from %c to %c\n",n,source,destination);
    tower(n-1,temp,source,destination);
}
void main()
{
    int n;
    printf("Input number of disk\n");
    scanf("%d",&n);
    tower(n,'s','t','d');
    printf("Steps involved is %d\n",(int)pow(2,n)-1);
    }