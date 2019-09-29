#include <iostream>
using namespace std;
#include "std_lib_facilities.h" 
int main()
{
	cout<<"Enter the name of the person you want to write to:(followed by 'enter'):\n";
	string first_name;
	cin>>first_name;
	cout<<"Hello, "<<first_name<<"!\n";
	cout<<"How are you?\n";
	cout<<"I am fine.\n";
	cout<<"I miss you.\n";
	string friend_name;
	cout<<"Enter the name of a friend:\n";
	cin>>friend_name;
	cout<<"Have you seen "<<friend_name<<" lately?\n";
	cout<<"Write m if your friend is male and f if she is female\n";
	char friend_sex='0';
	cin>>friend_sex;
	if(friend_sex=='m')
	{
		cout<<"If you see "<<friend_name<<" please ask him to call me.\n";
	}
	else if(friend_sex=='f')
	{
		cout<<"If you see "<<friend_name<<" please ask her to call me.\n";
	}
	int age=0;
	cout<<"Enter the age of your friend:\n";
	cin>>age;
	if(age<=0 || age>=110)
	{
		simple_error("you're kidding!");
	}
	else
	{
		cout<<"I hear you just had a birthday and you are "<<age<< " years old.\n";
	}
	switch(age)
	{
		case 17:
		{
			cout<<"Next year you will be able to vote.\n";
			break;
		}
	}
	if(age<12)
	{
		cout<<"Next year you will be"<<age+1<<"\n";
	}
	else if(age>70)
	{
		cout<<"I hope you enjoy retirement.\n";
	}
	cout<<"Yours sincerely,\t\t";
}
