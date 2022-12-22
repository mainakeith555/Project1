//Keith E. Maina
//This is training for writing BST and populating them with data.




#include <iostream>


using namespace std;

//This is the tree node
struct treeNode {

	int first_data{};
	string first_string{};
	treeNode* link{};
};

//Creating a pointer to the tree node
typedef treeNode* treePtr;

//This function inserts a node at the head of the linked list.
void head_insert(treePtr& head, int x, string y) {

	treePtr temp_ptr;
	temp_ptr = new treeNode;

	temp_ptr->first_data = x;
	temp_ptr->first_string = y;
	temp_ptr->link = head;
	head = temp_ptr;
	cout << temp_ptr->first_data << " " << temp_ptr->first_string << endl;
}

void display(treeNode* p) {
	while (p != NULL) {

		cout<< p->first_data << " " << p->first_string << endl;
		

		p = p->link;
	}
}

//This functio is to search through the linked list and find a node with certain information.
treePtr search(treePtr head, int target) {
	treePtr here = head;

	if (here == NULL) {
		return NULL;
	}
	else {
		while (here->first_data != target && here->link != NULL) {
			

			if (here->first_data == target) {
				cout << head->first_string;
			}
			else
				return NULL;

			here = here->link;
		}
	}
}
//This is the main function.
int main() {
	
	treePtr head;
	head = new treeNode;
	head->first_data = 12;

	head_insert(head, 25, "second coming");
	head_insert(head, 57, "Third number");
	head_insert(head, 66, "The number");
	head_insert(head, 45, "The only");
	head_insert(head, 99, "The crucible");

	cout << endl;

	display(head);

	cout<<endl;

	search(head, 66);

	return 0;
}