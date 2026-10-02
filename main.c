// #include <stdio.h>
// #include <ctype.h>
// #include <stdlib.h>
// #define MAX 100
//int values
// int stack[MAX];
// int top=-1;
// void push(int x){
//     if(top>=MAX-1){
//         printf("Stack overflow\n");
//         return;
//     }
//     stack[++top]=x;
// }
// int pop(){
//     if(top<0){
//         printf("Stack Underflow\n");
//         return-1;
//     }
//     return stack[top--];
// }
// int evaluatePostfix(char* exp)
// {
//     for(int i=0;exp[i]!='\0';i++){
//         if(isdigit(exp[i])){
//             push(exp[i]-'0');
//         }
//         else {
//             int val1=pop();
//             int val2=pop();
//             switch(exp[i]){
//                 case'+':push(val2+val1);break;
//                 case'-':push(val2-val1);break;
//                 case'*':push(val2*val1);break;
//                 case'/':push(val2/val1);break;
//             }
//         }
//     }
//     return pop();
// }
// int main(){
//     char exp[100];
//     printf("Enter postfix expression:");
//     scanf("%s",exp);
//     printf("Result:%d\n",evaluatePostfix(exp));
//     return 0;
// }
// #include <stdio.h>
// #include <ctype.h>
// #include<stdlib.h>
// #define MAX 100
// int stack[MAX];
// int top=-1;
// void push(int x){
//     if(top>=MAX-1){
//         printf("Stack overflow\n");
//         return;
//     }
//     stack[++top]=x;
// }
// int pop(){
// if(pop<0){
//     printf("Stack underflow\n");
//     return-1;
// }
// return stack[top--];
// }
// int evaluatePostfix(char* exp){
//     for(int i=0;exp[i]!='\0';i++){
//         if(isdigit(exp[i])){
//             push(exp[i]-'0');
//         }
//         else{
//             int val1=pop();
//             int val2=pop();
//             switch(exp[i]){
//                     case'+':push(val2+val1);break;
//                     case'-':push(val2-val1);break;
//                     case'*':push(val2*val1);break;
//                     case'/':push(val2/val1);break;
//                 }
//             }
//         }
//         return pop();
// }
// int main(){
//     char exp[100];
//     printf("Enter postfix expression:");
//     scanf("%s",exp);
//     printf("Result:%d\n",evaluatePostfix(exp));
//     return 0;
// }
// #include <stdio.h>

// int main(){
//     int a[20],n,i,j,min,temp;
//     printf("Enter number of elements:");
//     scanf("%d",&n);
//     printf("Enter elements\n");
//     for(i=0;i<n;i++)
//     scanf("%d",&a[i]);
//     for(i=0;i<n;i++)
//     {
//         min=i;
//         for(j=i+1;j<n;j++)
//         {
//             if(a[j]<a[min])
//             min=j;
//         }
//         temp=a[i];
//         a[i]=a[min];
//         a[min]=temp;
//     }
//     printf("Sorted elements:\n");
//     for(i=0;i<n;i++)
//     printf("%d",a[i]);
//       return 0;
// }
// #include <stdio.h>

// int main(){
//     int a[20],n,i,j,min,temp;
//     printf("Enter number of elements:");
//     scanf("%d",&n);
//     printf("Enter elements\n");
//     for(i=0;i<n;i++)
//     scanf("%d",&a[i]);
//     for(i=0;i<n;i++)
//     {
//         min=i;
//         for(j=i+1;j<n;j++)
//         {
//             if(a[j]<a[min])
//             min=j;
//         }
//         temp=a[i];
//         a[i]=a[min];
//         a[min]=temp;
//     }
//     printf("Sorted elements:\n");
//     for(i=0;i<n;i++)
//     printf("%d",a[i]);
    
//     return 0;
// }
#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node*next;
};
int main()
{
  struct node*head=NULL,*newnode,*temp;
  int choice=1;
  while(choice) 
  {
    newnode=(struct node*)malloc(sizeof(struct node));
    printf("Enter data:");
    scanf("%d",&newnode->data);
    newnode->next=NULL;
    if(head==NULL)
    {
        head=newnode;
        temp=head;
    }
    else
    {
        temp->next=newnode;
        temp=newnode;
    }
    printf("Do you want to continue?(1/0):");
    scanf("%d",&choice);
    
    temp=head;
    printf("Singly Linked List:");
    while(temp!=NULL)
    {
        printf("%d->",temp->data);
        temp=temp->next;
    }
    printf("NULL\n");
  }
  return 0;
}