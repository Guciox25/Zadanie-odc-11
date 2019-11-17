#include <iostream>
using namespace std;

int main()
{
	float tab[5], suma=0, srednia;
	for(int i=0;i<5; i++)
	{
		cout<<"podaj liczbe "<<i+1<<": ";
		cin>>tab[i];
		suma+=tab[i];
		cout<<endl;
	}
	srednia=suma/5;
	cout<<"srednia wynosi: "<<srednia<<endl;
	cout<<"liczba najblizej sredniej to: ";
	float roznica=srednia-tab[0];
	if(roznica<0)roznica*=-1;
	float odp[2];
	float x;
	float test;
	test=odp[1];
	odp[0]=tab[0];
	for(int i=1; i<5;i++)
	{
		x=srednia-tab[i];
		if(x<0)x*=-1;
		if(x<roznica)
		{
			odp[0]=tab[i];
		}
		if(x==roznica)
		{
			odp[1]=tab[i];
		}
	}
	if(odp[0]==odp[1])
	{
		cout<<odp[1];
	}
	else if(odp[1]!=test)
	{
		cout<<odp[0]<<" "<<odp[1]<<endl;
	}
	else
	{
		cout<<odp[0];
	}
	return 0;
}
