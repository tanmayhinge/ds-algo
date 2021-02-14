#include <iostream>
using namespace std;

struct Node {
	int data;
	Node* next;
};

Node* head = new Node();


void printList(){
	Node* temp = head;
	while(temp != NULL){
		cout << temp -> data << " ";
		temp = temp-> next;
	}
	cout << endl;
}

void Reverse(){
	Node* current = head;
	Node* prev = NULL;
	Node* neXt;
	while(current!=NULL){
		neXt=current->next;
		current->next=prev;
		prev=current;
		current=neXt;
	}
	
	head = prev;
}

void insertBeginning(int num){
	Node * temp = new Node();
	temp -> data = num;
	temp -> next = head;
	head = temp;
}

void Insert(int num, int position){

	Node* temp1 = new Node();
	temp1->data= num;
	temp1->next=NULL;
	if(position==1){
		temp1->next=head;
		head=temp1;
		return;
	}
	Node* temp2 = head;
	for(int i=0; i < position-2; ++i){
		temp2 = temp2 -> next;
	}
	temp1 -> next = temp2 -> next;
	temp2 -> next = temp1;

}

void Delete(int pos){
	Node* temp1 = head;
	if(pos == 1){
		head = temp1 -> next;
		delete(temp1);
		return;
	}
	for (int i = 0; i < pos-2; ++i)	
		temp1 = temp1->next;
	Node* temp2 = temp1->next;
	temp1->next = temp2->next;
	delete temp2;
}

int main(){
	head = NULL;
	//cout << "How many interations? : " << endl;
	int n, x, p;
	while(true){
		cout << "Choose:" << endl;
		cout << "----------------" << endl;
		cout << "1: Insert Beginning" << endl;
		cout << "2: Insert at Nth position" << endl;
		cout << "3. Delete from nth posn" <<endl;
		cout << "4. Reverse" << endl;
		cout << "5: Exit" << endl;
		cout << "----------------" << endl;
		int s;
		cin >> s;
		switch (s)
		{
		case 1:
			cout << "Which number:" << endl;
			cin >> x;
			insertBeginning(x);
			printList();
			break;
		case 2:
			cout << "Which number:" << endl;
			cin >> x;
			cout << "Which position:" << endl;
			cin >> p;
			Insert(x,p);
			printList();
			break;
		case 3:
			cout << "Which position?" << endl;
			cin >> p;
			Delete(p);
			printList();
			break;
		case 4:
			Reverse();
			printList();
			break;
		case 5:
			exit(0);
			break;
		default:
			break;
		}
	}
}
