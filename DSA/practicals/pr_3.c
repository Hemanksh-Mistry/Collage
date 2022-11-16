#include<stdio.h>
#include<stdlib.h>
#define Size 4
int Top=-1, inp_array[Size];
void Push();
void Pop();
void show();
void peep();
void change();
int main()
{
int choice;	
while(1)	
{
printf("\nOperations performed by Stack");
printf("\n1.Push the element\n2.Pop the element\n3.Peep\n4.Change\n5.Show\n6.End");
printf("\n\nEnter the choice:");
scanf("%d",&choice);	
switch(choice)
{
case 1: Push();
break;
case 2: Pop();
break;
case 3: peep();
break;
case 4:
change();
show();
break;
case 5: show();
break;
case 6: exit(0);
default: printf("\nInvalid choice!!");
}
}
}
void Push()
{
int x;	
if(Top==Size-1)
{
printf("\nOverflow!!");
}
else
{
printf("\nEnter element to be inserted to the stack:");
scanf("%d",&x);
Top=Top+1;
inp_array[Top]=x;
}
}
void Pop()
{
if(Top==-1)
{
printf("\nUnderflow!!");
}
else
{
printf("\nPopped element:  %d",inp_array[Top]);
Top=Top-1;
}
}
void peep()
{
if(Top == -1)
{
printf("\nStack Underflow. No element in stack.\n");
}
else
{
printf("\nItem at top is: %d\n",inp_array[Top]);
}
}
void change()
{
int pos, val;
printf("Enter the Position:");
scanf("%d",&pos);
printf("Enter the Value:");
scanf("%d",&val);
if(Top==-1)
{
printf("stack is underflow");
}
else
{
inp_array[pos]=val;
}
}
void show()
{	
if(Top==-1)
{
printf("\nUnderflow!!");
}
else
{
printf("\nElements present in the stack: \n");
for(int i=Top;i>=0;--i)
printf("%d\n",inp_array[i]);
}
}