#include "../headers/other.hpp"

namespace gakusei {
// 'c' stands for "constructor"
Other::Other() : name("none"), age(0), salary(0.0) {}
Other::Other(std::string cname, int cexperience, int cage, double csalary) {
    name = cname;
    age = cage;
    salary = csalary;
}

std::string Other::get_name() { return name;}
int Other::get_age() { return age; }
double Other::get_salary() { return salary; }

// 's' stands for "set"
void Other::set_name(std::string sname) { name = sname; } 
void Other::set_age(int sage) { age = sage; }
void Other::set_salary(double ssalary) { salary = ssalary; }
}
