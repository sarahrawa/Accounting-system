#include<iostream>
#include<string>
using namespace std;

//class to set password and username 
class Setpassword
 {  
 //attribute
 	private:
 		string UserName;
 		string PassWord;
 		//Methode 
 		public:
 		
 			void SetUserName(string username){
 				UserName=username;
			 }
			 
			 	void SetPassWord(string password){
 				PassWord=password;
			 }
 		
 		
 		string GetUserName()
 		{return UserName;
		 }
		 
		 string GetPassWord()
 		{return PassWord;
		 }
		 
		
 	
 };
 
 
 //Class To  Enter Date and Time and Day
 
 class settime{
 	
 	//Attribute 
 	
 	private:
 		
int hour,min,sec;//variable time
int day ,month,year;//variable date
int Nday;//variable day
//Methode
public:
	
	//Methode to enter the time
	void settime1()
	{
		
		int h,m,s;
        cout << "Please enter the hour (0-23): ";
        cin >> h;
       	 hour=h;
        cout<<endl;
        if (h < 0 || h > 23) {
            cout << "Invalid hour. Please enter a valid value between 0 and 23." << endl;
            cin >> h;
          hour=h;
             cout<<endl;
        }
        
        
        cout << "Please enter the minute (0-59): ";
        cin >> m;
      min=m;
         cout<<endl;
        if (m < 0 || m > 59) {
            cout << "Invalid minute. Please enter a valid value between 0 and 59." << endl;
            cin >> m;
          min=m;
             cout<<endl;
        }

        
        
         cout << "Please enter the second (0-59): ";
        cin >> s;
       sec=s;
         cout<<endl;
        if (s < 0 || s > 59) {
            cout << "Invalid second. Please enter a valid value between 0 and 59." << endl;
            cin >> s;
           sec=s;
             cout<<endl;
        }
        
        
	}
	
// Methode to show the time
void gettime  () const
{
cout << "Time: ";
        cout << ((hour < 10) ? "0" : "") << hour << ":";
        cout << ((min < 10) ? "0" : "") << min << ":";
        cout << ((sec < 10) ? "0" : "") << sec << endl;
}



//Methode to enter the date
void setdate()

{
	int d,m,y;
	
	
	 cout << "Please enter the month (1-12): ";
        cin >> m;
        month=m;
        cout<<endl;
        if (m < 0 || m > 12) {
            cout << "Invalid month. Please enter a valid value between 1 and 12." << endl;
            cin >> m;
          month=m;
             cout<<endl;
        }
        if(m==2)
        {
        	cout << "Please enter the day (1-29): ";
        cin >> d;
        day=d;
        cout<<endl;
         if (d < 1 || d > 29) {
            cout << "Invalid day. Please enter a valid value between 1 and 29." << endl;
            cin >> d;
            day=d;
             cout<<endl;
        }
		}
		else if (m%2!=0||m==12)
		{
			cout << "Please enter the day (1-31): ";
        cin >> d;
      day=d;
        cout<<endl;
         if (d < 1 || d > 31) {
            cout << "Invalid day. Please enter a valid value between 1 and 31." << endl;
            cin >> d;
          day=d;
             cout<<endl;
        }
			}
			else
			{
				cout << "Please enter the day (1-30): ";
        cin >> d;
       day=d;
        cout<<endl;
         if (d < 1 || d > 30) {
            cout << "Invalid day. Please enter a valid value between 1 and 30." << endl;
            cin >> d;
         day=d;
             cout<<endl;
        }
	
	
	
}

cout<<"Please enter the year: ";
				cin>>y;
				year=y;
				cout<<endl;
}

//Methode to show the date
void getdate() const{
string  Nmonth[12]={"January", "February", "March","April", "May", "June", "July", "August", "September", "October", "November", "December"};//declare names of months
cout << "Date: ";
        cout << ((day < 10) ? "0" : "") << day << "-";
        cout << Nmonth[month-1] << "-";
        cout << year << endl;
        
      
        
}

//Methode to enter the day
void setday()
{int nd;


        cout << "Please enter the day (1-7) where:\n";
        cout << "1 means Saturday" << endl;
        cout << "2 means Sunday" << endl;
        cout << "3 means Monday" << endl;
        cout << "4 means Tuesday" << endl;
        cout << "5 means Wednesday" << endl;
        cout << "6 means Thursday" << endl;
        cout << "7 means Friday" << endl;
 cout<<"Day :";
        cin >> nd;
       Nday=nd;
        cout << endl;

        if (nd < 1 || nd > 7) {
            cout << "Invalid day. Please enter a valid value between 1 and 7." << endl;
             cout<<"Day :";
            cin >> nd;
    Nday=nd;
            cout << endl;


		 }
}

//Methode to show day 
void getday() const{
	
	string days[7]={"Saturday","Sunday","Monday","Tuesday","Wednesday","Thursday","Friday"};//declare names of weeks
	cout << "Day: ";
        cout<< days[Nday - 1] << endl;
}
 };

// Class  to enter to the Main screen of the system
class mainscreen:public settime{
	public :
	//Method to show welcome message 	
	void welcome()
	{
		
		cout<<"-----------------[Welcome the the main screen]-----------------	\n"<<endl;
		
		}	
	
	
};

//Class item to enter item and make process on the data that was entered

class item{
	
	//Attribute
	private:
	int  n;// number of items
	
	double*price;// pointer to point on array price
	string*Name_item;//pointer to point on array of name of item
	
	//Methodes 
	public:
	//	int item_number;

		//Methode to enter number of items
		void setn(int items)
		{n=items;
		 price = new double[n]; // Allocate memory for price array
        Name_item = new string[n];// Allocate memory for Name_item array
		}
		
	
		// methode to store number of item
	int getn() const
	{return n;
	}
	
// methode to enter each item with name and price of it
void setEnteritem(){

string name_items[n];

	int count =0;//to count number of item that was entered
		
		if(getn()>=1)// number of item should be greater than 1
//enter the name and the value of price
		{//	cout<<"i" <<")"<<"Name of item :"<<"Price of item "<<endl;
		for(int i=0;i<getn();i++)
		{
			cout<<i+1 <<")"<<"Name of item :";
			cin>>Name_item[i];
		
			
			cout<<"Price of item in 'JD ':=";
			cin>>price[i];
		
				count+=1;
		cout<<"\nThe number of items remaining to be entered "<<(n-count)<<endl;}
		}
		else 
		{cout<<"Please enter the value greater than 1"<<endl;
		}
		
	
		
		
}

	//methode to show all items that we entered
void display()const
{


            cout << "\nItems Entered:\n";
            for (int i = 0; i < n; i++) {
                cout << i + 1 << ") Name: " << Name_item[i] << ", Price: " << price[i] << " JD" << endl;
	
	
}}//method to store pprice
 double *arrayPrice() {
        return price;
    }
//method to store name
    string *arrayName() {
        return  Name_item;
    }

// method to sum all prices of items
double sumitemsprice()
{double sum=0.0;

	 for (int i = 0; i < n; i++) {
          sum=sum+ price[i];
	
	
}
	
	return sum;
	}
	
	//method to show largest value of items
void max_price(){
	 	double max=0;
	 
	 	int index=0;
	 	for(int i=0;i<n;i++){
	 		if (price[i] > max){
			 
            max = price[i];
            index=i;
          
			}
         //max_name=Name_item[i];
		 
		 }
		    cout<< Name_item[index] << ", Price: " << max << " JD" << endl;
}
//method to show the minimum vales
		void min_price(){
	 	double min=price[0];
	 
	 	int index=0;
	 	for(int i=1;i<n;i++){
	 		if (price[i] < min){
			 
           min = price[i];
            index=i;
          
			}
     
		 
		 }
		    cout<< Name_item[index] << ", Price: " << min << " JD" << endl;}
		    
		    

};
// class Sales is child 1 of class items
class sales:public item{
	//Methodes
	int ITEM_SALES;
	
	public :
		
		// Methode to  welcome in Sales screen
		void Salesscreen()
		{ 
		cout<<"-----------------[Welcome the the sales screen]-----------------	\n"<<endl;
		}
		
		// Methode to  store the sum of prices of sales items
double sum_sales()

	{

	return sumitemsprice() ;
		
	}



};

// class expenditures is child 2 of class item
class expenditures:public item{
	//Methode
	public :
		// Methode to  welcome in EXpenditure screen
		void expendituresscreen()
		{ 
		cout<<"-----------------[Welcome the expenditures screen]-----------------	\n"<<endl;
		}
		
			// Methode to  store the sum of prices of Expentures items
			double sum_expenditures()
	{return sumitemsprice();

	}
};//class similer_value to find the item similer between sales and expenditures

class similer_value {
public:
    void similer(sales &Sales1, expenditures &Expenditures11) {
        int min_val, max_val;
        int find_number_similar=0;

        int items1 = Sales1.getn();
        int items2 = Expenditures11.getn();
        double *price_sales=Sales1.arrayPrice();
string *name_sales=Sales1.arrayName();

 double *price_Expen=Expenditures11.arrayPrice();
string *name_expen=Expenditures11.arrayName();


        if (items1 < items2) {
            min_val = items1;
            max_val = items2;
         for (int i = 0; i < min_val; i++) {
            for (int j = 0; j < max_val; j++) {
                if (price_sales[i] == price_Expen[j]) {
                    cout << "The sales item " <<name_sales[i]<< " is equal to the expenditures " << name_expen[j] << " Equal " << price_Expen[j]<< endl;
                  find_number_similar++;
                }
            }
        }
	   
	    } else {
            min_val = items2;
            max_val = items1;
            
               for (int i = 0; i < min_val; i++) {
            for (int j = 0; j < max_val; j++) {
                if (price_Expen[i]==price_sales[j] ) {
                    cout << "The sales item " <<name_sales[j]<< " is equal to the expenditures " << name_expen[i] << " Equal " << price_Expen[j]<< endl;
                      find_number_similar++;
                }
            }
        }
            
        }



if ( find_number_similar==0){
	cout<<"There are not similar between Sales and expenditures prices "<<endl;
}

      
    }
};




// Class net saless to calculate the net of sales be subtractiom sum of expenditures from sum of sales  and store the value in variable Net 

class netsales {
     public:
	
	// method
    double calculate_net_sales(sales &Sales, expenditures &Expenditures) {
        double net =   Sales.sum_sales()-Expenditures.sum_expenditures();
        return net;
    }
};
 
 
//class of profit is child from class net sales , store the value in varible net_profit 
class netprofit : public netsales {
public:
	// methode to calculate net profit
    double Net_Profit(sales &Sales, expenditures &expenditure1) {
        double net_profit = calculate_net_sales(Sales, expenditure1) - calculate_net_sales(Sales, expenditure1) * 0.16;// w
        return net_profit;
    }
};

// class system

class System{
	public:
		void call_sys(){
				cout<<"----------------------------------------welcome to the systm----------------------------------------  "<<endl;
	cout<<"------------------------------------------------------------------------------------------------------"<<endl;
	cout<<endl;
	cout<<"Please Enter Password and Username  "<<endl;
			int items,items2;
	string back;//variable to return to main screen
	int flag_return=0;//to return main screen
	string ex;////variable  to go to expenditures screen
	int flag_netexchang=1;//to check if the Net_exchange calcualte
		mainscreen Main_screen;// creat object  from class mainscreen
	
	netprofit NETPROFIT;//creat object from class netprofit
		netsales netSalesInstance;//creat object from class netsales
	
int	flag_screen=1;// variable change if we want to  exit from system
	int Number_of_screen;// variable to store number of screen
	int flag_stat=0;
			
 			sales Sales_s;//creat object from class sales
	expenditures Expenditures; //Creat oblect from class expenditures 
	
	double sumsales=0;//to store sum of sales
	double sumsumexchange1=0;//to store sum of Expenditures
Setpassword st;// object of class setpasword
st.SetPassWord("123456");//save user name by call method SetPassWord
st.SetUserName("sarah");//save pass word by call method SetUserName

// variable to store password and username after user enter them
        string Eusername;
 		string Epassword;
 		
 		//Ask user to enter passwrd and username
 			int i=0;//the initial value of counter 
 		// function ask user to  enter password and username and ,he/she has 3 attemps
		do{//do 1
	
 		cout<<"Please enter username : "<<endl;//ASk user to enter username
 		cin>>Eusername;
 		cout<<"Please enter password : "<<endl;//Ask user to enter password
 		cin>>Epassword;
 		
 		if(Eusername==st.GetUserName() && Epassword==st.GetPassWord())//compare the values of user name and password to enter to the system, condtion1
 	
 		{
 			//cout<<"*********Welcome to main screen************\n"<<endl;
 			
 				
 //		mainscreen Main_screen;
 		Main_screen.welcome();// call method Welcome 
 		cout<<"please Time and date and time : "<<endl;
 			cout<<"please enter time : "<<endl;
 			Main_screen.settime1(); // call function settime from mainscreen 
 					cout<<"please enter date : "<<endl;
 			Main_screen.setdate();//call function setdate from mainscreen 
 					cout<<"please enter day : "<<endl;
 				Main_screen.setday();//call function setday from mainscreen 
 				
 						cout<<"*************************************************************************************************************\n"<<endl;
 				cout<<"The date and time are:  \n"<<endl;
 			Main_screen.gettime();//call function gettime from mainscreen 
 		Main_screen.getdate();//call function getdate from mainscreen 
 			Main_screen.getday();//call function getday from mainscreen 
 			
 			
 				if(flag_return==0){//will change after enter the sales items/conddtion_1 to enter sales items
				
 			Sales_s.Salesscreen();
 			
 					cout<<"Please select number of sales items: ";
 						cin>>items;
 				
 				cout<<endl;
 			Sales_s.setn(	items);
 			Sales_s.getn();
 			Sales_s.setEnteritem();
 			sumsales=Sales_s.sumitemsprice();
 		cout<<"*************************************************************************************************************\n"<<endl;
 			Sales_s.display();
 			sumsales=Sales_s.sumitemsprice();
			 flag_return=1;//change when the items of sales were entered
			 }//end conddtion_1
 			cout<<"*************************************************************************************************************\n"<<endl;
 			
 			
 			if(flag_return==1){//con1 ,return main screen
			cout<<"please enter B to retun to main screen: ";
 			cin>>back;
 			cout<<"										"<<endl;
 				
 					Main_screen.welcome();// call function welcome from object type mainscreen
 					cout<<"the date and time are : "<<endl;
 					Main_screen.getdate();// show date
 					Main_screen.gettime();//show ttime
 					Main_screen.getday();// show day
 					cout<<"[Expenditures]"<<endl;
 					cout<<endl;
 					cout<<"press on Expenditures buttom to  enter to exchange screen by enter 'E': ";
 					cin>>ex;// ask user to enter letter E
 			
 					cout<<endl;
 			
 				
 				Expenditures.expendituresscreen();
 				
 			
 					cout<<endl;
 					cout<<"please select number of expenditures :";
 						cin>>items2;
 				
 				cout<<endl;
 				
 				Expenditures.setn(items2);
 				Expenditures.getn();
 				Expenditures.setEnteritem();
 					cout<<"*************************************************************************************************************\n"<<endl;
 				Expenditures.display();
 					cout<<"*************************************************************************************************************\n"<<endl;
 			// After enter expenditurs items will be shown
 					cout<<"please enter B to retun to main screen: ";
 			cin>>back;
 			cout<<"										"<<endl;}//end con1
 			
 	do{//satrt do2
		 
 			Main_screen.welcome();
 			cout<<"the date and time are : "<<endl;
 					Main_screen.getdate();
 					Main_screen.gettime();
 					Main_screen.getday();
 					cout<<endl;
 					cout<<"\n"<<endl;
 					cout<<"Screens :"<<endl;
 					
 					cout<<"[Net sales]"<<endl;
 					cout<<"[Net profit]"<<endl;
 					cout<<"[Statistics]"<<endl;
 					cout<<"[Ratings ]"<<endl;
 					cout<<"[Exit]"<<endl;
 					//ask user to enter number of screen 
 					cout<<"Please select the screen you want it :"<<endl;
 					cout<<"Press 1 to enter to Net sales:"<<endl;
 						cout<<"Press 2 to enter to Net profit:"<<endl;
 							cout<<"Press 3 to enter to Statistics:"<<endl;
 								cout<<"Press 4 to enter to Ratings :"<<endl;
 									cout<<"Press 5 to enter to Exit :"<<endl;
									 cout<<endl;
									 cout<<"\nScreen Number :";
									 cin>>Number_of_screen;//enter number of screeen
									 
									 switch(Number_of_screen)
									 {// start of screens
									 	case 1:{// to enter to Net sales
											
										 
									 		 double sumSales = Sales_s.sumitemsprice();// store sum of price of sales
    double Sumexpendituresscreen = Expenditures.sumitemsprice();//store sum of price of Expenditures
 				cout<<"Sum of sales is: "<<sumSales<<endl;
	cout<<"Sum of sumExchange is: "<<Sumexpendituresscreen<<endl;
 		


    // Calculate net sales using the calculate_net_sales method
    double netSales = netSalesInstance.calculate_net_sales(Sales_s,Expenditures);

    // Display the calculated net sales
    cout << "Net Sales: " << netSales <<"JD"<<endl;
    cout<<endl;
    	cout<<"***************************************************************************************"<<endl;
     cout<<"please enter B to retun to main screen: ";
 			cin>>back;
 			cout<<"										"<<endl;
 		flag_netexchang=0;// change after calculate the net sales
 		break;}
 			
 		 case 2: {
                            if (	flag_netexchang == 0) {
                            	//check of the net sales has been calculated 
                            	// calculate the net profite
                                double NETPROFIT1 = NETPROFIT.Net_Profit(Sales_s, Expenditures);//store the value on net profite in variable
                                cout << "The Net Profit is: " << NETPROFIT1<<"JD"<<endl;
                                	cout<<"***************************************************************************************"<<endl;
                                 cout<<"please enter B to retun to main screen: ";// ask user to  enter to the main screen
 			cin>>back;
 			cout<<"										"<<endl;
                            } else {// in case the net sales not calculated ask user to return to main screen and calculaet the net sales
                                cout << "Please calculate the Net sales first." << endl;
                                	cout<<"***************************************************************************************"<<endl;
                                 cout<<"please enter B to retun to main screen: ";
 			cin>>back;
 			cout<<"										"<<endl;
                            }
                            break;
                        }
                        case 3:{
						
					do{//do 3
						
						
						cout<<"*********Welcome to Statistics screen************\n"<<endl;
                        int option;
                        cout<<"\nChoose the option where: "<<endl;
                        cout<<"1-Max value of sales ."<<endl;
                         cout<<"2-Max value of expenditure ."<<endl;
                          cout<<"3-min value of sales ."<<endl;
                           cout<<"4-Max value of expenditure ."<<endl;
                            cout<<"5-Values when the Sales equal expenditure."<<endl;
                            cout<<"6-Main screen"<<endl;
                            cout<<endl;
                        
                    
                       cout<<"Number of option ";
                        cin>>option;
                        cout<<endl;
                        switch(option)
                        {//start switch
						case 1:{
							
							cout<<"The maximun valu of sales is ";
							Sales_s.max_price();
							cout<<endl;
							
							break;
						}
						case 2:{
							
							cout<<"The maximun valu of expenditures is ";
							Expenditures.max_price();
							cout<<endl;
							
							break;
						}
						
						case 3:{
							
							
							cout<<"The minimum valu of sales is ";
							Sales_s.min_price();
							cout<<endl;
							
							
							break;
						}
                        	
                         case 4:{
                         	
                         	cout<<"The minimum valu of expenditures is ";
						Expenditures.min_price();
							cout<<endl;
							break;
						 }	
						  case 5:{
						  		cout<<"Values when the Sales equal expenditure :"<<endl;
						  		similer_value Similer;
						  		Similer.similer(Sales_s,Expenditures );
							break;
						  }
							 	
							 	
							 case 6:{
						  		cout<<" return to main screen:"<<endl;
						  		flag_stat=1;
						  	
							break;
						  }	 
						  
						  
                        	
							}//end switch
							
						//	break ;
					}
							//end do 3
							while (flag_stat==0);
							
						break ;	}
						
                        	
                        
                        case 4:{// show the rating screen after each condition will ask user to return to main screen
                        	cout<<"*********Welcome to Rating screen************\n"<<endl;
                        	if(Sales_s.sumitemsprice()<Expenditures.sumitemsprice()){
                        		cout<<"WORRING! there is a problem in income ,inform the Administration  "<<endl;
                        			cout<<"***************************************************************************************"<<endl;
						
						cout<<"please enter B to retun to main screen: ";
 			cin>>back;
 			cout<<"										"<<endl;
							}
                        	
                        	else if((Sales_s.sumitemsprice()>Expenditures.sumitemsprice())&&(netSalesInstance.calculate_net_sales(Sales_s,Expenditures)>1000)){
                        		
                        		cout <<"Thank you!The financial situation is great for ";
								Main_screen.getdate();
								Main_screen.getday();
								cout<<endl;
									cout<<"***************************************************************************************"<<endl;
						cout<<"please enter B to retun to main screen: ";
 			cin>>back;
 			cout<<"										"<<endl;	}
							
						
                        	else if (netSalesInstance.calculate_net_sales(Sales_s,Expenditures)<1000)
                        	{cout<<"The financial situation is in critical  !!!! "<<endl;
                        		cout<<"***************************************************************************************"<<endl;
						cout<<"please enter B to retun to main screen: ";
 			cin>>back;
 			cout<<"										"<<endl;	}
                        	
                        	
							break;
						}
						
						
						case 5:{
							// to check if the user exit from system or not
							cout<<" Are you sure you want to exit :  "<<endl;
							cout<<"/////////////////////////////////////////////////"<<endl;
							cout<<"Press 1 for exit  from system or 0 to stay in system:";
							
							 int status ;
							 cin>>status;
							 cout<<endl;
							 
						if (status==1){
							
							flag_screen=0;
							cout<<endl;
							 cout<<"Thank you for using systems";
							 
						cout<<"***************************************************************************************"<<endl;
							 break;
							
						}
				}
			
					
							break;
						
							
 		      
									 		
									 
									 
									 
 						}//end of screens
						 
						 }//end do 2
 						
 						while(flag_screen==1);
 
 			
	break;}
	
	// end condtion1
 	
 	else// if the condition of password and user name false
 	{
	 	
	 
	 cout<<"Either password or username is incorrect try again please! "<<endl;
 	i++;//increasing the counter
 
	 }
//	 break;
 
}// end do 1
 while(i<3);//The number of attempts allowed
 // if user exceed number of attemps 
 if (i>=3)
 {cout<<" You are exceed number of attemps! "<<endl;
 }
 
	
			
		}
};
//////////////////////////////////////////////////

int main() {

	
   System CAL_sys;
   
  CAL_sys.call_sys();
    return 0;
}


