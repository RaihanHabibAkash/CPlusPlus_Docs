/*
for (int i = 0; i < n - 1; i++)

 {

 for (int j = i + 1; j < n; j++)

 {

 if (a[i] > a[j])

 {

 swap(a[i], a[j]);

 }

 }

 }
*/


/*
#include <bits/stdc++.h>

using namespace std;

class Student

{

public:

 string name;

 int roll;

 int marks;

};

int main()

{

 int n;

 cin >> n;

 Student a[n];

 for (int i = 0; i < n; i++)

 {

 cin >> a[i].name >> a[i].roll >> a[i].marks; // এরে এলিমেন্ট ইনপুট নেওয়া হচ্ছে। 

 }

 for (int i = 0; i < n - 1; i++) 

 {

 for (int j = i + 1; j < n; j++) 

 {

 if (a[i].marks > a[j].marks) // যদি বাম পাশের অবজেক্টের মার্ক্স ডান পাশের অবজেক্টের মার্ক্স এর থেকে বড় হয়ে যায়, তাহলে আমাদের সোয়াপ করতে হবে।

 {

 swap(a[i], a[j]); // বিল্ট-ইন সোয়াপ ফাংশন ব্যাবহার করে সোয়াপ করছি। 

 }

 }

 }

 for (int i = 0; i < n; i++)

 {

 cout << a[i].name << " " << a[i].roll << " " << a[i].marks << endl; // সর্টেড এরে প্রিন্ট করা হচ্ছে।

 }

 return 0;

}
*/


/*
#include <bits/stdc++.h>

using namespace std;

class Student

{

public:

 string name;

 int roll;

 int marks;

};

int main()

{

 int n;

 cin >> n;

 Student a[n];

 for (int i = 0; i < n; i++)

 {

 cin >> a[i].name >> a[i].roll >> a[i].marks;

 }

 for (int i = 0; i < n - 1; i++)

 {

 for (int j = i + 1; j < n; j++)

 {

 if (a[i].marks < a[j].marks) // আমরা চেক করছি বাম পাশের মার্ক্সটি ছোট কিনা। যেহেতু বড় থেকে ছোট সর্ট করছি তাই বাম পাশে বড় ভেলু থাকতে হবে, তাই বাম পাশের মার্ক্সটি ছোট হলে সোয়াপ করছি। 

 {

 swap(a[i], a[j]);

 }

 }

 }

 for (int i = 0; i < n; i++)

 {

 cout << a[i].name << " " << a[i].roll << " " << a[i].marks << endl;

 }

 return 0;

}
*/
#include <bits/stdc++.h>

using namespace std;

class Student

{

public:

 string name;

 int roll;

 int marks;

};

int main()

{

 int n;

 cin >> n;

 Student a[n];

 for (int i = 0; i < n; i++)

 {

 cin >> a[i].name >> a[i].roll >> a[i].marks;

 }

 for (int i = 0; i < n - 1; i++)

 {

 for (int j = i + 1; j < n; j++)

 {

 if (a[i].marks > a[j].marks)

 {

 swap(a[i], a[j]);

 }

 if (a[i].marks == a[j].marks) // যদি দুটি অবজেক্ট এর মার্ক্স সমান হয় তখন আমরা রোল এর উপর সর্ট করব।

 {

 if (a[i].roll > a[j].roll) // সেইমভাবে কন্ডিশন দিয়ে রোল এর উপর ভিত্তি করে সর্ট করা হচ্ছে।

 {

 swap(a[i], a[j]);

 }

 }

 }

 }

 for (int i = 0; i < n; i++)

 {

 cout << a[i].name << " " << a[i].roll << " " << a[i].marks << endl;

 }

 return 0;

}