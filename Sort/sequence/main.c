#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    FILE *fp=fopen("sort.in","w");
    long n,i;
    srand(time(NULL));//wrong
    scanf("%ld",&n);
    fprintf(fp,"%ld\n",n);
    for (i=1;i<=n;i++)
        fprintf(fp,"%ld ",rand()*9+rand());
    fclose(fp);
    return 0;
}
