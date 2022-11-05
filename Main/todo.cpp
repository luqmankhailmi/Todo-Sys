#include <iostream>
using namespace std;

void menu() {
	cout << "---------------------------------------" << endl;
	cout << " To Do List" << endl;
	cout << " 1. View List" << endl;
	cout << " 2. Add To List" << endl;
	cout << " 3. Delete From List" << endl;
	cout << "---------------------------------------" << endl;
}

int main() {
	string todoList[100];
	int key;
	
	bool start = true;
	while (start == true) {
		
		menu();
		cout << "Choose key : ";
		cin >> key;
	
		if (key == 1) {
			int iterator = 0;
			bool continuePrint = true;
			cout << "--------------------------------" << endl;
			cout << "View List" << endl;
			cout << "--------------------------------" << endl;
			
			while (continuePrint == true) {
				if (todoList[iterator].length() != 0) {
					cout << iterator + 1 << ". " << todoList[iterator] << endl;
					iterator++;
				} else {
					continuePrint = false;
				}
			}
			
			char quitKey;
			bool quitView = false;
			while (quitView == false) {
				cout << "Press \'q\' to exit : ";
				cin >> quitKey;
				
				if (quitKey == 'q') {
					quitView = true;
				}
			}
		}
		else if (key == 2) {
			string addToList;
			cout << "Add to list : ";
			cin >> addToList;
			int iteratorAdd = 0;
			bool continueAdd = true;
			while (continueAdd == true) {
				if (todoList[iteratorAdd].length() == 0) {
					todoList[iteratorAdd] = addToList;
					continueAdd = false;
					cout << "Added to list!" << endl;
					bool quitAdd = false;
					while (quitAdd == false) {
						cout << "Press \'q\' to exit : ";
						char keyAdd;
						cin >> keyAdd;
						if (keyAdd == 'q') {
							quitAdd = true;
						}
					}
				} else {
					iteratorAdd++;
				}
			}
		}
		else if (key == 3) {
			cout << "This service is currently unavailable." << endl;
			cout << "Error code 102" << endl;
			cout << "----------------------------------------------" << endl;
			bool quitRemove = false;
			while (quitRemove == false) {
				cout << "Press \'q\' to quit : ";
				char keyRemove;
				cin >> keyRemove;
				if (keyRemove == 'q') {
					cout << "Redirecting back to main page..." << endl;
					quitRemove = true;
				}
			}
		}
	}
}
