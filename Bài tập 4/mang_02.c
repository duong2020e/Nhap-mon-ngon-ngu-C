#include <stdio.h>
 
int main(){
    int a[100],i,tong;
    tong = 0;
    printf("Nhap i:");scanf("%d",&i);
    for(i = 0; i < 100; i++)
    printf("%d\n",a[i]);
    for(i = 0; i < 100; i++)
    tong = tong + a[i];
    printf("Tong = %d",tong);
    getchar();
    return 0;
}
