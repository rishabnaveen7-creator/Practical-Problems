// // // #include <stdio.h>

// // // int main(){
// // //     char str1[50], str2[50];
// // //     int i,len1=0,len2=0;
// // //     printf("enter first string:");
// // //     scanf("%s",str1);
// // //     printf("enter second string:");
// // //     scanf("%s",str2);
// // //     for(i=0;str1[i]!='\0';i++)
// // //     {
// // //         len1++;
// // //     }
// // //     for(i+0;str2[i]!='\0';i++)
// // //     {
// // //         len2++;
// // //     }
// // //     printf("length of first string = %d\n",len1);
// // //     printf("length of second string = %d\n",len2);
// // //     for(i=0;i<=len2;i++)
// // //     {
// // //         str1[len1 + i]=str2[i];

// // //     }
// // //     printf("concatenated strring = %s\n",str1);
// // //     return 0;
// // // }
// // // #include <stdio.h>

// // // int main(){
// // //     char str1[50],str2[50];
// // //     char *p1,*p2;
// // //     printf("Enter a string:");
// // //     scanf("%s",str1);
// // //     p1=str1;
// // //     p2=str2;
// // //     while(*p1 !='\0')
// // //     {
// // //         *p2=*p1;
// // //         p1++;
// // //         p2++;

// // //     }
// // //     *p2='\0';
// // //     printf("original string: %s\n",str1);
// // //     printf("Copied string: %s\n",str2);
// // //         return 0;
// // // }
// // // #include <stdio.h>
// // // struct employee
// // // {
// // //     int id;
// // //     char name[20];
// // //     int salary;
// // // };
// // // int main(){
// // //   struct employee emp;
// // //   struct employee*ptr;
// // //   ptr=&emp;
// // //   printf("Enter ID:");
// // //   scanf("%d",&ptr->id);
// // //   printf("Enter Name:");
// // //   scanf("%s",ptr->name);
  
// // //   printf("Enter Salary:");
// // //   scanf("%d",&ptr->salary);

// // //   printf("\nEmployee Details\n");
// // //   printf("ID :%d\n",ptr->id);
// // //   printf("Name :%s\n",ptr->name);
// // //   printf("Salary: %d\n",ptr->salary);
  
// // //     return 0;
// // // }
// // #include <stdio.h>
// // #include <stdlib.h>
// // struct node 
// // {
// //   int data;
// //   struct node*next;
// // };
// // int main(){
// //   struct node*head=NULL,*newnode,*temp;
// //   int choice=1;
// //   while(choice)
// // {
// //   newnode=(struct node*)malloc(sizeof(struct node));
// //   printf("Enter data:");
// //   scanf("%d",&newnode->data);
// //   newnode->next=NULL;
// //   if(head==NULL)
// //   {
// //     head=newnode;
// //     temp=newnode;
// //   }
// //   else{
// //     temp->next=newnode;
// //     temp=newnode;
// //   }
// //   printf("Do you want to continue? (1/0):");
// //   scanf("%d",&choice);
// // }
// // temp=head;
// // printf("Singly Linked List:");
// // while(temp!=NULL)
// // {
// //   printf("%d->",temp->data);
// //   temp=temp->next;
// // }
// // printf("NULL\n");
// //   return 0;
// // }
// // #include <stdio.h>
// // int main()
// // {
// //     int n,i,j,a[10];
// //     printf("Enter size: ");
// //     scanf("%d",&n);
// //     for(i=0;i<n;i++)
// //     {
// //         printf("Enter element [%d][%d]: ",i,i);
// //         scanf("%d",&a[i]);
// //     }
// //     printf("\nMatrix is:\n");
// //     for(i=0;i<n;i++)
// //     {
// //         for(j=0;j<n;j++)
// //         {
// //             if(i==j)
// //                 printf("%d ",a[i]);
// //             else
// //                 printf("0 ");
// //         }
// //         printf("\n");
// //     }
// //     return 0;
// // }
// #include <stdio.h>
// include <stdio.h>
// void tower(int n,char from,char to,char aux){
//     if(n==1){
//         printf("Move disk from 1 from %c to %c\n",from,to);
//         return;
//     }
// tower(n-1,from,aux,to);
// printf("Move disk %d from %c to %c\n",n,from,to);
// tower(n-1,aux,to,from);
// }
//     int main(){
//     int n;
//     printf("Enter number of disks:");
//     scanf("%d",&n);
//     tower(n,'A','C','B');
//     return 0;
// }
// #include <stdio.h>
// void tower(int n,char from, char to,char aux){
//     if(n==1){
//         printf("Move disk from 1 from %c to %c\n",from,to);
//         return;
//     }
//     tower(n-1,from,aux,to);
//     printf("Move disk %d from %c to %c\n",n,from,to);
//     tower(n-1,aux,to,from);
// }
// int main(){
//     int n;
//     printf("Enter the number of disks:");
//     scanf("%d",&n);
//     tower(n,'A','C','B');
//     return 0;
// }   
// #include <stdio.h>

// int main(){
//     char str1[50], str2[50];
//     int i, len1=0,len2=0;
//     printf("Enter first string:");
//     scanf("%s",str1);
//     printf("Enters second string:");
//     scanf("%s",str2);
//     for(i=0;str1[i]!='\0';i++)
//     {
//         len1++;
//     }
//     for(i=0;str2[i]!='\0';i++)
//     {
//         len2++;
//     }
//     printf("Length of first string=%d\n",len1);
//     printf("Length of second string=%d\n",len2);
//     for(i=0;i<=len2;i++)
//     {
//         str1[len1 + i]=str2[i];
//     }
//     printf("Concatenated string=%s\n",str1);
//     return 0;
// }
// #include <stdio.h>

// int main(){
//     char str1[50], str2[50];
//     int i, len1=0,len2=0;
//     printf("Enter first string:");
//     scanf("%s",str1);
//     printf("Enter second string:");
//     scanf("%s",str2);
//     for(i=0;str1[i]!='\0';i++)
//     {
//         len1++;
//     }
//     for(i=0;str1[i]!='0';i++)
//     {
//         len2++;
//     }
//     printf("Length of first string=%d\n",len1);
//     printf("Length of second string=%d\n",len2);
//     for(i=0;i<=len2;i++)
//     {
//         str1[len1+i]=str2[i];
//     }
//     printf("Concatenated string=%s\n",str1);
//     return 0;
// }
// #include <stdio.h>

// int main(){
//     char str1[50],str2[50];
//     char*p1,*p2;
//     printf("Enter a string:");
//     scanf("%s",str1);
//     p1=str1;
//     p2=str2;
//     while(*p1 !='\0')
//     {
//         *p2=*p1;
//         p1++;
//         p2++;
//     }
//     *p2='\0';
//     printf("Original string:%s\n",str1);
//     printf("Copied string:%s\n",str2);
//     return 0;
// }
// #include <stdio.h>
// struct employee
// {
//     int id;
//     char name[20];
//     int salary;
// };
// int main(){
//     struct employee emp;
//     struct employee*ptr;
//     ptr=&emp;
//     printf("Enter ID:");
//     scanf("%d",&ptr->id);
//     printf("Enter Name:");
//     scanf("%s",ptr->name);
//     printf("Enter Salary:");
//     scanf("%d",&ptr->salary);
//     printf("\nEmployee Details\n");
//     printf("ID :%d\n",ptr->id);
//     printf("Name :%s\n",ptr->name);
//     printf("Salary :%d\n",ptr->salary);

    
//     return 0;
// }
// #include <stdio.h>
// #include <stdlib.h>
// int main(){
//     int *arr,n,i;
//     printf("Enter number of elements:");
//     scanf("%d",&n);
//     arr=(int *)malloc(n*sizeof(int));
//     if(arr==NULL)
//     {
//         printf("Memory allocation failed");
//         return 0;
//     }
//     printf("Enter %d elements:\n",n);
//     for(i=0;i<n;i++)
//     {
//         scanf("%d",&arr[i]);
//     }
//     printf("Array elements are:\n");
//     for ( i = 0; i < n; i++)
//     {
//         printf("%d",arr[i]);
//     }
//     free(arr);
//     return 0;
// }
// #include <stdio.h>
// #define MAX 5
// int queue[MAX],front=-1,rear=-1;
// int main()
// {
//     int ch,item,i;
//     do
//     {
//         printf("\n1.Insert\n2.Delete\n3.Display\n4.Exit");
//         printf("\nEnter Choice:");
//         scanf("%d",&ch);
//         switch(ch)
//         {
//             case 1:
//                 if(rear==MAX-1)
//                     printf("Queue Overflow");
//                 else
//                 {
//                     if(front==-1)
//                         front=0;
//                     printf("Enter item:");
//                     scanf("%d",&item);
//                     queue[++rear]=item;
//                 }
//                 break;
//             case 2:
//                 if(front==-1 || front>rear)
//                     printf("Queue Underflow");
//                 else
//                 {
//                     printf("Deleted item=%d",queue[front++]);
//                 }
//                 break;
//             case 3:
//                 if(front==-1 || front>rear)
//                     printf("Queue is Empty");
//                 else
//                 {
//                     printf("Queue elements:\n");
//                     for(i=front;i<=rear;i++)
//                         printf("%d\n",queue[i]);
//                 }
//                 break;
//             case 4:
//                 break;
//             default:
//                 printf("Invalid choice");
//         }
//     } while(ch!=4);
//     return 0;
// }
  