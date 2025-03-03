# Grocery Tracking System

## Overview
This project is a Grocery Tracking System implemented in C++. It allows users to track the purchase frequency of grocery items based on stored data. The program reads the input file, processes item frequencies, and provides a menu-driven interface.

## Project Summary
This program addresses the problem of tracking grocery purchases by analyzing frequency data. Users can search for specific items, view all item purchase frequencies, and generate a histogram for visualization.

The project utilizes file I/O operations to load data from `CS210_Project_Three_Input_File.txt` and save frequency results in `frequency.dat`, ensuring data persistence across multiple runs. It follows a modular programming approach, with `GroceryTracker.h/.cpp` handling the core logic, while `main.cpp` serves as the entry point for user interaction.

## What Was Done Well
- Modular code design with separate files for different functionalities.
- Efficient file handling to ensure data persistence across program runs.
- A user-friendly interface with an intuitive menu system.
- Well-organized code structure for maintainability.

## Challenges and Solutions
- __File Handling Issues__: Initially, reading and writing data correctly was a challenge. Debugging with `cerr` helped resolve issues.
- __Efficient Data Storage__: Using maps (`std::map`) for storing item frequencies improved data retrieval performance.

## How to Use
### Compiling and Running the Program
1. __Compile the program using g++__:
   ```sh
   g++ -o grocery_tracker main.cpp GroceryTracker.cpp
