/*
#include<bits/stdc++.h>

using namespace std;

class Person

{

 public:

 string name;

 int age;

 Person(string name,int age)

 {

 this->name=name;

 this->age=age;

 }

};

int main()

{

 Person* rakib=new Person("Rakib Ahsan",25); // দুটি ডায়নামিক অবজেক্ট ডিক্লেয়ার করা হয়েছে rakib এবং sakib নামে। 

 Person* sakib=new Person("Sakib Ahamed",23);

 

 rakib=sakib; // rakib এর মধ্যে sakib কে কপি করে রেখে দেওয়া হচ্ছে। 

 

 cout<<rakib->name<<" "<<rakib->age<<endl; // তারপর রাকিব এর নাম এবং বয়স প্রিন্ট করা হচ্ছে। 

 return 0;

}
*/



/*
#include<bits/stdc++.h>

using namespace std;

class Person

{

 public:

 string name;

 int age;

 Person(string name,int age)

 {

 this->name=name;

 this->age=age;

 }

};

int main()

{

 Person* rakib=new Person("Rakib Ahsan",25); // দুটি ডায়নামিক অবজেক্ট ডিক্লেয়ার করা হয়েছে rakib এবং sakib নামে।

 Person* sakib=new Person("Sakib Ahamed",23);

 

 rakib=sakib; // rakib এর মধ্যে sakib কে কপি করে রেখে দেওয়া হচ্ছে। 

 delete sakib; // sakib কে ডিলিট করে দেওয়া হচ্ছে। 

 cout<<rakib->name<<" "<<rakib->age<<endl;

 return 0;

}
*/



/*
#include<bits/stdc++.h>

using namespace std;

class Person

{

 public:

 string name;

 int age;

 Person(string name,int age)

 {

 this->name=name;

 this->age=age;

 }

};

int main()

{

 Person* rakib=new Person("Rakib Ahsan",25); // দুটি ডায়নামিক অবজেক্ট ডিক্লেয়ার করা হয়েছে rakib এবং sakib নামে।

 Person* sakib=new Person("Sakib Ahamed",23);

 

 rakib->name=sakib->name; // সাকিব অবজেক্ট এর নাম রাকিব অবজেক্ট এর নামে রেখে দেওয়া হচ্ছে। 

 rakib->age=sakib->age; // সাকিব অবজেক্ট এর বয়স রাকিব অবজেক্ট এর বয়সে রেখে দেওয়া হচ্ছে।

 

 delete sakib; // sakib কে ডিলিট করে দেওয়া হচ্ছে। 

 cout<<rakib->name<<" "<<rakib->age<<endl;

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

 Person(string name,int age)

 {

 this->name=name;

 this->age=age;

 }

};

int main()

{

 Person* rakib=new Person("Rakib Ahsan",25);

 Person* sakib=new Person("Sakib Ahamed",23);

 

 *rakib=*sakib; // একটি একটি ভেরিয়েবল কপি করার শর্টকাট

 delete sakib;

 

 cout<<rakib->name<<" "<<rakib->age<<endl;

 return 0;

}