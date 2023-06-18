//write include statements
#include <iostream>
#include "repetition.h"
#include "repetition.cpp"

//write using statements
using std::string;
using std::cout;
using std::cin;

int main() 
{
	bool exit = false;
  	do 
    {
        cout << "Enter DNA String ";
        string dna_input;
        cin >> dna_input;
        if (dna_input == "y" || dna_input == "Y") exit = true;
        double percent  = get_gc_content(dna_input);
        cout << "GC Content Percent " << percent; 
        cout << "\n";
    }
    while (!exit);

    return 0;
}