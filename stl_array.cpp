
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
