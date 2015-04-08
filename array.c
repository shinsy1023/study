#include <stdio.h>
#include <stdlib.h>

typedef struct _node{
  int num;
  struct _node *next;
}node;

void add(node *a,int b){
  node *tmp;
  tmp = (node*)malloc(sizeof(node));
  tmp->num=b;
  a -> next = tmp;

}

int main(){
  int a;
  node *head;
  for(a=1;a<10;a++){
    if(head==NULL){
      head=(node*)malloc(sizeof(node));
      head->num=1;
      head->next=NULL;
      add(head,3);
    }
    else{
      for(a=1;a<10;a++){
	add(head->next,7);
	printf("%d\n",head->num);
      }
    }
  }
  return 0;
}
