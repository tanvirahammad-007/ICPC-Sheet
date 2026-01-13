#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    long long int a[n],sum=0;
    for(int i=0; i<n; i++){
        scanf("%lld",&a[i]);
        sum = sum+a[i];
    }
    if(sum>=0) printf("%lld\n",sum);
    else printf("%lld\n",(-1*sum));

}

