#include<iostream>
using namespace std;

class Customers{
  public:
    int id,age;
    string cust_name,telecome_brand_name,mobile_number, city, simcard_validity;
    
  public:
    void setcust(){
    	cout << "Enter customers ID: ";
    	cin >> id;
    	cout << "Enter customers cust_name: ";
    	cin >> cust_name;
    	cout << "Enter customers age: ";
    	cin >> age;
    	cout << "Enter customers  telecome_brand_name: ";
    	cin >> telecome_brand_name;
    	cout << "Enter customers mobile_number: ";
    	cin >> mobile_number;
    	cout << "Enter customers city: ";
    	cin >> city;
    	cout << "Enter customers  simcard_validity: ";
    	cin >> simcard_validity;
    }
	
    void getcust(){
cout << "customers  ID: " << id << endl << "customers  name: " << cust_name << endl <<" customers age " << age <<
 endl << "customers telecome_brand_name"<< telecome_brand_name << endl << "customers  mobile_number: " 
	<< mobile_number << endl << "customers  city: " << city <<  "customers  simcard_validity: " << simcard_validity << endl;
    }
};

int main(){
    Customers cust[5];

    for(int i = 0; i < 5; i++){
    	cout << "Enter Customers information  " << i+1 << ": " << endl;
    	cust[i].setcust();
    	cout << endl;
    }
    cout << endl;
    for(int i = 0; i < 5; i++){
    	cout << " Customers information " << i+1 << ": " << endl;
    	cust[i].getcust();
    	cout << endl;
    }
     
}