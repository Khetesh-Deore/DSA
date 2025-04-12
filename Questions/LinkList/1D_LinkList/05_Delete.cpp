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
	cout<<"nullptr";
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
node *removehead(node *head)
{
	node *temp = head;
	head = head->next;
	delete temp;
	// free (temp);

	return head;
}
node *removetail(node *head)
{
	if (head == NULL || head->next == nullptr)
		return NULL;
	node *temp = head;
	while (temp->next->next != NULL)
	{
		temp = temp->next;
	}
	delete temp->next;
	temp->next = nullptr;
	return head;
}
node *removek(node *head, int k)
{
	if (head == NULL)
		return head;
	node *temp = head;
	if (k == 1)
	{

		head = head->next;
		delete temp;
		return head;
	}
	int cnt = 0;
	node *previous = NULL;
	while (temp!=NULL)
	{
		cnt++;
		if (cnt == k)
		{
			previous->next = previous->next->next;
			delete temp;
			break;
		}
		previous = temp;
		temp = temp->next;
		
	}

	return head;
}

node *removeEl(node *head, int el)
{
	if (head == NULL)
		return head;
	node *temp = head;
	if (head->data == el)
	{

		head = head->next;
		delete temp;
		return head;
	}
	
	node *previous = NULL;
	while (temp!=NULL)
	{
		
		if (temp->data == el)
		{
			previous->next = previous->next->next;
			delete temp;
			break;
			
		}
		previous = temp;
		temp = temp->next;
		
	}

	return head;
}

int main()
{
	vector<int> arr = {12, 4, 6, 8, 9, 3, 4,2, 1,4,6};
	node *head = ArrToListList(arr);
	print(head);
	cout << endl;
	// head=removehead( head);
	// head=removetail(head);
	//head = removek(head, 6);
	head = removeEl(head, 4);
	print(head);
}