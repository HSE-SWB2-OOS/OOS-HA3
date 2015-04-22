#include <iostream>
#include "MyString.hpp"

using namespace std;
int main() {
	MyString s1("Eins ");
	MyString s2("Zwei ");
	MyString s3("Drei ");
	MyString s4("NIX");

	cout << "Nach Plus:" << endl;
	cout << "s1: " << s1.c_str() << endl;
	cout << "s2: " << s2.c_str() << endl;
	cout << "s3: " << s3.c_str() << endl;
	cout << "s4: " << s4.c_str() << endl << endl;

	s4 = s1 + s2 + s3;
	s2 = s1;
	cout << "s2 = s1: " << s1.c_str() << " | " << s2.c_str() << endl;

	cout << "Sind s1 und s2 gleich? " << boolalpha << (s1 == s2) << endl;
	cout << s1 << endl;
	//cout << s2 << endl;
	//cout << s3 << endl;
	//cout << s4 << endl;

	cout << "Nach Plus:" << endl;
	cout << "s1: " << s1.c_str() << endl;
	cout << "s2: " << s2.c_str() << endl;
	cout << "s3: " << s3.c_str() << endl;
	cout << "s4: " << s4.c_str() << endl;
	cout << "s4 Zeichen 3: " << s4[2];
	
	getchar();
	return 0;
}