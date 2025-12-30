#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *next;
};

struct node *head=NULL;

void bhopal(int b){
    struct node *newnode=malloc(sizeof(struct node));
    newnode->data=b;
    newnode->next=head;
    head=newnode;
}

void display(){
    struct node *temp=head;
    while(temp!=NULL){
        printf("%d ",temp->data);
        temp=temp->next;
    }
}

int main()
{
    int a,b;
    printf("Enter Size: ");
    scanf("%d",&a);
    for(int i=0;i<a;i++){
        scanf("%d",&b);
        bhopal(b);
    }
    display();
}
