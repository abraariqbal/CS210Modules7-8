#include <iostream>
#include "ItemTracker.h"

using namespace std;

int main() {
    ItemTracker tracker;
    tracker.loadData();

    int choice = 0;
    string item;

// Menu Options
    while (choice != 4) {
        cout << "\nMenu:\n";
        cout << "1. Search for item\n";
        cout << "2. Print all items\n";
        cout << "3. Print histogram of items\n";
        cout << "4. Exit Program\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter item to search: ";
                cin >> item;
                tracker.findItem(item);
                break;

            case 2:
                tracker.printAll();
                break;

            case 3:
                tracker.printHistogram();
                break;

            case 4:
                cout << "Program exited." << endl;
                break;

            default:
                cout << "Invalid choice. Try again." << endl;
        }
    }
    return 0;
}