#include<iostream>
#include<cmatch>
using namespace std;
bool LD2(usingned int a)
{

	if (pow(2, a - 1) * (pow(2, a) - 1) == n)
	{
		return true;
	}
	else
	{
		return false;
	}




}
int main()
{
	int x;
	cout << "podaj liczbe" << endl;
	cin >> x;
	if (LD2(x) == 1)
	{
		cout << "Liczba " << x << "jest doskonala" << endl;
	}
	else
	{
		cout << "Liczba nie jest doskonala" << endl;
	}
	return 0;

}