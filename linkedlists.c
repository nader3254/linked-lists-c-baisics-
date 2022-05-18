#include "linkedlists.h"


typedef struct node
{
    int data,indx;
    struct node * next ;
}node;
//////////////////////////////////////////////
typedef  struct node * nptr;
typedef nptr lnkedlist;

 lnkedlist creat_linkedlist(int n);
 lnkedlist add2_lnkdlist(nptr ln5);
 lnkedlist dltin_lnkdlist(nptr lns);

 nptr creat_nodes(int x)
{
    nptr tmp ,nn;
    nn=NULL;//nn->indx=0

    for (int i=0;i<x;i++)
    {
        tmp =(nptr)malloc(sizeof(node));
        tmp->indx=i+1;tmp->next=NULL;
        if(nn==NULL){nn=tmp; }
        else
        { nptr p ;p=nn;
          while(p->next!= NULL)
             {p=p->next; }
               p->next=tmp;//
               }
    }//
     return nn;
}
 lnkedlist creat_linkedlist(int n)
{
    // printf("thank you\n");
    lnkedlist ln;nptr v;
   ln=creat_nodes(n);
   //ln->hd =(nptr)v;
   //v=ln;
  //printf("thank you\n");
return ln;
}
void prt_lnkedlist(nptr ln2)
{//int ctr=0;
    while(ln2!=NULL)
    {
        printf("linkedlist node %d : %d \n",ln2->indx,ln2->data);
     //  printf("ctr %d \n",ctr);ctr++;
        ln2=ln2->next;
        //printf("thank you\n");
    }
}
void assign_lnkedlist(nptr ln3)
{
     while(ln3!=NULL)
     {
        printf("enter value of node %d : ",ln3->indx);scanf("%d",&ln3->data);
     //  printf("ctr %d \n",ctr);ctr++;
        ln3=ln3->next;
        //printf("thank you\n");
    }
}
void update_lnkedlist(nptr ln4)
{
    int index; printf("enter index of node : ");scanf("%d",&index);
     while(ln4!=NULL)
     {
      if(ln4->indx==index)
       {
           printf("enter value of node %d : ",ln4->indx);scanf("%d",&ln4->data);
       }
        ln4=ln4->next;
    }
}
void update2_lnkedlist(nptr ln4,int index,int x3)
{

     while(ln4!=NULL)
     {
      if(ln4->indx==index)
       {
          ln4->data=x3;
       }
        ln4=ln4->next;
    }
}
int get_lnkdlist_size(nptr ln6)
{
    int ctr=0;
     while(ln6!=NULL)
     {
         ctr++;
          ln6=ln6->next;
     }
     return ctr;
}

lnkedlist add2_lnkdlist(nptr ln5)
{
    int ind,dta;printf("enter index of node : ");scanf("%d",&ind);
printf("enter value of node %d : ",ind);scanf("%d",&dta);

   int sz =0;sz=get_lnkdlist_size(ln5);sz++;
  lnkedlist n =creat_linkedlist(sz);
for (int i=0;i<ind-1;i++)
    { int r;r=ln5->data;
        update2_lnkedlist(n,i+1,r);
      ln5=ln5->next;
    }

   update2_lnkedlist(n,ind,dta);

      for(int j=ind;j<sz;j++)
       {     int c;
              c=ln5->data;
              update2_lnkedlist(n,j+1,c);
             ln5=ln5->next;
      }
            return n;
}
int get_vindex_lnkedlist(lnkedlist ln7 ,int ndx)
{
    int rt=NULL;
        while(ln7!=NULL)
     {
      if(ln7->indx==ndx)
       {
        rt=ln7->data;
       }
        ln7=ln7->next;
    }return rt;
}
int search_lnkdlist(lnkedlist ln8,int value)
{
     int rt1=NULL;
        while(ln8!=NULL)
     {
      if(ln8->data==value)
       {
        rt1=ln8->indx;
       }
      // else{}
        ln8=ln8->next;

    }
    if(rt1==NULL){printf("value not found");}
    return rt1;
}
lnkedlist dltin_lnkdlist(nptr lns)
{
    int indq;printf("enter index of node : ");scanf("%d",&indq);
   int sz7 =0;sz7=get_lnkdlist_size(lns);sz7--;
  lnkedlist na =creat_linkedlist(sz7);
for (int i=0;i<indq-1;i++)
    { int rx;rx=lns->data;
        update2_lnkedlist(na,i+1,rx);
      lns=lns->next;
    }

   //update2_lnkedlist(n,ind0,dta);
      lns=lns->next; //lns=lns->next;
      for(int j=indq-1;j<sz7;j++)
       {     int ct;
              ct=lns->data;
              update2_lnkedlist(na,j+1,ct);
             lns=lns->next;
      }
            return na;
}
