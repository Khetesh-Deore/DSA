#include<bits/stdc++.h>
using namespace std;
class node{
	public:
		int data;
		node* next;
	public:
		node(int data1,node* next1){
			data=data1;
			next=next1;
		}
		node(int data1){
			data=data1;
			next=nullptr;
		}
};

node* ArrToListList(vector<int> &arr){
	node* head=new node(arr[0]);
	node* mover=head;
	for(int i=1;i<arr.size();i++){
		node* temp=new node(arr[i]);
		mover->next=temp;
		mover=temp;
		
	}
	return head;
}

int main(){
	vector<int> arr={12,4,6,8};
	node* head=ArrToListList(arr);
	cout<<head->data<<endl;
	cout<<head->next;
}