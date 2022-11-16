#include <stdio.h>
#include <stdlib.h>
#define N 5
void insert(int);
void delet();
void display();
int queue[N];
int rear = -1;
int front = -1;
int main()
{
int item,choice;
while (1)
{
printf("\n1.Insert element to queue \n");
printf("2.Delete element from queue \n");
printf("3.Display all elements of queue \n");
printf("4.Quit \n");
printf("Enter your choice : ");
scanf("%d", &choice);
switch (choice)
{
case 1:
printf("Inset the element in queue : ");
scanf("%d", &item);
insert(item);
break;
case 2:
delet();
break;
case 3:
display();
break;
case 4:
exit(1);
default:
printf("Wrong choice \n");
}
}
}
void insert(int item)
{
if (rear == N-1)
{
printf("Queue Overflow \n");
}
else
{
if(front==-1)
{
front=rear=0;
}
else
{
rear=rear+1;
}
queue[rear] = item;
}
}
void delet()
{
if (front == -1)
{
printf("Queue Underflow \n");
}
else
{
printf("Element deleted from queue is : %d\n", queue[front]);
if(front==rear)
{
front=rear=-1;
}
else
{
front = front + 1;
}
}
}
void display()
{
int i;
if (front == -1)
printf("Queue is empty \n");
else
{
printf("Queue is : \n");
for (i = front; i <= rear; i++)
printf("\t%d ", queue[i]);
}
}