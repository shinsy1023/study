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
  val=Plus(a,b);
  printf("%d\n",val);
  val=Minus(a,b);
  printf("%d\n",val);
  val=mult(a,b);
  printf("%d\n",val);
  divide=div(a,b);
  printf("%f\n",divide);
  val=nameozi(a,b);
  printf("%d\n",val);
  return 0;
}
