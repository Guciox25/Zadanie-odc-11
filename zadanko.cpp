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
	cout<<"srednia wynosi: "<<srednia;
	
	float roznica; //liczba najblizej sredniej to najmniejsza wrtosc wyrazenia "|liczbe-srednia|
	roznica=srednia-tab[0];
	if(roznica<0) roznica*=-1;
	float x;
	float odp;
	int *tablica, z=0;
	odp=tab[0];
	
	for(int i=1;i<5;i++)
	{
		x=srednia-tab[i];
		if(x<0) x*=-1;
		if(roznica==x)
		{
		z++;
		tablica= new int[z];
		tablica[z]=tab[i];	
		}
		if(roznica>x)
		{
			roznica=x;
			odp=tab[i];
		}
	}
	
	if(z==0)
	{

	cout<<"liczba to: "<<odp;
	}
	else
	{
		cout<<"liczby to: ";
		for(int i=0;i <z;i++)
		{
			cout<<*tablica[i]<<" ";
		}	
	}	
	delete[] tablica;
	return 0;
}
