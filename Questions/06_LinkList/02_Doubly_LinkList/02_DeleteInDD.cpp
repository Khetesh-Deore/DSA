#include <bits/stdc++.h>
using namespace std;
class node
{
public:
	int data;
	node *next;
	node *back;

public:
	node(int data1, node *next1, node *back1)
	{
		data = data1;
		next = next1;
		back = back1;
	}
	node(int data1)
	{
		data = data1;
		next = nullptr;
		back = nullptr;
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

node *ArrToDLL(vector<int> &arr)
{
	node *head = new node(arr[0]);
	node *prev = head;
	for (int i = 1; i < arr.size(); i++)
	{
		node *temp = new node(arr[i], nullptr, prev);
		prev->next = temp;
		prev = temp;
	}

	return head;
}
node *DeleteHead(node *head)
{
	if (head == NULL || head->next == NULL)
		return head;
	node *temp = head;
	head = head->next;
	head->back = nullptr;
	temp->next = nullptr;
	delete temp;
	return head;
}
node *DeleteTail(node *head)
{
	node *tail = head;
	while (tail->next)
	{
		tail = tail->next;
	}
	node *prev = tail->back;
	tail->back = nullptr;
	prev->next = nullptr;
	delete tail;
	return head;
}
node *DeleteKthElement(node *head, int k)
{
	if (head == NULL)
		return head;
	node *knode = head;
	int cnt = 0;
	while (knode)
	{
		cnt++;
		if (cnt == k)
			break;
		knode = knode->next;
	}
	node *prev = knode->back;
	node *front = knode->next;
	if (prev == NULL && front == NULL)
	{
		return NULL;
	}
	else if (prev == NULL)
	{
		return DeleteHead(head);
	}
	else if (front == NULL)
	{
		return DeleteTail(head);
	}
	prev->next = front;
	front->back = prev;

	knode->back = nullptr;
	knode->next = nullptr;
	delete knode;
	return head;
}
node *DeleteByData(node *head, int dt)
{
	if (head == NULL)
		return head;
	node *knode = head;

	while (knode)
	{

		if (knode->data == dt)
			break;
		knode = knode->next;
	}
	node *prev = knode->back;
	node *front = knode->next;
	if (prev == NULL && front == NULL)
	{
		return NULL;
	}
	else if (prev == NULL)
	{
		return DeleteHead(head);
	}
	else if (front == NULL)
	{
		return DeleteTail(head);
	}
	prev->next = front;
	front->back = prev;

	knode->back = nullptr;
	knode->next = nullptr;
	delete knode;
	return head;
}
void DeleteNode(node* temp){
	node* prev=temp->back;
	node *front=temp->next;
	if(front==NULL){
		prev->next=nullptr;
		temp->back=nullptr;
		delete temp;
		return;
	}
	prev->next=front;
	front->back=prev;

	temp->back=temp->next=nullptr;
	delete temp ;
}

int main()
{
	vector<int> arr = {12, 4, 6, 8};
	node *head = ArrToDLL(arr);
	print(head);
	cout << endl;
	// head=DeleteHead(head);
	// head=DeleteTail(head);
	// head=DeleteKthElement(head,4);
	//head = DeleteByData(head, 8);
	DeleteNode(head->next->next);
	print(head);
}