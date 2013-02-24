#include <iostream>
#include <string>

using namespace std;

int main ()
{
   cout << "This is a REPL.  Type some stuff!\n";

   string input;

   while (getline(cin, input)) {
     if (!input.length()) {
       break;
     }

     cout << "You typed:\n\n\t" << input << endl;
     cout << "\nType some more:\n";
   }

   cout << "No input received.  Exiting.  Bye!\n";

   return 0;
}
