#include<stdio.h>
#define maxsize 5
int a[maxsize],front=0,rear=0;

void insert(int ele)
{
    if((rear+1)%maxsize==front)
        printf("q is full\n");
    else
    {
        rear = (rear+1)%maxsize;
        a[rear]=ele;
    }
}

int delet()
{
    if(front==rear)
    {
        printf("empty");
        return(-9999);
    }
    else
    {
        front = (front+1)%maxsize;
        return (a[front]);
    }
}

void display()
{
    int i;
    do
    {
        i=(i+1)%maxsize;
        printf("%d",a[i]);
    }
    while(i!=rear);
}

int main()
{
    int choice,item;
    do
    {
        printf("1.insertion\n");
        printf("2.deletion\n");
        printf("3.displaying\n");
        printf("4.quiting\n");
        printf("enter your choice :\n");
        scanf("%d",&choice);
        switch (choice)
        {
        case 1 :
            {printf("enter the elements for insertion in the q\n");
            scanf("%d",&item);
            insert(item);
            break;}
        case 2 :
            {
                delet();
                break;
            }
        case 3:
            {
                display();
                break;
            }
        case 4:
            {
                break;
            }
        default :
            {printf("wrong choice\n");
        }

    }
    }
    while(choice!=4);
        return 0;
}




/* insert(10);
    display();
    insert(20);
    display();
    insert(30);
    display();
    insert(40);
    display();
    delete();
    delete();
    display();*/
