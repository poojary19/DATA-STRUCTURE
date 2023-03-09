
Conversation opened. 2 messages. All messages read.

Skip to content
Using Gmail with screen readers
Enable desktop notifications for Gmail.
   OK  No thanks
2 of 344
(no subject)
Inbox

Lekha Poojary
AttachmentsWed, Jan 25, 3:18 PM (22 hours ago)
 

Lekha Poojary <lekhapoojary702@gmail.com>
Attachments
Wed, Jan 25, 7:33 PM (18 hours ago)
to nishapoojary572



---------- Forwarded message ---------
From: Lekha Poojary <lekhapoojary702@gmail.com>
Date: Wed, Jan 25, 2023 at 3:18 PM
Subject:
To: Lekha Poojary <lekhapoojary702@gmail.com>




3
 Attachments
  •  Scanned by Gmail
#include<stdio.h>
#include<stdlib.h>
struct Node
{
int data;
struct Node*left,*right;
};
typedef struct Node*NODE;
NODE  newNode(int data)
{
NODE node=(NODE)malloc(sizeof(struct Node));
node->data=data;
node->left=node->right=NULL;
return(node);
}
NODE insertLevelOrder(int arr[],int i,int n)
{
NODE root=NULL;
if(i<n)
{
root=newNode(arr[i]);
root->left=insertLevelOrder(arr,2*i+1,n);
root->right=insertLevelOrder(arr,2*i+2,n);
}
return root;
}
void inOrder(NODE root)
{
if(root!=NULL)
{
inOrder(root->left);
printf("%d",root->data);
inOrder(root->right);
}
}
int main()
{
int arr[]={1,2,3,4,5,6};
int n=sizeof(arr)/sizeof(arr[0]);
NODE root=insertLevelOrder(arr,0,n);
printf("root of the tree:\n");
inOrder(root);
}
