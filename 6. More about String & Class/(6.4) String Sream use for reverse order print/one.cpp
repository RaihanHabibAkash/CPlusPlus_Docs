/*
#include<bits/stdc++.h>

using namespace std;

int main()

{

 string s;

 getline(cin,s);

 stringstream ss;

 ss<<s;

 string word;

 while(ss >> word)

 {

 cout << word << endl;

 }

 

 return 0;

}
*/


/*
#include<bits/stdc++.h>

using namespace std;

void print(string s) // ফাংশনের প্যারামিটার হিসেবে স্ট্রিংটি নেওয়া হচ্ছে।

{

 s="world"; // স্ট্রিং এর ভেলু চেঞ্জ করে দেওয়া হচ্ছে। 

}

int main()

{

 string s="hello"; // একটি স্ট্রিং ডিক্লেয়ার করে তার মধ্যে hello রেখে দেওয়া হচ্ছে। 

 print(s); // ফাংশন কল করে তার মধ্যে স্ট্রিংটি দিয়ে দেওয়া হচ্ছে। 

 cout<<s<<endl; // স্ট্রিং প্রিন্ট করা হচ্ছে। 

 return 0;

}
*/


/*
#include<bits/stdc++.h>

using namespace std;

void print(string & s) // ফাংশনের প্যারামিটার হিসেবে স্ট্রিংটি নেওয়া হচ্ছে কিন্তু রেফারেন্স হিসেবে। 

{

 s="world";

}

int main()

{

 string s="hello";

 print(s);

 cout<<s<<endl;

 return 0;

}
*/


/*
#include<bits/stdc++.h>

using namespace std;

void print(stringstream& ss) // প্যারামিটারে আসা স্ট্রিংটি রিসিভ করা হচ্ছে স্ট্রিংস্ট্রিম এবং রেফারেন্স দিয়ে। 

{

 string word;

 if(ss>>word) // প্রতিবার একটি করে ওয়ার্ড নেওয়া হচ্ছে স্ট্রিংস্ট্রিম থেকে।

 {

 cout<<word<<endl; // ওয়ার্ডটি প্রিন্ট করা হচ্ছে। 

 print(ss); // রিকারশন ফাংশনকে কল করা হচ্ছে। 

 }

}

int main()

{

 string s;

 getline(cin,s); // স্ট্রিং ইনপুট নেওয়া হচ্ছে। 

 stringstream ss(s); // স্ট্রিংস্ট্রিম এর মধ্যে স্ট্রিংটি দিয়ে দেওয়া হচ্ছে। 

 print(ss); // ফাংশন কল করে স্ট্রিংটি দিয়ে দেওয়া হচ্ছে। 

 return 0;

}
*/


/*
#include<bits/stdc++.h>

using namespace std;

void print(stringstream& ss)

{

 string word;

 if(ss>>word)

 {

 print(ss); // আমরা আগে রিকারশনকে কল করছি। 

 cout<<word<<endl; // তারপর প্রিন্ট করছি। 

 }

}

int main()

{

 string s;

 getline(cin,s);

 stringstream ss(s);

 print(ss);

 return 0;

}
*/


#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    string s;
    cin >> s; // ব্যবহারকারীর কাছ থেকে একটি স্ট্রিং ইনপুট নেওয়া হচ্ছে, যেমনঃ Hello

    reverse(s.begin(), s.end()); // এটি `s` স্ট্রিংয়ের শুরু থেকে শেষ পর্যন্ত প্রতিটি ক্যারেক্টারকে উল্টে দেয়

    cout << s << endl;
    return 0;
}