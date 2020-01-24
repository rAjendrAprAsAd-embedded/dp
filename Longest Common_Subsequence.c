/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    char a[]="rajendra";
    char b[]="prasad";
    int n1=strlen(a);
    int n2=strlen(b);
    int z[n2+1][n1+1];
    int i,j;
    for(i=0;i<=n1;i++)
    {
        z[0][i]=0;
    }
    for(j=0;j<=n2;j++)
    {
        z[j][0]=0;
    }
    for(j=1;j<=n2;j++)
    {
        for(i=1;i<=n1;i++)
        {
            if(b[j-1]==a[i-1])
            {
                z[j][i]=(z[j-1][i-1])+1;
                 
            }
            else
            {
                z[j][i]=z[j][i-1]<z[j-1][i]?z[j-1][i]:z[j][i-1];
            }
        }
    }
    printf("\n");
    int result=0; 
    for(j=0;j<=n2;j++)
    {
        for(i=0;i<=n1;i++)
        {
            if(result<z[j][i] && z[j][i]!=z[j+1][i-1])
            {   printf("%c",b[j-1]);
                result=z[j][i];
            }    
        }
    }
    printf(" %d\n",result);
}
