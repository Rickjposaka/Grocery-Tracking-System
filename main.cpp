#include <iostream>
#include <string>
#include "GroceryTracker.h"

using namespace std;

int main() {
    GroceryTracker tracker;
    tracker.LoadData("CS210_Project_Three_Input_File.txt");  // Load the input data file
    tracker.SaveDataToFile("frequency.dat");                 // Save backup to frequency.dat

    int choice;
    string item;

    // Display the menu and handle user input
    do {
        cout << endl << "**** Grocery Tracking Menu ****" << endl;
        cout << "1. Search for an item's purchase frequency" << endl;
        cout << "2. Display all item frequencies" << endl;
        cout << "3. Display histogram" << endl;
        cout << "4. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
        case 1:
            cout << endl << "Enter the name of the item to search: ";
            cin >> item;
            cout << item << " was purchased " << tracker.GetItemFrequency(item) << " times." << endl;
            break;

        case 2:
            cout << endl << "*** All Items and Their Purchase Frequencies ***" << endl;
            tracker.PrintAllFrequencies();
            break;

        case 3:
            cout << endl << "*** Purchase Frequency Histogram ***" << endl;
            tracker.PrintHistogram();
            break;

        case 4:
            cout << endl << "Exiting the program. Thank you!" << endl;
            break;

        default:
            cout << endl << "Invalid choice. Please enter a number between 1 and 4." << endl;
            break;
        }
    } while (choice != 4);

    return 0;
}
