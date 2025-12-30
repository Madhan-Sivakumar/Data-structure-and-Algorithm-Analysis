#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#include<conio.h>
#include<ctype.h>

struct node{
    int data;
    struct node *next;
};

struct node *head=NULL;

void bhopal(int data){
    struct node *new=malloc(sizeof(struct node));
    new->data=data;
    new->next=NULL;
    if(head==NULL){
        head=new;
    }
    else{
        struct node *temp=head;
        while(temp->next!=NULL){
            temp=temp->next;
        }
        temp->next=new;
    }
}

void dopal()
{
    struct node *temp=head;
    while(temp!=NULL){
        printf("%d ",temp->data);
        temp=temp->next;
    }
}

void beepal(int pos){
    struct node *temp=head;
    if(pos==1){
        head=temp->next;
        free(temp);
        return;
    }
    for(int i=1;i<pos-1;i++){
        temp=temp->next;
    }
    struct node *del=temp->next;
    temp->next=del->next;
    free(del);
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
    dopal();
    int pos;
    printf("\nEnter Last to delete first node: ");
    scanf("%d",&pos);
    beepal(pos);
    dopal();
}
