//write include statement for decisions header
#include <iostream>
#include "decisions.h"

using std::string;

//Write code for function(s) code here
string get_letter_grade_using_if (int grade)
{
    if ( grade >= 90 && grade <= 100 )
    {
        return "A";
    }
    else if ( grade >= 80 && grade < 90)
    {
        return "B";
    }
    else if ( grade >= 70 && grade < 80)
    {
        return "C";
    }
    else if ( grade >= 60 && grade < 70)
    {
        return "D";
    }
    else if (grade >= 0 && grade < 60)
    {
        return "F";
    }
    else 
    {
        return "grade entered out of range";
    }
}

string get_letter_grade_using_switch(int grade)
{
    switch (grade)
    {
        case 90 ... 100:
            return "A";
            break;
        case 80 ... 89:
            return "B";
            break;
        case 70 ... 79:
            return "C";
            break;
        case 60 ... 69:
            return "D";
            break;
        case 0 ... 59:
            return "F";
            break;
        default:
            return "grade entered out of range";
            break;
    }
}

