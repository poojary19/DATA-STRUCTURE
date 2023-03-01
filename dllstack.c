
#include<stdio.h>
#include<stdlib.h>
///Doubly linked list(DLL) of Employee Data with the fields:SSN,Name,Dept;
///Designation,Sal,phno
struct node
{
char ssn[10],name[10],dept[15],design[10],phno[15];
int sal;
struct node*llink;
struct node*rlink;
};
typedef struct node*NODE;
NODE temp ,FIRST=NULL,END=NULL;
NODE getnode()
{
NODE x;
x=(NODE)malloc(sizeof(struct node));
return x;

}
void read()
{
temp=getnode();
temp->llink=NULL;
temp->rlink=NULL;
printf("Enter SSN:");
scanf("%s",temp->ssn);
printf("Enter name:");
scanf("%s",temp->name);
printf("Enter Dept:");
scanf("%s",temp->dept);
printf("Enter designation:");
scanf("%s",temp->design);
printf("Enter Phno:");
scanf("%s",temp->phno);
printf("Enter salary:");
scanf("%d",&temp->sal);
return;
}
void Insertionfront()
{
printf("Enter the details of the employee\n");
read();
if(FIRST==NULL)
FIRST=temp;
else
{
temp->rlink=FIRST;
FIRST->llink=temp;
FIRST=temp;
}
}
void Deletionfront()
{
temp=FIRST;
if(FIRST==NULL)
{
printf("List is empty");
}
else if(FIRST==END)
{
printf("Deletion element is%s\n",temp->ssn);
FIRST=NULL;
END=NULL;
free(temp);
}
else
{
printf("Delected element is%s\n",temp->ssn);
FIRST=FIRST->rlink;
FIRST->llink=NULL;
free(temp);
}
return;
}
void display()
{
temp=FIRST;
printf("employee details:\n");
if(FIRST==NULL)
{
printf("No employee records found\n");
}
else
{
while(temp!=END)
{
printf("%s\t%s\t%s\t%s\t%s\t%d\n",temp->ssn,temp->name,temp->dept,temp->design,temp->phno,temp->sal);
temp=temp->rlink;
}
//printf("%s\t%s\t%s\t%s\t%s\t%d\n",temp->ssn,temp>-name,temp->dept,temp->design,temp->phno,temp->sal);
}
return;
}
void main()
{
int choice;
while(1)
{
printf("-------------------------MENU-------------------------\n");
printf("\n1-Push in DLL");
printf("\n2-Pop in DLL");
printf("\n3-Display from DLL");
printf("\n4-Exit\n");
printf("-----------------------------------------------------\n");
printf("Enter your choice:");
scanf("%d",&choice);
switch(choice)
{
case 1:Insertionfront();
break;
case 2:Deletionfront();
break;
case 3:display();
break;
case 4:exit(0);
default:printf("Invalid choice\n");
}
}
}






















