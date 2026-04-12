#include<bits/stdc++.h>

using namespace std;

class Person

{

 public:

 string name; 

 int age;

 Person(string name, int age)

 {

 this->name=name; // ক্লাস ভেরিয়েবল এবং কন্সট্রাক্টর এর প্যারামিটার এর ভেরিয়েবল সেইম তাই this কি-ওয়ার্ড ব্যাবহার করা হচ্ছে। 

 this->age=age;

 }

};

int main()

{

 Person rakib("Rakib Ahsan",24); 

 cout<<rakib.name<< " " << rakib.age << endl;

 return 0;

}