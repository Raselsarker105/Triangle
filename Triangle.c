#include <stdio.h>

int main() 
{
    int A, B, C;
    scanf("%d %d %d ", &A, &B, &C);
    if(A==B && B==C && A>0)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }
    return 0;
}