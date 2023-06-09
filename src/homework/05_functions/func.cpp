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

using namespace std;

vector <int> for_max = {5,7,-1,99,-100,10};
vector <int> for_square = {6,1,8,9,4};

void display_menu()
{
	cout<<"\n\nWhich would you like to view?\n\n";
	cout<<"1-Get max value\n";
	cout<<"2-Get square of elements\n";
	cout<<"3-Exit\n";
}

void handle_option(int option)
{
	vector<int> return_vector;

	switch(option)
	{
		case 1:
		cout<<"Max value: " << get_vector_max_value(for_max) << "\n";
		break;
		case 2:
		cout<<"Square of elements: ";
		return_vector = get_square_of_each_element(for_square);
		for ( int i = 0; i < return_vector.size(); i++)
		{
        	cout << return_vector[i] << " ";
    	} 
		cout << "\n";
		break;
		case 3:
		cout<<"\nProgram will exit.\n";
		break;
	}
}

void run_menu()
{
	auto choice = 0;
		
	do
	{
		void display_menu();
		cout<<"Enter choice: ";
		cin>>choice;
		handle_option(choice);

	} while (choice !=3);
}
