#include <algorithm>
#include <vector>
#include <iostream>

using namespace std;

class Student {
public:
    int ID;
    double GPA;
    Student(int id, double gpa) {
        this->ID = id;
        this->GPA = gpa;
    };
    bool operator<(const Student& s1) const{return this->ID < s1.ID;}
    bool operator>(const Student& s1) const{return this->ID > s1.ID;}
};
bool sortByID(const Student& s1, const Student& s2) {
    return (s1.ID < s2.ID);
}
int main()
{
    Student data[] = {Student(7,3.5),Student(2,3.6),
                        Student(4,3.2),Student(5,4.0),Student(3,3.8),
                        Student(1,3.9),Student(6,2.8)};
   vector<Student> vec(data, data+7);
   std::sort(vec.begin(), vec.end(),std::greater<Student>());
   for (auto val:vec) {
    cout << val.ID << " , " << val.GPA << endl;
   }
}

