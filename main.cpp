//18.
//
//Create a function that takes two strings and returns an array of characters that consitst all the common letters of the two arrays

#include <iostream>
#include <vector>

using namespace std;

vector<char> commonLetters(string str1, string str2) {
  vector<char> result;
  for (unsigned int i = 0; i < str1.length(); i++) {
    for (unsigned int j = 0; j < str2.length(); j++) {
      if (tolower(str1[i]) != tolower(str1[i + 1]) && tolower(str1[i]) == tolower(str2[j]) && tolower(str1[j]) != tolower(str1[j + 1])) {
        result.push_back(str1[i]);
      }
    }
  }
  return result;
}

int main()
{
  string str1, str2;
  vector<char> common;
  str1 = "Hello";
  str2 = "World";

  common = commonLetters(str1, str2);

  for (auto i : common) {
    std::cout << i << " ";
  }
  
  return 0;
}