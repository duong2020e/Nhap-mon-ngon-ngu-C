
#include <stdio.h>
void sum(int a, int b, int c);
int tong (int a, int b, int c);

int main(){
	int x=1,y=3,z=2;
  sum (x,y,z);
  int s = tong(x,y,z);
  printf ("Tong: %d", s);
	return 0;
}
void sum(int a, int b, int c){
  int tong = a + b + c;
  printf ("Tong : %d ",tong);
}
int tong (int a, int b, int c){
 int t = a+b+c;
 return t;
}
