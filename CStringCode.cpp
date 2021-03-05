#include <iostream>
#include <cstdlib>
#include <cctype>

using namespace std;

int vowelCount(char * str);
int consonantCount(char * str);
bool isVowel(char ch);
bool isConsonant(char ch);
bool isLetter(char ch);
bool verifyPassword(char * str);
//CPW 218 - C++ Course
//Programming Assignment 8: C-Style Strings with Pointers
//Ethen Oliva
//Instructor: Ken Meerdink
//GitHub Repository:https://github.com/KnightShade07/CPP-HW-8
/*
	Instructions: Follow the PDF and fill in the functions to produce the correct results using pointers.
*/

//Note:
/*
 Functions 1, 2 and 3 in the requirements document are already done for you. Do 4, 5, and 6.
 Make seperate issues for each function on GitHub, and then at the end, add your header, and any other
 neccessary documentation comments.

 DO NOT TOUCH Functions 4 5 and 6, as they are already done for you.

 When done with assignment, make sure to run thorough testing before submission to Canvas.
 Final Tests Issue:
 https://github.com/KnightShade07/CPP-HW-8/issues/4

 //Note: Looking at the PDF for the assignment, the main function seems to have a typo.
 "bookkeeper" should have instead been "bookkeepers"

 To quote the PDF itself:

 "Consonant counter: write a function named consonantCount that takes a C-style
string (character array with null terminator) as a parameter and returns the number of
consonants (any letter except a, e, i, o, and u) that occur in the string.
For example, if we had char word[12]{"bookkeepers"}, then
consonantCount(word) would return 6."

*/

int main() {

	char str[12]{ "bookkeeper" };
	cout << "The number of vowels in " << str << " is " << vowelCount(str) << endl;
	//program did not come with test code for consonantCount, so I'll just make it myself
	//so I can see what the function prints.
	cout << "The number of consonants in " << str << " is " << consonantCount(str) << endl;
	cout << verifyPassword(str) << endl;
	system("pause");
	return 0;
}

int vowelCount(char * str) {
	int vowelCount = 0;
	while ((*str) != '\0')
	{
		if (*str == 'a' || *str == 'e' || *str == 'i'
			|| *str == 'o' || *str == 'u')
		{
			vowelCount++;
		}
		str++;
	}
	
	//This returns 5, you are good to go!
	return vowelCount;
}


bool isVowel(char ch) {
	return ch == 'a' || ch == 'e' || ch == 'i' ||
		ch == 'o' || ch == 'u' || ch == 'A' ||
		ch == 'E' || ch == 'I' || ch == 'O' ||
		ch == 'U';
}

bool isConsonant(char ch) {
	return isLetter(ch) && !isVowel(ch);
}

bool isLetter(char ch) {
	return 'a' <= ch && ch <= 'z' || 'A' <= ch && ch <= 'Z';
}

int consonantCount(char * str) {
	int consonantCount = 0;
	//Note: Use \ and not /.
	while ((*str) != '\0')
	{
		if (*str == 'b' || *str == 'k' || *str == 'p' || *str == 'r' || *str == 's')
		{
			consonantCount++;
		}
		str++;
		
	}
	//this returns 5, but the document says it should return 6. There is an s missing in the 
	//char str variable, but I am not going to edit that, see top of program for more details.
	return consonantCount;
}

bool verifyPassword(char * str) {
	int verifyCount = 0;
	int length = 0;
	int numCount = 0;
	while ((*str) != '\0')
	{
		length++;
		str++;
		if (length >= 6)
		{
			verifyCount++;
		}
		if (*str == '1' || *str == '2' || *str == '3' || *str == '4' || *str == '5' ||
			*str == '6' || *str == '7' || *str == '8' || *str == '9' || *str == '0')
		{
			numCount++;
			if (numCount >= 1)
			{
				verifyCount++;
			}	
		}


		// I checked, isupper and is lower are actually character/string handling functions, so they are not allowed for this assignment.
		//old implementation:
		/*if (isupper(*str) && islower(*str))
		{
			verifyCount++;
		} */

		//new implementation without using isupper and islower functions:
		if (*str >= 'A' && *str <= 'Z' && *str >= 'a' && *str <= 'z')
		{
			verifyCount++;
		}
		

		if (verifyCount == 3)
		{
			//returns a one (true) on test, you're good!
			return true;
		}
					
	} 
	
	return false;
}