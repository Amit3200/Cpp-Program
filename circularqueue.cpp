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
	temp->next=head;
	if(tail==NULL){
		head=temp;
		temp->next=head;
		tail=head;
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
	if(tail==head){
		tail=NULL;
		head=NULL;
		if(head==NULL){
			cout<<"\n Empty Queue\n";
		}
		return ;
	}
	else{
		head=head->next;
		tail->next=head;
	}
}

void show(){
	cout<<"\n Queue Here : ";
	node *ptr=head;
	while(ptr->next!=head){
		cout<<ptr->data<<" ";
		ptr=ptr->next;
	}
	cout<<ptr->data;
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
