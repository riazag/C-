#include<iostream>
#include<string.h>
#include<stdio.h>
#include<conio.h>
#include <cstdlib>
#include <ctime>
#include"OOP_PROJECT(FINAL_H).h"
using namespace std;

int main(){
	
	 Admin admin;
	 Passenger passanger;
	
	// -----------Dynamci Memory Alloc-------------------------------
	 Passenger *All_Passengers = new  Passenger[200];
	  Flight *flights =new Flight[100];
	 Admin *All_Admins = new Admin[5];
	 //-----------------Yaha Tak-------------------------
	 
	 int total_pass=0;
	 int total_admin = 0;
	 int total_flights = 0;
	//------------Populate NAFS application with sufficient data before submission, to demonstrate each feature//----------------------
	  Flight flight1("Islamabad","Dubai","12:00 AM","4:00 AM",4,150);
	  flights[total_flights] = flight1;
	  total_flights++;
	   Flight flight2("Peshawer","Qatar","1:00 AM","6:00 AM",5,100);
	   flights[total_flights] = flight2;
	  total_flights++;
	    Flight flight3("Karachi","Lahore","4:00 PM","5:00 PM",1,150);
	    flights[total_flights] = flight3;
	  total_flights++;
	     Flight flight4("Peshawer","Dubai","12:00 AM","4:00 AM",4,150);
	     flights[total_flights] = flight4;
	  total_flights++;
	      Flight flight5("Islamabad","Skardu","1:00 PM","2:00 PM",1,150);
	      flights[total_flights] = flight5;
	  total_flights++;
	      
	//-------------------	Yaha Takk--------------------------------------------------------
	while(true){   /// -----------------Infinite LOOP To Run Program untill USER Enter exit option------------------------
		
		cout<<endl<<endl;
		displayMainMenu();
		int opt1;
		cout<<"Enter Option:";
		cin>>opt1;
		while(opt1>4 || opt1<1){
			cout<<"Invalid choice. Please enter a valid choice:";
			cin>>opt1;
		}
		
		if (opt1 == 1) {
			int opt2;
            //cout << "Registration code executed." << endl;
            cout<<"--------------------------------"<<endl;
            cout<<"1 - Admin:"<<endl;
            cout<<"2 - Passanger:"<<endl;
            cout<<"--------------------------------"<<endl;
            cout<<"Enter Option:";
            cin>>opt2;
            while(opt2>2 || opt2<1){
            	cout<<"Please Enter Valid Option:";
            	cin>>opt2;
			}
			
			if(opt2==1){//-------> Admin
			        // Registration Code.
			        cout<<"-------------Admin Registration------------------"<<endl;
			        string name;
			        string password;
			        int x = 0;
			        string re_password;
			        cout<<"Enter Your Name:";
			        cin>>name;
			        cout<<"Enter New Password:";
			        
			        
			        char c;
					do
					{
					c = getch();
					cout << '*';
					password += c;
					} while (c != '\r' && c!=13 && c!='\n');
					password.erase(password.size() - 1);
					cout<<endl;
			        //cin>>password;
			        while(!verifyPassword(password)){
			        	cout<<"Invalid Password Please Enter Password Again:";
			            //cin>>password;
			            	do
							{
							c = getch();
							cout << '*';
							password += c;
							} while (c != '\r' && c!=13 && c!='\n');
							password.erase(password.size() - 1);
					}
					
			        cout<<"Re-Enter Password to Confirm:";
			        //cin>>re_password;
			        
			        	do
					{
					c = getch();
					cout << '*';
					re_password += c;
					} while (c != '\r' && c!=13 && c!='\n');
					re_password.erase(re_password.size() - 1);
			        
			        while(re_password!=password){
			        	cout<<"Incorrect Password Please Re-Enter Password to Confirm:";
			            //cin>>re_password;
			            	do
					{
					c = getch();
					cout << '*';
					re_password += c;
					} while (c != '\r' && c!=13 && c!='\n');
					re_password.erase(re_password.size() - 1);
			            
					}
					cout<<endl;
					admin.setName(name);
					admin.setPassword(password);
					
					All_Admins[total_admin] = admin;
					total_admin++;
					
					cout<<"Admin Registrated Sucessfully"<<endl;
					cout<<"----------------------------------------------------------------------"<<endl;
						char ch;
			cout<<"Enter Any character To continue:";
			cin>>ch;
			system("CLS");
				
			}else{//opt2=2 -----> Passanger
			 cout<<"-------------Passanger Registration------------------"<<endl;
			string name;
			        string password;
			        string re_password;
			        string cnic;
			        cout<<"Enter Your Name:";
			        cin>>name;
			        cout<<"Enter New Password:";
			        //cin>>password;
			        
			        char c;
					do
					{
					c = getch();
					cout << '*';
					password += c;
					} while (c != '\r' && c!=13 && c!='\n');
					password.erase(password.size() - 1);
			        
			        
			        while(!verifyPassword(password)){
			        	cout<<"Invalid Password Please Enter Password Again:";
			            //cin>>password;
			            	do
					{
					c = getch();
					cout << '*';
					password += c;
					} while (c != '\r' && c!=13 && c!='\n');
					password.erase(password.size() - 1);
			            
			            
					}
					cout<<endl;
			        cout<<"Re-Enter Password to Confirm:";
			        //cin>>re_password;
			        
			        	do
					{
					c = getch();
					cout << '*';
					re_password += c;
					} while (c != '\r' && c!=13 && c!='\n');
					re_password.erase(re_password.size() - 1);
			        
			        
			        cout<<endl;
			        while(re_password!=password){
			        	cout<<"Incorrect Password Please Re-Enter Password to Confirm:";
			            //cin>>re_password;
			            	do
						{
						c = getch();
						cout << '*';
						re_password += c;
						} while (c != '\r' && c!=13 && c!='\n');
						re_password.erase(re_password.size() - 1);
					}
					
					cout<<"Enter CNIC( length must be equal to 13 ):";
					cin>>cnic;
					while(cnic.length()!=13){
						cout<<"Invalid CNIC Number Please Enter Again:";
						cin>>cnic;
					}
					passanger.setName(name);
					passanger.setPassword(password);
				    passanger.setCNIC(cnic);
					
					All_Passengers[total_pass] = passanger;
					total_pass++;
					cout<<"Passanger Registrated Sucessfully"<<endl;
					cout<<"----------------------------------------------------------------------"<<endl;
						char ch;
			cout<<"Enter Any character To continue:";
			cin>>ch;
			system("CLS");
			
				// Registration Code.
				
				
			}
            
        }
        else if (opt1 == 2) {
            
            cout << "Login code executed." << endl;
            cout<<"-------------------------------------------"<<endl;
            cout<<"1 - Admin"<<endl;
            cout<<"2 - Passanger"<<endl;
            cout<<"-------------------------------------------"<<endl;
            int opt2;
            cout<<"Enter Option:";
            cin>>opt2;
            while(opt2<1 || opt2>2){
            	cout<<"Please Enter Valid Option:";
            	cin>>opt2;
			}
			
			if(opt2==1){// Admin Code
				cout<<"--------------------------Admin Login -----------------------"<<endl;
				Admin admn;
				bool flag = false;
				string name;
				string password;
				cout<<"Enter User Name:";
				cin>>name;
				cout<<"Enter Password:";
				char c;
				//cin>>password;
					do
					{
					c = getch();
					cout << '*';
					password += c;
					} while (c != '\r' && c!=13 && c!='\n');
					password.erase(password.size() - 1);
				
				for(int i=0;i<total_admin;i++){
					if( All_Admins[i].getName()==name && All_Admins[i].getPassword()==password){
						admn = All_Admins[i];
						flag = true;
						break;
					}
				}
				
				if(flag){// Admin Exist
				// Admin Code...
				cout<<"\nAdmin Loged In successfully"<<endl;
					char ch;
			cout<<"Enter Any character To continue:";
			cin>>ch;
			system("CLS");
				display_Admin_Menu();
				int opt;
				cout<<"Enter Option:";
				cin>>opt;
				while(opt<1 || opt>4){
					cout<<"Invalid Option Please Enter again:";
					cin>>opt;
				}
				if(opt==1){// update Source + destnitaion
				string source;
				string dest;
				cout<<"Enter Source of Flight:";
				cin>>source;
				cout<<"Enter Distantion of Flight:";
				cin>>dest;
				bool flag = false;
				for(int i=0;i<total_flights;i++){
					if(flights[i].getSource()==source && flights[i].getDestination()==dest){
						cout<<"------------------Flight Details----------------"<<endl;
						flights[i].printFlight();
						cout<<"-------------------------------------------------:"<<endl;
						string new_dest;
						cout<<"Enter New Distenation:";
						cin>>new_dest;
						flights[i].setDestination(new_dest);
						flag = true;
						break;
						
						
					}
				}
				
				if(!flag){
					cout<<"Flight Not Found......"<<endl;
				}
				
					char ch;
			cout<<"Enter Any character To continue:";
			cin>>ch;
			system("CLS");
					
				}else if(opt==2){// Update timing
				
				
				
					string source;
				string dest;
				cout<<"Enter Source of Flight:";
				cin>>source;
				cout<<"Enter Distantion of Flight:";
				cin>>dest;
				bool flag = false;
				for(int i=0;i<total_flights;i++){
					if(flights[i].getSource()==source && flights[i].getDestination()==dest){
						cout<<"------------------Flight Details----------------"<<endl;
						flights[i].printFlight();
						cout<<"-------------------------------------------------:"<<endl;
					    string new_Dep;
					    string new_Arr;
					    cout<<"Enter New Departure Time:";
					    cin>>new_Dep;
					    cout<<"Enter New Arrival Time:";
					    cin>>new_Arr;
					    flights[i].departureTime = new_Dep;
					    flights[i].arrivalTime = new_Arr;
						flag = true;
						break;
						
						
					}
				}
				
				if(!flag){
					cout<<"Flight Not Found......"<<endl;
				}
				
					char ch;
			cout<<"Enter Any character To continue:";
			cin>>ch;
			system("CLS");
				
					
				}else if(opt==3){ //  Remove Passangers
				
				
				
				system("CLS");
					cout<<"--------------------Remove Passenger------------------"<<endl;
						string name;
						string cnic;
						string source;
						string dest;
						cout<<"Enter Source of Flight:";
						cin>>source;
						cout<<"Enter Distinations of Flight:";
						cin>>dest;
						bool flage1  = false;
						bool flage2 = false;
				
				       for(int i=0;i<total_flights;i++){
				       	if(flights[i].getSource()==source && flights[i].getDestination()==dest){
				       		flage1 = true;
				       		string name;
				       		string cnic;
				       		flights[i].printFlight();
				       		cout<<"\n-------------------------------------------"<<endl;
				       		cout<<"Enter Name of Passenger Do You want to Remove:";
				       		cin>>name;
				       		cout<<"Enter Cnic of Passenger Do You Want to Remove:";
				       		cin>>cnic;
				       		for(int j=0;j<flights[i].total_passanger;j++){
				       		  if(flights[i].passangers[j].getName()==name && flights[i].passangers[j].getCNIC()==cnic){
				       		  	flage2 = true;
				       		  	flights[i].print_Passanger(j);
				       		  	flights[i].Remove_Passenger(flights[i].passangers[j],j);
				       		  	cout<<"Passenger Removed Sucessfully"<<endl;
								 }
							}
						   }
					   }
					   if(!flage1){
					   	cout<<"Flight Not Found"<<endl;
					   }
					   if(flage1 && !flage2){
					   	cout<<"Passenger Not Found"<<endl;
					   }
				    char ch;
				    cout<<"Enter Any Character To continue..:";
				    cin>>ch;
				    system("CLS");
				}else{// View Details
					cout<<"--------------------Flight Details---------------------------"<<endl;
					for(int i = 0;i<total_flights;i++){
						flights[i].printFlight();
						cout<<"--------------------------------------------"<<endl;
					}
					
						char ch;
			cout<<"Enter Any character To continue:";
			cin>>ch;
			system("CLS");
				}
				
				
					
				}else{  // Admin does not Exist,
					cout<<"Admin Does Not Exist"<<endl;
						char ch;
			cout<<"Enter Any character To continue:";
			cin>>ch;
			system("CLS");
				}
				
				
				
				
			}else{// Passanger Code
				cout<<"--------------------------Passenger Login -----------------------"<<endl;
				string name;
				string password;
				Passenger pass;
				char c;
				bool flag= false;
					cout<<"Enter User Name:";
				cin>>name;
				cout<<"Enter Password:";
				//cin>>password;
					do
					{
					c = getch();
					cout << '*';
					password += c;
					} while (c != '\r' && c!=13 && c!='\n');
					password.erase(password.size() - 1);
				
				
				for(int i=0;i<total_pass;i++){
					if(All_Passengers[i].getName()==name && All_Passengers[i].getPassword()==password){
						flag = true;
						pass = All_Passengers[i];
					}
				}
				
				if(flag){
					
					cout<<"Passanger Found"<<endl;
						char ch;
			cout<<"Enter Any character To continue:";
			cin>>ch;
			pass.setAccount("123456"); // Account_Number Of passanger
			pass.Account_Balance = 1000000;
			system("CLS");
					
					pass.displayUserMenu();
					int opt3;
					cout<<"Enter Option:";
					cin>>opt3;
					while(opt3<1 || opt3>5){
						cout<<"Please Enter Valid Option:";
						cin>>opt3;
					}
					
					if(opt3==1){//Flight Res
					string name;
					string Cnic;
					string source;
					string dist;
				    cout<<"------------------Flight Reservation OR Flight Booking--------------"<<endl;
				    bool flage= false;
				    cout<<"Enter Your Name:";
				    cin>>name;
				    cout<<"Enter Your Cnic:";
				    cin>>Cnic;
				    cout<<"Enter Source:";
				    cin>>source;
				    cout<<"Enter Distenition:";
				    cin>>dist;
				    bool local = false;
				    for(int i=0;i<total_flights;i++){
				    	if(flights[i].getSource()==source && flights[i].getDestination()==dist){
				    		if(flights[i].destination=="Pesahwer" || flights[i].destination=="Karachi" || flights[i].destination=="Islamabad" || flights[i].destination=="Lahore"){
				    			local = true;
							}
							if(!local){
								cout<<"For International Flights Visa is Required:"<<endl;
								cout<<"Do You Have Visa(Y/N):";
								char ch;
								while(!(ch=='Y' || ch=='y' || ch=='N' || ch=='n')){
									cout<<"Please Enter Valid Option:";
									cin>>ch;
								}
								
								if(ch=='y'||ch=='Y'){
									cout<<"You Have Visa You can Travel"<<endl;
									cout<<"10% Tex will be Deducted on International Flights:"<<endl;
									
								}else{
									cout<<"With Out Visa You can not Travel"<<endl;
									break;
								}
								
							}
				    		cout<<"-----------Flight is Availiabe---------------"<<endl;
				    		flage = true;
				    		flights[i].printFlight();
				    		char c;
				    		cout<<"Do You Want To book the Flight(Y/N):";
				    	    cin>>c;
				    	    while(!(c=='Y' || c=='y' || c=='N' || c=='n')){
				    	    	cout<<"Please Enter Valid Option(Y/N):";
				    	    	cin>>c;
							}
							if(c=='Y' || c=='y'){
								// Ticket Booked
								string str;
							   
							    cout<<"Enter Your Account Number:";
							    cin>>str;
							    while(str!=pass.getAccountNumber()){
							    	cout<<"You Enter Incorrect Account Number Please Enter Again:";
							    	cin>>str;
								}
								
								if(pass.Account_Balance< flights[i].Duration*10000){
									cout<<"Your Account Balance is Less Than total Flights cost so you can not Travel:"<<endl;
									cout<<"Ticket Booking is Canceled"<<endl;
								}else{
									 flights[i].bookSeat(pass);
									 cout<<"Payment Process Sucessfully Completed"<<endl;
										cout<<"Ticked Booked"<<endl;
								}
							    
							    
							
									char ch;
			cout<<"Enter Any character To continue:";
			cin>>ch;
			system("CLS");
								
							}else{
								// Ticket Rejected
								cout<<"Ticket Booking Rejected"<<endl;
									char ch;
			cout<<"Enter Any character To continue:";
			cin>>ch;
			system("CLS");
							}
							break;
						}
					}
					
			
					if(!flage){
						cout<<"Sorry No Flight is not Availiable"<<endl;
							char ch;
			cout<<"Enter Any character To continue:";
			cin>>ch;
			system("CLS");
					}
					
						
					}else if(opt3==2){//Flight Cancel
						cout<<"--------------------Flight Cancel------------------"<<endl;
						string name;
						string cnic;
						string source;
						string dest;
						cout<<"Enter Source:";
						cin>>source;
						cout<<"Enter Distinations:";
						cin>>dest;
						bool flage1  = false;
						bool flage2 = false;
						for(int i=0;i<total_flights;i++){
							if(flights[i].getSource()==source && flights[i].getDestination()==dest){
								flage1 = true;
								cout<<"------------------Flight Details-----------"<<endl;
								flights[i].printFlight();
								cout<<"--------------------------------------------"<<endl;
									cout<<"Enter Your Name:";
									cin>>name;
									cout<<"Enter Your CNIC:";
									cin>>cnic;
									for(int j=0;j<flights[i].total_passanger;j++)
									{
										if(flights[i].passangers[j].getName()==name &&  flights[i].passangers[j].getCNIC()==cnic){
											flage2 = true;
											char ch;
											cout<<"Yes Passanger Found:"<<endl;
											flights[i].print_Passanger(j);
											cout<<"Do You Want to Cancel flight(Y/N):";
											cin>>ch;
											while(!(ch=='Y' || ch=='y' || ch=='N' || ch=='n')){
												cout<<"Please Enter Valid Option:";
												cin>>ch;
											}
											if(ch=='Y' || ch=='y'){
												flights[i].Remove_Passenger(flights[i].passangers[j],j);
												cout<<"Your Ticket is Canceled"<<endl;
												
													char ch;
			cout<<"Enter Any character To continue:";
			cin>>ch;
			system("CLS");
											}else{
												cout<<"Your Ticket is Not Canceled"<<endl;
													char ch;
			cout<<"Enter Any character To continue:";
			cin>>ch;
			system("CLS");
											}
											
										}
									}
									if(!flage2){
										cout<<"Passanger Not Found"<<endl;
											char ch;
			cout<<"Enter Any character To continue:";
			cin>>ch;
			system("CLS");
									}
								
							}
						}
						
						if(!flage1){
								cout<<"Flight Not Found"<<endl;
									char ch;
			cout<<"Enter Any character To continue:";
			cin>>ch;
			system("CLS");
						}
					
						
					}else if(opt3==3){// Flight Scedual
					
					cout<<"--------------------Flight Scheduals------------------"<<endl;
					for(int i=0;i<total_flights;i++){
						flights[i].printFlight();
						cout<<"------------------------------------------"<<endl;
					}
					
						char ch;
			cout<<"Enter Any character To continue:";
			cin>>ch;
			system("CLS");
						
					}else if(opt3==4){// booking History
					string name;
					string cnic;
					cout<<"Enter Name:";
					cin>>name;
					cout<<"Enter Cnic:";
					cin>>cnic;
					bool flag4= false;
				
					
					for(int i=0;i<total_flights;i++){
						for(int j = 0;j<flights[i].total_passanger;j++){
							if(flights[i].passangers[j].getName()==name && flights[i].passangers[j].getCNIC()==cnic){
								cout<<"---------------Booking Details-------------------------"<<endl;
								flights[i].print_Passanger(j);
								flights[i].printFlight();
								flag4 = true;
							}
						}
					}
					
						char ch;
			cout<<"Enter Any character To continue:";
			cin>>ch;
			system("CLS");
					
					if(!flag4){
						cout<<"No Booking Detail Founds"<<endl;
							char ch;
			cout<<"Enter Any character To continue:";
			cin>>ch;
			system("CLS");
					}
					
					
						
					}else{// Logout
						cout<<"Loged Out Sucessfully"<<endl;
							char ch;
			cout<<"Enter Any character To continue:";
			cin>>ch;
			system("CLS");
					}
					
					//passanger Code......
				}
				else{
					cout<<"Passanger Does Not Exist"<<endl;
						char ch;
			cout<<"Enter Any character To continue:";
			cin>>ch;
			system("CLS");
				}
			}
			
			
        }
        else if (opt1 == 3) {
            cout << "----------------View NAFS details code executed-------------------" << endl;
            cout<<"-------------------------Flight Details-----------------------------"<<endl;
            for(int i = 0;i<total_flights;i++){
            	flights[i].printFlight();
            	cout<<"-----------------------------------------------------"<<endl;
			}
			char ch;
			cout<<"Enter Any character To continue:";
			cin>>ch;
			system("CLS");
        }
        else if (opt1 == 4) {
            cout << "Exiting NAFS. Thank you!" << endl;
            return 0;
        }
        else {
            cout << "Invalid choice. Please enter a valid choice." << endl;
        }
        
		
	}// while(true)
	
	return 0;
}
