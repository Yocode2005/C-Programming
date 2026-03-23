#include<iostream>
using namespace std;
class Cricketer{
    public:
    string name;
    int runs;
    Cricketer(string name, int runs){ // jb parameter name and data member name same ho to this keyword ka use krna jaruri hai
        this->name = name;
        this->runs = runs;
    }
};
int main(){
    Cricketer c1("virat kohli",25000);
    Cricketer c2("rohit sharma",15000);

    cout<<c1.name<<" "<<c1.runs<<endl;
    cout<<c2.name<<" "<<c2.runs<<endl;
}