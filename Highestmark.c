#include <stdio.h>
#include <string.h>
#include <math.h>

int main() 
{
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    {
      
      scanf("%d",&a[i]);  
    }
    int highestmark=a[0];
    for(int i=0;i<n;i++)
    {
        if(a[i]>highestmark)
        {
            highestmark=a[i];
        }
    }
    
    for(int i=0;i<n;i++)
    {
        int dif = highestmark-a[i];
         printf("%d ",dif);
    }
   
    
    return 0;
}
