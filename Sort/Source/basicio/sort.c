#include <stdio.h>
#include <stdlib.h>
long a[100005];

int main()
{
    FILE *fp1=fopen("sort.in","r");
    FILE *fp2=fopen("sort.out","w");
    long i,n;
    fscanf(fp1,"%ld",&n);
    for (i=1;i<=n;i++)
        fscanf(fp1,"%ld",&a[i]);
    for (i=1;i<=n;i++)
        fprintf(fp2,"%ld ",a[i]);
    fclose(fp1);
    fclose(fp2);
    return 0;
}
