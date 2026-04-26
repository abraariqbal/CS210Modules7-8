#ifndef ITEMTRACKER_H
#define ITEMTRACKER_H

#include <string>
#include <map>

using namespace std;

class ItemTracker {
public:
    void loadData();
    void findItem(string item);
    void printAll();
    void printHistogram();

private:
    map<string, int> itemFrequency;
};
#endif