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
node* insertBeforeHead(node* head,int val){
	node* newHead= new node(val,head,nullptr);
	head->back=newHead;

	return newHead;
}
node *insertBeforeTail(node* head,int val){
	if(head->next==NULL)return insertBeforeHead(head,val);
	node* tail=head;
	while(tail->next){
		tail=tail->next;
	}
	node *temp=new node(val,tail,tail->back);
	tail->back->next=temp;
	tail->back=temp;
	return head;
}
node* insertBeforeKthElement(node* head,int k, int val)

{  
	if(k==1)return insertBeforeHead(head,val);
	node* temp=head;
	int cnt=0;
	while(temp){
		cnt++;
		if(cnt==k)break;
		temp=temp->next;
	}
	
	node* newnode= new node(val,temp,temp->back);
	temp->back->next=newnode;
	temp->back=newnode;
	return head;

}
void insertBeforeNode(node* temp,int val){
	node* newnode= new node(val,temp,temp->back);
	temp->back->next=newnode;
	temp->back=newnode;
}


int main()
{
	vector<int> arr = {12, 4, 6, 8,7};
	node *head = ArrToDLL(arr);
	print(head);
	cout << endl;
	//head=insertBeforeHead(head,10);
	//head=insertBeforeTail(head,9);
	//head=insertBeforeKthElement(head,1,5);
	insertBeforeNode(head->next->next,100);
	print(head);
}