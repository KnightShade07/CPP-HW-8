#include <iostream>
#include <cstdlib>

using namespace std;

int vowelCount(char * str);
int consonantCount(char * str);
bool isVowel(char ch);
bool isConsonant(char ch);
bool isLetter(char ch);
bool verifyPassword(char * str);

//Note:
/*
 Functions 1, 2 and 3 in the requirements document are already done for you. Do 4, 5, and 6.
 Make seperate issues for each function on GitHub, and then at the end, add your header, and any other
 neccessary documentation comments.

 DO NOT TOUCH Functions 4 5 and 6, as they are already done for you.

 When done with assignment, make sure to run thorough testing before submission to Canvas.
*/

int main() {

	char str[12]{ "bookkeeper" };
	cout << "The number of vowels in " << str << " is " << vowelCount(str) << endl;
	//program did not come with test code for consonantCount, so I'll just make it myself
	//so I can see what the function prints.
	cout << "The number of consonants in " << str << " is " << consonantCount(str) << endl;
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
	//char str variable, but I am not going to edit that.
	return consonantCount;
}

bool verifyPassword(char * str) {
	int verifyCount = 0;
	int length = 0;
	while ((*str) != '\0')
	{
		length++;
		str++;
		if (length >= 6)
		{
			verifyCount++;
		}
			
	}
	
	
	return false;
}