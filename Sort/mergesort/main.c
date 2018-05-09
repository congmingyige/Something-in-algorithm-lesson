#include <stdio.h>
#include <stdlib.h>
long a[100005],b[100005];

void mergesort(long l,long r)
{
    long mid=(l+r)>>1,i,j,k;
    if (l!=mid)
        mergesort(l,mid);
    if (mid<r)
        mergesort(mid+1,r);
    for (i=l;i<=r;i++)
        b[i]=a[i];
    i=l; j=mid+1; k=l;
    while (i<=mid && j<=r)
    {
        if (b[i]<b[j])
        {
            a[k]=b[i];
            k++;
            i++;
        }
        else if (b[i]>b[j])
        {
            a[k]=b[j];
            k++;
            j++;
        }
        else
        {
            a[k]=b[i];
            k++;
            i++;
            a[k]=b[j];
            k++;
            j++;
        }
    }
    while (i<=mid)
    {
        a[k]=b[i];
        k++;
        i++;
    }
    while (j<=r)
    {
        a[k]=b[j];
        k++;
        j++;
    }
}

int main()
{
    FILE *fp1=fopen("sort.in","r");
    FILE *fp2=fopen("sort.out","w");
    long n,i;
//    scanf("%ld",&n);
//    for (i=1;i<=n;i++)
//        scanf("%ld",&a[i]);
    fscanf(fp1,"%ld",&n);
    for (i=1;i<=n;i++)
        fscanf(fp1,"%ld",&a[i]);
    //mergesort
    mergesort(1,n);
//    for (i=1;i<=n;i++)
//        printf("%ld ",a[i]);
    for (i=1;i<=n;i++)
        fprintf(fp2,"%ld ",a[i]);
    fclose(fp1);
    fclose(fp2);
    return 0;
}
