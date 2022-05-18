#ifndef LINKEDLISTS_H_INCLUDED
#define LINKEDLISTS_H_INCLUDED
#include <stdio.h>
#include <stdlib.h>


typedef struct node;
typedef  struct node * nptr;
typedef nptr lnkedlist;
nptr creat_nodes(int);
lnkedlist creat_linkedlist(int);
void prt_lnkedlist(nptr );
void assign_lnkedlist(nptr);
void update_lnkedlist(nptr);
void update2_lnkedlist(nptr ,int ,int );
int get_lnkdlist_size(nptr);
lnkedlist add2_lnkdlist(nptr);
int get_vindex_lnkedlist(lnkedlist,int);
int search_lnkdlist(lnkedlist ,int);
lnkedlist dltin_lnkdlist(nptr);



#endif // LINKEDLISTS_H_INCLUDED
