#include<iostream>
#include<iomanip> //For using setw(), setprecision(), ...
using namespace std;

int main(){	
	double loan,rate,pay;
	cout << "Enter initial loan: ";
	cin >> loan;
	cout << "Enter interest rate per year (%): ";
	cin >> rate;
	cout << "Enter amount you can pay per year: ";
	cin >> pay;

	//use 'setw' to set width of table and 'left' to set left-alignment
	//you can change input argument of 'setw()' to see the effect
	//Try to change from 'left' to 'right' and see the effect
	double interrest;
	int year=1;

	cout << setw(13) << left << "EndOfYear#"; 
	cout << setw(13) << left << "PrevBalance"; 
	cout << setw(13) << left << "Interest"; 
	cout << setw(13) << left << "Total";
	cout << setw(13) << left << "Payment";
	cout << setw(13) << left << "NewBalance";
	cout << "\n";
	
	while(loan>0){
		cout << setw(13) << left << year;
		cout << fixed << setprecision(2);
		cout << setw(13) << left << loan;
		interrest=(loan*rate)/100;
		cout << setw(13) << left << interrest;
		loan += interrest;
		cout << setw(13) << left << loan;
		if(loan<pay)
			pay=loan;
		cout << setw(13) << left << pay;
		loan -= pay;
		cout << setw(13) << left << loan;
		cout << "\n";
		year++;
	}
	
	return 0;
}
