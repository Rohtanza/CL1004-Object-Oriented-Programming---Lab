// OOP Lab no 08 | Question no 01 | Muhammad Rehan | 22P-9106 | BSE-2A
#include <iostream>
#include <fstream>
#include<limits>
using namespace std;
void Edit(void);
void Display(void);
int main() {

    int option=0;
    while(true){
        while(true){
            cout<<"Please Choose an option:\n1. Add an entry to the journel.\n2. Display the journal\n3. Exit\n=>",cin>>option;
            switch (option) {
                case 1:
                    Edit();
                    break;
                case 2:
                    Display();
                    break;
                case 3:
                    return 0;
                    break;

            }
        }
        break;
    }
    return 0;
}
void Edit(void){
    ofstream fout;
    fout.open("Text.txt");
    if(!fout){
        cout<<"Cant open file."<<endl;
        return;
    }
    string entry;    cin.ignore(numeric_limits<streamsize>::max(), '\n');


    while(true){
        cout<<"Enter you entry (Press Ctrl + D to Exit) : ",getline(cin,entry);
        if(entry=="-1")break;
        fout<<entry<<endl;
    }
    fout.close();
}
void Display(void){
    string line;
    ifstream fin;
    fin.open("Text.txt");
    while(getline(fin,line))
        cout<<line<<endl;
    fin.close();
}