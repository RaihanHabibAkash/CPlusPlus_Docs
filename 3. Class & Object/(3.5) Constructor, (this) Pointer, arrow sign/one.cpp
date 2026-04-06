/*
#include <bits/stdc++.h>

using namespace std;

class Student

{

public:

 int roll;

 int cls;

 double gpa;

};

int main()

{

 Student rahim; // অবজেক্ট ডিক্লেয়ার করা হয়েছে। 

 rahim.roll = 29; // অবজেক্টের ভেলু এসাইন করে দেওয়া হয়েছে।

 rahim.cls = 9;

 rahim.gpa = 5.00;

 Student karim; // আরেকটি অবজেক্ট ডিক্লেয়ার করা হয়েছে। 

 karim.roll = 45; // অবজেক্টের ভেলু এসাইন করে দেওয়া হয়েছে।

 karim.cls = 10;

 karim.gpa = 4.33;

 cout << rahim.roll << " " << rahim.cls << " " << rahim.gpa << endl; // প্রথম অবজেক্ট প্রিন্ট করা হয়েছে। 

 cout << karim.roll << " " << karim.cls << " " << karim.gpa << endl; // দ্বিতীয় অবজেক্ট প্রিন্ট করা হয়েছে।

 return 0;

}
*/


/*
#include <bits/stdc++.h>

using namespace std;

class Student

{

public:

 int roll;

 int cls;

 double gpa;

 Student(int r, int c, double g) // কন্সট্রাক্টর যা রোল, ক্লাস এবং জিপিএ প্যারামিটার হিসেবে নিচ্ছে। এখানে প্যারামিটারের মধ্যে ভেরিয়েবল এর নাম ক্লাস ভেরিয়েবল এর থেকে আলাদা রাখা হয়েছে। 

 {

 roll = r; // অবজেক্টের ভেলু এসাইন করে দেওয়া হচ্ছে।

 cls = c;

 gpa = g;

 }

};

int main()

{

 Student rahim(29, 9, 5.00); // অবজেক্ট ক্রিয়েট করা হলো এবং কন্সট্রাক্টর কল করে ভেলু পাস করে দেওয়া হলো।

 Student karim(45, 10, 4.33); // দ্বিতীয় অবজেক্ট ক্রিয়েট করা হলো এবং কন্সট্রাক্টর কল করে ভেলু পাস করে দেওয়া হলো।

 cout << rahim.roll << " " << rahim.cls << " " << rahim.gpa << endl; // প্রথম অবজেক্ট প্রিন্ট করা হয়েছে। 

 cout << karim.roll << " " << karim.cls << " " << karim.gpa << endl; // দ্বিতীয় অবজেক্ট প্রিন্ট করা হয়েছে।

 return 0; 

}
*/

/*
class Student

{

public:

 int roll;

 int cls;

 double gpa;

 Student(int roll, int cls, double gpa)

 {

 roll = roll; // তাহলে কম্পাইলার বুঝতে পারবে না এখানে roll বলতে ক্লাস ভেরিয়েবল কে বুঝানো হচ্ছে নাকি কন্সট্রাক্টর এর ভেরিয়েবলকে বুঝানো হচ্ছে।

 cls = cls;

 gpa = gpa;

 }

};
*/

/*
#include <bits/stdc++.h>

using namespace std;

class Student

{

public:

 int roll;

 int cls;

 double gpa;

 Student(int roll, int cls, double gpa)

 {

 this->roll = roll; // দিস কি-ওয়ার্ড দিয়ে ক্লাস ভেরিয়েবল roll এর মধ্যে কন্সট্রাক্টর ভেরিয়েবল roll কে রেখে দেওয়া হচ্ছে।

 this->cls = cls;

 this->gpa = gpa;

 }

};

int main()

{

 Student rahim(29, 9, 5.);

 Student karim(45, 10, 4.33);

 cout << rahim.roll << " " << rahim.cls << " " << rahim.gpa << endl;

 cout << karim.roll << " " << karim.cls << " " << karim.gpa << endl;

 return 0;

}
*/