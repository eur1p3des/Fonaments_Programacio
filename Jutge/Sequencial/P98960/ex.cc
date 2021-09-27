#include <cctype>
#include <iostream>
#include <cstring>

using namespace std;

int main()
{
   // Declare the necessary variables
   char ch;
   char low;
   char up;

   // Ask for  a character
   //cout << "Enter a character from the alphabet: ";
   cin >> ch;

   // Check if it is uppercase or lowercase and convert it;
   if(isupper(ch)){
      low = ch + 32;
      cout << low << endl;
   } else if(islower(ch)){
      up = ch - 32;
      cout << up << endl;
   } else {
      cout << "You have not entered an alphabet character" << endl;
   }
}
