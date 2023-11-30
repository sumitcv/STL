#include <unordered_map>
#include<string>
#include <iostream>

// passing map call by value .
// कॉल बाई वैल्यू में map<string, int> m पूरा map  कॉपी किया जाएगा
// और map में किए गए changes function के bahar नहीं change  होंगे
// कॉल बाई रेफ़्रेन्स में डिरेक्ट उस ऐड्रेस पर changes  होंगे जहां पर  map बना है
// फ़ंक्शन के ऐंडर से map  में किए गए changes function  के बाहर map  में reflect  होंगे।

// void insert_into_map(map<string, int> m,  string s, int i) कॉल बाई वैल्यू
void insert_into_map(map<string, int>& m,  string s, int i) // कॉल बाई reference
{
    pair<string, int> p = make_pair(s, i);
    m.insert(p);
}

void print_map(map<string, int> m)
{
    if (m.size() > 0 )
    {
        for(auto mm:m)
            cout << mm.first << "::" << mm.second << endl;
    }
    else
    {
        cout << "fail to print map" << endl;
    }
}

int main()
{
        // creation of map
    map<string, int> m;
    insert_into_map(m, "Sumit", 12);
    insert_into_map(m, "Ramhan", 12);
    insert_into_map(m, "Sumit", 123);
    insert_into_map(m, "asd", 123);
    insert_into_map(m, "as", 123);
    m["Sumit"] = 999;
    m.at("Ramhan") = 777; // changes  at  में भी काम करते है,
    print_map(m);
    cout << "Size of map : " << m.size() << endl;
    cout << "Is Key available : " << m.count("Sumit") << endl; // True
    cout << "Is Key available : " << m.count("Unknown") << endl; // False
    
    
    // Iteration on map;
    for(auto mm:m)
        cout << mm.first  << ":" << mm.second << endl;
    
    cout << "ITERATORS" << endl;
    map<string, int>::iterator it = m.begin();
    while(it != m.end())
    {
        cout << it -> first << ":" << it -> second << endl;
        it++;
    }
    return 0;
}
