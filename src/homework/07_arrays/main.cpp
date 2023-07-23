#include "arrays.h"

int main()
{
    const int SIZE = 5;
    int list[SIZE];

    ArrayList array_list(list, SIZE);

    array_list.Add(5);
    array_list.Add(7);
    array_list.Add(10);
    array_list.Add(15);
    array_list.Add(20);

    array_list.Delete(5);

     int test_arr[] = {7, 10, 15, 20};

     for (int i = 0; i < array_list.Size(); i++) 
     {
        std::cout << array_list.Get_Value_At_Index(i);
     }

    return 0;
}