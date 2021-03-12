#include <iostream>
#include <fstream>

#include <stdlib.h>
#include <bits/stdc++.h>

using namespace std;

main()
{

    int pin;
    int menu;
    int counts;

    char char_m;

    string filename;
    string getmssg;

    string readfile;
    string reading;

    do

    {
        cout<<endl;

        cout<<"Simple Message Encryption and Decryption Program "<<endl;
        cout<<"------------------------------------------------"<<endl;

        cout<<endl;

        cout<<"Written by Alfred John"<<endl;

        cout<<endl;

        cout<<"Menu"<<endl;
        cout<<"----------------"<<endl;
        cout<<endl;

        cout<<"1.Encrypt a message by creating a file"<<endl;
        cout<<"2.Decrypt message from file"<<endl;
        cout<<"3.Exit program"<<endl;

        cout<<endl;

        cout<<"Enter your option: ";

        cin >> menu;


        if(menu ==1)
        {
            cout << endl;

            cout << "Enter the filename: ";
            cin >> filename;

            ofstream openfile;
            openfile.open(filename);

            cout << "Enter the message: ";
            fflush(stdin);
            getline(cin, getmssg);


            cout << "Enter the pin: ";
            cin >> pin;

            int a = getmssg.length();
            char char_m[a];
            strcpy(char_m, getmssg.c_str());

            cout<<endl;

            cout << "Encrypted message: ";
            for(counts = 0; (counts < 100 && char_m[counts] != '\0'); counts++)
            {
                char_m[counts] = char_m[counts] + pin;
                openfile << char_m[counts];
                cout << char_m[counts];
            }

            openfile.close();
            cout << endl << endl;
            break;

        }

        else if (menu == 2)
        {
            cout << endl;

            cout << "Enter file name: ";
            cin >> filename;


            ifstream read_file;
            read_file.open(filename);
            getline(read_file, reading);


            cout << "Enter pin to Decrypt: ";
            cin >> pin;


            int a = reading.length();
            char mssg[a];
            strcpy(mssg, reading.c_str());

            cout<<endl;

            cout << "Decrypted message: ";
            for(counts = 0; (counts < 100 && mssg[counts] != '\0'); counts++)
            {
                mssg[counts] = mssg[counts] - pin;
                cout << mssg[counts];
            }

            read_file.close();
            cout << endl << endl;
            system("pause");
            system("CLS");

            break;
        }

        else if (menu == 3)
            {
                 cout<<endl;
                 cout<<"Thank you for using this system"<<endl;
            }

        else
        {
               cout << "Invalid input" << endl;
        }


    }

    while(menu != 3);
}

