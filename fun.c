#include <stdio.h>

int Plus(int i,int j){
  int result;
  result=i+j;
  return result;
}

int Minus(int i, int j){
  int result;
  if(i>j){
    result=i-j;
  }
  else{
    result=j-i;
  }
  return result;
}

int mult(int i,int j){
  int result;
  result=i*j;
  return result;
}

float div(float i, float j){
  float result;
  result=i/j;
  return result;
}

int nameozi(int i,int j){
  int result;
  result=i%j;
  return result;
}

int main(){
  int val,a,b;
  float divide;
  printf("input your two number\n");
  scanf("%d %d",&a,&b);
  printf("%d\n",Plus(a,b));
  printf("%d\n",Minus(a,b));
  printf("%d\n",mult(a,b));
  printf("%f\n",div(a,b));
  printf("%d\n",nameozi(a,b));
  return 0;
}
