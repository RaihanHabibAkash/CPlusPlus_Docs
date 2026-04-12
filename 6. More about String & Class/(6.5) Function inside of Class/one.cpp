/*
#include<bits/stdc++.h>

using namespace std;

class Person

{

 public:

 string name; // এবার আর আমাদের ক্যারেক্টার এরে নেওয়ার প্রয়োজন নেই আমরা স্ট্রিং নিয়ে নিব। 

 int age;

 Person(string nm,int ag)

 {

 name=nm;

 age=ag;

 }

};

int main()

{

 Person rakib("Rakib Ahsan",24); // যেহেতু আমরা স্ট্রিং ডাটা টাইপ নিয়েছি তাই সরাসরি স্ট্রিং এ ভেলু এসাইন করে দেওয়া যাবে। আলাদাভাবে কপি করে বসাতে হবে না। 

 cout<<rakib.name<< " " << rakib.age << endl;

 return 0;

}
*/


#include<bits/stdc++.h>

using namespace std;

class Person

{

 public:

 string name;

 int age;

 Person(string nm,int ag)

 {

 name=nm;

 age=ag;

 }

 void print() // ক্লাসের ভেতর একটি ফাংশন নেওয়া হয়েছে। 

 {

 cout<<name<< " " <<age<<endl; // ফাংশনের ভেতর অবজেক্টের নাম এবং বয়স প্রিন্ট করে দেওয়া হচ্ছে। 

 }

};

int main()

{

 Person rakib("Rakib Ahsan",24); // অবজেক্ট ডিক্লেয়ার করা হচ্ছে। 

 rakib.print(); // অবজেক্টকে ডট দিয়ে যেভাবে ভেরিয়েবল পাওয়া যেত ঠিক তেমনি ফাংশনও পাওয়া যায়। যেহেতু এটি একটি ফাংশন তাই এটিকে কল করতে হয় () দিয়ে। কল করার পর এটি নরমাল ফাংশন এর মতোই কাজ করে। 

 return 0;

}