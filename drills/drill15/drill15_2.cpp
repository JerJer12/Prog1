
//Passzolandó feladat

/*#include "std_lib_facilities.h"

struct Person {
    Person(std::string name, int age) : m_name(name), m_age(age) {
        
    }

    std::string name() const {
        return m_name;
    }

    int age() const {
        return m_age;
    }

private:
    std::string m_name;
    int         m_age;
};

std::ostream &operator<<(std::ostream &o, Person p) {
    o << p.name() << ' ' << p.age() << '\n';
    return o;
}

std::istream &operator>>(std::istream &i, Person &p) {
    std::string tmp_name;
    int         tmp_age;
    
    i >> tmp_name;
    i >> tmp_age;

    p = Person{tmp_name, tmp_age};

    return i;
}

int main() {
    Person goofy{"Kutyám", 27};
    std::cout << goofy;
    std::cin >> goofy;
    std::cout << goofy;

    return 0;
}*/