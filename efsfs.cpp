#include<iostream>
using namespace std;

class Student{
    int score = 0;
    static int age;
    
    public:
    Student(){
        score=3;
        age++;
    }
    void print(){
        cout<<"score = "<<score<<endl;
        cout<<"age = "<<age<<endl;
    }
};

int Student::age = 1;

int main(){
    Student s;
    Student s2;
    s.print();  
}



