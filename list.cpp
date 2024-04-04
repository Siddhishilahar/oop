#include<iostream>
using namespace std;

class Node{
	public:	int data;
			Node* next;
};

class List{
	private: Node* head;
	public: List(){
		head = NULL;
	}
	void insert(int d){
		Node* newNode = new Node;
		newNode->data = d;
		newNode->next = NULL;
		head = newNode;
	}

	void deleteAtFirst(node* &head){
		if(head==NULL){
			return;
		}
		node*temp=head;
		head= head->next;
		delete temp;
		return;

	}
};

int main(){
	List l;
	l.insert(5);
	
	return 0;
}
