//David Sayer
//CIS 1202 800
//4/21/22

#include<iostream>

using namespace std;

//Template used to recieve and return any data type value
template <typename Template>
Template half(Template value)
{
	Template result;

	result = value / 2;

	//Checks to see if value is and int
	if (*typeid(value).name() == 'i')
	{
		if (result * 2 != value) //If the value was odd then the result will round down this will make it round up essentually.
		{
			result++;
		}
	}
	return result;
}

//Main function
int main()
{
	double a = 7.0;
	float b = 5.0f;
	int c = 3;
	double d = 14.25;

	cout << half(a) << endl;
	cout << half(b) << endl;
	cout << half(c) << endl;
	cout << half(d) << endl;


}