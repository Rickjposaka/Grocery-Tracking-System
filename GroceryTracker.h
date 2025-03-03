#ifndef GROCERYTRACKER_H
#define GROCERYTRACKER_H

#include <string>
#include <map>
using namespace std;

// GroceryTracker class for managing item frequencies
class GroceryTracker {
private:
    map<string, int> itemFrequency;  // Stores items and their purchase counts

public:
    // Load data from the input file
    void LoadData(const string& filename);

    // Get the purchase frequency of a specific item
    int GetItemFrequency(const string& item);

    // Display all items and their frequencies
    void PrintAllFrequencies();

    // Display a histogram representing item frequencies
    void PrintHistogram();

    // Save item frequencies to an output file
    void SaveDataToFile(const string& filename);
};

#endif#pragma once
