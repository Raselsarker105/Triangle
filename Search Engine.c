#include <stdio.h>

int main() 
{
    int T;
    
    scanf("%d ", &T);

    for (int t = 1; t <= T; t++) 
    {
        int N;
        
        scanf("%d", &N);

        int num[N];
        ;
        for (int i = 0; i < N; i++) 
        {
            scanf("%d", &num[i]);
        }

        int S;
       
        scanf("%d", &S);

        int pos = -1;
        for (int i = 0; i < N; i++) 
        {
            if (num[i] == S) 
            {
                pos = i + 1;
                break;
            }
        }

        if (pos != -1) 
        {
            printf("Case %d: %d\n", t, pos);
        } 
        else 
        {
            printf("Case %d: Not Found\n", t);
        }
    }

    return 0;
}
