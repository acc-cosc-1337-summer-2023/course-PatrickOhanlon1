//write include statements
#include <iostream>
#include "decisions.h"
#include "decisions.cpp"

using std::string;
using std::cout;
using std::cin;

int main() 
{
	cout<<"Please Enter Grade: ";
	int grade;
	cin >> grade;
	string letter = get_letter_grade_using_switch(grade);
	cout<<"Letter Grade: " <<  letter;
	cout<<"\n";
	return 0;
}