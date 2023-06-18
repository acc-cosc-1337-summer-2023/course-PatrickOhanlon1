//add include statements
#include <iostream>

using std::string;

//add function(s) code here

double get_gc_content(string reference)
{
    double num_c = 0.0;
    double num_g = 0.0;
    for (int i = 0; i < reference.size(); i++)
    {
        if (reference[i] == 'C') num_c++;
        if (reference[i] == 'G') num_g++;
    }
    return (num_c + num_g) / double(reference.size());
}