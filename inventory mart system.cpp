#include <iostream>
#include<string>
#include <ctime>
#include<fstream>
using namespace std;
void bill(double total){
	cout<<"Enter your name for billing please ";
	string name;
	cin>>name;
	
	 // current date/time based on current system
   time_t now = time(0);
   
   // convert now to string form
   char* dt = ctime(&now);
 
 cout<<"******************************\n";
   cout << "order placed at time ^<^ " << dt <<endl;
 cout<<"******************************\n";
 cout<<"dear  "<<name<<",";
  cout<<"\n******************************\n";
	ofstream MyFile("selling record.txt");
	cout<<"your total are = "<<total;
	MyFile<<"your total are = "<<total;
print:	cout<<"\nEnter your amount = ";
		double amount;
	cin>>amount;

	if (amount>=total){
	
	cout<<"******************************\n";
	cout<<"Your return is = "<<amount-total;
	MyFile<<"Your return is = "<<amount-total;
}

else {cout<<"\n you can't leave the store unless you clear your bill \n";
	goto print;
	
} 
	}

void total(int price, int quantity){

		
	bill(price*quantity);

}

void soap(){
	cout<<"options for soaps are\n";
	string soap[]={"life_bouy", "Lux","Dettol", "dove","safe_guard"};
	int soap_cost[]={160,135,215,365,110};
	for(int i=0;i<5;i++){
	cout<<i<<" "<<soap[i]<<endl;
}
cout<<"Enter number accordingly for buying soaps ";
int item_number;
cin>>item_number;
double price;
int quantity;
switch(item_number){
	case 0: price=160; cout<<"you entered life_bouy and its price is "<<price;
	cout<<"\nEnter quantity please = ";
	cin>>quantity;
	total(price,quantity);
	break;
	case 1: price=135; cout<<"you entered lux and its price is "<<price;
cout<<"\n Enter quantity please = ";
	cin>>quantity;
		total(price,quantity);
	break;
	case 2: price=215; cout<<"you entered dettol and its price is "<<price;
	cout<<"\n Enter quantity please = ";
	cin>>quantity;
		total(price,quantity);
	break;
	case 3: price=365; cout<<"you entered dove and its price is "<<price;
	cout<<"\n Enter quantity please = ";
	cin>>quantity;
		total(price,quantity);
	break;
	case 4: price=110; cout<<"you entered safe_guard and its price is "<<price;
	cout<<"\n Enter quantity please = ";
	cin>>quantity;
		total(price,quantity);
	break;
	
}
}

void biscuits(){
	cout<<"options for biscuits are\n";
	string biscuits[]={"sooper", "Peanut_pista","gluco", "party","zera_plus"};
	
	for(int i=0;i<5;i++){
	cout<<i<<" "<<biscuits[i]<<endl;
}
cout<<"Enter number accordingly for buying biscuits ";
int item_number;
cin>>item_number;
double price;
int quantity;
switch(item_number){
	case 0: price=40; cout<<"you entered sooper and its price is "<<price;
	cout<<"\n Enter quantity please = ";
	cin>>quantity;
	total(price,quantity);
	break;
	case 1: price=50; cout<<"you entered Peanut_pista and its price is "<<price;
cout<<"\n Enter quantity please = ";
	cin>>quantity;
		total(price,quantity);
	break;
	case 2: price=40; cout<<"you entered gluco and its price is "<<price;
	cout<<"\n Enter quantity please = ";
	cin>>quantity;
		total(price,quantity);
	break;
	case 3: price=30; cout<<"you entered party and its price is "<<price;
	cout<<"\n Enter quantity please = ";
	cin>>quantity;
		total(price,quantity);
	break;
	case 4: price=15; cout<<"you entered zera_plus and its price is "<<price;
	cout<<"\n Enter quantity please = ";
	cin>>quantity;
		total(price,quantity);
	break;
	
}
}

void  snacks(){
	cout<<"options for snacks are\n";
	string snacks[]={"lays", "kurleez","lays_wavy", "pop_corn","oreos"};
	int snacks_cost[]={50,30,100,75,15};
	for(int i=0;i<5;i++){
	cout<<i<<" "<<snacks[i]<<endl;
}
cout<<"Enter number accordingly for buying snacks ";
int item_number;
cin>>item_number;
double price;
int quantity;
switch(item_number){
	case 0: price=50; cout<<"you entered lays and its price is "<<price;
	cout<<"\n Enter quantity please = ";
	cin>>quantity;
	total(price,quantity);
	break;
	case 1: price=30; cout<<"you entered kurleez and its price is "<<price;
cout<<"\n Enter quantity please = ";
	cin>>quantity;
		total(price,quantity);
	break;
	case 2: price=100; cout<<"you entered lays_wavy and its price is "<<price;
	cout<<"\n Enter quantity please = ";
	cin>>quantity;
		total(price,quantity);
	break;
	case 3: price=75; cout<<"you entered pop_corn and its price is "<<price;
	cout<<"\n Enter quantity please = ";
	cin>>quantity;
		total(price,quantity);
	break;
	case 4: price=75; cout<<"you entered oreos and its price is "<<price;
	cout<<"\n Enter quantity please = ";
	cin>>quantity;
		total(price,quantity);
	break;
	
}
}
void drinks(){
	cout<<"options for drinks are\n";
	string drinks[]={"pepsi", "coca-cola","7up", "pakola","marinda"};
	int snacks_cost[]={60,60,60,60,60};
	for(int i=0;i<5;i++){
	cout<<i<<" "<<drinks[i]<<endl;
}
cout<<"Enter number accordingly for buying drinks ";
int item_number;
cin>>item_number;
double price;
int quantity;
switch(item_number){
	case 0: price=60; cout<<"you entered pepsi and its price is "<<price;
	cout<<"\n Enter quantity please = ";
	cin>>quantity;
	total(price,quantity);
	break;
	case 1: price=60; cout<<"you entered coca-cola and its price is "<<price;
cout<<"\n Enter quantity please = ";
	cin>>quantity;
		total(price,quantity);
	break;
	case 2: price=60; cout<<"you entered 7up and its price is "<<price;
	cout<<"\n Enter quantity please = ";
	cin>>quantity;
		total(price,quantity);
	break;
	case 3: price=60; cout<<"you entered pakola and its price is "<<price;
	cout<<"\n Enter quantity please = ";
	cin>>quantity;
		total(price,quantity);
	break;
	case 4: price=60; cout<<"you entered marinda and its price is "<<price;
	cout<<"\n Enter quantity please = ";
	cin>>quantity;
		total(price,quantity);
	break;
	
}
}

void chocholate(){
	cout<<"options for chocholate are\n";
	string chocolate[]={"dairy_milk", "mars","cadbury", "kit_kat","bublee"};
	int chocholate_cost[]={810,169,240,1815,749};
	for(int i=0;i<5;i++){
	cout<<i<<" "<<chocolate[i]<<endl;
}
cout<<"Enter number accordingly for buying drinks ";
int item_number;
cin>>item_number;
double price;
int quantity;
switch(item_number){
	case 0: price=810; cout<<"you entered dairy mik and its price is "<<price;
	cout<<"\n Enter quantity please = ";
	cin>>quantity;
	total(price,quantity);
	break;
	case 1: price=169; cout<<"you entered mars and its price is "<<price;
cout<<"\n Enter quantity please = ";
	cin>>quantity;
		total(price,quantity);
	break;
	case 2: price=240; cout<<"you entered cadbury and its price is "<<price;
	cout<<"\n Enter quantity please = ";
	cin>>quantity;
		total(price,quantity);
	break;
	case 3: price=1815; cout<<"you entered kit_kat and its price is "<<price;
	cout<<"\n Enter quantity please = ";
	cin>>quantity;
		total(price,quantity);
	break;
	case 4: price=749; cout<<"you entered bublee and its price is "<<price;
	cout<<"\n Enter quantity please = ";
	cin>>quantity;
		total(price,quantity);
	break;
	
}
}
void  electronic(){
	cout<<"options for electronic accessories are\n";
	string electronic[]={"head_phone", "ear_buds","charger", "adapoter","screen_guard"};
	int electronic_cost[]={590,1599,500,950,100};
	for(int i=0;i<5;i++){
	cout<<i<<" "<<electronic[i]<<endl;
}
cout<<"Enter number accordingly for buying electronic accessories ";
int item_number;
cin>>item_number;
double price;
int quantity;
switch(item_number){
	case 0: price=590; cout<<"you entered head_phone and its price is "<<price;
	cout<<"\n Enter quantity please = ";
	cin>>quantity;
	total(price,quantity);
	break;
	case 1: price=1599; cout<<"you entered ear_buds and its price is "<<price;
cout<<"\n Enter quantity please = ";
	cin>>quantity;
		total(price,quantity);
	break;
	case 2: price=500; cout<<"you entered charger and its price is "<<price;
	cout<<"\n Enter quantity please = ";
	cin>>quantity;
		total(price,quantity);
	break;
	case 3: price=950; cout<<"you entered adapoter and its price is "<<price;
	cout<<"\n Enter quantity please = ";
	cin>>quantity;
		total(price,quantity);
	break;
	case 4: price=100; cout<<"you entered screen_guard and its price is "<<price;
	cout<<"\n Enter quantity please = ";
	cin>>quantity;
		total(price,quantity);
	break;
	
}
}


int main(int argc, char** argv) {
	cout<<"Muhammad Yaqoob's MART \n";
	
	
 	cout<<"HERE ARE THE KEY ITEMS\n";
	print:
	cout<<"\nEnter your choice please among these option \n"; //menu for customer to buy 
	cout<<"Enter 1 for soaps\n";
		cout<<"Enter 2 for biscuits\n";
		cout<<"Enter 3 for snacks\n";
		cout<<"Enter 4 for drinks\n";
		cout<<"Enter 5 for chocholates\n";
		cout<<"Enter 6 for electronic accessories\n";
		int ch;
		cin>>ch;
		
		switch(ch){
			case 1: soap();     
			break;
			case 2: biscuits();
			break;
			case 3: snacks();
			break;
			case 4: drinks();
			break;
			case 5: chocholate();
			break;
			case 6: electronic();
			break;
			default:cout<<"Invalid option. Please enter correct option ";
			goto print;
			break;
	return 0;
	
}}	 
