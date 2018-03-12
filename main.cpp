#include<stdio.h>
#include<iostream>
#include<stdlib.h>
using namespace std;


typedef struct node {
	int element;
	int num;
	struct node* next;
} Link, *List;

List bulitLink(List head)
{
	List p, s, h;
	int x,num=0;

	head = (List)malloc(sizeof(Link));
	head->next = NULL;
	h = head;
	s = h;
	int i = 0;
	cout << "输入几个数:"<<endl;
	while(scanf_s("%d", &x) != EOF)
	{
		p = (List)malloc(sizeof(Link));
		p->element = x;
		p->num = num++;
		p->next = NULL;
		s->next = p;
		s = p;
	}
	return h;
}

void findk(List head,int k) {
	List i=head->next, j=head->next;
	while (j != NULL && j->num<k-1) {
		j = j->next;
	}
	while (1) {
		j = j->next;
		if (j!=NULL) 	i = i->next;
		else break;
	}
	cout << i->element;
}

int main() {
	List head=NULL;
	int fk;
	head= bulitLink(head);
	cout << "查找倒数第几个数？"<<endl;
	cin >> fk;
	findk(head, fk);
}