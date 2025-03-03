#include "GroceryTracker.h"
#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;

// Load data from the input file and count item frequencies
void GroceryTracker::LoadData(const string& filename) {
    ifstream file(filename);
    string item;

    if (file.is_open()) {
        while (file >> item) {
            itemFrequency[item]++;
        }
        file.close();
    }
    else {
        cerr << "Error: Unable to open the file '" << filename << "'. Please check the file path." << endl;
    }
}

// Get the frequency of a specific item
int GroceryTracker::GetItemFrequency(const string& item) {
    if (itemFrequency.find(item) != itemFrequency.end()) {
        return itemFrequency[item];
    }
    else {
        return 0;  // Return 0 if the item is not found
    }
}

// Print all items with their purchase frequencies
void GroceryTracker::PrintAllFrequencies() {
    if (itemFrequency.empty()) {
        cout << "No data available." << endl;
        return;
    }

    for (const auto& pair : itemFrequency) {
        cout << pair.first << ": " << pair.second << endl;
    }
}

// Display a histogram representing the frequency of each item
void GroceryTracker::PrintHistogram() {
    if (itemFrequency.empty()) {
        cout << "No data available." << endl;
        return;
    }

    for (const auto& pair : itemFrequency) {
        cout << left << setw(10) << pair.first << " ";
        for (int i = 0; i < pair.second; i++) {
            cout << "*";
        }
        cout << endl;
    }
}

// Save item frequencies to an output file (frequency.dat)
void GroceryTracker::SaveDataToFile(const string& filename) {
    ofstream outFile(filename);

    if (outFile.is_open()) {
        for (const auto& pair : itemFrequency) {
            outFile << pair.first << " " << pair.second << endl;
        }
        outFile.close();
    }
    else {
        cerr << "Error: Unable to write to the file '" << filename << "'." << endl;
    }
}
