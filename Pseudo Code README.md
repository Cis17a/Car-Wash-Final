# Car-Wash-Final
Cis17a Car Wash Final 

Pseudo Code

//This program will be user menu presented to the customer.
//Customer will drive up to Car wash menu touch screen.


Function call Mainmenu: 

menu option will ask customer if they would like a car wash.

 Program will validate input
 
{Display MainMenu

  If: (input is no),
   {
   
   Display: please exit car wash.
   
   }

   Else: program will call Function Menu Display
 }
Function menu

{ display case menu

  1.Rinse

  2.Wash & Rinse

  3.Wash, Rinse, & Wax

  4.Wash, Rinse, Wax, and Shine

  5.Cancel - Function Call Menu
}
Function call Display array

 Display array[choice][price] 

Function call: Confirm choice case menu

{input
 
  yes - proceed to next step

  cancel---display--Please exit car wash

  return-- function call Main menu 
}

Function Call: Confirm price Case menu

{input
 
  yes---display--enjoy your car wash

  cancel---display--Please exit car wash

  return---function call--- return to main menu
}
