#include <cctype>
#include <iostream>
#include <cstring>

using namespace std;

int main()
{
   // Declare the necessary variables
   char ch;

   // Ask for  a character
   //cout << "Enter a character from the alphabet: ";
   cin >> ch;

   // Check if it is uppercase or lowercase and convert it;
   if(isupper(ch)){
      if (ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U' ){
         cout << "uppercase" << endl;
         cout << "vowel" << endl;
      }else{
         cout << "uppercase" << endl;
         cout << "consonant" << endl;
      }
   } else if(islower(ch)){
      if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ){
         cout << "lowercase" << endl;
         cout << "vowel" << endl;
      }else{
         cout << "lowercase" << endl;
         cout << "consonant" << endl;
      }
   } else {
      cout << "You have not entered an alphabet character" << endl;
   }
}
