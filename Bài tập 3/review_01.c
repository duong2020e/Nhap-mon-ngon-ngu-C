#include <stdio.h>

int main(void) {
  //khai báo biến
  int n;
  //xuất ra màn hình
  printf("Nhap n = ");scanf("%d",&n);
  //in từ tiếng anh ứng với số 1 đến 9
  if(n == 1){
    printf("One",n);
    //n=1 thì hiển thị one
  }else if(n == 2){
    printf("Two",n);
    //n=2 thì hiển thị Two
  }else if(n == 3){
    printf("Three",n);
    //n=3 thì hiển thị Three
  }else if(n == 4){
    printf("Four",n);
    //n=4 thì hiển thị Four
  }else if(n == 5){
    printf("Five",n);
    //n=5 thì hiển thị Five
  }else if(n == 6){
    printf("Six",n);
    //n=6 thì hiển thị Six
  }else if(n == 7){
    printf("Seven",n);
    //n=7 thì hiển thị Seven 
  }else if(n == 8){
    printf("Eight",n);
    //n=8 thì hiển thị Eight
  }else if(n == 9){
    printf("nine",n);
    //n=9 thì hiển thị nine
  }else if(n >9){
    printf(" Greater than 9 ");  
  }
  return 0;
}
