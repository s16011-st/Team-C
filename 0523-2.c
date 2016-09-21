#include<stdio.h>

int add(int a,int b);

int add(int a,int b){
  int c;
  c=a+b;
  return c;
}

int main(){
   int a=10;
   int b=20;
   int d;
   d=add(a,b);
   printf("%d+%d=%d\n",a,b,d);
   return 0;
}

 
