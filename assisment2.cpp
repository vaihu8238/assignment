#include<string>
#include<iostream>
using namespace std;

int main()
{
	string name;
	int pizza;
	int burger;
	int sandwitch;
	int paratha;
	float bill=0;
	
	cout<<"----------------------MENU--------------------";
	
	cout<<"\n pizza---------------------------- = 999";
	cout<<"\n burger--------------------------- = 250";
	cout<<"\n sandwitch------------------------ = 150";
	cout<<"\n paratha-------------------------- = 200";
	
	
	cout<<"\n\n\n----------------------ORDER NOW----------------";
	
	cout<<"\n what is customer name : ";
	cin>>name;
	
	
	cout<<"\n how many pizza you want : ";
	cin>>pizza;
	cout<<"\n how many burger you want : ";
	cin>>burger;
	cout<<"\n how many sandwitch you want : ";
	cin>>sandwitch;
	cout<<"\n how many paratha you want : ";
	cin>>paratha;
	
	
	int Bill=( pizza*999 + burger*250 + sandwitch*150 + paratha*200 );
	float tax = (Bill*0.19);
	float tbill = tax+Bill;
	
	cout<<"\n-------------------------RECEIPT OF ORDER-------------------------";
	cout<<"\n\t customer name \t\t\t("<<name<<")";
	cout<<"\n\t pizza \t\t\t\t("<<pizza<<")";
	cout<<"\n\t burger \t\t\t("<<burger<<")";
	cout<<"\n\t sandwitch \t\t\t("<<sandwitch<<")";
	cout<<"\n\t paratha \t\t\t("<<paratha<<")";
	
	cout<<"\n\t\t\t\t--------------------------------------------";
	
	cout<<"\n\t Bill         : "<<Bill;
	cout<<"\n\t tax(19%)     : "<<tax;
	cout<<"\n\t sub total    : "<<tbill;
	
	if(Bill>1000)
	{
		float bill=(Bill*0.02);
		float dtbill=(tbill-(Bill*0.02));
		
		cout<<"\n\n\t\t Discount : "<<bill;
		cout<<"\n\t\t\t\t---------------------------";
		cout<<"\n\t\t Total Bill : "<<dtbill;
		cout<<"\n\t\t\t\t---------------------------";
	}
	
	else
	
	{
		cout<<"\n\n Discount : "<<bill;
		cout<<"\n\t\t\t\t---------------------------";
		cout<<"\n Total Bill : "<<tbill;
		cout<<"\n\t\t\t\t---------------------------";
	}
	
	
}