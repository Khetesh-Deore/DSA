#include <bits/stdc++.h>
using namespace std;
class node
{
public:
	int data;
	node *next;
	node *back;

public:
	node(int data1, node *next1,node *back1)
	{
		data = data1;
		next = next1;
		back=back1;
	}
	node(int data1)
	{
		data = data1;
		next = nullptr;
		back=nullptr;
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
	node *head=new node(arr[0]);
	node *prev=head;
	for(int i=1; i<arr.size();i++){
		node *temp = new node(arr[i],nullptr,prev);
		prev->next=temp;
		prev=temp;
	}
	
	return head;
}



int main()
{
	vector<int> arr = {12, 4, 6, 8};
	node *head = ArrToDLL(arr);
	print(head);
	cout << endl;
	
	
}