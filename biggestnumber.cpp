//Author:
#include<iostream>
using std::cin;
using std::cout;
int main()
{
  int FirstNumber  = 0;
  int SecondNumber  = 0;
  int ThirdNumber = 0;

  std::cout<<"Please enter a whole number:\n";
  //get first input using std::cin>>
  std::cin>>FirstNumber;
  std::cout<<"Please enter another whole number:\n";
  //get second input using std::cin>> again with a second variable
  std::cin>>SecondNumber;
  //determine if first or second is bigger and store that in a third variable
  if ( FirstNumber > SecondNumber) { 
          ThirdNumber = FirstNumber;
  }
  else if (FirstNumber < SecondNumber){
          ThirdNumber = SecondNumber;}
          else {std:: cout<<"They are equal";
          }

  std::cout<<"Of those two numbers, the biggest is: ";
  //print out the variable representing the biggest number
  std::cout<<ThirdNumber;
  std::cout<<std::endl<<"Thank you for playing.\n";
  
  return 0;
}
