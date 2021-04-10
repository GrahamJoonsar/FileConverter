#include <iostream>
#include <fstream>
#include <string>

using namespace std;

ifstream inputFile;
ofstream outputFile;

void getUserInput(){
    // Initiating neccesary variables for creating the final file
    string inputFilePath;
    string outputFileName;
    string fileExtension;

    // Getting the input file path
    cout << "Enter the path of the file you want to convert: " << endl;
    cin >> inputFilePath;

    // Getting the output file path
    cout << "Enter the output file name without the file extension: " << endl;
    cin >> outputFileName;

    // Getting the file extension
    cout << "Enter the file extension, including the dot: " << endl;
    cin >> fileExtension;

    inputFile.open(inputFilePath);
    outputFile.open(outputFileName + fileExtension);
}

void writeToFile(){
    string text;
    while(getline(inputFile, text)){
        outputFile << text << '\n';
    }
}

int main(){
    getUserInput();
    writeToFile();
}