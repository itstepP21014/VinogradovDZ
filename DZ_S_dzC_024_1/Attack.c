#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef struct ListNode_
{
    int data;
    struct ListNode *next;
}ListNode;

void addList(ListNode **list,int data);
void printList(ListNode *list);
int popList(ListNode **list);
int collNode(ListNode *list);
void addNodInTheEnd(ListNode **list,int data);

int main()
{
    printf("\n");

    ListNode *head;
    head=NULL;
    int k=10;
    addList(&head,k);
    addList(&head,k);
    addList(&head,k);
    addNodInTheEnd(&head,k);
    printList(head);
    printf("\nHello World!\n%d\n",collNode(head));
    printList(head);
    return 0;
}

void addList(ListNode **list,int data)
{
    ListNode *tempList=(ListNode *)malloc(sizeof(ListNode));
    tempList->data=data;
    tempList->next=NULL;
    if(*list==NULL)
        *list=tempList;
    else
    {
       tempList->next=*list;
        *list=tempList;
    }
}

void printList(ListNode *list)
{
    ListNode *temp =list;
    while(temp)
    {
        printf("%d ",temp->data+1);
        temp=temp->next;
    }

}

void delList(ListNode **list)
{
    ListNode *temp;
    while(*list!=NULL)
    {
        temp=(*list)->next;
        free(*list);
        *list=temp;
    }
}

//int popNod (ListNode **List)
//{
//    ListNod *tmp=NULL;
//    if (head==NULL)
//        printf ("Error");
//    int val;
//    tmp=*head;
//    val=tmp->data;
//    (*head)=(*head)->Nod;
//    free (Nod);
//    return val;
//}

int popList(ListNode **list)
{
    ListNode *temp=NULL;
    int value;
    if(list==NULL)
    {
        exit(-1);
    }
    temp=*list;
    value=temp->data;
    *list=(*list)->next;
    free(temp);
    return value;
}

//int kolichestvo(ListNode **List)
//{
//    int kol=0;
//    Nod *temp;
//    while (List!=NULL)
//    {
//        kol+=1;
//        temp=List->next;
//    }
//    return kol;
//}

int collNode(ListNode *list)
{
    int result=0;
    ListNode *temp;
    while(list)
    {
        temp=list->next;
        result++;
        list=temp;
    }

    return result;
}

void proverka(ListNode **list)
{
    if(list==NULL)
        exit(-1);
    else
        return 0;
}

bool chekNullList(ListNode *list)
{
    if(list)
        return true;
    return false;
}

void addNodInTheEnd(ListNode **list,int data)
{
    ListNode *tempList=(ListNode *)malloc(sizeof(ListNode));
    ListNode *temp=*list;
    tempList->data=data;
    tempList->next=NULL;
    if(list==NULL)
        *list=tempList;
    else
    {
        while(temp->next!=NULL)
            temp=temp->next;
        temp->next=tempList;
    }
    tempList=NULL;
}