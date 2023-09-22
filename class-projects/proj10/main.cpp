#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Contact
{
private:
  string first_name;
  string last_name;
  string email;
  string notes;
  string phone;
public:
  Contact();
  Contact(string first_name, string last_name, string email, string notes);
  string getFirstName();
  string getLastName();
  string getEmail();
  string getNotes();
  string getPhone();
  void setFirstName(string first_name);
  void setLastName(string last_name);
  void setEmail(string e);
  void setNotes(string n);
  void setPhone(string p);
  void printContact();
};

Contact::Contact()
{
  first_name = "";
  last_name = "";
  email = "";
  notes = "";
}
Contact::Contact(string first_name, string last_name, string email, string notes)
{
  this->first_name = first_name;
  this->last_name = last_name;
  this->email = email;
  this->notes = notes;
}
string Contact::getFirstName()
{
  return first_name;
}
string Contact::getLastName()
{
  return last_name;
}
string Contact::getEmail()
{
  return email;
}

string Contact::getNotes()
{
  return notes;
}
string Contact::getPhone()
{
  return phone;
}
void Contact::setFirstName(string f)
{
  first_name = f;
}
void Contact::setLastName(string l)
{
  last_name = l;
}
void Contact::setEmail(string e)
{
  email = e;
}
void Contact::printContact()
{
  cout << first_name << ", " << last_name << ", " << email << ", " << phone << ", " << notes <<  endl;
}
void Contact::setPhone(string p)
{
  int numberOfDigits(0);
  bool isAllDigits = true;
  for(int i(0);i<p.length();i++)
    {
      if(isdigit(p[i]))
        numberOfDigits++;
    }
  for(int i(0);i<p.length();i++)
    {
      if(!isdigit(p[i]))
        isAllDigits = false;
    }
  if (numberOfDigits != 10 && numberOfDigits != 7)
  {
    cout << "Error: wrong format" << endl;
    printContact();

    exit(1);
  }
  if (numberOfDigits == 10)
  {
    if (p.at(0) == '(' && p.at(4) == ')' && p.at(5) == ' ' && p.at(9) == '-')
      phone = p;
    if (isAllDigits)
    // ex: 4795247319
    {
      p.insert(0,"(");
      p.insert(4, ")");
      p.insert(5, " ");
      p.insert(9, "-");
    }
    // ex: 479-524-7319
    if(p.at(3) == '-')
    {
      p.insert(0, "(");
      p.insert(4, ")");
      p.erase(5,1);
      p.insert(5," ");
    }
    // ex: 479 524 7319
    if(p.at(7) == ' ')
    {
      p.insert(0, "(");
      p.insert(4, ")");
      p.erase(9,1);
      p.insert(9, "-");
    }
    // ex: 479.524.7319
    if(p.at(3) == '.')
    {
      p.insert(0, "(");
      p.insert(4, ")");
      p.erase(5,1);
      p.insert(5, " ");
      p.erase(9,1);
      p.insert(9, "-");
    }
    phone = p;
  }
  if (numberOfDigits == 7)
  {
    // ex: 5247319
    if(isAllDigits)
    {
      p.insert(3, "-");
    }
    // ex: 524 7319 ; 524.7319
    if(p.at(3) == ' ' || p.at(3) == '.')
    {
      p.erase(3,1);
      p.insert(3, "-");
    }
    p.insert(0, "(479) ");
    phone = p;
  }
}
void Contact::setNotes(string n)
{
  notes = n;
}

int main() 
{
  Contact c1;
  c1.setFirstName("Tim");
  c1.setLastName("Gilmour");
  c1.setEmail("tgilmour@jbu.edu");
  c1.setPhone("479-524-7319");
  c1.setNotes("JBU prof");
    
  // should print "Tim, Gilmour, tgilmour@jbu.edu, (479) 524-7319, JBU prof"
  c1.printContact();
  
  c1.setPhone("4795240000");
  // should print "Tim, Gilmour, tgilmour@jbu.edu, (479) 524-0000, JBU prof"
  c1.printContact();
  
  c1.setPhone("5241234");
  // should print "Tim, Gilmour, tgilmour@jbu.edu, (479) 524-1234, JBU prof"
  c1.printContact();
  
  c1.setPhone("479.524.4321");
  // should print "Tim, Gilmour, tgilmour@jbu.edu, (479) 524-4321, JBU prof"
  c1.printContact();
  
  c1.setPhone("524.1234");
  // should print "Tim, Gilmour, tgilmour@jbu.edu, (479) 524-1234, JBU prof"
  c1.printContact();
  
  c1.setPhone("479 524 0000");
  // should print "Tim, Gilmour, tgilmour@jbu.edu, (479) 524-0000, JBU prof"
  c1.printContact();
  
  c1.setPhone("524 1233");
  // should print "Tim, Gilmour, tgilmour@jbu.edu, (479) 524-1233, JBU prof"
  c1.printContact();
  
  c1.setPhone("524 12345");
  // should print:
  //"Error: wrong format
  // Tim, Gilmour, tgilmour@jbu.edu, (479) 524-1233, JBU prof"
  c1.printContact();
  
  return 0;
}