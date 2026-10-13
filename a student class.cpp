#include<iostream>
#include<string>
using namespace std;

class student{     //the blueprint
public:
   string name;   //data: What a Student HAS
   int age;

   void introduce(){ //action; what student DOES
      cout<< "Hello, my name is "<<name<<endl;
      }

      };

int main()
{
    student sl;        //create an object called an sl
    sl.name = " Lucie Neema";
    sl.age = 19;

    sl.introduce();    //ask sl to introduce herself
    return 0;
}
