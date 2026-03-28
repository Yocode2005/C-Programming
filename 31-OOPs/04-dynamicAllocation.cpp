#include<iostream>
using namespace std;
class Cricketer{
    public:
    string name;
    int runs;
    Cricketer(string name, int runs){
        this->name = name;
        this->runs = runs;
    }
};
int main(){
    Cricketer c1("virat kohli",25000);
    Cricketer*c2 = new Cricketer("rohit sharma",15000); // dynamically allocating memory for object using new operator
    cout<<c1.name<<" "<<c1.runs<<endl;
    cout<<(*c2).name<<" "<<(*c2).runs<<endl; // dereferencing pointer to access members
    delete c2; // deallocating memory using delete operator

}