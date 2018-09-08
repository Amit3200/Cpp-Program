#include<iostream>
#include<windows.h>
using namespace std;
struct node{
	int data;
	node *next;
}*head=NULL,*tail=NULL;

void insert(){
	int data;
	cout<<"\n > > Value : ";
	cin>>data;
	cout<<"\n";
	node *temp=new node;
	temp->data=data;
	temp->next=NULL;
	if(tail==NULL){
		head=temp;
		tail=temp;
	}
	else{
		tail->next=temp;
		tail=temp;
	}
}
void remove(){
	if(head==NULL){
		cout<<"\n Empty Queue\n";
	}
	else{
		head=head->next;
	}
}

void show(){
	cout<<"\n Queue Here : ";
	node *ptr=head;
	while(ptr!=NULL){
		cout<<ptr->data<<" ";
		ptr=ptr->next;
	}
	cout<<"\n";
}

int main(){
	while(true){
		system("cls");
		int ch;
		cout<<"\n 1 > Insert \n";
		cout<<"\n 2 > Delete \n";
		cout<<"\n 3 > Show   \n";
		cout<<"\n > > ";
		cin>>ch;
		if(ch==1){
			insert();
			int t;
			cout<<"\n";
			cin>>t;
		}
		if(ch==2){
			remove();
			int t;
			cout<<"\n";
			cin>>t;
		}
		if(ch==3){
			show();
			int t;
			cout<<"\n";
			cin>>t;
		}
	}
}
