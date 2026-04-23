#include <iostream>
#include <conio.h>
using namespace std;
main()
{
    int totalstudents = 1000; // total size
    int index = 7;

    // ddata structures
    string nameArray[totalstudents] = {"ali", "ammar", "zain", "ahmed", "usman", "bilal", "hassan"};
    int ageArray[totalstudents] = {10, 20, 18, 19, 17, 18, 20};
    float matricArray[totalstudents] = {1050, 890, 1000, 950, 1020, 980, 970};
    float interArray[totalstudents] = {980, 850, 900, 870, 910, 890, 880};
    float ecatArray[totalstudents] = {350, 280, 300, 320, 310, 305, 295};
    string pref1Array[totalstudents] = {"CE", "CS", "SE", "EE", "CS", "IT", "SE"};
    string pref2Array[totalstudents] = {"CS", "CE", "CE", "CS", "SE", "CS", "EE"};
    string pref3Array[totalstudents] = {"EE", "CS", "EE", "SE", "CE", "SE", "CS"};
    float aggriArray[totalstudents];

    // CRUD.    CREATE ,READ,UPDATE,DELETE

    while (true)
    {
        // main header of UMS
        system("cls");
        cout << "-------------------------------------------\n";
        cout << "-------University Managaement System-------\n";
        cout << "-------------------------------------------\n";

        cout << " User Menu \n";
        cout << " 1 Admin \n";
        cout << " 2 Student \n";
        cout << " 3 Exit \n";
        cout << " Choose option ";
        string useroption;
        cin >> useroption;

        cout << " You choose " << useroption << endl;
        if (useroption == "1")
        {
            // write here the admin code
            int countattempt = 0;
            for (int i = 0; i < 3; i++)
            {

                system("cls");
                cout << " Admin Menu : Login attempt  " << i + 1 << endl;
                cout << " Enter username : ";
                string username;
                cin >> username;
                cout << " Enter password : ";
                string password;
                cin >> password;
                if (username == "admin" && password == "123")
                {
                    cout << " Login successful \n";

                    while (true)
                    {
                        system("cls");

                        cout << " 1 Show all students  \n";
                        cout << " 2 Search student \n";
                        cout << " 3 Update student record \n";
                        cout << " 4 Generate merit list \n";
                        cout << " 5 Delete record by name \n";
                        cout << " 6 logout \n";

                        cout << " Choose option : ";
                        string adminoption;
                        cin >> adminoption;

                        if (adminoption == "1")
                        {
                            // show students recoed
                            cout << " Name\tAge\tMatric\tInter\tEcat\tP1\tP2\tP3" << endl;
                            for (int i = 0; i < index; i++)
                            {
                                if (nameArray[i] != " ")
                                {
                                    cout << nameArray[i] << "\t" << ageArray[i] << "\t" << matricArray[i] << "\t" << interArray[i] << "\t" << ecatArray[i] << "\t" << pref1Array[i] << "\t" << pref2Array[i] << "\t" << pref3Array[i] << endl;
                                }
                            }
                        }

                        else if (adminoption == "2")
                        {
                            // find student by name function
                            cout << " Enter the name you want to serach ";
                            string name;
                            cin >> name;
                            bool found = false;
                            int foundindex = -1;
                            for (int i = 0; i < index; i++)
                            {
                                if (nameArray[i] == name)
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
                                cout << " Name\tAge\tMatric\tInter\tEcat\tP1\tP2\tP3" << endl;
                                cout << nameArray[foundindex] << "\t" << ageArray[foundindex] << "\t" << matricArray[foundindex] << "\t" << interArray[foundindex] << "\t" << ecatArray[foundindex] << "\t" << pref1Array[foundindex] << "\t" << pref2Array[foundindex] << "\t" << pref3Array[foundindex] << endl;
                            }
                        }
                        else if (adminoption == "3")
                        {
                            // update student record

                            cout << " Enter the name you want to update record of  ";
                            string name;
                            cin >> name;
                            bool found = false;
                            int foundindex = -1;
                            for (int i = 0; i < index; i++)
                            {
                                if (nameArray[i] == name)
                                {
                                    foundindex = i;
                                    found = true;
                                }
                            }
                            if (found == true)
                            {

                                cout << "-----Old record------\n";
                                cout << " Name\tAge\tMatric\tInter\tEcat\tP1\tP2\tP3" << endl;
                                cout << nameArray[foundindex] << "\t" << ageArray[foundindex] << "\t" << matricArray[foundindex] << "\t" << interArray[foundindex] << "\t" << ecatArray[foundindex] << "\t" << pref1Array[foundindex] << "\t" << pref2Array[foundindex] << "\t" << pref3Array[foundindex] << endl;

                                cout << " enter new record for update \n";
                                cout << "Enter your name : ";
                                string name;
                                cin >> name;
                                cout << " Enter age : ";
                                int age;
                                cin >> age;
                                cout << " Enter matric marks : ";
                                int matric;
                                cin >> matric;
                                cout << " Enter inter marks : ";
                                int inter;
                                cin >> inter;
                                cout << " Enter ecat marks : ";
                                int ecat;
                                cin >> ecat;
                                cout << " Enter CS , CE , EE as your prefrences : \n";
                                cout << " Enter yout 1st pref : ";
                                string pref1;
                                cin >> pref1;
                                cout << " Enter your 2nd pref : ";
                                string pref2;
                                cin >> pref2;
                                cout << " Enter your 3rd pref : ";
                                string pref3;
                                cin >> pref3;

                                nameArray[foundindex] = name;
                                ageArray[foundindex] = age;
                                matricArray[foundindex] = matric;
                                interArray[foundindex] = inter;
                                ecatArray[foundindex] = ecat;
                                pref1Array[foundindex] = pref1;
                                pref2Array[foundindex] = pref2;
                                pref3Array[foundindex] = pref3;
                            }
                            else
                            {
                                cout << " Record not found \n";
                            }
                        }
                        else if (adminoption == "4")
                        {
                            // generate merit lsit
                            for (int i = 0; i < index; i++)
                            {
                                float aggri = matricArray[i] / 1050.0 * 100 * 0.30 + interArray[i] / 1100 * 100 * 0.4 + ecatArray[i] / 400.0 * 100 * 0.3;
                                aggriArray[i] = aggri;
                            }

                            // code to display all data with aggrigate
                            cout << " Name\tAge\tAggrigate" << endl;
                            for (int i = 0; i < index; i++)
                            {
                                if (nameArray[i] != " ")
                                {
                                    cout << nameArray[i] << "\t" << ageArray[i] << "\t" << aggriArray[i] << endl;
                                }
                            }

                            // sorting the data on the basis of aggregate

                            for (int i = 0; i < index; i++)
                            {
                                for (int j = i + 1; j < index; j++)
                                {
                                    if (aggriArray[i] < aggriArray[j])
                                    {
                                        // swapping of name
                                        string temp = nameArray[i];
                                        nameArray[i] = nameArray[j];
                                        nameArray[j] = temp;

                                        // swapping of age
                                        int tempAge = ageArray[i];
                                        ageArray[i] = ageArray[j];
                                        ageArray[j] = tempAge;

                                        // swapping of matric
                                        float tempMatric = matricArray[i];
                                        matricArray[i] = matricArray[j];
                                        matricArray[j] = tempMatric;

                                        // swapping of inter
                                        float tempInter = interArray[i];
                                        interArray[i] = interArray[j];
                                        interArray[j] = tempInter;

                                        // swapping of ecat
                                        float tempEcat = ecatArray[i];
                                        ecatArray[i] = ecatArray[j];
                                        ecatArray[j] = tempEcat;

                                        // swapping of p1
                                        string tempP1 = pref1Array[i];
                                        pref1Array[i] = pref1Array[j];
                                        pref1Array[j] = tempP1;

                                        // swapping of p2
                                        string tempP2 = pref2Array[i];
                                        pref2Array[i] = pref2Array[j];
                                        pref2Array[j] = tempP2;

                                        // swapping of p3
                                        string tempP3 = pref3Array[i];
                                        pref3Array[i] = pref3Array[j];
                                        pref3Array[j] = tempP3;

                                        // swapping of aggregate
                                        float tempAgg = aggriArray[i];
                                        aggriArray[i] = aggriArray[j];
                                        aggriArray[j] = tempAgg;
                                    }
                                }
                            }

                            // admit students into admiision
                            cout << "\n--- Admission Results ---" << endl;
                            cout << "Name\tAggregate\t\tAdmitted To" << endl;

                            int cs_seats = 2, ce_seats = 2, ee_seats = 2, me_seats = 2;

                            for (int i = 0; i < index; i++)
                            {
                                if (nameArray[i] != "")
                                {
                                    string prefs[3] = {pref1Array[i], pref2Array[i], pref3Array[i]};
                                    bool admitted = false;

                                    for (int p = 0; p < 3; p++)
                                    {
                                        if (admitted == false)
                                        {
                                            if (prefs[p] == "CS" && cs_seats > 0)
                                            {
                                                cout << nameArray[i] << "\t" << aggriArray[i] << " %\t\t" << "CS" << endl;
                                                cs_seats--;
                                                admitted = true;
                                            }
                                            else if (prefs[p] == "CE" && ce_seats > 0)
                                            {
                                                cout << nameArray[i] << "\t" << aggriArray[i] << "  %\t\t" << "CE" << endl;
                                                ce_seats--;
                                                admitted = true;
                                            }
                                            else if (prefs[p] == "EE" && ee_seats > 0)
                                            {
                                                cout << nameArray[i] << "\t" << aggriArray[i] << " %\t\t" << "EE" << endl;
                                                ee_seats--;
                                                admitted = true;
                                            }
                                            else if (prefs[p] == "ME" && me_seats > 0)
                                            {
                                                cout << nameArray[i] << "\t" << aggriArray[i] << " %\t\t" << "ME" << endl;
                                                me_seats--;
                                                admitted = true;
                                            }
                                        }
                                    }

                                    if (admitted == false)
                                    {
                                        cout << nameArray[i] << "\t" << aggriArray[i] << " %\t\tNot Admitted (No seats available)" << endl;
                                    }
                                }
                            }

                            cout << "\n--- Remaining Seats ---" << endl;
                            cout << "CS: " << cs_seats << " | CE: " << ce_seats << " | EE: " << ee_seats << " | ME: " << me_seats << endl;
                        }
                        else if (adminoption == "5")
                        {
                            // delete student recoed
                            cout << " Enter the name you want to delete record of  ";
                            string name;
                            cin >> name;
                            bool found = false;
                            int foundindex = -1;
                            for (int i = 0; i < index; i++)
                            {
                                if (nameArray[i] == name)
                                {
                                    foundindex = i;
                                    found = true;
                                }
                            }
                            if (found == true)
                            {
                                nameArray[foundindex] = " ";
                                ageArray[foundindex] = 0;
                                matricArray[foundindex] = 0;
                                interArray[foundindex] = 0;
                                ecatArray[foundindex] = 0;
                                pref1Array[foundindex] = " ";
                                pref2Array[foundindex] = " ";
                                pref3Array[foundindex] = " ";

                                cout << " Record of " << name << " deleted" << endl;
                            }
                            else
                            {
                                cout << " Record not found \n";
                            }
                        }

                        else if (adminoption == "6")
                        {
                            break;
                        }
                        else
                        {
                            cout << " Wrong option selected \n";
                        }
                        cout << " Press any key to continue.. ";
                        getch();
                    }
                    cout << " Press any key to continue.. ";
                    getch();
                    break;
                }
                else
                {
                    cout << " username or password is invalid \n";
                }
                cout << " Press any key to continue.. ";

                getch();
            }
        }
        else if (useroption == "2")
        {
            // write here the student code
            system("cls");
            cout << " Welcome to UMS Student Menu \n";
            cout << "Enter your name : ";
            string name;
            cin >> name;
            cout << " Enter age : ";
            int age;
            cin >> age;
            cout << " Enter matric marks : ";
            int matric;
            cin >> matric;
            cout << " Enter inter marks : ";
            int inter;
            cin >> inter;
            cout << " Enter ecat marks : ";
            int ecat;
            cin >> ecat;
            cout << " Enter CS , CE , EE as your prefrences : \n";
            cout << " Enter yout 1st pref : ";
            string pref1;
            cin >> pref1;
            cout << " Enter your 2nd pref : ";
            string pref2;
            cin >> pref2;
            cout << " Enter your 3rd pref : ";
            string pref3;
            cin >> pref3;

            nameArray[index] = name;
            ageArray[index] = age;
            matricArray[index] = matric;
            interArray[index] = inter;
            ecatArray[index] = ecat;
            pref1Array[index] = pref1;
            pref2Array[index] = pref2;
            pref3Array[index] = pref3;
            index++;
            cout << " Your data has been saved. \n";
            cout << " Press any key to continue.. ";

            getch();
        }
        else if (useroption == "3")
        {
            break;
        }
        else
        {
            cout << "You enterterd the wrong option ";
        }
    } // end of our main while loop

    cout << endl
         << "Thanks for using this software.  ";
}
