#include <iostream>
#include <string>
using namespace std;

static double medcost, surcost, totalcost;
class PatientAccount{
private:
	int day;
public:
	PatientAccount(int days) {
		day = days;
	
	}

	//static double medcost,surcost,totalcost;
	/*void setmedcost(double medcosts) {
		medcost = medcosts;
	}
	void setsurcost(double surcosts) {
		surcost = surcosts;
	}*/
	double gettotal() {
		
			return totalcost = medcost  + surcost + (day *100);//  medcost  + surcost + day *100
	}
};
class Surgery {
private:
	int bone,eye,ears,head,leg, num;
	double price1 = 0;
	double price[6];
public :
	Surgery(int num2) {
		num = num2;
		price[num2];
	}
	void setnum(int num2) {
		num = num2;
	}
	double getSurgeryprice() {
		price[1] = 100;
		price[2] = 50;
		price[3] = 200;
		price[4] = 500;
		price[5] = 70;
		price1 = price[num];
		return price1;
	}
	double getSurgerypricetotal() {
		surcost += price1;
		return surcost;
	}
	double gettotal() {
		
		return surcost;
	}
	double getSurgeryprice2() {
		char x;
		do {
			cout << "1.bone surgeries 100" << endl;
			cout << "2.eye surgeries 50" << endl;
			cout << "3.ears surgeries 200 " << endl;
			cout << "4.,head surgeries 500" << endl;
			cout << "5.leg surgeries 70" << endl;
			cin >> num;
			cout << "the surgery fee is " << endl;
			getSurgeryprice();
			cout << getSurgerypricetotal() << endl;
			cout << "are u want another surgery? Y/N " << endl;
			cin >> x;
		} while (x!='N');
		return gettotal();
	}
};
class Pharmacy {
private:
	int Biotic, killers, antifungal, antiviral, analgesics,num;
	double price1 = 0;
	double price[6];
public:
	Pharmacy(int num2) {
		num = num2;
		price[num];
	}
	double getPharmacyprice() {
		price[1] = 200;
		price[2] = 60;
		price[3] = 500;
		price[4] = 100;
		price[5] = 70;
		price1 = price[num];
		return price1;
	}
	double getPharmacypricetotal() {

		medcost += price1;
		return medcost;
	}
	double gettotal() {
		return medcost;
	}
	double getPharmacyprice2() {
		char x;
		do {
			cout << "1.Biotic 200" << endl;
			cout << "2. killers 60 " << endl;
			cout << "3. antifungal 500" << endl;
			cout << "4. antiviral 100" << endl;
			cout << "5. analgesics 70" << endl;
			cin >> num;
			cout << "the medication fee is " << endl;
			getPharmacyprice();
			cout << getPharmacypricetotal() << endl;
			cout << "are u want another medication? Y/N " << endl;
			cin >> x;
		} while (x != 'N');
		return gettotal();
	}
};
int main() {
	int chooice1, chooice2,day;
	char chooice3, chooice4;
	cout << "welcome the hospital" << endl;
	cout << "our type of surgeries(enter the number)" << endl;
	cout << "1.bone surgeries 100" << endl;
	cout << "2.eye surgeries 50" << endl;
	cout << "3.ears surgeries 200 " << endl;
	cout << "4.,head surgeries 500" << endl;
	cout << "5.leg surgeries 70" << endl;
	cin >> chooice1;
	Surgery Surgery1(chooice1);
	cout << "the surgery fee is " << endl;
	cout << Surgery1.getSurgeryprice() << endl;
	Surgery1.getSurgerypricetotal();
	cout << "are u want another surgery? Y/N " << endl;
	cin >> chooice3;
	if (chooice3 == 'Y') {
		Surgery1.getSurgeryprice2();
	}
	cout << "our type of medication.(enter the number)" << endl;
	cout << "1.Biotic 200" << endl;
	cout << "2. killers 60 " << endl;
	cout << "3. antifungal 500" << endl;
	cout << "4. antiviral 100" << endl;
	cout << "5. analgesics 70" << endl;
	cin >> chooice2;
	Pharmacy Pharmacy1(chooice2);
	cout << "the medication fee is " << endl;
	cout << Pharmacy1.getPharmacyprice() << endl;
	Pharmacy1.getPharmacypricetotal();
	cout << "are u want another medication? Y/N " << endl;
	cin >> chooice4;
	if (chooice4 == 'Y') {
		Pharmacy1.getPharmacyprice2();
	}
	cout << "the number of day " << endl;
	cin >> day;
	PatientAccount PatientAccount1(day);
	cout << "total =  medcost  + surcost + day *100 " << endl;
	cout << PatientAccount1.gettotal();
}