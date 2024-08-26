//Creat a Car class with some attributes
#include <iostream>
#include <string>
 using namespace std;
 class Car
{
 public:
 string brand;
 string model;
 int year;
};

int main()
{
  Car carObj1;
  carObj1.brand = "Land Rover ";
  carObj1.model = "Range Rover ";
  carObj1.year = 2022;
  
  //Creat another object of carObj1
  Car carObj2;
  carObj2.brand = "Mustang ";
  carObj2.model = "GT ";
  carObj2.year = 2020;

  
  //Print attribute value
  cout<<carObj1.brand<<""<<carObj1.model<<""<<carObj1.year<<"\n";
  cout<<carObj2.brand<<""<<carObj2.model<<""<<carObj2.year<<"\n";
  
  return 0 ;
  
}
/*
Output :
Land Rover Range Rover 2022
Mustang GT 2020
 */
