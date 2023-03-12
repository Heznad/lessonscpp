#include <iostream>
#include <string>
#include <vector>

using namespace std;

class People {
public:

    People(const string& name) {
        name_ = name;
        cout << "Hello, my name is " << name_ << endl;
    }

    ~People() {
        cout << name_ << " go away" << endl;
    }

    People(const People& another) {
        age_ = another.age_;
        name_ = another.name_ + "_clon";
        cout << "Hello, my name is " << name_ << endl;
    }

    string GetName() const {
        return name_;
    }

    void SetName(const string& name) {
        name_ = name;
    }

    int GetAge() const {
        return age_;
    }

    int GetID() const {
        return id_pass_;
    }



private:
    int age_ = 10;
    string name_ = "no name";
    int id_pass_ = 1111;
};

int main() {
     //People first("George"s);
     //People second(first);
     vector<People> group;
     group.reserve(10);
     group.emplace_back("Li"s);
     group.emplace_back("Pasha"s);
     group.emplace_back("Alixan"s);
     

    return 0;
}