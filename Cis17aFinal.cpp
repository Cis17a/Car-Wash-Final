#include <iostream>
#include<iomanip> 
using namespace std;

//functions

const int STANDARD_WASH=1,
          STANDARD_PLUS=2,
          DELUXE_WASH=3,
          DELUXE_PLUS=4,
          QUIT_MENU=5;

//function prototype
int menuChoice();
int quitMenu();
int menuprice();


//Variable Definition
int firstChoice,
    mchoice,
    qChoice;
double total;


//Definition of function quitMenu
int quitMenu()
{
  const int CANCEL_WASH=1,
            RETURN_MAIN=2;
  //switch(qChoice)
  {
      // Display the menu      
      cout << "\n\t\tCar Wash Menu\n\n"
     << "1. Cancel Wash\n"
      << "2. Return to main car wash menu\n\n"
      << "Enter your choice: ";
      cin >> qChoice;
      // Validate the menu selection.
  }
  if (qChoice < CANCEL_WASH && qChoice > RETURN_MAIN)
      {
        cout << "Please enter a valid menu choice: ";
        cin >> qChoice;
      }  
    {
      if (qChoice == 1) 
        {
          cout << "Please exit the car wash"<<endl;
          return 0; 
        }
      if (qChoice == 2) 
           menuChoice(); 
    }return 0;
}

int confirmMenu()
{
  const int CANCEL_WASH=1,
            RETURN_MAIN=2,
            CONFIRM = 3;
  //switch(qChoice)
  {
      // Display the menu      
      cout << "\n\t\tConfirm  Menu\n\n"
     << "1. Cancel Wash\n"
      << "2. Return to main car wash menu\n"
      << "3. Confirm car wash.\n"
      << "\nEnter your choice: ";
      cin >> qChoice;
      // Validate the menu selection.
  }
  if (qChoice < CANCEL_WASH && qChoice > RETURN_MAIN)
      {
        cout << "Please enter a valid menu choice: ";
        cin >> qChoice;
      }  
    {
      if (qChoice == 1) 
        {
          cout << "Please exit the car wash"<<endl<<endl<<endl; 
        }
        else if (qChoice == 2) 
           menuChoice();
           else
           cout << "Enjoy the car wash!" << endl<<endl<<endl;  
    }return 0;
}


  const int price = 4;
  const int choice = 4;
  double wash[price] = {12.99, 13.99, 14.99, 16.89};
  

//Definition of function menuChoice
int menuChoice()
  {
    // Display the menu.32       
    cout << "1. Standard Car Wash\n"
      << "2. Standard plus car wash\n"
      << "3. Deluxe car wash\n"
      << "4. Deluxe plus car wash\n"
      << "5. Exit Menu\n\n"
      << "Enter your choice: ";
      cin >> firstChoice;
      // Validate the menu selection.
        switch (firstChoice) //use GaddisStartingOutWithC pg245
      {
            case 1:
            cout << "\n\nYou have chosen the Standard Car Wash" << endl; 
            total = wash[0];
            cout <<"$ "<< total <<endl;
            cout << " \nDo you wish to confirm car wash " <<endl;
          confirmMenu();
            break;
            case 2: // code to be executed if n = 2;
            cout << "\n\nYou have chosen the Standard Plus Car Wash" << endl; 
            total = wash[1];
            cout << "$ " << total <<endl;
            cout << " \nDo you wish to confirm car wash " <<endl;
          confirmMenu();
            break;
            case 3: // code to be executed if n = 2;
            cout << "\n\nYou have chosen the Deluxe Car Wash" << endl; 
            total = wash[2];
            cout << "$ " << total <<endl;
            cout << " \nDo you wish to confirm car wash " <<endl;
          confirmMenu();
            break;
            case 4: // code to be executed if n = 2
            cout << "\n\nYou have chosen the Deluxe Plus Car Wash" << endl; 
            total = wash[3];
            cout << "$ " << total <<endl;cout << " \nDo you wish to confirm car wash " <<endl;
          confirmMenu();
            case 5: // code to be executed if n = 2
            quitMenu();
            break; 
      }return 0; 
      }
 


int main()
{

cout << "\n\n\n\nWelcome to Mr. Quicks Clean Car Wash.\n\n Please make your choice: \n\n";
menuChoice();
return 0;
}
