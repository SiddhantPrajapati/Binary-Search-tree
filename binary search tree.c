//Binary search tree
#include<stdio.h>
struct node
{
int val;
struct node *lptr;
struct node *rptr;
};
int insert();
int delete();
int indis();
int predis();
int postdis();
int tra();
int main()
{
int ch,n,i;
while(ch!=4)
{
printf("\n Enter your choise:\n 1)insert \n 2) delete \n 3) display \n 4)exit ");
scanf("%d",&ch);
switch(ch)
{
case 1:
printf("\n Enter the no of node:");
scanf("%d",&n);
for(i=0;i<n;i++)
{
insert();
}
break;
case 2:
delete();
break;
case 3:
indis();
predis();
postdis();
break;
case 4:
printf("\n Thank you");
break;
default :
printf("\n Enter valid choice.");
break;
}

}
}
int insert()
{
ind data;
struct node *root;
struct node *ptr;
ptr=(struct node)malloc(sizeof(struct node *));
if(root==NULL)
{
printf("\n Enter value:");
scanf("%d",&data);
ptr->val=data;
root=ptr->val;
}
else
{
printf("\n Enter value:");
scanf("%d",&data);
ptr->val=data;
tra();
prt->lptr=NULL;
ptr->rptr=NULL;
}
}
int tra()
{
struct node *r;
if(r<ptr->val)
{
ptr=ptr->lptr;
}
}
