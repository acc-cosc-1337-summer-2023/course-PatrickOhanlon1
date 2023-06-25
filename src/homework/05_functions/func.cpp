//add include statements
#include <iostream>
#include "func.h"
#include <vector>
using namespace std;


//add function code here
int get_vector_max_value(vector <int> v)
{
    int max = 0;

    for(int i = 0; i < v.size(); i++)
    {
        if (v[i] > max) max = v[i];
    }
    return max;
}

//get_square_of_each_element.assign
vector <int> get_square_of_each_element(vector <int> v)
{
    vector <int> square;

    for(int i = 0; i < v.size(); i++)
    {
        square.push_back(v[i] * v[i]);
    }
    return square;
}