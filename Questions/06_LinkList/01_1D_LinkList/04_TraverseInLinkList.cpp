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

int SearchElement(node* head, int val){
	node* temp=head;
	
	while(temp){
		if(temp->data==val)return 1;
		temp=temp->next;
		
	}
	return 0;
}

int main(){
	vector<int> arr={12,4,6,8};
	node* head=ArrToListList(arr);
	node* temp=head;
	int count=0;
	while(temp){
		cout<<temp->data<<" ";
		temp=temp->next;
		count++;
	}
	cout<<"\nlength:"<<count;  /// length;
   cout<<"\nElement is:"<<SearchElement(head,9);


	 //temp=head;
	// while(temp){
	// 	cout<<temp->next<<" ";
	// 	temp=temp->next;
	// }

}