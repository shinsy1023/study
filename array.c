#include <stdio.h>
#include <stdlib.h>

typedef struct _node{
  int num;
  struct _node *next;
}node;

void add(node *head,int b){
  node *tmp;
  tmp = (node*)malloc(sizeof(node));
  tmp->num=b;
  head -> next = tmp;

}

int main(){
  int a;
  node *head;
  while(1){
    if(head==NULL){
      head=(node*)malloc(sizeof(node));
      head->num=1;
      head->next=NULL;
    }
    else{
      while(1){
	add(next,7);
	printf("%d",head->num);
      }
    }
  }
  return 0;
}
