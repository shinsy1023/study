#include <stdio.h>
#include <stdlib.h>

typedef struct _node{
  int num;
  struct _node *next;
}node;

void add(node *a,int b){
  if(head==NULL){
    head->num=b;

  }
  else if(a->num==NULL){
    node *tmp;
    tmp=(node*)malloc(sizeof(node));
    tmp->num=b;
    a -> next = tmp;
  }
  else{

}

int main(){
  int a;
  node *head;
  int* point;
  head=(node*)malloc(sizeof(node));
  for(a=0;a<10;a++){
    add(head,1);
    head->num=point;

  }


  return 0;
}
