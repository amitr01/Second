#include <iostream>
#include"ProductStore.h"
#include"ProductManager.h"
#include<string>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
//vector<ProductStore> product;
using namespace std;
int main() {

	int choice;
	
	  ProductManager p;
	  do{
	  	 cout<<"1.To Insert 2.To Display Details 3.To Deletion 4.To Exist"<<endl;
	  	cin>>choice;
	  	switch(choice){
	  		case 1:{
	  			int pid;
	       string prodName;
	           string prodDesc;
	         double price;
	   cout<<"Enter values"<<endl;
	   cout<<"Product ID:";
	   cin>>pid;
	    cout<<"Product Name:";
	   getline(cin>>ws,prodName);
	    
	    cout<<"Product Description";
	   getline(cin>>ws,prodDesc);
	    cout<<"Product Price";
	    cin>>price;
				ProductStore ps(pid,prodName,prodDesc,price);
				p.insertDetails(ps);
	  		      cout<<"Insertion successfully"<<endl;
	  		        break;
	  		    }
	  		case 2:{
	  			cout<<"Display Values"<<endl;
	  			 p.displayDetails();
				break;
			  }
			  case 3:{
			  	cout<<"Delete details"<<endl;
			  	string name;
			    getline(cin>>ws,name);
			  	p.deleteDetails(name);
			  	cout<<"Delete Successfully";
				break;
			  }
	  		default : {
			    cout<<"Invalid";
	  		         break;
	  		     }
		  }
	  }while(choice!=4);
	return 0;
}
