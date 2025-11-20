/* ---------------------------------------------------------------------------
** I attest that this following code represents my own work and is subject to
** the plagiarism policy found in the course syllabus.
**
** Class: 	CSC 242
** Assignment: 	Lesson #5 Problem 1
** File: 	Source.cpp
** Description: Finds misspelled words in a file by searching a vector
**
** Author: 	Nubila Levon, Felipe Delgadillo, Martha Rosas, Jonathan Vinje-Shields
** Date: 	November 16, 2025
** -------------------------------------------------------------------------*/

#include <iostream>
#include <algorithm>
#include <vector>
#include <fstream>
#include <string>

using namespace std;


// The dictionary word file and the input file are located in the application directory


int main() {

	// Step 1: Open dictionary file 

	ifstream dictFile("words");

	if (!dictFile) {

		cerr << "Error: Could not open dictionary file." << endl;

		return 1;

	}

	// Step 2: Read dictionary words into vector

	vector<string> words;

	string word;

	while (dictFile >> word) {

		words.push_back(word);

	}

	dictFile.close();

	// Step 3: Open file to be checked

	ifstream checkFile("input");

	if (!checkFile) {

		cerr << "Error: Could not open file to check." << endl;

		return 1;

	}

	// Step 4: Read words from file and check against dictionary

	while (checkFile >> word) {

		// If word not found in dictionary vector

		if (find(words.begin(), words.end(), word) == words.end()) {

			cout << word << endl;

		}

	}

	checkFile.close();

	return 0;
}

