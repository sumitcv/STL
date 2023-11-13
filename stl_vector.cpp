#include <iostream>
#include <vector> // Dynamic Array

using namespace std;

int main() {
    // Create a vector with size 5, and all elements initialized to 2
    vector<int> a(5, 2);

    // Copy all elements from vector 'a' to 'last'
    vector<int> last(a);

    // Create an empty vector 'v'
    vector<int> v;

    // Print initial capacity and size of vector 'v'
    cout << "capacity size --> " << v.capacity() << endl;
    cout << "size --> " << v.size() << endl;

    // Add elements to vector 'v' and print capacity and size after each addition
    v.push_back(2);
    cout << "capacity size --> " << v.capacity() << endl;
    cout << "size --> " << v.size() << endl;

    v.push_back(33);
    cout << "capacity size --> " << v.capacity() << endl;
    cout << "size --> " << v.size() << endl;

    v.push_back(55);
    cout << "capacity size --> " << v.capacity() << endl;
    cout << "size --> " << v.size() << endl;

    v.push_back(776);
    cout << "capacity size --> " << v.capacity() << endl;
    cout << "size --> " << v.size() << endl;

    // Access elements using 'at' function
    cout << "3rd position element : " << v.at(2) << endl;
    cout << "4th position element : " << v.at(3) << endl;

    // Access front and back elements
    cout << "front element : " << v.front() << endl;
    cout << "Back element : " << v.back() << endl;

    // Print vector elements before and after pop_back
    cout << "Before pop " << endl << endl;
    for (int i : v) {
        cout << i << "  ";
    }
    cout << endl;

    v.pop_back();

    for (int i : v) {
        cout << i << "  ";
    }
    cout << endl;

    // Print size and capacity after pop_back
    cout << "Array Size : " << v.size() << endl;
    cout << "Array Capacity : " << v.capacity() << endl;

    // Clear the vector and print size and capacity
    v.clear();
    cout << " after clear " << endl;
    cout << "Array Size : " << v.size() << endl;
    cout << "Array Capacity : " << v.capacity() << endl;

    return 0;
}
