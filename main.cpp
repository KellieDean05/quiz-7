/*
Create a main structure for an Airline Reservation. Use structures within structures as needed. Code this in C++.
Consider the following:
Outbound flight - Flight Nbr, Plane Type, Depart Date, Depart Time, Arrival Date, Arrival Time, Number of Seats in Plane,
Return flight - similar to OutBound Flight
Passengers - Name, Age, Nbr of Bags,Address
Payments - Credit Card Number, Amount, Exp Date
*/
/**************Plan*********************
01. the tag is the name of the structure girl.
        figure that out first.
the below are the members of tags
i.e. -> : structure -> memeber of the structure club; indicates that s is a structure pointer and m is a structure member.

. some may new new TAGS!

1.  outBoundFlight
2.  outFlightNum
3.  outPlaneType 
4.  outDepartDate
5.  passengerName
6.  passengerAge
7.  bagNum
8.  address
9.  paymentCcNum
10. paymentAmt
11. paymentExpDate

*******************************************************/
//Kellie Henderson airline flight structure style
#include<iostream>
#include<string>
#include<iomanip>
#include<vector>
using namespace std;

struct Airline Reservation
{
  string reservationCode;
  string passengerName;
  string originAirport;
  string destAirport; // can be used 2x
  string passAddress;
  string planeType;
    
  int flightNumber; //can be used 2x
  long flightDate

};

//function definition
void populateAirline Flight(vector<Airline Flight> &allInformation)
{
//put some default values in our Menu
const int  = 1;
MenuItem Item1;// Item1 is data type MenuItem
MenuItem Item2;
MenuItem Item3;
MenuItem Item4;// Item1 is data type MenuItem
MenuItem Item5;
MenuItem Item6;
MenuItem Item7;// Item1 is data type MenuItem

entireMenu.push_back(Item1);//add to the end of the list the Item1
entireMenu.push_back(Item2);//add to the end of the list the Item2
entireMenu.push_back(Item3);//add to the end of the list the Item3
entireMenu.push_back(Item4);//add to the end of the list the Item1
entireMenu.push_back(Item5);//add to the end of the list the Item2
entireMenu.push_back(Item6);
entireMenu.push_back(Item7);

vector<string> defaultMenuNames = {"Dr_T's Green Tea", "Poblano Feta Burger", "Hot Chicken Sandwich","Garlic Parmesan Fries","Southern Belle's Burger", "Bacon Pina Cheese Buger", "Mama's Blackberry Cobbler" };
vector<char> defaultAddLetters = {'A','B', 'C', 'D', 'E', 'F', 'G'};
vector<char> defaultRemoveLetters = {'a', 'b', 'c','d', 'e', 'f', 'g'};
for(int i = 0; i < numItems; i++)
  {
      // add each item to the default list efficiently 
      entireMenu[i].name = defaultMenuNames[i];
      entireMenu[i].addLetter = defaultAddLetters[i];
      entireMenu[i].removeLetter = defaultRemoveLetters[i];
      entireMenu[i].itemCost = (3.00 + i); // set a random starter cost for each item
      entireMenu[i].count = 0;
      entireMenu[i].desc = "Delicious"; // set all defaults desc to "delicious"
  }
}

void showMenu(vector<MenuItem> &m)
{
cout << fixed << setprecision(2);
cout << "Bob's Burgers" << endl;
cout << "Add \t\tName \t\t\t Cost \t\tRemove  \t Count \t\tDescription" << endl;
for(int i = 0; i < m.size(); i++)
  {
      cout << m[i].addLetter << ": " << setw(10) << m[i].name 
      << setw(10) << "$ " << m[i].itemCost << setw(9) 
      << m[i].removeLetter << ")" << setw(8) << m[i].count 
      << setw(15) << m[i].desc << endl;
  } 
}


}






void acceptOrder(vector<MenuItem> &m)
{
char option = '\0'; // user=selected menu item
double subtotal = 0.0;
//double tax = 0.0;
//double total = 0.0;
do
{
cout << "\nPlease make your selection from the above menu or enter x to exit: ";
cin >> option;
for(int i = 0; i < m.size(); i++)
  {
    if(option == m[i].addLetter)
    {
      cout << m[i].addLetter << " has been selected." << endl;
      m[i].count++; // increment count by one
      cout << "\033[2J\033[1;1H";
      // m[i].itemCost++;
      cout << "\n1 UP on " << m[i].name << endl;
      subtotal += m[i].itemCost; // increment the subtotal by the cost of the item.
      showMenu(m);
      cout << "\n Subtotal: $" << subtotal << endl;
    }
    else if(option == m[i].removeLetter)
    {
      cout << "\nRemove Item: " <<"'" << m[i].removeLetter << "'" << " selected.";
      if(m[i].count > 0)// subtract if and only if the count is > 0
      {
        m[i].count --; // decrement the count by one.
        cout << "\033[2J\033[1;1H" ;
        cout <<  "\n 1 Down on " << m[i].name << endl;
         subtotal -= m[i].itemCost; // increment the subtotal by the cost of the item.
      showMenu(m);
      cout << "\n Subtotal: $" << subtotal << endl;
      }
    else // tell the user why you blocked item removal
    {
      cout << "\nItem count must be greater than zero to remove: "
      << m[i].name << endl;
    }
    }
     else if(option != m[i].removeLetter && 
            option != m[i].addLetter && 
            option != 'x' &&
            option != 'X')
      {
        if (i == 0)
        {
        cout << "\nInvalid input ("<< option << ") Please try again." << endl;
      }

      }
  }

}
while(option != 'x' && option != 'X');
cout << "\nThank you for ordering with us. \n Please take your reciept and don't forget to tip your server." << endl;
cout << printReciept(subtotal);
}

int main() // a vector is an alternative to the one dimensional array.grows dynamically on its own. 
{
vector<MenuItem> wholeMenu;// name is wholeMenu
populateMenu(wholeMenu); //  put some default values in the menu
showMenu(wholeMenu);
acceptOrder(wholeMenu);
  return 0;
}
