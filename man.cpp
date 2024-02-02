#include <string>

using namespace std;

class Man {
    int id;
    int age;
    string name;

    public:
        Man(int id, int age, string name);
        int getId() const;
        int getAge() const;
        string getName() const;
        friend ostream& operator<<(ostream& os, const Man& dt);    
};

Man::Man(int id, int age, string name) {
    this->id = id;
    this->age = age;
    this->name = name;
}

int Man::getId() const {
    return id;
}

int Man::getAge() const {
    return age;
}

string Man::getName() const {
    return name;
}

ostream& operator<<(ostream& os, const Man& obj)
{
    os << "{ id=" << obj.id << ", name=" << obj.name << ", age=" << obj.age << " } ";
    return os;
}