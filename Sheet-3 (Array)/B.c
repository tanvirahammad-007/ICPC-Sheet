#include <stdio.h>
int main()
{
    int n,count=0;
    scanf("%d",&n);
    long long int a[n],sum=0;
    for(int i=0; i<n; i++)
    {
        scanf("%lld",&a[i]);
    }
    long long int x;
    scanf("%lld",&x);
    for(int j=0; j<n; j++)
    {
        if(a[j]==x)
        {
            printf("%d\n",j);
            count++;
            break;
        }
    }
    if(count == 0)
        printf("-1\n");
}

