#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{

    int n;
    scanf("%d", &n);
    for(int i=n;i>=1;i--){
        for(int j=n;j>i;j--)
            printf("%d ", j);

        for(int j=i*2-1;j>1;j--)
            printf("%d ", i);

        for(int j=i;j<=n;j++)
            printf("%d ", j);

        printf("\n");
    }

    for(int i=2;i<=n;i++){
        for(int j=n;j>i;j--)
            printf("%d ", j);

        for(int j=i*2-1;j>1;j--)
            printf("%d ", i);

        for(int j=i;j<=n;j++)
            printf("%d ", j);
            
        printf("\n");
    }
    return 0;
}
