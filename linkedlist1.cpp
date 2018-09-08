#include<iostream>
using namespace std;
class node{
	public:
		int a;
		node *link;
}*head=NULL;

void adder(int temp){
	int g;
	node *tempo=new node;
	if(head==NULL){
		tempo->a=temp;
		head=tempo;
		tempo->link=NULL;
	}
	else{
		tempo->a=temp;
		tempo->link=head;
	}
	cin>>g;
}

void display(){
		node *temp=head;
		if(head==NULL){
			cout<<"\nEmpty list";
		}
		cout<<"\n See : ";
		while(temp!=NULL){
			cout<<temp->a<<" ";
			temp=temp->link;
		}
}

int main(){
	
	int temp,ch,k,f;
	while(1){
	system("cls");
	cout<<"1. Create \n";
	cout<<"2. Display \n";
	cin>>ch;
	if(ch==1){
		cout<<"Enter the number : ";
		cin>>temp;
		adder(temp);
		display();
		cin>>f;
	}
	else{
		display();
		cin>>f;
	}
	cout<<"\n Enter 0 to exit ";
	cin>>k;
	if(k==0){
		break;
	}

}
}

