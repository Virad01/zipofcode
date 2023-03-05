//OOPs 1
/*

    


*/



















/*
//////////OOPS 2 ///////


Encapsulation--data hiding and Information Hinding 

Binding Data members Function together 


this---pointer to current object 

jab aapne static way me object create kia hogoa to dot opertaor use hoga 
jab aapne dynamically way me object kia hoga to this operator use hoga


*/

#include<iostream>
using namespace std;


class human{
    private:

    int age;
    int gender;
    string name;

    public:
    int getage(){
        return this->age;

    }

}



////Inheritance----Very Important 

/*
the capability of a class to derive the properties and behaviour from the another class is called the inheritance

protected within class and derived class aceess ho sakta hai but outside the class nii ho sakta hai 


Integer by default signed hota hai

--- By default class ke memebers private hote hain
////////////To read Inheritance Ambiguity----resolve karne ke liye scope resolution operator hota hai

Types of Inheritance--

1).single Inheritance----
  class Animal(){
      public:
      int age;
      public:
      void speak(){
          cout<<"Animal is Speaking"<< end;

      }


  }


  2). multilevel Inheritance

  like animal ---> dog --> lebra

  class Animal{

  }
  class Dog : public animal{

  }

  class lebra : public Dog

  3). Multiple Inheritance ---- Example-----ek maruti aur ek suzuki ne swift bana di 
  like  
  class Maruti{
      publiv:
      string name
  }
  class Suzuki{
      public:
      int number;
  }
  class Car : public Maruti, public Suzuki{

  }

4). Hierachical iheritance--One class serves as the parent class for more than one class 
5). Hybrid znheritace-- Combination of more then one 1 type of inheritace    



Polymorphism--- many Forms( Existing in many Forms),, famous question==Diamond Problem
two types of Polymorphism 
1). Compile time polymorphism method overloading and Function Overloading 
2).Run Time Polymorphism 



Method Overloading--sirf  return type change karne se overloading achieve nii kar Paoge 
class Math{
    public:
    int add(int a,int b)
    {
        return a+b
    }

}

opertor Overrloading--- Allowed and not allowed chart dekhna hai Homework hai
Syntax---returntype Opertaor *(input parameter)


Run time polymorphism---Method Overrinding  


Abstraction----
common question= abstraction vs Encapsulation
*/
#include<iostream>

using namespaces std;





