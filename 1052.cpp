#include<stdio.h>
#include<malloc.h>

typedef struct stu
{
	int id;
	int score;
	struct stu *pnext;
}Stu;

Stu *createStu(int n)
{
	//定义不存放有效数据的头节点
	Stu *head = (Stu *)malloc(sizeof(Stu));
	Stu *temp;
	int i;
	if(head == NULL)
		return NULL;
	head->id = -1;
	head->score = -1;
	head->pnext = NULL;
	
	temp = head;
	for(i = 0; i < n; i++)
	{
		Stu *node = (Stu *)malloc(sizeof(Stu));
		if(node == NULL)
			return NULL;
		scanf("%d", &node->id);
		scanf("%d", &node->score);
		node->pnext = NULL;
		temp->pnext = node;
		temp = node;
	}
	return head;
}

Stu *mergeStu(Stu *s1, Stu *s2)
{
	if(s1 == NULL || s2 == NULL)
		return NULL;
	//找链表1的尾结点 
	Stu *temp1 = s1;
	while(temp1->pnext != NULL)
	{
		temp1 = temp1->pnext;
	}
	Stu *temp2 = s2;
	temp1->pnext = temp2->pnext;
	free(temp2);
	return s1;
}

void sortStu(Stu *s)
{
	if(s == NULL)
		return;
	Stu *pre = NULL;
	Stu *cur = NULL;
	Stu *temp;
	for(pre = s->pnext; pre->pnext != NULL; pre = pre->pnext)
	{
		for(cur = pre->pnext; cur != NULL; cur = cur->pnext)
		{
			if(pre->id > cur->id)
			{
				//数据域交换 
				*temp = *pre;
				*pre = *cur;
				*cur = *temp;
				//指针域交换 
				temp->pnext = pre->pnext;
				pre->pnext = cur->pnext;
				cur->pnext = temp->pnext; 
			}
		}
	}
}

void printStu(Stu *s)
{
	if(s == NULL || s->pnext == NULL)
	{
		printf("invalid list!\n");
		return;
	}
	Stu *cur = s->pnext;
	while(cur != NULL)
	{
		printf("%d %d\n", cur->id, cur->score);
		cur = cur->pnext;
	}
}

void destroyStu(Stu *s)
{
	if(s == NULL)
		return;
	
	Stu *s1 = s;
	Stu *temp = NULL;
	
	while(s1 != NULL)
	{
		temp = s1->pnext;
		free(s1);
		s1 = temp;
	}
}

int main()
{
	int N, M;
	scanf("%d %d", &N, &M);
	Stu *s1 = createStu(N);
	Stu *s2 = createStu(M);
	
	Stu *s = mergeStu(s1, s2);
	
	sortStu(s);
	printStu(s);
	destroyStu(s);
	return 0;
}
