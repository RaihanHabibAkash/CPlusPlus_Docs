/*
#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int main()
{
    string s = "Hello world!";

    // 1st way: স্ট্রিং সরাসরি Constructor দিয়ে stringstream তৈরি
    stringstream ss(s);

    // 2nd way: স্ট্রিং "<<" অপারেটর দিয়ে stringstream তৈরি
    // stringstream ss;
    // ss << s;

    string word;

    ss >> word;  // প্রথম শব্দটা পড়া

    cout << word << endl;  // প্রিন্ট করা

    return 0;
}
*/


/*
while (ss >> word) {
    cout << word << endl;
}
*/


/*
#include <iostream>
#include <sstream>
#include <string>
using namespace std;

int main() {
    string s = "C++ is fun";
    
    // stringstream-এর মধ্যে সরাসরি স্ট্রিং ইনপুট দেওয়া
    stringstream ss(s);

    string word;
    while (ss >> word) {
        cout << word << endl;
    }

    return 0;
}
*/

#include <iostream>
#include <sstream>
#include <string>
using namespace std;

int main() {
    string s = "Learning stringstream in C++";

    stringstream ss;
    ss << s; // এখানে ইনপুট দেওয়া হয়েছে

    string word;
    while (ss >> word) {
        cout << word << endl;
    }

    return 0;
}