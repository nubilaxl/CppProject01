/* ---------------------------------------------------------------------------
** I attest that this following code represents my own work and is subject to
** the plagiarism policy found in the course syllabus.
**
** Class: 	CSC 242
** Assignment: 	Lesson #5 Problem 2
** File: 	Source.cpp
** Description: Encrypts and Decrypts a file
**
** Author: 	Nubila Levon, Shequita Boswell, Felipe Delgadillo, xxx
** Date: 	November 16, 2025
** -------------------------------------------------------------------------*/

#include <iostream>
#include <algorithm>
#include <fstream>
#include <string>

using namespace std;


string readFile(string filename);
char shiftChar(char c, int shift, bool encrypt);
string ceaserCipher(const string& text, int shift, bool encrypt);
void writeFile(const string& filename, const string& text);



int main() {

	string mode;

	int shift;


	// Ask user for mode

	cout << "Enter mode(encrypt / decrypt) : ";

	cin >> mode;


	// Ask user for shift value

	cout << "Enter shift value : ";

	cin >> shift;


	// Read input file
	string inputText = "";
	inputText = readFile("input.txt");
	if (inputText == "-1") {
		cout << "Error reading input file";
		return -1;
	}


	// Apply Caesar cipher

	bool encrypt = (mode == "encrypt");

	string outputText = ceaserCipher(inputText, shift, encrypt);


	// Write result to output file

	writeFile("output.txt", outputText);

	cout << "Operation completed.Check output.txt for result." << endl;





	return 0;
}



/* Reads a text file one char at a time into a vector
*  @param filename - the pathname of the file
*  @return string of text 
*/
string readFile( string filename) {

	ifstream file(filename.c_str());
	if (file.fail()) {
		cout << "Error: can't open file: " << filename << endl;
		return "-1";
	}

	string data = "";
	string content = "";

	while (file >> data) {
		content = content + data + "\n";
	}

	
	return content;

}

/* Encodes a single character if it is a letter
*  @param c a character
*  @param shift - number of digits to offset the character
*  @param encrypt - toggle value for encrypt/decrypt
*  @return true if a letter, false if not
*/
char shiftChar(char c, int shift, bool encrypt) {

	if (isalpha(c)) {

		char base = isupper(c) ? 'A' : 'a';

		if (encrypt) {

			return (c - base + shift) % 26 + base;

		}
		else {

			return (c - base - shift + 26) % 26 + base;

		}

	}

	else {

		return c; // Non-letter characters unchanged
	}
}

/* Encrypts using cesar cipher a string of characters by shifting ascii
*  @param text - the text to be encrypted
*  @param shift - the number of code positions to shift
*  @param encrypt - the toggle for encrypting/decrypting
*  @return string of encoded characters
*/

string ceaserCipher(const string& text, int shift, bool encrypt) {

	string result = "";

	for (char c : text) {

		result += shiftChar(c, shift, encrypt);

	}

	return result;

}



/* Prints to the output.txt file a vector of characters
*  @param filename - the name of the file
*  @param text - the output text
*  @return void
*/
void writeFile(const string& filename, const string& text) {

	ofstream file(filename);

	file << text;

}