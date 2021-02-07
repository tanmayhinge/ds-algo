
#include <iostream>
using namespace std;





struct Node {
	int data;
	Node* next;
};

Node* head = new Node();

void insertBeginning(int x){
	Node * temp = new Node();
	temp -> data = x;
	temp -> next = head;
	head = temp;
}

void printList(){
	Node* temp = head;
	while(temp != NULL){
		cout << temp -> data << " ";
		temp = temp-> next;
	}
	cout << endl;

}

int main(){
	head = NULL;
	cout << "How many no to be added? : " << endl;
	int n, x;
	cin >> n;
	while(n--){
		cout << "Enter the no: " << endl;
		cin >> x;
		insertBeginning(x);
		printList();
	}
}
