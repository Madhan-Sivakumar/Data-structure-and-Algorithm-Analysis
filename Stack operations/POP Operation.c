#include<stdio.h>
#define MAX 7
int stack[MAX];
int top=-1;
int main()
{
    int a;
    printf("Enter the size of the stack (Max=%d)",MAX);
    scanf("%d",&a);
    if(a>MAX){
        printf("Too many elements!! Konjam kammiya koduu");
        return 0;
    }
    for(int i=0;i<a;i++){
        scanf("%d",&stack[i]);
        top++;
    }
    if(top==-1){
        printf("Stack Underflow!!! Onnume panna mudiyathuu");
        return 0;
    }
    else{
        printf("Thookipota value: %d\n",stack[top]);
        top--;
    }
    printf("Kadaisi aaga irukkum stack values: ");
    for(int i=top;i>=0;i--){
        printf("%d ",stack[top]);
        top--;
    }
    
}
