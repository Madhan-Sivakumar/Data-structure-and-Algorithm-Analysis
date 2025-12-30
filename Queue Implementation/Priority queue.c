#include <stdio.h>
#include<stdlib.h>
struct node{
    int data;
    int priority;
    struct node *next;
};

struct node *front=NULL;

void enqueue(int data,int priority){
    struct node *newnode=malloc(sizeof(struct node));
    newnode->data=data;
    newnode->priority=priority;
    newnode->next=NULL;
    if(front==NULL || priority<front->priority){
        newnode->next=front;
        front=newnode;
    }
    else{
        struct node *temp=front;
        while(temp->next!=NULL && temp->next->priority <= priority){
            temp=temp->next;
        }
        newnode->next=temp->next;
        temp->next=newnode;
    }
}

void display(){
    if(front==NULL){
        printf("Queue is GAAALIII..");
        return;
    }
    struct node *temp=front;
    printf("Priority Queue: \n");
    while(temp!=NULL){
        printf("%d, p=%d\n",temp->data,temp->priority);
        temp=temp->next;
    }
}

int main()
{
    int a,b,p;
    printf("Enter the size of the priority queue: ");
    scanf("%d",&a);
    printf("Enter %d elements\n",a);
    for(int i=0;i<a;i++){
        printf("Enter data and its priority %d: ",i+1);
        scanf("%d %d",&b,&p);
        enqueue(b,p);
    }
    display();
    
}
