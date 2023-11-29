#include <vector>
#include <iostream>
/*
                ~*~ VECTOR ~*~
 */

/*
 dynamic Array
 वेक्टर अपना साइज़ बढ़ाना घटना जानता है, जैसे अगर वेक्टर जितना साइज़ ऐलकेट किया है मान लो उससे जयदा एलेमेंट डाले जा रहे है
 तो वेक्टर अपने साइज़ के ज़्यादा के element के लिए मेमरी ऐलकेट करेगा उसके बाद सारे एलेमेंट को कॉपी करेगा और पुरानी ऐलकेट की
 गई मेमरी जको डीऐलकेट कर देगा
 sinktofit ऑपरेशन का उसे कर के इसकी साइज़ को कम भी कर सकते है।
 */
using namespace std;
int main()
{
    vector<int> v;
    vector<int> va(5,0); // मतलब ५ का वेक्टर बनेगा और 0 से initialize  हो जाएगा [0]->[0]->[0]->[0]->[0]
    vector<int> vb(va); // copy constructor call kar diya vector ka
    // check करते है की वेक्टर को कितने साइज़ की मेमरी ऐलकेट की गई है?
    cout << v.capacity() << endl; // output is : 0 - for 0 element
    
    // push the emelent
    v.push_back(22);
    cout << v.capacity() << endl; // output is : 1 -  for  1nd element
    
    v.push_back(33);
    cout << v.capacity() << endl; // output is : 2 - for  2nd element
    
    v.push_back(14);
    cout << v.capacity() << endl; // output is : 4 - for  3rd element
    cout << v.size() << endl; // output is : size is 3
    
    
    // to access the array -
    cout << v.at(1) << endl;
    cout << v.front() << endl ; // first element
    cout << v.back() << endl;  // last element
    for (auto a:v)
        cout << a << " "  ; // 22  33  14
    
    v.pop_back() ;
    for (auto a:v)
        cout << a << " "  ; // 22 33
    
    // जब वेक्टर को clear  किया जाता है तब वेक्टर इस साइज़ zero होता है capacity नहीं होती है
    v.clear();
    cout  << v.size() << endl; // size 0 हो गया है
    cout << v.capacity() << endl;// लेकिन capacity अभी भी ४ ही है
    return 0;
}
