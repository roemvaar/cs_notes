// C++ - Files
// The fstream library allows us to work with files.

#include <iostream>
#include <fstream>

using namespace std;

void createAndWriteFile();
void readFile();


int main() {
    createAndWriteFile();
    readFile();

    return 0;
}


void createAndWriteFile() {
    // Create and open to a file
    fstream MyFile("example.txt");

    // Write to the file
    MyFile << "Files can be tricky, but it's fun enough!" << endl;

    // Close file
    MyFile.close();
}


void readFile() {
    // Create a text string, which is used to output the text file
    string textFromFile;

    // Read from the text file
    fstream MyReadFile("example.txt");

    // Use a while loop together with the getline() function to read 
    // the file line by line
    while(getline(MyReadFile, textFromFile)) {
        
        // Output the text from the file
        cout << textFromFile << endl;
    }

    // Close file
    MyReadFile.close();
}
