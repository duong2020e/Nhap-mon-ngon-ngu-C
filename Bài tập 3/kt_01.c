#include <stdio.h>

int main(){
  int a,b,c;
  a = 2; b = 3; c = 4;
  printf("bang 2\n");
  for(int e = 1; e <=10; e++){
      printf("%d x %d = %d\n",a,e,a * e);
    }
    printf("bang 3\n");
  for(int f = 1; f <=10; f++){
      printf("%d x %d = %d\n",b,f,b * f);
    }
    printf("bang 4\n");
  for(int g = 1; g <=10; g++){
    
      printf("%d x %d = %d\n",c,g,c * g);
    }
return 0;
}
