#include<iostream>
using namespace std;
struct node{
	int data,prior;
	node *next;
}*head=NULL;

void enqueue(){
	int data,prior;
	cout<<"\n Enter the data : ";
	cin>>data;
	cout<<"\n Enter the priority : ";
	cin>>prior;
	node *temp=new node;
	temp->data=data;
	temp->prior=prior;
	temp->next=NULL;
	if(head==NULL){
		temp->next=NULL;
		head=temp;
	}
	else{
		node *ptr=head;
		if(temp->prior>head->prior){
			temp->next=head;
			head=temp;
		}
		else{
		while(ptr->next!=NULL && ptr->next->prior>temp->prior){
			ptr=ptr->next;
		}
		temp->next=ptr->next;
		ptr->next=temp;
		}
	}
}
void dq(){
	if(head==NULL){
		cout<<"\n Empty \n";
		return;
	}
	else{
		head=head->next;
	}
}
void print(){
	node *ptr=head;
	cout<<"\n Values : ";
	while(ptr!=NULL){
		cout<<ptr->data<<" ";
		ptr=ptr->next;
	}
	ptr=head;
	cout<<"\n Priority : ";
	while(ptr!=NULL){
		cout<<ptr->prior<<" ";
		ptr=ptr->next;
	}
}

int main(){
	int ch,k;
	while(true){
		system("cls");
		cout<<"\n1. Enter\n";
		cout<<"\n2. Show \n";
		cout<<"\n3. Remove \n";
		cin>>ch;
		if(ch==1){
			int d;
			enqueue();
			cout<<"\n";
			cin>>d;
		}
		else if(ch==2){
			int d;
			print();
			cout<<"\n";
			cin>>d;
		}
		else if(ch==3){
			int d;
			dq();
			cout<<"\n";
			print();
			cin>>d;
		}
	}
}
