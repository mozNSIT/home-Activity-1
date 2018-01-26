#include <iostream>

using namespace std;

class Node{
	int data;
	Node *nextNode;
public:	
	Node(int value=0){
		data=value;
		 nextNode=nullptr;
	}

	int getData(){
		return data;
	}

	Node* getnextNode(){
		return nextNode;
	}

	void setnextNode(Node* next){
		nextNode=next;
	}

	void setData(int n){
		data=n;
	}
};

class LinkedList{

	Node *head;
	int size;
public:
	LinkedList(int start){
		head=new Node(start);
		size=1;
	}  

	LinkedList(){
		head=nullptr;
		size=0;
	}

	void addFront(int value){
		Node *temp=new Node(value);
		if(size==0){
			head=temp;
			size++;
		}
		else
		{
			temp->setnextNode(head);
			head=temp;
			size++;
		}
	}

	void addatPosition(int pos,int value){
		if(pos==1){
			addFront(value);
			return;
		}
		// else if(pos==size){
		// 	addRear(value);
		// }
		Node* temp=new Node(value);
		Node* traverse=head;
		for (int i = 1; i < pos-1; ++i)
		{
			traverse=traverse->getnextNode();
		}
		cout<<traverse->getData()<<" ";

		Node *a=traverse->getnextNode();
		temp->setnextNode(a);
		traverse->setnextNode(temp);
		size++;

	}
	void addRear(int value){
		
		if(size==0){
			addFront(value);
			return;
		}
		Node* temp=new Node(value);
		Node* traverse=head;
		while(traverse->getnextNode()!=nullptr){
			traverse=traverse->getnextNode();
		}
		traverse->setnextNode(temp);
		size++;
	}

	void display(){
		Node *traverse=head;
		for (int i = 0; i < size; ++i)
		{
			cout<<traverse->getData()<<" -> ";
			traverse=traverse->getnextNode();
		}
		cout<<"END\n";
	}
};

int main(int argc, char const *argv[])
{
	cout<<"Linked List\n\n";

	cout<<"1. Add Front\n2. Add at Back\n3. Add at position\n4. Display\n5. Exit\n";
	int choice=5;
	LinkedList lt;

	do{
	cin>>choice;
	int no;
	switch(choice){
		case 1:
		cout<<"Enter No: ";
		cin>>no;
		lt.addFront(no);
		break;

		case 2:
		cout<<"Enter No: ";
		cin>>no;
		lt.addRear(no);
		break;

		case 3:
		int position;
		cout<<"Enter Position: ";
		cin>>position;
		cout<<"Enter No: ";
		cin>>no;
		lt.addatPosition(position,no);
		break;

		case 4:
		lt.display();

		default:
		cout<<"Enter Valid choice!!\n";

	}

	cout<<"Enter Choice: ";

}while(choice!=5);
	return 0;
	//1 -> 67 -> 9 -> 45 -> END
}