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
#include <vector>

using namespace std;


char get_encryption_mode();
int get_shift();
vector<char> read_textfile(string filepath);
bool validate_char(char ch);
vector<char> encrypt(vector<char> characters, int shift);
vector<char> decrypt(vector<char> code_chars, int shift);
void print_output(vector<char> outbuffer);


int main() {



	return 0;
}

/* Gets the encryption mode from user
*  @param --none--
*  @return an e or a d 
*/
char get_encryption_mode()
{

}

/* Gets the shift value from user
*  @param --none--
*  @return integer shift value
*/
int get_shift()
{



}

/* Reads a text file one char at a time into a vector
*  @param filepath - the pathname of the file
*  @return vector of characters 
*/
vector<char> read_textfile(string filepath)
{

}

/* Validates a single character is a letter
*  @param ch a character
*  @return true if a letter, false if not
*/
bool validate_char(char ch)
{

}

/* Encrypts a vector of characters by shifting ascii
*  @param characters vector
*  @param shift the number of code positions to shift
*  @return vector of encoded characters
*/
vector<char> encrypt(vector<char> characters, int shift)
{


}

/* Decrypts a vector of characters by shifting ascii
*  @param characters vector
*  @param shift the number of code positions to shift
*  @return vector of decoded characters
*/
vector<char> decrypt(vector<char> code_chars, int shift)
{


}

/* Prints to the output.txt file a vector of characters
*  @param outbuffer a vector of characters
*  @return void
*/
void print_output(vector<char> outbuffer)
{


}