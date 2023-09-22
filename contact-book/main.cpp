#include <iostream>
#include <vector>
using namespace std;

class Contact
{
private:
    string first_name;
    string last_name;
    string phone;
    string email;
    string birthday;
    string notes;
public:
    Contact();
    Contact(string first_name, string last_name, string phone, string email, string birthday, string notes);
    string getName();
    string getPhone();
    string getEmail();
    string getBirthday();
    string getNotes();
    void setName(string first_name, string last_name);
    void setPhone(string p);
    void setEmail(string e);
    void setBirthday(string b);
    void setNotes(string n);
    void print();
};
Contact::Contact()
{
    first_name = "";
    last_name = "";
    phone = "";
    email = "";
    birthday = "";
    notes = "";
}
Contact::Contact(string first_name, string last_name, string phone, string email, string birthday, string notes)
{
    this->first_name = first_name;
    this->last_name = last_name;
    this->phone = phone;
    this->email = email;
    this->birthday = birthday;
    this->notes = notes;
}
string Contact::getName()
{
    return first_name + " " + last_name;
}
string Contact::getPhone()
{
    return phone;
}
string Contact::getEmail()
{
    return email;
}
string Contact::getBirthday()
{
    return birthday;
}
string Contact::getNotes()
{
    return notes;
}
void Contact::setName(string first_name, string last_name)
{
    this->first_name = first_name;
    this->last_name = last_name;
}
void Contact::setPhone(string p)
{
    phone = p;
}
void Contact::setEmail(string e)
{
    email = e;
}
void Contact::setBirthday(string b)
{
    birthday = b;
}
void Contact::setNotes(string n)
{
    notes = n;
}
void Contact::print()
{
    cout << "Name: " << getName() << endl;
    cout << "Phone: " << getPhone() << endl;
    cout << "Email: " << getEmail() << endl;
    cout << "Birthday: " << getBirthday() << endl;
    cout << "Notes: " << getNotes() << endl;
}

void ListAllNames(vector<Contact> contacts)
{
    if (contacts.size() == 0)
    {
        cout << "No contacts found." << endl;
        return;
    }
    for (int i = 0; i < contacts.size(); i++)
    {
        cout << i + 1 << ". " << contacts[i].getName() << endl;
    }
    cout << endl << endl << endl << endl;
}
void ListRandomContact(vector<Contact> contacts)
{
    if (contacts.size() == 0)
    {
        cout << "No contacts found." << endl;
        return;
    }
    int random_index = rand() % contacts.size();
    contacts[random_index].print();
    cout << endl << endl << endl << endl;
}
void AddContact(vector<Contact> &contacts)
{
    string first_name, last_name, phone, email, birthday, notes;
    cout << "Enter first name: ";
    cin >> first_name;
    cout << "Enter last name: ";
    cin >> last_name;
    cout << "Enter phone: ";
    cin >> phone;
    cout << "Enter email: ";
    cin >> email;
    cout << "Enter birthday: ";
    cin >> birthday;
    cout << "Enter notes: ";
    cin >> notes;
    Contact contact(first_name, last_name, phone, email, birthday, notes);
    contacts.push_back(contact);
    cout << endl << endl << endl << endl;
}
void ListAllInfo(vector<Contact> contacts)
{
    if (contacts.size() == 0)
    {
        cout << "No contacts found." << endl;
        return;
    }
    for (int i = 0; i < contacts.size(); i++)
    {
        cout << i + 1 << ". " << contacts[i].getName() << endl;
        contacts[i].print();
        cout << endl;
    }
    cout << endl << endl << endl << endl;

}
void DeleteContact(vector<Contact> &contacts)
{
    ListAllNames(contacts);
    if (contacts.size() == 0)
    {
        cout << "No contacts found." << endl;
        return;
    }
    int index;
    cout << "Enter index of contact to delete: ";
    cin >> index;
    contacts.erase(contacts.begin() + index - 1);
    cout << endl << endl << endl << endl;
}
void menu(vector<Contact> contacts)
{
     // Print out instructions.
    cout << "Choose whether to List all contact names (1), Add a new contact (2), List all information for all contacts (3), Delete an Entry (4), List a Random Contact to Pray for (5), or Exit (6)." << endl;
    int choice;
    cout << "Enter your choice: ";
    cin >> choice;
    switch (choice) 
    {
        case 1:
            cout << "List all contact names" << endl;
            ListAllNames(contacts);
            menu(contacts);
        case 2:
            cout << "Add a new contact" << endl;
            AddContact(contacts);
            menu(contacts);
        case 3:
            cout << "List all information for all contacts" << endl;
            ListAllInfo(contacts);
            menu(contacts);
        case 4:
            cout << "Delete an Entry" << endl;
            DeleteContact(contacts);
            menu(contacts);
        case 5:
            cout << "List a random contact" << endl;
            ListRandomContact(contacts);
            menu(contacts);
        case 6:
            cout << "Exit" << endl;
            exit(0);
        default:
            cout << "Invalid choice" << endl;
    }
}

int main()
{
    vector<Contact> contacts;
    menu(contacts);
    return 0;
}