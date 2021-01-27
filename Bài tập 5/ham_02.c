#include <stdio.h>

// khoi dinh nghia ham
int kiem_tra_am_duong(int n){
 return n; 
}
 //khoi ham main
int main(){
  int n;
  printf("nhap n = ");
  scanf("%d", &n);
  if(kiem_tra_am_duong(n) > 0)
      printf("n là số nguyên dương ");
  else if (kiem_tra_am_duong(n) < 0)
    printf("n là số nguyên âm");
  else 
    printf("n = 0");
  return 0;
}
