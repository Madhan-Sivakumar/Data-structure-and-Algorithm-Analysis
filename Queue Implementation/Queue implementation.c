#include <stdio.h>
#include<string.h>
#define max 5

int queue[max];
int front=-1,rear=-1;

int main()
{
    int n,value;
    printf("Enter the no.of elements to insert (max %d): ",max);
    scanf("%d",&n);
    if(n>max){
        printf("Queue Overflow!! Add panna mudiyathu\n");
        return 0;
    }
    front=0;
    printf("Enter the elements: ");
    for(int i=0;i<n;i++){
        scanf("%d",&value);
        queue[++rear]=value;
    }
    printf("Queue stored vaues: ");
    for(int i=front;i<=rear;i++){
        printf("%d ",queue[i]);
    }
    return 0;
}
