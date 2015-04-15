#include<stdio.h>
#include<stdlib.h>

typedef struct _node{
  int num;
  struct _node *next;
}node;

void add(node *head,int insert){
  node *tmp;
  tmp=(node*)malloc(sizeof(node));
  tmp->num=insert;
  head->next=tmp;
}

int main(){
  node *head=(node*)malloc(sizeof(node));
  head=NULL;
  head->num=4;
  add(head,7);
  printf("%d\n",head->next->num);
  return 0;
}
