// The code provided has a method hello which is supposed to show only those attributes which have been explicitly set. Furthermore, it is supposed to say them in the same order they were set.

// But it's not working properly.

// Notes
// There are 3 attributes

// name
// age
// sex ('M' or 'F')
// When the same attribute is assigned multiple times the hello method shows it only once. If this happens the order depends on the first assignment of that attribute, but the value is from the last assignment.

// Examples
// Hello.
// Hello. My name is Bob. I am 27. I am male.
// Hello. I am 27. I am male. My name is Bob.
// Hello. My name is Alice. I am female.
// Hello. My name is Batman.
// Task
// Fix the code so we can all go home early.




#include <set>
#include <vector>


class Dinglemouse
{
    std::string name;
    int age;
    char sex;
    std::set<std::string> dupes;
    std::vector<std::string> order;

public:

    Dinglemouse() {
    
    }

    Dinglemouse &setAge(int age) {
      
      if (dupes.find("age") == dupes.end()) {
        order.push_back("age");
        dupes.insert("age");
      }
        
      this->age = age;
        return *this;
    }

    Dinglemouse &setSex(char sex) {
      
      if (dupes.find("sex") == dupes.end()) {
        order.push_back("sex");
        dupes.insert("sex");
      }
        this->sex = sex;
        return *this;
    }

    Dinglemouse &setName(const std::string &name) {
      
      if (dupes.find("name") == dupes.end()) {
        order.push_back("name");
        dupes.insert("name");
      }
        this->name = name;
        return *this;
    }

    std::string hello() {
      // TODO: Make this dynamic based by the order list
      
        return "Hello. My name is " + name +
               ". I am " + std::to_string(age) +
               ". I am " + ('M' == sex ? "male." : "female.");
    }
};
