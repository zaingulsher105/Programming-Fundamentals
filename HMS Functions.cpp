#include <iostream>
#include <conio.h>
using namespace std;

// prototypes
void showHeader();

void adminMenu(string[], int[], string[], int[], string[], int &,
               string[], int[], string[], int[], string[], int &);

void showPatients(string[], int[], string[], int[], string[], int);
void searchPatient(string[], int[], string[], int[], string[], int);
void updatePatient(string[], int[], string[], int[], string[], int);
void deletePatient(string[], int[], string[], int[], string[], int);
void countPatients(int);
void generateBill();

void addDoctor(string[], int[], string[], int[], string[], int &);
void showDoctors(string[], int[], string[], int[], string[], int);
void searchDoctor(string[], int[], string[], int[], string[], int);
void sortPatients(string[], int[], string[], int[], string[], int);

void patientMenu(string[], int[], string[], int[], string[], int &);


// ================= MAIN =================
int main()
{
    int patientindex = 6;

    string namearray[1000] = {"Ali", "Ejaz", "Baqir", "Faiz", "Raffay", "Zain"};
    int agearray[1000] = {18, 19, 17, 15, 21, 19};
    string addressarray[1000] = {"Lahore", "Islamabad", "Karachi", "Peshawar", "Quetta", "Multan"};
    int phonenumberarray[1000] = {12, 23, 34, 56, 67, 89};
    string diseasearray[1000] = {"Cough", "Typhoid", "Corona", "Breathing", "Headache", "Poison"};

    int drindex = 0;
    string drNamearray[100];
    int dragearray[100];
    string draddressarray[100];
    int drphonearray[100];
    string drspecializationarray[100];

    while (true)
    {
        system("cls");
        showHeader();
        cout << "1. Admin menu\n2. Patient menu\n3. Exit\nChoose: ";
        int option;
        cin >> option;

        if (option == 1)
            adminMenu(namearray, agearray, addressarray, phonenumberarray, diseasearray, patientindex,
                      drNamearray, dragearray, draddressarray, drphonearray, drspecializationarray, drindex);

        else if (option == 2)
            patientMenu(namearray, agearray, addressarray, phonenumberarray, diseasearray, patientindex);

        else
            break;
    }
}

// ================= ADMIN MENU =================
void adminMenu(string namearray[], int agearray[], string addressarray[], int phonenumberarray[], string diseasearray[], int &patientindex,
               string drNamearray[], int dragearray[], string draddressarray[], int drphonearray[], string drspecializationarray[], int &drindex)
{

    for (int i = 0; i < 3; i++)
    {
        system("cls");
        cout << " Admin login attempt " << i + 1 << endl;

        cout << " Enter username : ";
        string username;
        cin >> username;

        cout << " Enter password : ";
        string password;
        cin >> password;

        if (username == "admin" && password == "1234")
        {
            while (true)
            {
                system("cls");
                cout << "1. Show all patients \n";
                cout << "2. Search patient \n";
                cout << "3. Update patient record \n";
                cout << "4. Delete record \n";
                cout << "5. Total number of patients \n";
                cout << "6. Generate the bill \n";
                cout << "7. Add doctor \n";
                cout << "8. Show all doctors\n";
                cout << "9. Search Doctor by name  \n";
                cout << "10.Sort all patients by name \n";
                cout << "11.log out \n";
                cout << "Choose the option : ";
                int adminoption;
                int op;
                cin >> op;

                system("cls");
                if (op == 1)
                    showPatients(namearray, agearray, addressarray, phonenumberarray, diseasearray, patientindex);
                else if (op == 2)
                    searchPatient(namearray, agearray, addressarray, phonenumberarray, diseasearray, patientindex);
                else if (op == 3)
                    updatePatient(namearray, agearray, addressarray, phonenumberarray, diseasearray, patientindex);
                else if (op == 4)
                    deletePatient(namearray, agearray, addressarray, phonenumberarray, diseasearray, patientindex);
                else if (op == 5)
                    countPatients(patientindex);
                else if (op == 6)
                    generateBill();
                else if (op == 7)
                    addDoctor(drNamearray, dragearray, draddressarray, drphonearray, drspecializationarray, drindex);
                else if (op == 8)
                    showDoctors(drNamearray, dragearray, draddressarray, drphonearray, drspecializationarray, drindex);
                else if (op == 9)
                    searchDoctor(drNamearray, dragearray, draddressarray, drphonearray, drspecializationarray, drindex);
                else if (op == 10)
                    sortPatients(namearray, agearray, addressarray, phonenumberarray, diseasearray, patientindex);
                else if (op == 11)
                    break;
            }
        }
        else
        {
            cout << "Invalid login\n";
        }
    }
}

// ================= FUNCTIONS =================

void showPatients(string namearray[], int agearray[], string addressarray[], int phonenumberarray[], string diseasearray[], int patientindex)
{
    cout << " Name \t Age \t Address \t phonenumber \t  disease \n";
    for (int i = 0; i < patientindex; i++)
    {
        if (namearray[i] != "")
        {
            cout << namearray[i] << "\t" << agearray[i] << "\t" << phonenumberarray[i] << "\t" << addressarray[i] << "\t" << diseasearray[i] << endl;
        }
    }
    getch();
}

void searchPatient(string namearray[], int agearray[], string addressarray[], int phonenumberarray[], string diseasearray[], int patientindex)
{
    cout << " Enter the name of patient u want to search : ";
    string name;
    cin >> name;
    bool found = false;
    int foundindex = -1;
    for (int i = 0; i < patientindex; i++)
    {
        if (namearray[i] == name)
        {
            foundindex = i;
            found = true;
        }
    }
    if (found == false)
    {
        cout << " record not found against name " << name;
    }
    else
    {
        cout << " Name \t Age \t Address \t phonenumber \t disease \n";
        cout << namearray[foundindex] << "\t" << agearray[foundindex] << "\t" << addressarray[foundindex] << "\t" << phonenumberarray[foundindex] << "\t" << diseasearray[foundindex] << endl;
    }
    getch();
}

void updatePatient(string namearray[], int agearray[], string addressarray[], int phonenumberarray[], string diseasearray[], int patientindex)
{
    cout << " Enter the name of patient u want to search : ";
    string name;
    cin >> name;
    bool found = false;
    int foundindex = -1;
    for (int i = 0; i < patientindex; i++)
    {
        if (namearray[i] == name)
        {
            foundindex = i;
            found = true;
        }
    }
    if (found == true)
    {
        // showing old records

        cout << "-------------Old record-------------\n";
        cout << " Name \t Age \t Address \t phonenumber \t disease \n";
        cout << namearray[foundindex] << "\t" << agearray[foundindex] << "\t" << addressarray[foundindex] << "\t" << phonenumberarray[foundindex] << "\t" << diseasearray[foundindex] << endl;

        // entering the new recoreds

        cout << " Enter new reecord for update \n";

        cout << " Enter patient name : ";
        string name;
        cin >> name;
        cout << " Enter patient age : ";
        int age;
        cin >> age;
        cout << " Enter patient address : ";
        string address;
        cin >> address;
        cout << " Enter phone number : ";
        int phonenumber;
        cin >> phonenumber;
        cout << " Enter the cause patient is suffering from last days : ";
        string disease;
        cin >> disease;

        // saving the data in arrays
        namearray[foundindex] = name;
        agearray[foundindex] = age;
        addressarray[foundindex] = address;
        phonenumberarray[foundindex] = phonenumber;
        diseasearray[foundindex] = disease;
        cout << " Data hs been updated ";
    }
    else
    {
        cout << " Record not found ";
    }
    getch();
}

void deletePatient(string namearray[], int agearray[], string addressarray[], int phonenumberarray[], string diseasearray[], int patientindex)
{
    cout << " Enter the name of patient u want to delete : ";
    string name;
    cin >> name;
    bool found = false;
    int foundindex = -1;
    for (int i = 0; i < patientindex; i++)
    {
        if (namearray[i] == name)
        {
            foundindex = i;
            found = true;
        }
    }
    if (found = true)
    {
        // after deleting the record updating the arrays

        namearray[foundindex] = "";
        agearray[foundindex] = 0;
        addressarray[foundindex] = "";
        phonenumberarray[foundindex] = 0;
        diseasearray[foundindex] = "";

        cout << " Record of " << name << " deleted  \n";
    }
    else
    {
        cout << " Record not found \n";
    }
    getch();
}

void countPatients(int patientindex)
{
    cout << "Total Patients: " << patientindex << endl;
    getch();
}

void generateBill()
{
    int days,doctorFee,medicineCost;
    cout << " Enter the number of days admitted  ";
    cin >> days;
    cout << " Enter doctors fees : ";
    cin >> doctorFee;
    cout << " Enter the medicine costs :  ";
    cin >> medicineCost;
    int roomcharge = days * 2000;
    int total = roomcharge + doctorFee + medicineCost;

    cout << " Total bill is : " << total << endl;
    getch();
}

void addDoctor(string drNamearray[], int dragearray[], string draddressarray[], int drphonearray[], string drspecializationarray[], int &drindex)
{
    cout << "Enter doctor name : ";
    string drName;
    cin >> drName;
    cout << " Enter doctors age : ";
    int drage;
    cin >> drage;
    cout << " Enter doctors no : ";
    int drno;
    cin >> drno;
    cout << " Enter doctors address : ";
    string draddress;
    cin >> draddress;
    cout << " Enter doctors specialization : ";
    string drspecialization;
    cin >> drspecialization;

    // saving inthe arrays

    drNamearray[drindex] = drName;
    dragearray[drindex] = drage;
    draddressarray[drindex] = draddress;
    drphonearray[drindex] = drno;
    drspecializationarray[drindex] = drspecialization;
    drindex++;

    cout << " Data has been saved. \n";
    getch();
}

void showDoctors(string drNamearray[], int dragearray[], string draddressarray[], int drphonearray[], string drspecializationarray[], int drindex)
{
    cout << " drName \t drAge \t drAddress \t drphonenumber  \t  drspecialiazation \n";
    for (int i = 0; i < drindex; i++)
    {
        if (drNamearray[i] != "")
        {
            cout << drNamearray[i] << "\t" << dragearray[i] << "\t" << draddressarray[i] << "\t" << drphonearray[i] << "\t" << drspecializationarray[i] << endl;
        }
    }
    getch();
}

void searchDoctor(string drNamearray[], int dragearray[], string draddressarray[], int drphonearray[], string drspecializationarray[], int drindex)
{
    cout << " Enter the name of the doctor you want to serach ";
    string name;
    cin >> name;
    bool found = false;
    int foundindex = -1;
    for (int i = 0; i < drindex; i++)
    {
        if (drNamearray[i] == name)
        {
            foundindex = i;
            found = true;
        }
    }

    if (found == false)
    {
        cout << " Record not found adainst name " << name << endl;
    }
    else
    {
        // displying data

        cout << " Name \t Age \t PhoneNo \t Address \t Specialization \n";
        cout << drNamearray[foundindex] << "\t" << dragearray[foundindex] << "\t" << drphonearray[foundindex] << "\t" << draddressarray[foundindex] << "\t" << drspecializationarray[foundindex] << endl;
    }

    getch();
}

void sortPatients(string namearray[], int agearray[], string addressarray[], int phonenumberarray[], string diseasearray[], int patientindex)
{
    for (int i = 0; i < patientindex - 1; i++)
    {
        for (int j = i + 1; j < patientindex; j++)
        {
            if (namearray[i] > namearray[j])
            {
                // swap name
                string tempName = namearray[i];
                namearray[i] = namearray[j];
                namearray[j] = tempName;

                // swap age
                int tempAge = agearray[i];
                agearray[i] = agearray[j];
                agearray[j] = tempAge;

                // swap address
                string tempAddress = addressarray[i];
                addressarray[i] = addressarray[j];
                addressarray[j] = tempAddress;

                // swap phone
                int tempPhone = phonenumberarray[i];
                phonenumberarray[i] = phonenumberarray[j];
                phonenumberarray[j] = tempPhone;

                // swap disease
                string tempDisease = diseasearray[i];
                diseasearray[i] = diseasearray[j];
                diseasearray[j] = tempDisease;
            }
        }
    }
    cout<<" The data has been sorted ";
}

void patientMenu(string namearray[], int agearray[], string addressarray[], int phonenumberarray[], string diseasearray[], int &patientindex)
{
    system("cls");
    cout << " Welcome to HMS Patient menu. \n";

    cout << " Enter patient name : ";
    string name;
    cin >> name;
    cout << " Enter patient age : ";
    int age;
    cin >> age;
    cout << " Enter phone number : ";
    int phonenumber;
    cin >> phonenumber;
    cout << " Enter patient address : ";
    string address;
    cin >> address;

    cout << " Enter the cause patient is suffering from last days : ";
    string disease;
    cin >> disease;

    // saving patient data in arrays
    namearray[patientindex] = name;
    agearray[patientindex] = age;
    phonenumberarray[patientindex] = phonenumber;
    addressarray[patientindex] = address;
    diseasearray[patientindex] = disease;
    patientindex++;

    cout << endl
         << " Your patient data has added \n";

    getch();
}

void showHeader()
{
    system("cls");
    cout << "--------------------------------------------------------\n";
    cout << "-------------Hospital Management System-----------------\n";
    cout << "--------------------------------------------------------\n";
}