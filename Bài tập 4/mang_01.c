#include <stdio.h>
 
int main()
{
    int ta[4] = {3,5,7,2};
    int tong,k,l;
     tong = 0;
    for (l = 0; l < 4 ; l++)
    {
    printf("%d\n",ta[l]);
    }
    for (l = 0; l < 4 ; l++)
    {
     tong = tong + ta[l];
    }
    printf("tong = %d",tong);
    return 0;
}
