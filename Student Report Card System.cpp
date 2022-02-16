#include <iostream>
#include <string>
using namespace std;

int main(){
    
    cout << "Input Student Details \n";
    cout << "--------------------- \n\n";
    
    string Nameofstd;
    cout << "Name of the Student: ";
    getline (cin, Nameofstd);
    
    int Rollno;
    cout << "Roll No: ";
    cin >> Rollno;
    
    int age;
    cout << "Age: ";
    cin >> age;

    int Class;
    cout << "Class: ";
    cin >> Class;
    
    double Phy, Chem, Mts, Bio, Lang;
    cout << "Enter marks for the following subjects (out of 100):- \n";
    cout << "PHYSICS - ";
    cin >> Phy;
    cout << "CHEMISTRY - ";
    cin >> Chem;
    cout << "MATHEMATICS - ";
    cin >> Mts;
    cout << "BIOLOGY - ";
    cin >> Bio;
    cout << "LANGUAGE - ";
    cin >> Lang;
    cout << "\n\n\n\n";
    
    
    cout << "MAIN MENU \n";
    cout << "^^^^^^^^^ \n\n";
    cout << "Press 1 to Display Student Report \n";
    cout << "Press 2 to Insert Marks \n";
    cout << "Press 3 to Delete Marks \n";
    cout << "Press 4 to Modify Marks \n";
    cout << "Enter your choice :-  ";
    int choice;
    cin >> choice ;
    cout << "\n\n\n";
    
    
    switch (choice) {
        case 1:
        {
        cout << " ************************ STUDENT REPORT ************************ \n\n";
        cout << "NAME OF STUDENT - ";
        cout << Nameofstd << "\n";
        cout << "ROLL NUMBER - ";
        cout << Rollno << "\n";
        cout << "AGE - ";
        cout << age << "\n";
        cout << "CLASS - ";
        cout << Class << "\n";
        cout << "TOTAL MARKS OBTAINED IN (out of 100) - \n";
        cout << "Physics: " << "\n";
        cout << Phy << "\n";
        cout << "Chemistry: " << "\n";
        cout << Chem << "\n";
        cout << "Biology: " << "\n";
        cout << Bio << "\n";
        cout << "Mathematics: " << "\n";
        cout << Mts << "\n";       
        cout << "Language: " << "\n";
        cout << Lang << "\n";
        break;
        }
        case 2:
        {
        string newsub;
        cout << "Enter New Subject Entry:- \n";
        cin >> newsub;
        double newmrk;
        cout << "Enter New Subject Marks:- \n";
        cin >> newmrk;
        cout << "Updated Student Report \n";
        cout << "~~~~~~~~~~~~~~~~~~~~~~ \n\n";
        cout << " ************************ STUDENT REPORT ************************************** \n\n";
        cout << "NAME OF STUDENT - ";
        cout << Nameofstd << "\n";
        cout << "ROLL NUMBER - ";
        cout << Rollno << "\n";
        cout << "AGE - ";
        cout << age << "\n";
        cout << "CLASS - ";
        cout << Class << "\n";
        cout << "TOTAL MARKS OBTAINED IN - \n";
        cout << "Physics: " << "\n";
        cout << Phy << "\n";
        cout << "Chemistry: " << "\n";
        cout << Chem << "\n";
        cout << "Biology: " << "\n";
        cout << Bio << "\n";
        cout << "Mathematics: " << "\n";
        cout << Mts << "\n";       
        cout << "Language: " << "\n";
        cout << Lang << "\n";
        cout << newsub << "\n";
        cout << newmrk << "\n";
        
        break;
        }
        case 3:
        {
        cout << "Enter Subject Entry to be deleted:- ";
        string delsub;
        cin >> delsub;
        
        if ("Physics"==delsub) {
        cout << "\n\n";
        cout << "Updated Student Report \n";
        cout << "~~~~~~~~~~~~~~~~~~~~~~ \n\n";
        cout << " ************************ STUDENT REPORT ************************************** \n\n";
        cout << "NAME OF STUDENT - ";
        cout << Nameofstd << "\n";
        cout << "ROLL NUMBER - ";
        cout << Rollno << "\n";
        cout << "AGE - ";
        cout << age << "\n";
        cout << "CLASS - ";
        cout << Class << "\n";
        cout << "TOTAL MARKS OBTAINED IN - \n";
        cout << "Chemistry: " << "\n";
        cout << Chem << "\n";
        cout << "Biology: " << "\n";
        cout << Bio << "\n";
        cout << "Mathematics: " << "\n";
        cout << Mts << "\n";       
        cout << "Language: " << "\n";
        cout << Lang << "\n";
        }
        else if ("Chemistry"==delsub) {
        cout << "\n\n";
        cout << "Updated Student Report \n";
        cout << "~~~~~~~~~~~~~~~~~~~~~~ \n\n";
        cout << " ************************ STUDENT REPORT ************************************** \n\n";
        cout << "NAME OF STUDENT - ";
        cout << Nameofstd << "\n";
        cout << "ROLL NUMBER - ";
        cout << Rollno << "\n";
        cout << "AGE - ";
        cout << age << "\n";
        cout << "CLASS - ";
        cout << Class << "\n";
        cout << "TOTAL MARKS OBTAINED IN - \n";
        cout << "Physics: " << "\n";
        cout << Phy << "\n";
        cout << "Biology: " << "\n";
        cout << Bio << "\n";
        cout << "Mathematics: " << "\n";
        cout << Mts << "\n";       
        cout << "Language: " << "\n";
        cout << Lang << "\n";
        }
        else if ("Biology"==delsub) {
        cout << "\n\n"
        cout << "Updated Student Report \n";
        cout << "~~~~~~~~~~~~~~~~~~~~~~ \n\n";
        cout << " ************************ STUDENT REPORT ************************************** \n\n";
        cout << "NAME OF STUDENT - ";
        cout << Nameofstd << "\n";
        cout << "ROLL NUMBER - ";
        cout << Rollno << "\n";
        cout << "AGE - ";
        cout << age << "\n";
        cout << "CLASS - ";
        cout << Class << "\n";
        cout << "TOTAL MARKS OBTAINED IN - \n";
        cout << "Physics: " << "\n";
        cout << Phy << "\n";
        cout << "Chemistry: " << "\n";
        cout << Chem << "\n";
        cout << "Mathematics: " << "\n";
        cout << Mts << "\n";       
        cout << "Language: " << "\n";
        cout << Lang << "\n";
        }
        else if ("Mathematics"==delsub) {
        cout << "\n\n"
        cout << "Updated Student Report \n";
        cout << "~~~~~~~~~~~~~~~~~~~~~~ \n\n";
        cout << " ************************ STUDENT REPORT ************************************** \n\n";
        cout << "NAME OF STUDENT - ";
        cout << Nameofstd << "\n";
        cout << "ROLL NUMBER - ";
        cout << Rollno << "\n";
        cout << "AGE - ";
        cout << age << "\n";
        cout << "CLASS - ";
        cout << Class << "\n";
        cout << "TOTAL MARKS OBTAINED IN - \n";
        cout << "Physics: " << "\n";
        cout << Phy << "\n";
        cout << "Chemistry: " << "\n";
        cout << Chem << "\n";
        cout << "Biology: " << "\n";
        cout << Bio << "\n";
        cout << "Language: " << "\n";
        cout << Lang << "\n";
        }
        else if ("Language"==delsub) {
        cout << "\n\n"
        cout << "Updated Student Report \n";
        cout << "~~~~~~~~~~~~~~~~~~~~~~ \n\n";
        cout << " ************************ STUDENT REPORT ************************************** \n\n";
        cout << "NAME OF STUDENT - ";
        cout << Nameofstd << "\n";
        cout << "ROLL NUMBER - ";
        cout << Rollno << "\n";
        cout << "AGE - ";
        cout << age << "\n";
        cout << "CLASS - ";
        cout << Class << "\n";
        cout << "TOTAL MARKS OBTAINED IN - \n";
        cout << "Physics: " << "\n";
        cout << Phy << "\n";
        cout << "Chemistry: " << "\n";
        cout << Chem << "\n";
        cout << "Biology: " << "\n";
        cout << Bio << "\n";
        cout << "Mathematics: " << "\n";
        cout << Mts << "\n";       
        }
        }
        
        break;
       
        case 4:
        {
        cout << "Enter Subject to be Modified:- ";
        string modsub;
        cin >> modsub;
        cout << "Enter New Marks:- ";
        float modnum;
        cin >> modnum;
        if ("Physics"==modsub) {
        cout << "\n\n"
        cout << "Updated Student Report \n";
        cout << "~~~~~~~~~~~~~~~~~~~~~~ \n\n";
        cout << " ************************ STUDENT REPORT ************************************** \n\n";
        cout << "NAME OF STUDENT - ";
        cout << Nameofstd << "\n";
        cout << "ROLL NUMBER - ";
        cout << Rollno << "\n";
        cout << "AGE - ";
        cout << age << "\n";
        cout << "CLASS - ";
        cout << Class << "\n";
        cout << "TOTAL MARKS OBTAINED IN - \n";
        cout << "Physics: " << "\n";
        cout << modnum << "\n";
        cout << "Chemistry: " << "\n";
        cout << Chem << "\n";
        cout << "Biology: " << "\n";
        cout << Bio << "\n";
        cout << "Mathematics: " << "\n";
        cout << Mts << "\n";       
        cout << "Language: " << "\n";
        cout << Lang << "\n";
        }
        else if ("Chemistry"==modsub) {
        cout << "\n\n"
        cout << "Updated Student Report \n";
        cout << "~~~~~~~~~~~~~~~~~~~~~~ \n\n";
        cout << " ************************ STUDENT REPORT ************************************** \n\n";
        cout << "NAME OF STUDENT - ";
        cout << Nameofstd << "\n";
        cout << "ROLL NUMBER - ";
        cout << Rollno << "\n";
        cout << "AGE - ";
        cout << age << "\n";
        cout << "CLASS - ";
        cout << Class << "\n";
        cout << "TOTAL MARKS OBTAINED IN - \n";
        cout << "Physics: " << "\n";
        cout << Phy << "\n";
        cout << "Chemistry: " << "\n";
        cout << modnum << "\n";
        cout << "Biology: " << "\n";
        cout << Bio << "\n";
        cout << "Mathematics: " << "\n";
        cout << Mts << "\n";       
        cout << "Language: " << "\n";
        cout << Lang << "\n";
        }
        else if ("Biology"==modsub) {
        cout << "\n\n"
        cout << "Updated Student Report \n";
        cout << "~~~~~~~~~~~~~~~~~~~~~~ \n\n";
        cout << " ************************ STUDENT REPORT ************************************** \n\n";
        cout << "NAME OF STUDENT - ";
        cout << Nameofstd << "\n";
        cout << "ROLL NUMBER - ";
        cout << Rollno << "\n";
        cout << "AGE - ";
        cout << age << "\n";
        cout << "CLASS - ";
        cout << Class << "\n";
        cout << "TOTAL MARKS OBTAINED IN - \n";
        cout << "Physics: " << "\n";
        cout << Phy << "\n";
        cout << "Chemistry: " << "\n";
        cout << Chem << "\n";
        cout << "Biology: " << "\n";
        cout << modnum << "\n";
        cout << "Mathematics: " << "\n";
        cout << Mts << "\n";       
        cout << "Language: " << "\n";
        cout << Lang << "\n";
        }
        else if ("Mathematics"==modsub) {
        cout << "\n\n"
        cout << "Updated Student Report \n";
        cout << "~~~~~~~~~~~~~~~~~~~~~~ \n\n";
        cout << " ************************ STUDENT REPORT ************************************** \n\n";
        cout << "NAME OF STUDENT - ";
        cout << Nameofstd << "\n";
        cout << "ROLL NUMBER - ";
        cout << Rollno << "\n";
        cout << "AGE - ";
        cout << age << "\n";
        cout << "CLASS - ";
        cout << Class << "\n";
        cout << "TOTAL MARKS OBTAINED IN - \n";
        cout << "Physics: " << "\n";
        cout << Phy << "\n";
        cout << "Chemistry: " << "\n";
        cout << Chem << "\n";
        cout << "Biology: " << "\n";
        cout << Bio << "\n";
        cout << "Mathematics: " << "\n";
        cout << modnum << "\n";       
        cout << "Language: " << "\n";
        cout << Lang << "\n";
        }
        else if ("Language"==modsub) {
        cout << "\n\n"
        cout << "Updated Student Report \n";
        cout << "~~~~~~~~~~~~~~~~~~~~~~ \n\n";
        cout << " ************************ STUDENT REPORT ************************************** \n\n";
        cout << "NAME OF STUDENT - ";
        cout << Nameofstd << "\n";
        cout << "ROLL NUMBER - ";
        cout << Rollno << "\n";
        cout << "AGE - ";
        cout << age << "\n";
        cout << "CLASS - ";
        cout << Class << "\n";
        cout << "TOTAL MARKS OBTAINED IN - \n";
        cout << "Physics: " << "\n";
        cout << Phy << "\n";
        cout << "Chemistry: " << "\n";
        cout << Chem << "\n";
        cout << "Biology: " << "\n";
        cout << Bio << "\n";
        cout << "Mathematics: " << "\n";
        cout << Mts << "\n";       
        cout << "Language: " << "\n";
        cout << modnum << "\n";
        }
        break;
        }
        default:
        cout << "Oops, wrong input. Try again.";
    }
        return 0;
    }
