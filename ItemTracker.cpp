#include "ItemTracker.h"
#include <fstream>
#include <iostream>

using namespace std;

// Load data from file and count the frequency
void ItemTracker::loadData() {
    ifstream file("CS210_Project_Three_Input_File.txt");
    string item;

    if (!file.is_open()) {
        cout << "Error opening file." << endl;
        return;
    }

    while (file >> item) {
        itemFrequency[item]++;
    }

    file.close();
// Creating backup file
    ofstream outFile("frequency.dat");

    for (auto pair : itemFrequency) {
        outFile << pair.first << " " << pair.second << endl;
    }

    outFile.close();
}
// Option 1
void ItemTracker::findItem(string item) {
    if (itemFrequency.find(item) != itemFrequency.end()) {
        cout << item << " " << itemFrequency[item] << endl;
    } else {
        cout << item << " 0" << endl;
    }
}
// Option 2
void ItemTracker::printAll() {
    for (auto pair : itemFrequency) {
        cout << pair.first << " " << pair.second << endl;
    }
}
// Option 3
void ItemTracker::printHistogram() {
    for (auto pair : itemFrequency) {
        cout << pair.first << " ";

        for (int i = 0; i < pair.second; i++) {
            cout << "*";
        }
        cout << endl;
    }
}