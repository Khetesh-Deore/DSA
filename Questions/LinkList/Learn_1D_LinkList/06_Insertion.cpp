#include <bits/stdc++.h>
using namespace std;
class node
{
public:
	int data;
	node *next;

public:
	node(int data1, node *next1)
	{
		data = data1;
		next = next1;
	}
	node(int data1)
	{
		data = data1;
		next = nullptr;
	}
};
void print(node *head)
{
	node *temp = head;

	while (temp)
	{
		cout << temp->data << " -> ";
		temp = temp->next;
	}
	cout << "nullptr";
}

node *ArrToListList(vector<int> &arr)
{
	node *head = new node(arr[0]);
	node *mover = head;
	for (int i = 1; i < arr.size(); i++)
	{
		node *temp = new node(arr[i]);
		mover->next = temp;
		mover = temp;
	}
	return head;
}
node *InsertHead(node *head, int value)
{
	node *temp = new node(value, head);
	// temp->next=head;
	// head=temp;
	// return head;
	return temp;
}
node *InsertTail(node *head, int value)
{
	if (head == NULL)
		return new node(value);
	node *tail = new node(value);
	node *temp = head;
	while (temp->next)
	{
		temp = temp->next;
	}
	temp->next = tail;
	return head;
}
node *InsertAny(node *head, int val, int pos)
{ // k--> 1 to N+1
	if (head == NULL)
	{
		if (pos == 1)
		{
			return new node(val);
		}
		else
			return head;
	}
	if (pos == 1)
	{
		return new node(val, head);
	}
	int cnt = 0;
	node *temp = head;
	while (temp)
	{
		cnt++;
		if (cnt == (pos - 1))
		{
			node *ne = new node(val, temp->next);
			temp->next = ne;
			break;
		}
		temp = temp->next;
	}
	return head;
}

node *InsertByValue(node *head, int dt, int val )
{ // k--> 1 to N+1
	if (head == NULL)
	{
		return NULL;
	}
	if (head->data== val)
	{
		return new node(dt, head);
	}
	
	node *temp = head;
	while (temp->next)
	{
	
		if ( temp->next->data==val)
		{
			node *ne = new node(dt, temp->next);
			temp->next = ne;
			break;
		}
		temp = temp->next;
	}
	return head;
}


int main()
{
	vector<int> arr = {12, 4, 6, 8};
	node *head = ArrToListList(arr);
	print(head);
	cout << endl;
	// head=InsertHead(head,13);
	// head==InsertTail(head,11);
	// head=InsertAny(head,10,3);
	head=InsertByValue(head,10,12);
	print(head);
}