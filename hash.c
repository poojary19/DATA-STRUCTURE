#include<stdio.h>

#define MAX 10
int create(int);
void linear_prob(int[],int);
void display(int[]);
void main()
{
 int a[MAX],num,i,choice;
 for(i=0;i<MAX;i++)
 a[i]=-1;
 while(1)
 {
 printf("collision handling by linear probing");
 printf("\n1.insert into hash table");
 printf("\n2.display hash table");
 printf("\n3.exit");
 printf("\nenter your choice:");
 scanf("%d",&choice);
 switch(choice)
 {
 case 1:linear_prob(a,num);
 break;
 case 2:display(a);
 break;
case 3:return;
}
}
}
int create(int num)
{
int key;
key=num%10;
return key;
}
void linear_prob(int a[MAX],int num)
{
int flag,i,key,count;
char ans='y';
while(ans=='y')
{
flag=0;
count=0;
printf("\nenter 4 digit key:");
scanf("%4d",&num);
key=create(num);
if(a[key]==-1)
a[key]=num;
else
{
printf("\ncollision detected......!!!!\n");
i=0;
while(i<MAX)
{
if(a[i]!=-1)
count++;
i++;
}
printf("collision avoided successfully using LINEAR PROBING\n");
if(count==MAX)
{
printf("\nHash table is full\n");
display(a);
return;
}
for(i=key+1;i<MAX;i++)
if(a[i]==-1)
{
a[i]=num;
flag=1;
break;
}
i=0;
while((i<key)&&(flag==0))
{
if(a[i]==-1)
{
a[i]=num;
flag=1;
break;
}
i++;
}
}
printf("\n do you wish to continue?(y/n)");

scanf("%s",&ans);
}
}
void display(int a[MAX])
{
int i;
printf("\n the hash table is\n");
for(i=0;i<MAX;i++)
printf("%d%d\n",i,a[i]);
}
