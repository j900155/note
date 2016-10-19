#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
	int value;
	int ID;
	struct node  *next;

}node;
node*  findLast(node *prt)
{
	if(prt ->next == NULL)
	{
		return prt;
	}
	else
	{
		findLast(prt ->next);
	}
}
node * new(node *prt, int ID, int value)
{
	node *a;
	a = (node *) malloc(sizeof(node));
	if(!a)
	{
		return NULL;
	}
	else
	{
		if(prt ->next == NULL)
		{
			prt -> next = a;
			a ->ID = ID;
			a -> value = value;
			a ->next = NULL;
			printf("prt->next %d  a %d \n", prt->next, a);
			return a;
		}
		else
		{
			a -> next = prt ->next;
			a ->ID = ID;
			a -> value = value;
			prt -> next = a;
			printf("prt->next %d  a %d \n", prt->next, a);
			return a;	
		}
	}

}

void add_next(node *a, node *b)
{
	a->next = b;
}

void delete(node *a)
{
	node *b;
	b = a->next;
	a -> value = b ->value;
	a -> next = b->next;
	free(b);
}

void show(node *a)
{
	if(a -> next != NULL)
	{
		printf("ID %d value %d  next %d\n", a ->ID, a-> value, a->next);
		show(a ->next);
	}
	else
	{
		printf(" ID %d value %d  next %d  END\n", a ->ID, a-> value, a->next);
	}
}

int main()
{
	node *prt;
	int i;

	node a;
	a.ID = 0;
	a.value = 0;
	a.next = NULL;
	
	prt = &a;
	for(i = 1; i<9; i++)
	{
		prt = new(prt, i, i);
	}
	show(&a);
	prt = findLast(&a);
	printf("last ID %d  value %d \n", prt ->ID, prt -> value);
	printf("hello world \n");
}
