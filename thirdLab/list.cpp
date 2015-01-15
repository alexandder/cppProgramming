#include <iostream>

using namespace std;

struct Data {
	int age;
	string name;
};

struct Node {
	Data * data;
	Node * next;
};

void initNode(struct Node* head, int n, string name) {
	head->data = new Data;
	head->data->age = n;
	head->data->name = name;
	head->next = NULL;
}

void addNode(struct Node* head, int n, string name) {
	Node* newNode = new Node;
	newNode->data = new Data;
	newNode->data->age = n;
	newNode->data->name = name;
	newNode->next = NULL;

	Node* cur = head;
	while (cur) {
		if(cur->next == NULL) {
			cur->next = newNode;
			return;
		}
		cur = cur->next;
	}
}

void insertFront(struct Node** head, int n, string name) {
	Node* newNode = new Node;
	newNode->data = new Data;
	newNode->data->age = n;
	newNode->data->name = name;
	newNode->next = *head;
	*head = newNode;
}

struct Node* searchNode(struct Node* head, int n) {
	Node* cur = head;
	while(cur) {
		if (cur->data->age == n)
			return cur;
		cur = cur->next;
	}
	cout << "No node " << n << " in list.\n";
}

bool deleteNode(struct Node** head, Node* ptrDel) {
	Node* cur = *head;
	if (ptrDel == *head) {
		*head = cur->next;
		delete ptrDel->data;
		delete ptrDel;
		return true;
	}

	while (cur) {
		if (cur->next == ptrDel) {
			cur->next = ptrDel->next;
			delete ptrDel->data;
			delete ptrDel;
			return true;
		}
		cur = cur->next;
	}
	return false;
}

void deleteList(struct Node** head) {
	struct Node* tmpNode;
	while(*head) {
		tmpNode = *head;
		*head = tmpNode->next;
		delete tmpNode->data;
		delete tmpNode;
	}
}

void display(struct Node* head) {
	Node* list = head;
	while(list) { 
		cout << list->data->age << ", " << list->data->name << "| ";
		list = list->next;
	}
	cout << endl;
	cout << endl;                                                          
}
   
struct data {
	int age;
	string name;
};

int main(int argc, char const *argv[]) {
	struct Node* newHead;
	struct Node* head = new Node;

	initNode(head, 10, "aaa");
	display(head);
                                     
	addNode(head, 20, "bbb");
	display(head);

	addNode(head, 5, "bcc");
	display(head);

	insertFront(&head, 20, "dsa");
	display(head);

	Node* ptrDel = searchNode(head, 20);
	deleteNode(&head, ptrDel);
	display(head);

	newHead = new Node;

	initNode(newHead, 1, "xxx");
	addNode(newHead, 2, "zzzz");
	addNode(newHead, 3, "zxc");
	display(newHead);
	deleteList(&newHead);

	deleteList(&head);

	return 0;
}
