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

/*
                ~*~ ARRAY ~*~
 */
#include <array>
#include <iostream>
using namespace std;
int main()
{
    // एक array  बन गया
    int basic[4] = {1,2,3,4} ;
    
    // अब देखना ये है की stl  में कैसे array  बनाया जाता है
    // जितने element  के लिए अarray  बनाया गया है बस उतने ही element  store किए जाएँगे
    // एक भी ज़्यादा element  डाला तो compilation  error  आएगा
    //Excess elements in struct initializer
    // array के साथ उसका साइज़ देना ही होगा नहीं तो error  आएगी मतलब "array<int> a" ये काम नहीं करेगा
    array<int, 4> a  = {1,2,3,4 };
    
    // इसको प्रिंट कैसे करते है -
    int size = a.size();
    for(int i=0; i< size; i++)
        cout << a[i] << endl;

    // डिरेक्ट्ली कैसे ऐक्सेस कर सकते है at() -
    cout << "print second element:  " << a.at(2) << endl;
    cout << "print fourth  element :  " << a.at(3) << endl;
    //array  का साइज़ हमने ४ लिया है और अगर में a.at(4) करता हूँ तो क्रश कर जाएगा।
    //cout <<"print out of scope   :  " << a.at(3) << endl; // ये काम नहीं करेगा
    
    // check the empty array ?
    // return -> true  || false
    cout << "-----" << a.empty() << endl;
    
    // get first and last element -
    cout << "First Element : " << a.front() << endl;
    cout << "last element : " << a.back() << endl;
    
    cout << "------------------------------------------------- " << endl;
    
    //array<int, 9> aa ;
    array<int, 0> aa ;
    cout << aa.empty() << endl;
    cout << aa.size()<< endl;
    
    //returns a pointer to the first element of the array
    cout << a.data() << endl;
    
    
    // fill all element with 11.
    a.fill(11);
    cout << a.at(2) << endl;
    
    return 0;
}

