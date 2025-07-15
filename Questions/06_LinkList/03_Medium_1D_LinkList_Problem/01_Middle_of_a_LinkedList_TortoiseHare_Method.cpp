#include<bits/stdc++.h>
using namespace std;

class Node
{
	public:
		int data;
		Node* next;

		Node(){
			data=0;
			next=nullptr;
		}
		Node(int data){
			this->data=data;
			next=nullptr;
		}
		Node(int data,Node* next){
			this->data=data;
			this->next=next;
		}
};

Node* ArrToListList(vector<int> &arr){
	Node* head=new Node(arr[0]);
	Node* mover=head;
	for(int i=1;i<arr.size();i++){
		Node* temp=new Node(arr[i]);
		mover->next=temp;
		mover=temp;
		
	}
	return head;
}
Node* Middle(Node* head){
	Node* slow=head;
	Node* fast=head;
	while(fast!=nullptr && fast->next!=nullptr){
		slow=slow->next;
		fast=fast->next->next;
	}
	return slow;
}


int main(){
	vector<int> arr={12,4,6,8,7};
	Node* head=ArrToListList(arr);
	cout<<head->data<<endl;
	
	Node* mid=Middle(head);
	cout<<"Middle of the Given Linklist is:"<<mid->data<<endl;
}
