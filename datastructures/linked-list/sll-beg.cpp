#include <iostream>

using namespace std;

struct Node{
	int data;
	Node* next;
};
Node* head = new Node();
//struct Node* head;

void Print(){
	Node* temp = head;
	cout << "list is: " <<endl;
	while(temp!=NULL){
		cout << temp -> data << " ";
		temp = temp -> next;
	}
	cout << endl;
}
		

void insertBeginning(int x){
	
	Node* temp = new Node();
	temp -> data = x; // dereferencing
	temp -> next = head;
	head = temp;
}


int main(){
	head = NULL;
	cout << "How many numbers? " <<endl;
	int n, x;
	cin >> n;
	for(int i = 0; i < n; ++i){
		cout << "Enter int to be inserted: " <<endl;
		cin >> x;
		insertBeginning(x);
		Print();
	}
	return 0;
	
}
