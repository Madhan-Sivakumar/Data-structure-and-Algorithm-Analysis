#include<stdio.h>
#define MAX 5

int stack[MAX];
int top = -1;

int main(){
    int n, val;
   
    printf("Enter size of stack(Max=5)");
    scanf("%d", &n);
   
    if(n>MAX){
        printf("stack overflow\n");
        return 0;
       
    }
   
    for(int i=0; i<n; i++)
    {
        scanf("%d", &val);
        top++;
        stack[top] = val;
       
    }
   
    for(int i=top; i>=0 ; i--)
    {
        printf("%d ",stack[i]);
       
    }
   
}
