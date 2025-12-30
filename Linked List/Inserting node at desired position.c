#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
};

struct node *head=NULL;

void append(int data){
    struct node *newNode=malloc(sizeof(struct node));
    newNode->data=data;
    newNode->next=NULL;
    if(head==NULL){
        head=newNode;
    }
    else{
        struct node *temp=head;
        while(temp->next!=NULL){
            temp=temp->next;
        }
        temp->next=newNode;
        
    }
}

void display(){
    struct node *temp=head;
    while(temp!=NULL){
        printf("%d ",temp->data);
        temp=temp->next;
    }
}

void insert(int pos,int newdata){
    struct node *newnode=malloc(sizeof(struct node));
    newnode->data=newdata;
    // newnode->next=NULL;
    int i=1;
    if(pos==1){
        newnode->next=head;
        head=newnode;
        return;
    }
    struct node *temp=head;
    while(i<pos-1 && temp!=NULL){
        temp=temp->next;
        i++;
    }
    newnode->next=temp->next;
    temp->next=newnode;
    
}

int main()
{
    int n,data;
    printf("Enter size: ");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&data);
        if(data>0){
            append(data);
        }
    }
    display();
    int pos,newdata;
    printf("\nEnter the postion and data of the linked list: ");
    scanf("%d %d",&pos,&newdata);
    insert(pos,newdata);
    printf("\nList after inserting a node: ");
    display();
}
