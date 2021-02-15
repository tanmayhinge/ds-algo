#include <iostream>
using namespace std;

struct Node {
	int data;
	Node* next;
    Node* prev;
};

struct Node* NewNode(int x){
    Node* newNode = new Node();
    newNode->data=x;
    newNode->prev=NULL;
    newNode->next=NULL;
};


Node* head = new Node();

int insertBeginning(int x){
    Node* temp = NewNode(x); 
    if(head==NULL){
        
    }

}

int printList(){

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
			//Insert(x,p);
			printList();
			break;
		case 3:
			cout << "Which position?" << endl;
			cin >> p;
			//Delete(p);
			printList();
			break;
		case 4:
			//Reverse();
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