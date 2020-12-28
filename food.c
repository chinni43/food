#include<stdio.h>
void main()
{
int pi,b,p,f,s;
int op;
printf("1.pizza \n 2.burger \n 3.pasta \n 4.french fries \n 5.sandwich \n ");
printf("enter the price of the food \n");
scanf("%d%d%d%d%d",&pi,&b,&p,&f,&s);
printf("enter your choice \n");
scanf("%d",&op);
switch(op)
{
case 1 :
printf("food item : pizza \n");
printf("price - Rs %d ",pi);
break;
case 2 :
printf("food item : burger \n");
printf("price - Rs %d ",b);
break;
case 3 :
printf(" food item : pasta \n");
printf("price -Rs %d ",p);
break;
case 4 :
printf("food item : french fries \n");
printf(" price - Rs %d ",f);
break;
case 5 :
printf("food item : sandwich \n");
printf(" price - Rs %d ",s);
break;
}
}
