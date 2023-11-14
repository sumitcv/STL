/*
    In C++, the Standard Template Library (STL) provides a container called std::array 
    that represents a fixed-size array. Unlike the built-in array in C, std::array is a 
    safer and more convenient alternative because it encapsulates its size and provides 
    various member functions for easy manipulation.
    Key points about std::array:

Key points - 
- It is a fixed-size array, and the size is part of its type (std::array<int, 5> has size 5).
- Elements can be accessed using the subscript operator ([]), iterators, or a range-based for loop.
- It provides member functions for common operations, such as front(), back(), begin(), end(), size(), and empty().
- It performs bounds checking (via at()) similar to std::vector.
- It does not decay to a pointer in most contexts, providing better safety compared to built-in arrays.
*/

#include <iostream>
#include <array>
using namespace std;

int main()
{
    int array_basic[3] = {1,2,3};
    
    // STL Array
    array<int, 4> arr = {1,2,3,4};
    int size = arr.size();
    
    // Print || access array
    for(int i = 0; i < size ; i++)
        cout << arr[i] << endl;
    
    // Accessed by  at funciotn operator
    cout << arr.at(2) << endl;
    
    // Empty or not
    cout << "----" << endl;
    cout << arr.empty() << endl;
    
    // get front & last element
    cout << "First Element: " << arr.front() << endl;
    cout << "Last Element: " << arr.back() << endl;
    
    return 0;
}
