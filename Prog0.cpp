// FCI – Programming 1 – 2018 - Assignment 3
// Program Name:	Project0.cpp
// Last Modification Date:	23/3/2018
// Author1 and ID and Group:	Ahmed Ibrahim Mohamed Hablas 20170007 G1
// Teaching Assistant:	xxxxxxxxxxx
// Purpose:	Project0 Assignment 3
#include <iostream>
#include <fstream>
using namespace std;
// Main Menu
bool loadExistingFile(char[]);
bool createNewFile(char[]);
// Sub-Menu
void displayFileContent(char[]); // Name of the file to be displayed
bool saveItAgainOrNew(char[]); // Name of existing file + Name of the new file
void countWC(char[]);
bool searchW(char[]);
void emptyFile(char[]);
int main(){
	char choise;	char name[80];
	cout << "Ahlan ya user ya hbibi.\nWhat do you like to do today?\n";
	cout << "1- Load an existing file\n"; // Input the name of a file and load its content if exists
	cout << "2- Create new file\n"; // Take file name and create a file with this name
	cout << "E - End\n"; // End program and exit
	cin >> choise;
	switch(choise){
		case '1':
			cout << "Enter name of file: \n";
			cin >> name;
			loadExistingFile(name);
			break;
		case '2':
			cout << "Enter name of file: \n";
			cin >> name;
			createNewFile(name);
			break;
		case 'E':	
			cout << "Exiting!\n";
			break;
	}
	return 0;
}
bool loadExistingFile(char name[]){
	fstream f;
	f.open(name, ios::in | ios::out);
	if(!f)
		return 0;
	short choise;	
	cout << "3- Display file content\n"; // Take the currently loaded file and desplay it on screen
	cout << "4- Save the loaded text to the same file again or different one\n"; // Saving loaded data
	cout << "5- Count the words and the characters in the file\n"; // Print number of words and chars
	cout << "6- Search for a word in a file\n"; // Search for a word in the file
	cout << "7- Empty file content\n"; // Empty file and return to main menu
	cin >> choise;
	switch(choise){
		case 3:
		//	displayFileContent(name);
			break;
		case 4:
		//	saveItAgainOrNew(name);
			break;
		case 5:
		//	countWC(name);
			break;
		case 6:
		//	searchW(name);
			break;
		case 7:
		//	emptyFile(name);
			break;		
			
	}
	f.close();
	return 1;
}
bool createNewFile(char name[]){
	fstream f;
	f.open(name, ios::in | ios::out);
	if(!f)
		return 0;
	
	cout << "File " << name << " created!\n";
	return 1;
}
