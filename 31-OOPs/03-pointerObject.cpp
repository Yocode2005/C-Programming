#include<iostream>
using namespace std;
class Cricketer{
    public:
    string name;
    int runs;
    float avg;
    Cricketer(string name, int runs, float avg){ 
        this->name = name;
        this->runs = runs;
        this->avg = avg;

    }
};
int main(){
    Cricketer c1("virat kohli",25000,50.0);
   // Cricketer c2("rohit sharma",15000,45.0);

   Cricketer *ptr = &c1; // pointer to object
   cout<<(*ptr).name<<" "<<(*ptr).runs<<" "<<(*ptr).avg<<endl; // dereferencing pointer to access members
   ptr->runs = 26000;//(*ptr).runs = 26000; // modifying runs using pointer
   cout<<c1.name<<" "<<c1.runs<<" "<<c1.avg<<endl; // accessing modified runs through object
}