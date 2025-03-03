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

## Where Could the Code Be Enhanced?
Although the program functions well, there are areas where enhancements could be made:
- **Performance Optimization**: The current implementation uses a linear search for item lookups. Using an `unordered_map` (hash table) instead of `std::map` would improve efficiency.
- **Error Handling**: Implementing better error messages and handling incorrect user inputs would improve usability.
- **Code Documentation**: Adding more comments would enhance maintainability and help future modifications.

## Challenges and Solutions
- **File Handling Issues**: Initially, reading and writing data correctly was a challenge. Debugging with `cerr` helped resolve issues.
- **Efficient Data Storage**: Using maps (`std::map`) for storing item frequencies improved data retrieval performance.

## Transferable Skills
This project reinforced several skills that will be valuable in future coursework and software development projects:
- **File Handling in C++**: Understanding how to read, write, and manipulate files is crucial for applications that require persistent data storage.
- **Effective Use of Data Structures**: Choosing the right data structure, such as maps or vectors, impacts performance significantly.
- **Debugging and Problem-Solving**: Learning how to troubleshoot errors systematically improved my coding efficiency.
- **Writing Maintainable Code**: Implementing modular programming techniques ensures long-term adaptability.

## How to Use
### Compiling and Running the Program
1. **Compile the program using g++**:
   ```sh
   g++ -o grocery_tracker main.cpp GroceryTracker.cpp
   ```
2. **Run the program**:
   ```sh
   ./grocery_tracker
   ```
3. **Follow the menu options** to search for items, display frequencies, or view a histogram.

## GitHub Repository Information
**Repository URL**: [Grocery-Tracking-System](https://github.com/Rickjposaka/Grocery-Tracking-System)

This repository includes:
- **Source Code** (`main.cpp`, `GroceryTracker.cpp`, `GroceryTracker.h`)
- **Input Data File** (`CS210_Project_Three_Input_File.txt`)
- **Output Data File** (`frequency.dat`)
- **README.md** (Project documentation)

## Conclusion
This project was a valuable learning experience. It enhanced my understanding of **file handling, data structures, debugging, and structured programming**. While the program functions well, further improvements in performance and error handling would make it even better. Overall, this experience has strengthened my programming skills and will be useful in future projects and coursework.
