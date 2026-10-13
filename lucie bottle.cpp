#include<iostream>
#include<string>
using namespace std;

class Bottle{     //the blueprint
public:
   string brand;   //data: What a Bottle HAS
   int capacity;   //in litres
   string color;

   void introduce(){ //action; what bottle DOES
      cout<< "This is a "<<brand<<"bottle," <<capacity<<"litre,color"<<color<<endl;
      }
       void open(){
       cout<< "The bottle is now open!"<<endl;
       }
      };

int main()
{
    Bottle bl;        //create an object called an bl
    bl.brand = "Neema";
    bl.capacity = 1.5;
    bl.color = "purple";

    bl.introduce();    //ask bl to introduce itself
    bl.open();
    return 0;
}
