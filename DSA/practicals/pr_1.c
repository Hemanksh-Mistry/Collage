#include <stdio.h> 
// #include <conio.h> 

void main()
{

int arr[10], a, x=-1, m, ans=1, i, z=0;

while (ans == 1)
{
printf ("\n Menu: \n 1. Insert \n 2. Delete \n 3. Search \n 4. Display \n 5. Exit \n Enter your choire: ");
scanf("%d",&a);
switch (a)
{
case 1:

printf ("\n Enter number: ");
scanf ("%d", &m);

arr [++x] = m;

break;

case 2:

printf ("\n Enter Index to delete!");
scanf("%d", &m);
for (i=m;i<=x;i++)
{
	arr[i]=arr[i+1];
}
x--;
break;
case 3:
printf("\n Enter no u want to search:");
scanf("%d", &m);
for (i=0;i<=x;i++)
{
	if (arr[i] == m)
	{
	printf("the no is at index %d", i);
	z++;
	break;
	}
}
if (z == 0)
{
	printf("no not found");
}
break;
case 4:
printf("\n[");
for (i=0;i<=x;i++)
printf("%d, ", arr[i]);
printf("]");
break;
case 5:
ans = 0;
break;
default:
printf("\ninvalid input");
break;
}
}
}