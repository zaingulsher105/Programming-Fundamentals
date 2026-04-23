#include <iostream>
#include <conio.h>
using namespace std;
main()
{

    int totalpatients = 1000; // total size
    int patientindex = 6;

    // data structures
    string namearray[totalpatients] = {"Ali", "Ejaz", "Baqir", "Faiz", "Raffay", "Zain"};
    int agearray[totalpatients] = {18, 19, 17, 15, 21, 19};
    string addressarray[totalpatients] = {"Lahore", "Islamabad", " Karachi", "Peshawar", "Quetta", "Multan"};
    int phonenumberarray[totalpatients] = {12, 23, 34, 56, 67, 89, 90};
    string diseasearray[totalpatients] = {"Cough", "Typhoid", "Corona", "Breathing", "Hedeache", "Poison"};

    int totaldoctors = 100; // total doctors
    int drindex = 0;

    string drNamearray[totaldoctors];
    int dragearray[totaldoctors];
    string draddressarray[totaldoctors];
    int drphonearray[totaldoctors];
    string drspecializationarray[totaldoctors];

    int days, doctorFee, medicineCost;

    // crud, read ,update,delete
    while (true)
    {
        // main header of HMS
        system("cls");
        cout << "--------------------------------------------------------\n";
        cout << "-------------Hospital Management System-----------------\n";
        cout << "--------------------------------------------------------\n";

        cout << " User menu \n";
        cout << "1. Admin menu \n";
        cout << "2. Patient menu \n";
        cout << "3. Exit \n";
        cout << " Choose option : ";
        int useroption;
        cin >> useroption;

        cout << " You choose " << useroption << endl;

        if (useroption == 1)
        { // write the admin code
            int countattempt = 0;
            for (int i = 0; i < 3; i++)
            {
                system("cls");
                cout << " Admin menu.login attempt " << i + 1 << endl;

                cout << " Enter username : ";
                string username;
                cin >> username;
                cout << " Enter password : ";
                string password;
                cin >> password;
                if (username == "admin" && password == "1234")
                {
                    cout << " Login successfully \n";

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
                        cin >> adminoption;
                        if (adminoption == 1)
                        {
                            cout << " Name \t Age \t Address \t phonenumber \t  disease \n";
                            for (int i = 0; i < patientindex; i++)
                            {
                                if (namearray[i] != "")
                                {
                                    cout << namearray[i] << "\t" << agearray[i] << "\t" << addressarray[i] << "\t" << phonenumberarray[i] << "\t" << diseasearray[i] << endl;
                                }
                            }
                        }
                        else if (adminoption == 2)
                        {
                            // search patient
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
                        }
                        else if (adminoption == 3)
                        {
                            // update patient record
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
                                cout << "-------------Old record-------------\n";
                                cout << " Name \t Age \t Address \t phonenumber \t disease \n";
                                cout << namearray[foundindex] << "\t" << agearray[foundindex] << "\t" << addressarray[foundindex] << "\t" << phonenumberarray[foundindex] << "\t" << diseasearray[foundindex] << endl;

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

                                namearray[foundindex] = name;
                                agearray[foundindex] = age;
                                addressarray[foundindex] = address;
                                phonenumberarray[foundindex] = phonenumber;
                                diseasearray[foundindex] = disease;
                            }
                            else
                            {
                                cout << " Record not found ";
                            }
                        }
                        else if (adminoption == 4)
                        {
                            // delete record
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
                        }
                        else if (adminoption == 5)
                        {
                            cout << " total no of patients are " << patientindex + 1 << endl;
                        }
                        else if (adminoption == 6)
                        {
                            cout << " Enter the number of days admitted  ";
                            cin >> days;
                            cout << " Enter doctors fees : ";
                            cin >> doctorFee;
                            cout << " Enter the medicine costs :  ";
                            cin >> medicineCost;
                            int roomcharge = days * 2000;
                            int total = roomcharge + doctorFee + medicineCost;

                            cout << " Total bill is : " << total << endl;
                        }
                        else if (adminoption == 7)
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

                            drNamearray[drindex] = drName;
                            dragearray[drindex] = drage;
                            draddressarray[drindex] = draddress;
                            drphonearray[drindex] = drno;
                            drspecializationarray[drindex] = drspecialization;
                            drindex++;

                            cout << " Data has been saved. \n";
                        }
                        else if (adminoption == 8)
                        {
                            cout << " drName \t drAge \t drAddress \t drphonenumber  \t  drspecialiazation \n";
                            for (int i = 0; i < drindex; i++)
                            {
                                if (drNamearray[i] != "")
                                {
                                    cout << drNamearray[i] << "\t" << dragearray[i] << "\t" << draddressarray[i] << "\t" << drphonearray[i] << "\t" << drspecializationarray[i] << endl;
                                }
                            }
                        }
                        else if (adminoption == 9)
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
                                cout << " Name \t Age \t PhoneNo \t Address \t Specialization ";
                                cout << drNamearray[foundindex] << "\t" << dragearray[foundindex] << "\t" << drphonearray[foundindex] << "\t" << draddressarray[foundindex] << "\t" << drspecializationarray[foundindex] << endl;
                            }
                        }
                        else if (adminoption == 10)
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
                        }
                        else if (adminoption == 11)
                        {
                            break;
                        }
                        else
                        {
                            cout << " Wrong option selected. \n";
                        }
                        cout << " Press any key to continue..";
                        getch();
                    }
                    cout << " Press any key to continue..";
                    getch();
                    break;
                }
                else
                {
                    cout << "Username or password is invalid \n";
                }
                cout << " Press any key to continue.. ";
                getch();
            }
        }
        else if (useroption == 2)
        {
            // write here the patient code
            system("cls");
            cout << " Welcome to HMS Patient menu. \n";

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

            namearray[patientindex] = name;
            agearray[patientindex] = age;
            addressarray[patientindex] = address;
            phonenumberarray[patientindex] = phonenumber;
            diseasearray[patientindex] = disease;
            patientindex++;

            cout << endl
                 << " Your patient data has added \n";

            getch();
        }
        else if (useroption == 3)
        {
            break;
        }
        else
        {
            cout << " You enetered wrong option \n";
        }
    } // end of our main while loop

    cout << " Thank you for using this program.";
}
