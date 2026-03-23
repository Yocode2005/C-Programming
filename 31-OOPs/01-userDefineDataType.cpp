#include<iostream>
using namespace std;
class Student{
    public:
    string name;
    int age;
    float cgpa;

    Student(){ // defoult constructor // jb dono tra se initilize krna ho tb ese mention krna jaruri hai

    }
    Student(string s, int a, float g){ // parameterised constructor
        name = s;
        age = a;
        cgpa = g;
    }
};
int main(){
    Student s1("yogesh",21,6.5); // ese intilize kren ke liye constructor bnana jaruri hai
    // s1.name = "yogesh";
    // s1.age = 21;
    // s1.cgpa = 6.5;

    Student s2;
    s2.name = "ramesh";
    s2.age = 22;
    s2.cgpa = 8.5;

    cout<<s1.name<<" "<<s1.age<<" "<<s1.cgpa<<endl;
    //cout<<s2.name<<" "<<s2.age<<" "<<s2.cgpa<<endl;
}