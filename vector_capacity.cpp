/* how capacity is increases in vector */

#include <iostream>
#include <string>
#include <vector>
#include <thread>
#include <chrono>
using namespace std;
int main()
{
    vector<int> v;
    cout << v.size() << "--" << v.capacity() << endl; 
    for(int i = 0; i <1000 ; i++)
    {
        v.push_back(i);
        this_thread::sleep_for(chrono::seconds(1));
        cout << v.size() << "--" << v.capacity() << endl; 
    }
    return 0;
}
