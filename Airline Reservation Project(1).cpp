#include<iostream>
#include<conio.h>
#include<string.h>
#include<string>
#include<cstring>
#include<windows.h>
using namespace std;

int pk1, pk2, pk3 =0;
int memberid = 0;


void login()
{
	cout << "\n\n\n\n\n\n\n\n\t\t\t\t\t@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n";
	cout << "\t\t\t\t\t@@ _______________________________________________________________________________________ @@\n";
	cout << "\t\t\t\t\t@@|                                           		                                  |@@\n";
	cout << "\t\t\t\t\t@@|                                           		                                  |@@\n";
	cout << "\t\t\t\t\t@@|                                           		                                  |@@\n";
	cout << "\t\t\t\t\t@@|                                           		                                  |@@\n";
	cout << "\t\t\t\t\t@@|                                           		                                  |@@\n";
	cout << "\t\t\t\t\t@@|                                           		                                  |@@\n";
	cout << "\t\t\t\t\t@@|                                        WELCOME TO                                     |@@\n";
	cout << "\t\t\t\t\t@@|                                                                                       |@@\n";
	cout << "\t\t\t\t\t@@|                                   AIRLINE RESERVATIO SYSTEM                           |@@\n";
	cout << "\t\t\t\t\t@@|                                                                                       |@@\n";
	cout << "\t\t\t\t\t@@|                                                                                       |@@\n";
	cout << "\t\t\t\t\t@@|                                                                                       |@@\n";
	cout << "\t\t\t\t\t@@|                                                                                       |@@\n";
	cout << "\t\t\t\t\t@@|                                                                                       |@@\n";
	cout << "\t\t\t\t\t@@|                                            Made by Riya V                             |@@\n";
	cout << "\t\t\t\t\t@@|_______________________________________________________________________________________|@@\n";
	cout << "\t\t\t\t\t@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n\n\n\n\t\t\t\t\t";
	cout << "Press any key to continue...";
	getch();
	system("cls");
	cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\tLoading ||||||                                                  | 12% ....";
	Sleep(500);
	system("cls");
	cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\tLoading |||||||||||||||||||||||||||||||||                       | 61% ....";
	Sleep(500);
	system("cls");
	cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\tLoading ||||||||||||||||||||||||||||||||||||||||||||||||        | 95% ....";
	Sleep(500);
	system("cls");
	cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\tLoading ||||||||||||||||||||||||||||||||||||||||||||||||||||||||| 100% ....";
	Sleep(2000);
}


void schedule()
{
	system("color B6");
	system("cls");
    cout << "\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t*** Welcome to the Airline Flight Schedule ***" << endl << endl;
    cout << "\t\t\t\t\t\t-------------------------------------------------------------------------------" << endl << endl;
    cout << "\t\t\t\t\t\t\t    Read the Schedule CAREFULLY before reserving your seat" << endl << endl;
	cout << "\t\t\t\t\t\t-------------------------------------------------------------------------------" << endl << endl;
	cout << "\t\t\t\t\t\tNumber count        Flight Name        From            To            Seats Left" << endl << endl;
	cout << "\t\t\t\t\t\t<1>                 pk001              Lahore          Karachi" << "\t\t" << 40-pk1 << endl << endl;
	cout << "\t\t\t\t\t\t<2>                 pk001              Karachi         Lahore" << "\t\t" << 40-pk1 << endl << endl;
	cout << "\t\t\t\t\t\t<3>                 pk002              Lahore          Sialkot" << "\t\t" << 60-pk2 << endl << endl;
	cout << "\t\t\t\t\t\t<4>                 pk003              Sialkot         Lahore" << "\t\t" << 120-pk3 << endl << endl;
    cout << "\t\t\t\t\t\t-------------------------------------------------------------------------------" << endl << endl;
    cout << "\t\t\t\t\t\tPress any key to continue...";
	getch();
}


class declaration
{
	public:
	string id, name, age, gender, cnic, address, contact, depar, desti, f_name, seat_type, passport;
};


class Member : public declaration{
	public:
	declaration m[10];
	int en;
	string back;
	int status1;
	int status2;
	void get_data();
	void show_data();
	void reservation();
	void seat();
	void edit();
	void alldata();
	void delet();
};

void Member :: get_data()
{
	system("color E4");
	system("cls");
	cout << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl;
	cout << "\t\t\t\t\t\t\t\tMention a unique id       : ";
	cin.ignore();
	getline(cin, m[memberid].id);
	cout << endl << endl;
	cout << "\t\t\t\t\t\t\t\tName                      : ";
	getline(cin, m[memberid].name);
	cout << endl << endl;
	cout << "\t\t\t\t\t\t\t\tAge                       : ";
	getline(cin, m[memberid].age);
	cout << endl << endl;
	cout << "\t\t\t\t\t\t\t\tGender                    : ";
	getline(cin, m[memberid].gender);
	cout << endl << endl;
	cout << "\t\t\t\t\t\t\t\tCnic                      : ";
	getline(cin, m[memberid].cnic);
	cout << endl << endl;
	cout << "\t\t\t\t\t\t\t\tPassport number           : ";
	getline(cin, m[memberid].passport);
	cout << endl << endl;
	cout << "\t\t\t\t\t\t\t\tAddress                   : ";
	getline(cin, m[memberid].address);
	cout << endl << endl;
	cout << "\t\t\t\t\t\t\t\tContact                   : ";
	getline(cin, m[memberid].contact);
	
	back:
	cout << endl << endl;
	cout << "\t\t\t\t\t\t\t\tProceed Forward[Y/N]      : ";
	cin >> back;
	if(back == "Y" || back == "y")
	{
		cout << endl << endl;
		cout << "\t\t\t\t\t\t\t\tYou filled all Entries of traveler successfully...";
		getch();
	}
	else if(back =="N" || back == "n")
	{
		cout << endl << endl;
		cout << "\t\t\t\t\t\t\t\tYou filled all Entries of traveler successfully...";
		getch();
	}
	else
	{
		cout << "\n\t\t\t\t\t\t\t\tWrong Input";
		goto back;
	}
}
	
	
void Member :: show_data()
{
	system("color B6");
	system("cls");
    string n;
    cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\tEnter the member's ID  to display Record: ";
   	cin >> n;
   	system("cls");
    if(n == "0")
    {
       	system("cls");
        cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\tOOPS!!!!"<< endl;
        cout << "\t\t\t\t\t\t\t\t\tNote: No Record To Display  Plz Go Back And Enter Some Entries...";
    }
  	else
  	{
       	int i;
       	for(i = 0; i < memberid; i++)
       	{
       		status1 = 0;
       	    if(n == m[i].id)
       	    {
       	        status1 = 1; //here 1 is considered as bool true
       	        break;
       	    }    
       	}// for loop closed
        	
        if(status1) //if true
        {
            cout << "\n\n\n\n\n\n\n\n\n\n";
            cout << "\t\t\t\t\t\t\t\t------------------------------------" << endl << endl;
            cout << "\t\t\t\t\t\t\t\tID                   :" << m[i].id << endl << endl;
           	cout << "\t\t\t\t\t\t\t\tName                 :" << m[i].name << endl << endl;
           	cout << "\t\t\t\t\t\t\t\tAge                  :" << m[i].age << endl << endl;
           	cout << "\t\t\t\t\t\t\t\tGender               :" << m[i].gender << endl << endl;
           	cout << "\t\t\t\t\t\t\t\tCnic                 :" << m[i].cnic << endl << endl;
           	cout << "\t\t\t\t\t\t\t\tPassport Number      :" << m[i].passport << endl << endl;
           	cout << "\t\t\t\t\t\t\t\tAddress              :" << m[i].address << endl << endl;
           	cout << "\t\t\t\t\t\t\t\tContact              :" << m[i].contact << endl << endl;
           	cout << "\t\t\t\t\t\t\t\tFlight Name          :" << m[i].f_name << endl << endl;
           	cout << "\t\t\t\t\t\t\t\tDeparture            :" << m[i].depar << endl << endl;
           	cout << "\t\t\t\t\t\t\t\tDestination          :" << m[i].desti << endl << endl;
           	cout << "\t\t\t\t\t\t\t\tSeat Type            :" << m[i].seat_type << endl << endl;
           	cout << "\t\t\t\t\t\t\t\t------------------------------------" << endl << endl;
           	cout << "\t\t\t\t\t\t\t\tPress any key to choose another option...";
        }
        else
   		{
            cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\tNo such ID in database" << endl;
           	cout << "\t\t\t\t\t\t\t\tPress any key to choose another option...";
        }
    }
    getch();
}
	
	
void Member :: reservation()
{
	system("color 71");
	string res;
	above:
	system("cls");
    cout << "\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t*** Select Departure And Destination ***" << endl << endl;
    cout << "\t\t\t\t\t\t\t\t----------------------------------------------------------" << endl << endl;
    cout << "\t\t\t\t\t\t\t\tNumber     Flight Name        Departure       Destination" << endl << endl;
    cout << "\t\t\t\t\t\t\t\t<1>        pk001              Lahore          Karachi" << endl << endl;
    cout << "\t\t\t\t\t\t\t\t<2>        pk001              Karachi         Lahore" << endl << endl;
    cout << "\t\t\t\t\t\t\t\t<3>        pk002              Lahore          Sialkot" << endl << endl;
    cout << "\t\t\t\t\t\t\t\t<4>        pk003              Sialkot         Lahore" << endl << endl;
    cout << "\t\t\t\t\t\t\t\t----------------------------------------------------------" << endl << endl;
    cout << "\t\t\t\t\t\t\t\tPress any key to continue...";
    getch();
    cout << endl << endl;
    cout << "\t\t\t\t\t\t\t\tEnter Your Choice:     ";
    cin >> res;
    if(res == "1")
    {
    	m[memberid].depar = "Lahore";
    	m[memberid].desti = "Karachi";
    	m[memberid].f_name = "pk001";
	}
	
	else if(res == "2")
    {
    	m[memberid].depar = "Karachi";
    	m[memberid].desti = "Lahore";
    	m[memberid].f_name = "pk001";
	}
	
	else if(res == "3")
    {
    	m[memberid].depar = "Lahore";
    	m[memberid].desti = "Sialkot";
    	m[memberid].f_name = "pk002";
	}
	
	else if(res == "4")
    {
    	m[memberid].depar = "Sialkot";
    	m[memberid].desti = "Lahore";
    	m[memberid].f_name = "pk003";
	}
	
	else
	{
		system("cls");
	    cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\tWrong Input" << endl;
	    cout << "\t\t\t\t\t\t\t\t\tPress any key to choose another option...";
		getch();
	    goto above;
	}
    
}


void Member :: seat()
{
	system("color 7D");
	string choise;
	above1:
	system("cls");
    cout << "\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t*** Select Your Seat Type***" << endl << endl;
    cout << "\t\t\t\t\t\t\t\t----------------------------------" << endl << endl;
    cout << "\t\t\t\t\t\t\t\tNumber     Seat Type        Price" << endl << endl;
    cout << "\t\t\t\t\t\t\t\t<1>        Simple Seat      50 $" << endl << endl;
    cout << "\t\t\t\t\t\t\t\t<2>        Window side      60 $" << endl << endl;
    cout << "\t\t\t\t\t\t\t\t----------------------------------" << endl << endl;
    cout << "\t\t\t\t\t\t\t\tPress any key to continue...";
    getch();
    cout << endl << endl;
    cout << "\t\t\t\t\t\t\t\tEnter Your Choice:     ";
    cin >> choise;
    if(choise == "1")
    {
    	m[memberid].seat_type = "Simple Seat";
	}
	
	else if(choise == "2")
    {
    	m[memberid].seat_type = "Window Side";
	}
	
	else
	{
		system("cls");
	    cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\tWrong Input" << endl;
	    cout << "\t\t\t\t\t\t\t\t\tPress any key to choose another option...";
		getch();
	    goto above1;
	}	
}


void Member :: edit()
{
	system("color E4");
	system("cls");
    string n;
    cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\tEnter the member's ID  to display Record: ";
   	cin >> n;
   	system("cls");
    if(n == "0")
    {
       	system("cls");
        cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\tOOPS!!!!"<< endl;
        cout << "\t\t\t\t\t\t\t\t\tNote: No Record To Display  Plz Go Back And Enter Some Entries...";
    }
  	else
  	{
       	int i;
       	for(i = 0; i < memberid; i++)
       	{
       		status1 = 0;
       	    if(n == m[i].id)
       	    {
       	        status1 = 1; //here 1 is considered as bool true
       	        break;
       	    }    
       	}// for loop closed
        	
        if(status1) //if true
        {
        	system("cls");
			cout << endl << endl << endl;
			cout << "\t\t\t\t\t\t\t\tMention a unique id       : ";
			cin.ignore();
			getline(cin, m[i].id);
			cout << endl << endl;
			cout << "\t\t\t\t\t\t\t\tName                      : ";
			getline(cin, m[i].name);
			cout << endl << endl;
			cout << "\t\t\t\t\t\t\t\tAge                       : ";
			getline(cin, m[i].age);
			cout << endl << endl;
			cout << "\t\t\t\t\t\t\t\tAddress                   : ";
			getline(cin, m[i].address);
			cout << endl << endl;
			cout << "\t\t\t\t\t\t\t\tContact                   : ";
			getline(cin, m[i].contact);
			schedule();
			string res;
			above2:
			system("cls");
		    cout << "\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t*** Select Departure And Destination ***" << endl << endl;
		    cout << "\t\t\t\t\t\t\t\t----------------------------------------------------------" << endl << endl;
		    cout << "\t\t\t\t\t\t\t\tNumber     Flight Name        Departure       Destination" << endl << endl;
		    cout << "\t\t\t\t\t\t\t\t<1>        pk001              Lahore          Karachi" << endl << endl;
		    cout << "\t\t\t\t\t\t\t\t<2>        pk001              Karachi         Lahore" << endl << endl;
		    cout << "\t\t\t\t\t\t\t\t<3>        pk002              Lahore          Sialkot" << endl << endl;
		    cout << "\t\t\t\t\t\t\t\t<4>        pk003              Sialkot         Lahore" << endl << endl;
		    cout << "\t\t\t\t\t\t\t\t----------------------------------------------------------" << endl << endl;
		    cout << "\t\t\t\t\t\t\t\tPress any key to continue...";
		    getch();
		    cout << endl << endl;
		    cout << "\t\t\t\t\t\t\t\tEnter Your Choice:     ";
		    getline(cin, res);
		    if(res == "1")
		    {
		    	m[i].depar = "Lahore";
		    	m[i].desti = "Karachi";
		    	m[i].f_name = "pk001";
			}
			
			else if(res == "2")
		    {
		    	m[i].depar = "Karachi";
		    	m[i].desti = "Lahore";
		    	m[i].f_name = "pk001";
			}
			
			else if(res == "3")
		    {
		    	m[i].depar = "Lahore";
		    	m[i].desti = "Sialkot";
		    	m[i].f_name = "pk002";
			}
			
			else if(res == "4")
		    {
		    	m[i].depar = "Sialkot";
		    	m[i].desti = "Lahore";
		    	m[i].f_name = "pk003";
			}
			
			else
			{
				system("cls");
			    cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\tWrong Input" << endl;
			    cout << "\t\t\t\t\t\t\t\t\tPress any key to choose another option...";
				getch();
			    goto above2;
			}
			
			
			string choise;
			above3:
			system("cls");
		    cout << "\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t*** Select Your Seat Type***" << endl << endl;
		    cout << "\t\t\t\t\t\t\t\t----------------------------------" << endl << endl;
		    cout << "\t\t\t\t\t\t\t\tNumber     Seat Type        Price" << endl << endl;
		    cout << "\t\t\t\t\t\t\t\t<1>        Simple Seat      50 $" << endl << endl;
		    cout << "\t\t\t\t\t\t\t\t<2>        Window side      60 $" << endl << endl;
		    cout << "\t\t\t\t\t\t\t\t----------------------------------" << endl << endl;
		    cout << "\t\t\t\t\t\t\t\tPress any key to continue...";
		    getch();
		    cout << endl << endl;
		    cout << "\t\t\t\t\t\t\t\tEnter Your Choice:     ";
		    cin >> choise;
		    if(choise == "1")
		    {
		    	m[i].seat_type = "Simple Seat";
			}
			
			else if(choise == "2")
		    {
		    	m[i].seat_type = "Window Side";
			}
			
			else
			{
				system("cls");
			    cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\tWrong Input" << endl;
			    cout << "\t\t\t\t\t\t\t\t\tPress any key to choose another option...";
				getch();
			    goto above3;
			}
        }
        
        else
   		{
            cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\tNo such ID in database" << endl;
           	cout << "\t\t\t\t\t\t\t\tPress any key to choose another option...";
        }
    }
    getch();
}


void Member :: alldata()
{
	system("cls");
	system("color 71");
   	//int i;
   	if(memberid == 0)
   	{
   		system("cls");
   		cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\tOOPS!!!!" << endl;
   		cout << "\t\t\t\t\t\t\tNote: No Record To Display  Plz Go Back And Enter Some Entries...";
   	}
 	else
	{
   		cout << "\n\n\n\n\n\n\n\t\t\t\t\t\t--------------------------------------------------------------------------------" << endl << endl;
   		cout << "\t\t\t\t\t\t\t\t\t  Details Of All The Travelers In registered" << endl << endl;
   	    cout << "\t\t\t\t\t\t--------------------------------------------------------------------------------" << endl << endl;
      	cout << "\tID" << "\t\t" << "NAME" << "\t\t" << "Cnic" << "\t\t" << "AGE" << "\t\t" << "Gender" << "\t\t" << "Contact" << "\t\t" << "Flight" << "\t\t" << "Departure" << "\t\t" << "Destination";
   		cout << endl << endl;
     		
   		for(int i = 0; i < memberid; i++)
  		{
       		cout << "\t" << m[i].id << "\t\t" << m[i].name << "\t\t" << m[i].cnic << m[i].age << "\t\t" << m[i].gender << "\t\t" << m[i].contact << "\t" << m[i].f_name << "\t\t" << m[i].depar << "\t\t\t" << m[i].desti << endl << endl;
       	}
       	cout << "\t\t\t\t\t\t--------------------------------------------------------------------------------" << endl << endl;
   		cout<<"\n\t\t\t\t\t\tPress any key to choose another option...";
      	}
       getch();
}


void Member :: delet()
{
	system("color 7D");
	system("cls");
    string n;
    cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\tEnter the member's ID  to display Record: ";
   	cin >> n;
   	system("cls");
    if(n == "0")
    {
       	system("cls");
        cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\tOOPS!!!!"<< endl;
        cout << "\t\t\t\t\t\t\t\t\tNote: No Record To Display  Plz Go Back And Enter Some Entries...";
    }
  	else
  	{
       	int i;
       	for(i = 0; i < memberid; i++)
       	{
       		status1 = 0;
       	    if(n == m[i].id)
       	    {
       	        status1 = 1; //here 1 is considered as bool true
       	        break;
       	    }    
       	}// for loop closed
        	
        if(status1) //if true
        {
        	m[i].id, name, age, address, contact, depar, desti, f_name, seat_type = "Removed";
    		cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\tRecord Deleted...";
    		getch();
        }
        else
   		{
            cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\tNo such ID in database" << endl;
           	cout << "\t\t\t\t\t\t\t\tPress any key to choose another option...";
           	getch();
        }
    }
}


int main()
{
	system("color 71");
	Member obj;
	string ch, ch1, ch2, ch3, ch4, ch5, ch6, ch7, ch8, ch9;
	int count = 0;
	login();
	mainmenu:
	system("cls");
    cout << "\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t*** Welcome to the Airline Reservation System ***" << endl << endl;
    cout << "\t\t\t\t\t\t\t\t--------------------------------------------" << endl << endl;
    cout << "\t\t\t\t\t\t\t\t<1> Menu" << endl << endl;
    cout << "\t\t\t\t\t\t\t\t<2> Flight Schedule" << endl << endl;
    cout << "\t\t\t\t\t\t\t\t<3> Instructions/Help" << endl << endl;
    cout << "\t\t\t\t\t\t\t\t<4> Exit" << endl << endl;
    cout << "\t\t\t\t\t\t\t\t--------------------------------------------" << endl << endl;
    cout << "\t\t\t\t\t\t\t\tEnter Your Choice:     ";
    cin >> ch;
    if(ch == "1")
    {
    	secondmain:
    	system("cls");
        cout << "\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t*** Welcome to the Main Menu ***" << endl << endl;
        cout << "\t\t\t\t\t\t\t\t----------------------------------------------" << endl << endl;
        cout << "\t\t\t\t\t\t\t\t<1> Reserve Flight/Registration" << endl << endl;
        cout << "\t\t\t\t\t\t\t\t<2> Flight Schedule" << endl << endl;
        cout << "\t\t\t\t\t\t\t\t<3> View Your Seat" << endl << endl;
        cout << "\t\t\t\t\t\t\t\t<4> Edit Your Seat" << endl << endl;
        cout << "\t\t\t\t\t\t\t\t<5> View All Reserved Seats" << endl << endl;
        cout << "\t\t\t\t\t\t\t\t<6> Delete Your Reservation" << endl << endl;
		cout << "\t\t\t\t\t\t\t\t<7> Go Back" << endl << endl;
        cout << "\t\t\t\t\t\t\t\t----------------------------------------------" << endl << endl;
        cout << "\t\t\t\t\t\t\t\tEnter Your choice:     ";
        cin >> ch1;
        if(ch1 == "1")
        {
        	obj.get_data();
        	system("cls");
        	schedule();
        	obj.reservation();
        	obj.seat();
        	memberid++;
        	count++;
        	goto secondmain;
		}
		
		else if(ch1 == "2")
		{
			schedule();
			goto secondmain;
		}
		
		else if(ch1 == "3")
		{
			if(count == 0)
    		{
       			system("cls");
        		cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\tOOPS!!!!"<< endl;
        		cout << "\t\t\t\t\t\t\t\t\tNote: No Record To Display  Plz Go Back And Enter Some Entries...";
        		getch();
        		goto secondmain;
    		}	
			else
			{
				obj.show_data();
				goto secondmain;
			}
		}
		
		else if(ch1 == "4")
		{
			if(count == 0)
    		{
       			system("cls");
        		cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\tOOPS!!!!"<< endl;
        		cout << "\t\t\t\t\t\t\t\t\tNote: No Record To Display  Plz Go Back And Enter Some Entries...";
        		getch();
        		goto secondmain;
    		}	
			else
			{
				obj.edit();
				goto secondmain;
			}
		}
		
		else if(ch1 == "5")
		{
			if(count == 0)
    		{
       			system("cls");
        		cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\tOOPS!!!!"<< endl;
        		cout << "\t\t\t\t\t\t\t\t\tNote: No Record To Display  Plz Go Back And Enter Some Entries...";
        		getch();
        		goto secondmain;
    		}	
			else
			{
				obj.alldata();
				goto secondmain;
			}
		}
		
		else if(ch1 == "6")
		{
			if(count == 0)
    		{
       			system("cls");
        		cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\tOOPS!!!!"<< endl;
        		cout << "\t\t\t\t\t\t\t\t\tNote: No Record To Display  Plz Go Back And Enter Some Entries...";
        		getch();
        		goto secondmain;
    		}	
			else
			{
				obj.delet();
				goto secondmain;
			}
		}
		
		else if(ch1 == "7")
		{
			goto mainmenu;
		}
		
		else
		{
			system("cls");
		    cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\tWrong Input" << endl;
		    cout << "\t\t\t\t\t\t\t\t\tPress any key to choose another option...";
			getch();
		    goto secondmain;
		}
	}
	
	else if(ch == "2")
	{
		schedule();
		goto mainmenu;
	}
	
	else if(ch == "3")
	{
		system("cls");
		cout << "\n\n\n\n\n\n\n\t\t\t\t   ----------------------------------------------------------------------------------------------------------" << endl << endl;
		cout << "\t\t\t\t   The most important thing to note while running this software is that first of all enter into main menu   " << endl;
		cout << "\t\t\t\t   and start with entering the members and than afterwards you can register the employes. This is a data    " << endl;
		cout << "\t\t\t\t   recording system in which you can easily record data of members and employes also if you enter into the  " << endl;
		cout << "\t\t\t\t   monetary database where you can also record the fee received from the members and calculate all the fee  " << endl;
		cout << "\t\t\t\t   received. This system also allows you to record the pay schedle of the employes that to which employe you" << endl;
		cout << "\t\t\t\t   have made the payment and which are left. At the end it also shows you that how much you have received   " << endl;
		cout << "\t\t\t\t   income from the members and how much you have paid. Than it shows the message that either you are in     " << endl;
		cout << "\t\t\t\t   Profit or Loss" << endl << endl;
		cout << "\t\t\t\t   ----------------------------------------------------------------------------------------------------------" << endl << endl;
		cout << "\t\t\t\t   Press any key to choose another option...";
		getch();
		goto mainmenu;
	}
	
	else if(ch == "4")
 	{
 		
	 	system("cls");
		cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n";
		cout<<"\t\t\t\t\t@@ _______________________________________________________________________________________ @@\n";
		cout<<"\t\t\t\t\t@@|                                           		                                  |@@\n";
		cout<<"\t\t\t\t\t@@|                                           		                                  |@@\n";
		cout<<"\t\t\t\t\t@@|                                           		                                  |@@\n";
		cout<<"\t\t\t\t\t@@|                                           		                                  |@@\n";
		cout<<"\t\t\t\t\t@@|                                           		                                  |@@\n";
		cout<<"\t\t\t\t\t@@|                                THANK YOU FOR USING                                    |@@\n";
		cout<<"\t\t\t\t\t@@|                                                                                       |@@\n";
		cout<<"\t\t\t\t\t@@|                              AIRLINE RESERVATIO SYSTEM                                |@@\n";
		cout<<"\t\t\t\t\t@@|                                                                                       |@@\n";
		cout<<"\t\t\t\t\t@@|                                                                                       |@@\n";
		cout<<"\t\t\t\t\t@@|                                                                                       |@@\n";
		cout<<"\t\t\t\t\t@@|                                                                                       |@@\n";
		cout<<"\t\t\t\t\t@@|                                                                                       |@@\n";
		cout<<"\t\t\t\t\t@@|                                               Made by Riya V                          |@@\n";
		cout<<"\t\t\t\t\t@@|_______________________________________________________________________________________|@@\n";
		cout<<"\t\t\t\t\t@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n\n\n\n\t\t\t\t\t";
 	}
 	
	else
	{
		system("cls");
	    cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\tWrong Input" << endl;
	    cout << "\t\t\t\t\t\t\t\t\tPress any key to choose another option...";
		getch();
	    goto mainmenu;
	}
}
