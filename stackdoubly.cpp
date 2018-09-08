#include<bits/stdc++.h>
using namespace std;
struct node{
	int data;
	node  *next,*prev;
}*head=NULL,*mid=NULL;
int top=0;
void push(){
	int p;
	cout<<"\n  Enter the value : ";
	int data;
	cin>>data;
	node *temp=new node;
	temp->data=data;
	temp->next=head;
	temp->prev=NULL;
	top++;
	if(head==NULL){
		head=temp;
		mid=temp;
	}
	else{
		head->prev=temp;
		if(top & 1){
			mid=mid->prev;
		}
	}
	head=temp;
	cin>>p;
}

int middle(){
	int k;
	if(mid==NULL){
		return -1;
	}
	cout<<"\n Middle Element is here : "<<mid->data;
	cin>>k;
	return mid->data;
}

void print(){
	int l;
	node *ptr=head;
	cout<<"\n  Data Here    : ";
	while(ptr!=NULL){
		cout<<ptr->data<<" ";
		ptr=ptr->next;
	}
	cout<<"\n  Middle Element Here : "<<mid->data;
	cin>>l;
}


int removemid(){
	int l;
	if(head==NULL)
	return -1;
	top--;
	node *curr=mid;
	if(top&1){
		mid=mid->prev;
		mid->next=curr->next;
	}
	else{
		mid=mid->next;
		if(mid!=NULL){
		mid->prev=curr->prev;}
		else{
			head=NULL;
		}
	} 
	cout<<"\n  Deleted Middle Element is :  "<<curr->data<<"\n";
	cin>>l;
}

int pop(){
	top--;
	int y;
	if(head==NULL){
		cout<<"\n  UnderFlow  ";
		mid->next=NULL;
		mid->prev=NULL;
	}
	else{
		node *curr=head;
		head=head->next;
		int data=curr->data;
		delete curr;
		if(!(top & 1))
			mid=mid->next;
		if(top==1){
			mid=head;
			mid->next=head;
			mid->prev=head;
		}
		cout<<"\n  Popped Data  "<<data;
		cout<<"\n  Middle Data  "<<mid->data<<"\n";
	}
	cin>>y;
}

int main(){
	while(true){
		int k;
		system("cls");
		cout<<"\n  1 . Push  ";
		cout<<"\n  2 . Display  ";
		cout<<"\n  3 . Middle  ";
		cout<<"\n  4 . Pop  ";
		cout<<"\n  5 . Top  ";
		cout<<"\n  6.  Remove Mid";
		cout<<"\n  Your Choice: ";
		cin>>k;
		if(k==1){
			push();
		}
		else if(k==2){
			print();
		}
		else if(k==3){
			middle();
		}
		else if(k==4){
			pop();
		}
		else if(k==6){
			removemid();
		}
	}
}
