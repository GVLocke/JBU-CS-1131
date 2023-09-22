#include <iostream>
using namespace std;
int main()
{
// Initialize all of the variables. Establish that the Max Salary is $20,000, and the Min salary is $0. Also establish that the minimum skill level is 7. 
char isLikedByCoworker1, isLikedByCoworker2;
double candidatesSkillLevel, minimumSkillLevelRequired(7);
int maximumPossibleSalaryWeCanOffer(20000), minimumPossibleSalaryWeCanOffer(0), candidatesRequestedSalary;
bool failedBackgroundCheck, likedByCoworker1, likedByCoworker2;
char backgroundCheck;

// Ask the user to input all of the variables

cout << "Is the candidate liked by the first test coworker? (y/n)\n";
cin >> isLikedByCoworker1;
cout << "Is the candidate liked by the second test coworker? (y/n)\n";
cin >> isLikedByCoworker2;
if ((isLikedByCoworker1 == 'y') || (isLikedByCoworker2 == 'y'))
    likedByCoworker2 = true;
else
    likedByCoworker2 = false;  // If the candidate is liked either of the test coworkers, than they're good to go
cout << "What is the candidate's skill level (On a scale of 1-10)?\n";
cin >> candidatesSkillLevel;
cout << "What is the candidate's requested salary?\n";
cin >> candidatesRequestedSalary;
cout << "Did the candidate pass the background check? (y/n)\n";
cin >> backgroundCheck;
if (backgroundCheck == 'y')
    failedBackgroundCheck = false;
else
    failedBackgroundCheck = true;

if ((likedByCoworker1 == true)
    && (likedByCoworker2 == true)
    && (failedBackgroundCheck == false)
    && (candidatesSkillLevel > minimumSkillLevelRequired)
    && ((minimumPossibleSalaryWeCanOffer <= candidatesRequestedSalary) && (candidatesRequestedSalary <= maximumPossibleSalaryWeCanOffer)))
    cout << "\n\nThe candidate is as good as hired! Congratulations!";
else
    cout << "\n\nTell the candidate to kindly see themselves to the door.";
}

