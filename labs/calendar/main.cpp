/* Lab3_3b.cpp - This program displays the days of a month
Day 1: Sunday, Day 2: Monday, Day 3: Tuesday
Day 4: Wednesday, Day 5: Thursday, Day 6: Friday
Day 7: Saturday
James Keys, Mason Cary, and Sarah Boles */
 
#include <iostream>
#include <cmath>
using namespace std;
 
int main()
{
   int n_days, start_day, month;
 
   cout << "Enter the number of the month (1 for January, 2 for February, etc.): \n";
   cin >> month;
 
   cout << "Enter the first day of the month (1 for Sunday, 2 for Monday, etc.): ";
   cin >> start_day;

   switch (month)
   {
      case 1:  // January
         cout << endl << "January";
         n_days = 31;
         break;
      case 2:  // February
         cout << endl << "February";
         n_days = 28;
         break;
      case 3:  // March
         cout << endl << "March";
         n_days = 31;
         break;
      case 4:  // April
         cout << endl << "April";
         n_days = 30;
         break;
      case 5:  // May
         cout << endl << "May";
         n_days = 31;
         break;
      case 6:  // June
         cout << endl << "June";
         n_days = 30;
         break;
      case 7:  // July
         cout << endl << "July";
         n_days = 31;
         break;
      case 8:  // August
         cout << endl << "August";
         n_days = 31;
         break;
      case 9:  // September
         cout << endl << "September";
         n_days = 30;
         break;
      case 10: // October
         cout << endl << "October";
         n_days = 31;
         break;
      case 11: // November
         cout << endl << "November";
         n_days = 30;
         break;
      case 12: // December
         cout << endl << "December";
         n_days = 31;
         break;
   }
  
   cout << endl << "Sun\tMon\tTue\tWed\tThr\tFri\tSat\n";
   for (int i = 1; i < start_day; i++)
   {
      cout << "\t";
   }
   for (int j = 1; j <= n_days; j++)
   {
        if (((j + start_day - 2) % 7 == 0) && (j != 1))
            cout << endl;
        cout << j  << "\t";
   }
   cout << endl << endl;
 
   return 0;
}