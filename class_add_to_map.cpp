


// challenges --
// - सबसे पहले तो अगर किसी कलस्स को map  में इन्सर्ट करना है, operator < को किसी यूनीक ऑब्जेक्ट के साथ ओवर्लोड करना पड़ेगा
// - इसी ओवर्लोड से ही map  में ऑब्जेक्ट class को स्टोर किया जा सकेगा, क्योंकि इसी  ऑब्जेक्ट के बेसिस पर बाइनेरी सर्च tree  को लेफ़्ट राइट में छोटे बड़े एलेमेंट डालने को मिलेंगे,
//  मेम्बर वरीयब्ले को पब्लिस रखना परेगा, क्योंकि जब प्रिंटिंग करने या ऐक्सेस करने जाते है तो प्राइवट है एसा बोलके कम्पाइलर एरर deta  है
// -  अगर प्राइवट वरीयब्ले को  ऐक्सेस करना है तो अलग से फ़ंक्शन बनाने पड़ेंगे


#include<string>
#include <iostream>

class Person
{
private:
    string name;
    int age;
public:
    // कन्स्ट्रक्टर
    Person(string n= "non", int a=0): name(n), age(a)
    {
        
    }
    //copy constructor
    Person(const Person& other)
    {
        cout << "copy condtructor" << endl;
        name = other.name ;
        age=other.age ;
    }
    // assignment operator
    Person& operator=(const Person& other )
    {
        cout << "assignment operator" << endl;
        if(this != &other)
        {
            name=other.name;
            age = other.age;
        }
        return *this;
    }
    // move constructor
    Person(const Person&& other)
    {
        cout << "move constructor" << endl;
        name = move(other.name);
        age = move(other.age);
    }
 
    //move assignment operator
    Person& operator=(Person&& other) noexcept
     {
         cout << "move assignment operatorr" << endl;
        if(this != &other)
        {
            name= std::move(other.name);
            age = std::move(other.age );
        }
        return *this;
    }
    // operator overloading for map
    bool operator< (const Person& other) const
    {
        return age < other.age;
    }
    // accessing private varibales
    string get_name()const { return name;}
    int  get_age() const { return age;}
};
int main()
{
    map<Person, string> m;
    
    m.insert(make_pair(Person("Sumit", 22),"Engineer"));
    m.insert(make_pair(Person("Bharat", 33),"Doctor"));
    m.insert(make_pair(Person("Ram", 44),"God"));
    
    m.emplace(make_pair(Person("Ravi", 99),"Sun"));
    
    Person pp("lala", 33);
    string s = "barber";
    
    // इसमें पैर बनाने की ज़रूरत नहीं है !!!
    //pair< Person, string> pp = make_pair(pp, s);
    m.insert({pp,s});
    for( auto &mm :m)
        cout << mm.first.get_name() << ":" <<mm.first.get_age()<< "::" << mm.second << endl;
    
    return 0;
}


