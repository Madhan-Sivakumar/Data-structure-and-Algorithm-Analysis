#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *next;
    struct node *prev;
};

struct node *head=NULL;

void bhopal(int b){
    struct node *newnode=malloc(sizeof(struct node));
    newnode->data=b;
    newnode->prev=NULL;
    newnode->next=NULL;
    if(head==NULL){
        head=newnode;
        
    }
    else{
        struct node *temp=head;
        while(temp->next!=NULL){
            temp=temp->next;
        }
        temp->next=newnode;
        newnode->prev=temp;
    }
}

void paaru(){
    struct node *temp=head;
    while(temp!=NULL){
        printf("%d ",temp->data);
        temp=temp->next;
    }
}

void dopal(){
    struct node *temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    while(temp!=NULL){
        printf("%d ",temp->data);
        temp=temp->prev;
    }
}

int main(){
    int a,b;
    printf("Enter size: ");
    scanf("%d",&a);
    for(int i=0;i<a;i++){
        scanf("%d",&b);
        bhopal(b);
    }
    printf("The data in the nodes are: ");
    paaru();
    printf("\nThe data in reversed form: ");
    dopal();
    
}
