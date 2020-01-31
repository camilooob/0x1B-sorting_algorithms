#include "sort.h"

/**
 * insertion_sort_list - insertion sort list algorthms
 * @list: list pointer
 * Return: No Return
 */
 void insertion_sort_list(listint_t **list)
 {
	int n=0;
	listint_t *cur;
	cur=*list;
	if (cur->next==NULL) //there is only one element in list
		return;
	
	listint_t *end,*tmp;
	while(cur->next!=NULL)
		cur=cur->next; //reach the last node
	while(cur->prev!=NULL)
	{
		end=cur;
		tmp=cur->prev;
		cur=cur->prev;
		while(tmp) //comparison starts here
		{
			tmp=tmp->prev;
			n++;
		}
		if (n)
		{
			if (tmp==NULL) //currently compared node is smallest
			{
				tmp=*list;
				end->prev=NULL;
				end->next=tmp;
				end->next->prev=end;
				*list=end;
			}
			else
			{ //currently compared node should lie in between somewhere in sorted list
				tmp->prev->next=end;
				end->prev=tmp->prev;
				tmp->prev=end;
				end->next=tmp;
			}
			cur->next=NULL; //making the next pointer on node previous to currently compared node as NULL 
		}
	}
} 