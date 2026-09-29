//  casting 2 types implecit and explicit
// implecit casting is done by compiler automatically small to big data types conversion is done by compiler automatically
// explecit casting is done by programmer into big data to small data types 


// implecit casting example
#include <iostream>
using namespace std;
int main(){
  char a='a';
  int b=a; // implicit casting from char to int
  cout<<b<<endl;
  // explicit casting example
  double price=10.5;
  int final_price=(int)price; // explicit casting from double to int
  cout<<final_price<<endl;

}