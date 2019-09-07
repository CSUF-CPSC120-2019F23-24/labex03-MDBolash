// This program calculates a person's height in feet (') and inches (").

#include <iostream>

int main()
{
  int inches;
  // Input the person's height in inches.
  std::cout << "Please input the person's height in inches.";
  std::cin >> inches;
  int width = 100;
  // calculate person's height
  int feet = inches/12 ;
  int feet2 = inches%12 ;
  std::cout << "They are " << feet << "\'" << feet2 <<"feet tall./n";

  return 0;
}
