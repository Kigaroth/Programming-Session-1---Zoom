/*
This is my first code. It was made in a Zoom session.
*/

#include <iostream>
#include <string>
#include <conio.h>

int age = 21;
bool sw = false;
char Intial = 'h';
std::string Fullname = "";
double pi = 3.14;
int a = 10;
int b = 5;
int c = 20;
int z = 10;

int main() {
	system("cls");
	system("pause");

	if (a > b) {
		std::cout << "A is greater than B\n";
	}
	else {
		std::cout << "B is greater than A\n";
	}
	if (a == z) {
		std::cout << "A and Z are equal\n";
	}
	if (a < b) { // if (a > z || a == z))
		std::cout << "Nothing happens here\n";
	}
	if (a != b) {
		std::cout << "A and B are not equal\n";
	}

	std::cout << "Enter your full name : ";
	std::getline(std::cin, Fullname);
	std::cout << "Your full name is: " << Fullname;
	system("pause");

	//First attempt - Enter your age
	//std::cout << "Enter your age : ";
	//std::cin >> age;
	//std::cout << "Your age is : " << age <<std::endl; // "\n" = std::endl;  \t
	//std::cout << "You are too young. ";
}