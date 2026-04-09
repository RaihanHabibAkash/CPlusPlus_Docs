#include <iostream>
#include <string>
using namespace std;

 

int main() {

 // C-স্টাইল স্ট্রিং (C-Style String)

 char s1[] = "Hello";

 cout << s1 << endl; // Output: Hello

 

 // C++ স্ট্রিং (C++ String)

 string s2 = "World";

 cout << s2 << endl; // Output: World 

 

 // C++ স্ট্রিং অপারেশন (C++ String Operations)
 // Erro because s1 is C type string 
 string s3 = s1 + " " + s2;

 cout << s3 << endl; // Output: Hello World

 

 return 0;

}