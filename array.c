#include <stdio.h>
#include<conio.h>
#define MAX 5
int queue[MAX],front=1,rear=-1;
int main(){
    int ch,item,i;
    do
    {
        printf("\n1.insert\n2.delete\n3.display\n4.exit");
        printf("\nEnter choice:");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1: 
            if(rear==MAX-1)
            printf("queue overflow");
            else
            {
                if(front==-1)
                front=0;
                printf("enter item:");
                scanf("%d",&item);
                queue[++rear]=item;
            }
            break;
                case 2:
                if(front==-1 || front>rear)
                printf("queue underflow");
                else
                {
                    printf("deleted item=%d",queue[front++]);
                }
                break;
                case 3:
                if(front== -1 || front>rear)
                printf("queue is empty");
                else
                {
                    printf("queue elements:\n");
                    for (i=front;i<=rear;i++)
                    printf("%d\n",queue[i]);
    
                }
                break;
                case 4:
                break;
    
                default:
                printf("invalid choice");
            }
        }  while (ch !=4);
            
        return 0;
    }