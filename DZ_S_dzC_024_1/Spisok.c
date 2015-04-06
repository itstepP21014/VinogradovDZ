#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>

typedef int sizeList;

typedef  struct doublyNode_
{
    int data;
    struct doublyNode_ *next;
    struct doublyNode_ *link;
}doublyNode;

typedef struct List_{
    doublyNode *last;
    doublyNode *first;
    int size;
}List;

void initListTwo(List **list);
void dellListTwo(List **list);
void pushFront(List **list,int data);
void pushInTheEnd(List **list,int data);

int popInTheEnd(List *list);
int popFront(List *list) ;

int main(void)
{
    List *head=NULL;
    int k=13;
    initListTwo(&head);
    pushFront(&head,1);
    pushFront(&head,1);
    pushFront(&head,1);
    pushInTheEnd(head,9);
    pushInTheEnd(head,9);
    pushInTheEnd(head,9);
    printf("%d\n",popInTheEnd(head));
    printf("%d\n",popInTheEnd(head));
    printf("%d\n",popInTheEnd(head));
    printf("%d\n",popFront(head));
    printf("%d\n",popFront(head));
    printf("%d\n",popFront(head));
    return 0;
}

void initListTwo(List **list) //создане и заземление списка.
{
    List *temp=(List*)malloc(sizeof(List));
    temp->size=0;
    temp->last=temp->first=NULL;
    *list=temp;
}


void dellListTwo(List **list) //удаление списка
{
    doublyNode *temp=(*list)->first;
    doublyNode *next=NULL;
      while(temp)
        {
            next=temp->link;
            free(temp);
            temp=next;
        }
    free(*list);
    *list=NULL;
}

void pushFront(List **list,int data) //добавление в начало
{
    doublyNode *temp=(doublyNode *)malloc(sizeof(doublyNode));
    if(temp==NULL)
        exit(-1);
    temp->data=data;
    temp->next=NULL;
    temp->link=(*list)->first;
    if((*list)->first)
        (*list)->first->next=temp;
    (*list)->first=temp;
    if((*list)->first==NULL)
        (*list)->last=temp;
    (*list)->size++;
}

int popFront(List *list) //удаление одного элемента
{
    doublyNode *temp;
    int value;
    if(list->first==NULL)
        exit(2);
    temp=list->first;
    list->first=list->first->link;
    if(list->first)
        list->first->next=NULL;
    if(temp==list->last)
        list->last=NULL;
    value=temp->data;
    free(temp);
    list->size--;
    return value;
}

void pushInTheEnd(List **list,int data)
{
    doublyNode *temp=(doublyNode *)malloc(sizeof(doublyNode));
    if(temp==NULL)
        exit(-1);
    temp->data=data;
    temp->next=NULL;
    temp->link=(*list)->last;
    if((*list)->last)
        (*list)->last->link=temp;
    (*list)->last=temp;
    if((*list)->last==NULL)
        (*list)->first=temp;
    (*list)->size++;
}

int popInTheEnd(List *list)
{
    doublyNode *temp;
    int value;
    if(list->last==NULL)
        exit(2);
    temp=list->last;
    list->last=list->last->link;
    if(list->last)
        list->last->next=NULL;
    if(temp==list->first)
        list->first=NULL;
    value=temp->data;
    free(temp);
    list->size--;
    return value;
}
