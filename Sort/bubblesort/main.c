#include <stdio.h>
#include <stdlib.h>
long a[100005];

int main()
{
    FILE *fp1=fopen("sort.in","r");
    FILE *fp2=fopen("sort.out","w");
    long n,i,j,k,t;
//    scanf("%ld",&n);
//    for (i=1;i<=n;i++)
//        scanf("%ld",&a[i]);
    fscanf(fp1,"%ld",&n);
    for (i=1;i<=n;i++)
        fscanf(fp1,"%ld",&a[i]);
    //bubble sort
    for (i=1;i<n;i++)
        for (j=n,k=n-1;j>i;j--,k--)
            if (a[j]<a[k])
            {
                t=a[j];
                a[j]=a[k];
                a[k]=t;
            }
//    for (i=1;i<=n;i++)
//        printf("%ld ",a[i]);
    for (i=1;i<=n;i++)
        fprintf(fp2,"%ld ",a[i]);
    fclose(fp1);
    fclose(fp2);
    return 0;
}
