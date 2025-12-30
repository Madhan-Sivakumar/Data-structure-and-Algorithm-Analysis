#include <stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *next;
};

struct node *front=NULL;
struct node *rear=NULL;

void enqueue(int data){
    struct node *newnode=malloc(sizeof(struct node));
    newnode->data=data;
    newnode->next=NULL;
    if(front==NULL){
        front=rear=newnode;
    }
    else{
        rear->next=newnode;
        rear=newnode;
        rear->next=front;
    }
}

void kaami(){
    if(front==NULL){
        printf("No elements in the list.....");
    }
    else{
    struct node *temp=front;
    do{
        printf("%d ",temp->data);
        temp=temp->next;
    }while(temp!=front);
    }
}

int main()
{
    int a,b;
    printf("Enter the size of the queue: ");
    scanf("%d",&a);
    printf("Enter the queue elements: ");
    for(int i=0;i<a;i++){
        scanf("%d",&b);
        enqueue(b);
    }
    kaami();
}
