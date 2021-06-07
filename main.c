#include <stdio.h>

int locker(int X, int Y);

int toggle(int x)
{
    if (x==0)
        return 1;
    return 0;
}

int locker(int x, int y)
{
    int line[x];
    for (int i=0; i<x; i++)
    {
        printf(" Locker%d ", i+1);
        line[i] = 0;
    }

    for (int j=1; j<=y; j++)
    {
        printf("\n\nPass#%d:", j);
        for (int i=0; i<x; i++)
        {
            if ((i+1)%j==0)
                line[i]=toggle(line[i]);
        }
        for (int i=0; i<x; i++)
        {
            if (line[i]==0)
                printf("        C");
            else
                printf("        O");
        }
    }
    printf("\n\n\n");
}

int main()
{
    int k,L,P;
    for (k=1; k<=1000; k++)
    {
        printf("Enter no. of Lockers and Passes: ");
        scanf("%d%d",&L,&P);
        printf("\n");
        if (L==0&&P==0)
            break;
        printf("           ");
        locker(L,P);
    }
}
