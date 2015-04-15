#include<stdio.h>
#include<stdlib.h>

typedef struct _node{
  int num;
  struct _node *next;
}node;

void add(node *head,int insert){
  node *tmp=(node*)malloc(sizeof(node));
  tmp->num=insert;
  head->next=tmp;
}

int main(){
  node *head=(node*)malloc(sizeof(node));
  int insert;
  printf("Input your head number.\n");
  scanf("%d",&insert);
  head->num=insert;
  printf("Input your number.\n");
  scanf("%d",&insert);
  add(head,insert);
  printf("%d%d\n",head->num,head->next->num);
  return 0;
}
