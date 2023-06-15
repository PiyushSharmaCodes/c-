#include<iostream>
using namespace std;
class Person
{
private:
    int id;
    string Name;
public:
  void getDetails(){
        cout<<"Name of Person is "<<Name<<" and Id of Person is "<<id;
    }
   void setDetails(int id, string Name){
    this->id =id;
    this->Name=Name;
   }
   int getID(){
    return this->id;
   }
   string getName(){
    return this->Name;
   }
};


int main(){
Person p1;
p1.setDetails(2004,"Piyush Sharma");
p1.getDetails();


return 0;
}