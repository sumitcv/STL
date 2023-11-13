#include <iostream>
#include <deque>

using namespace std;

// Function to print the contents and size of the deque
void print_dequeue(deque<int>& dd)
{
    cout << "\n" << "Size : " << dd.size() << endl;
    for (int i : dd)
        cout << i << "   ";
    cout << "\n";
}

int main()
{
    // Create a deque
    deque<int> d;
    
    // Check if the deque is empty and print the result
    cout << "Is empty: " << (d.empty() ? "Yes" : "No") << endl; // True: 1, False: 0

    // Insert elements at both ends of the deque
    d.push_back(44);
    d.push_front(55);
    d.push_back(22);
    d.push_front(33);
    d.push_back(56);
    d.push_front(57);
    d.push_back(88);
    d.push_front(99);
    
    // Print the contents of the deque
    print_dequeue(d);
    
    // Remove elements from both ends of the deque
    d.pop_back();
    print_dequeue(d);
    d.pop_front();
    print_dequeue(d);
    
    // Check if the deque is empty after removal and print the result
    cout << "Is empty: " << d.empty() << endl;

    // Access elements using at() and front() and back()
    cout << "print first index element: " << d.at(0) << endl;
    cout << "print second index element: " << d.at(1) << endl;
    cout << "print third index element: " << d.at(2) << endl;
    
    cout << "front : " << d.front() << endl;
    cout << "back : " << d.back() << endl;
    
    // Add an element at the front
    d.push_front(99);
    cout << "front : " << d.front() << endl;
    cout << "back : " << d.back() << endl;
    print_dequeue(d);
    
    // Erase elements from the deque
    cout << "\n" << "Size : " << d.size() << endl;
    
    // To delete the first element
    d.erase(d.begin(), d.begin() + 1);
    
    cout << "\n" << "Size : " << d.size() << endl;
    print_dequeue(d);

    return 0;
}
