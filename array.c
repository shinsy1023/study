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
  node *head;
  while(head==NULL){
    
  return 0;
}
