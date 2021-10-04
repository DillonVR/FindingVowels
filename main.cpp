#include <iostream>
#include <string>
using namespace std;

bool isVowel(char ch);

int main ()
{
string letters;
int num = 0;
int len;

cout<<"Enter a sequence of characters: ";
getline(cin, letters);

len = letters.length();

for (int i = 0; i < len; i++)
{
if (isVowel(letters[i]))
  num++;
}

if (num == 0)
  cout << "There are 0 vowels.\n";
else if (num == 1)
  cout << "There is 1 vowel.\n";
else
  cout << "There are " << num << " vowels.\n";

return 0;

}
// identify vowels function
bool isVowel(char b){

if (b == 'a' || b == 'e' || b == 'i' || b == 'o' || b == 'u')
  return true;
else
  return false;
}
