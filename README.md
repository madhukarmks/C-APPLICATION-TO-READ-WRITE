**A C++ APPLICATION TO READ,WRITE, AND APPEND DATA TO TEXT FILES.**

*COMPANY*: CODETECH IT SOLUTIONS

*NAME*: MADHUKAR KUMAR

*INTERN ID*: CT6WOZM

*DOMAIN*: C++ PROGRAMMING

DURATION: 6 WEEEKS

*MENTOR*: NEELA SANTOSH KUMAR

**Introduction**

File handling is an essential aspect of programming that enables data storage, retrieval, and modification. In C++, the <fstream> library provides the necessary tools to work with files. This application demonstrates how to write data to a file, append new data without overwriting existing content, and read data from a file. The program interacts with users through a menu-driven approach, making it easy to perform file operations.
This code ensures efficient file handling with error checking mechanisms to prevent issues such as file access failures. It is useful for applications where data needs to be stored persistently, such as logs, reports, or user-generated content.

**Key Features of the Code**

 Writing to a File: The program allows users to write text to a file, replacing any existing content.
Appending to a File: Users can append new data without overwriting existing content.
Reading from a File: The program reads and displays the contents of the file.
Error Handling: Checks if the file can be opened before performing operations.
User-Friendly Menu: A loop-driven menu allows users to choose different file operations.

**Writing Data to a File**
   
The writeToFile function allows users to write new content to a file. If the file already exists, its previous content is erased.
ofstream outFile(filename); creates an output file stream. If the file exists, it is overwritten; if not, a new file is created.
The cin.ignore(); is used to clear any leftover newline characters before taking input.
getline(cin, data); allows users to input multiple words in a single line.
The data is written to the file using outFile << data << endl;.
If the file cannot be opened, an error message is displayed.

**Appending Data to a File**
   
The appendToFile function allows users to add new data without deleting existing content.
The ofstream object is created using ios::app, which ensures that new content is added at the end of the file.
The user enters a string, which is then appended to the file.
The function ensures that if the file cannot be opened, an error message is displayed.

 **Reading Data from a File**
 
The readFromFile function reads and displays the file content.
ifstream inFile(filename); opens the file in read mode.
The function checks if the file opens successfully.
The while (getline(inFile, data)) loop reads each line and displays it on the console.
5. Implementing a Menu-Driven Approach
The main() function presents a menu to the user and executes the selected operation.


The menu is displayed in a loop until the user chooses option 4 to exit.
Based on user input, the corresponding function (writeToFile, appendToFile, or readFromFile) is called.
The switch statement ensures appropriate action is taken for each menu option.
Error handling is incorporated to manage incorrect inputs.

**Advantages of the Code**

Data Persistence: The program stores user input permanently in a file.
User-Friendly Interface: The menu-driven approach simplifies interaction.
Efficient File Handling: Proper use of file streams ensures optimized performance.
Error Checking: The program handles file access errors gracefully.
Dynamic Input Handling: getline() enables multi-word input storage.

**Conclusion**

This C++ program effectively demonstrates file handling by implementing write, append, and read functionalities. The structured approach ensures that data is managed efficiently, making it suitable for real-world applications such as log management, reports, or storing user information. The use of error handling ensures robustness, while the menu-driven interface enhances user experience. This program can be extended further by adding features like deleting specific lines, searching content, or handling different file formats.

**IMAGE**

![Image](https://github.com/user-attachments/assets/76626c92-7570-4350-9354-3d0e64f21b8b)






