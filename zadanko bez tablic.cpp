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
	
	float roznica; //liczba najblizej sredniej to najmniejsza wrtosc wyrazenia "|liczbe-srednia|
	roznica=srednia-tab[0];
	if(roznica<0) roznica*=-1;
	float x;
	float odp;
	int z=0, y=0;
	
	odp=tab[0];
	
	for(int i=1;i<5;i++)
	{
		x=srednia-tab[i];
		if(x<0) x*=-1;
		if(roznica==x)
		{
			z++;
			if(i==1)
			{
				y=1;
			}
			if(z==1)
			{
				cout<<"liczby najblizej sredniej to: "<<tab[i];
			}
			else
			{
				cout<<" "<<tab[i];
			}
		}
		if(roznica>x)
		{
			roznica=x;
			odp=tab[i];
		}
	}
	if(z==0)
	{
		cout<<"liczba najbizej sredniej to: "<<odp;
	}
	if(y==1)
	{
		cout<<" "<<odp;
	}
	return 0;
}
