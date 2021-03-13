#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

class Person{
    public:
        int age;
        char name [101];

        virtual void getdata(){
            cin >> name >> age;
        }

        virtual void putdata(){
            printf("%s %d\n",name, age);
        }
};

class Professor : public Person{
    int publications;
    static int id;
    int cur_id;

    public:

        Professor(){
            id = id+1;
            cur_id = id;
        }

        void getdata(){
            cin >> name >> age >> publications;
        }

        void putdata(){
            printf("%s %d %d %d\n",name, age, publications, cur_id);
        }
};

class Student : public Person{
    int marks[6];
    static int id;
    int cur_id;
    int total=0;

    public:
        Student(){
            id = id+1;
            cur_id = id;
        }

        void getdata(){
            cin >> name >> age;

            for (int i=0; i<6; i++){
                cin >> marks[i];
                total += marks[i];
            }

        }

        void putdata(){
            printf("%s %d %d %d\n",name, age, total, cur_id);
        }
};

int Professor :: id = 0;
int Student   :: id = 0;

int main(){

    int n, val;
    cin>>n; //The number of objects that is going to be created.
    Person *per[n];

    for(int i = 0;i < n;i++){

        cin>>val;
        if(val == 1){
            // If val is 1 current object is of type Professor
            per[i] = new Professor;

        }
        else per[i] = new Student; // Else the current object is of type Student

        per[i]->getdata(); // Get the data from the user.

    }

    for(int i=0;i<n;i++)
        per[i]->putdata(); // Print the required output for each object.

    return 0;

}
