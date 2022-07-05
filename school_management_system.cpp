#include <iostream>
#include <string>
#include <stdlib.h>
#include <fstream>

using namespace std;

class school_management_sysyem
{
protected:
    int member_code = 1256;
    int code, press;
    string str;

public:
    school_management_sysyem()
    {
    start:
        cout << "please enter a school code" << endl;
        cin >> code;
        if (code == member_code)
        {
            cout << "Welcome to xyz international school" << endl;
        }
        else
        {
            cout << "you entered a wrong option. Please try again" << endl;
            goto start;
        }
    }

    void display_school_details_options()
    {
        cout << "what can i help you with :-" << endl;
        cout << "\t1. school description" << endl;
        cout << "\t2. school infrastructure" << endl;
        cout << "\t3. school faculty" << endl;
        cout << "\t4. school achievements" << endl;
        cout << "\t5. transport facilities" << endl;
        cout << "\t0. for exit." << endl;
    }
    void display_school_details()
    {
        ifstream in1("school_description.txt");
        ifstream in2("school_infrastructure.txt");
        ifstream in3("school_faculty.txt");
        ifstream in4("school_achievements.txt");
        ifstream in5("transport_facilities.txt");

    start1:

        cin >> press;
        switch (press)
        {
        case 1:
            getline(in1, str);
            cout << str << endl;
            break;
        case 2:
            getline(in2, str);
            cout << str << endl;
            break;
        case 3:
            getline(in3, str);
            cout << str << endl;
            break;
        case 4:
            getline(in4, str);
            cout << str << endl;
            break;
        case 5:
            getline(in5, str);
            cout << str << endl;
            break;
        case 0:
            exit(0);

        default:
            cout << "you entered a wrong choice. Please try again" << endl;
            display_school_details_options();
            goto start1;
            // display_school_details_options();
        }
    }
};

class parent_login
{
public:
    string cllg_alloted_id = "XYZ@SCHOOL";
    int cllg_alloted_password = 12345;

protected:
    string id;
    int password;

public:
    parent_login()
    {
        cout << "\t1.If you want to check our children record please login our student portal" << endl;
        cout << "\t2.To exit press 0" << endl;
    }

    void entering_details()
    {
    start4:

        int chos;
        cin >> chos;
        switch (chos)
        {
        case 1:
            cout << "please enter student ID number" << endl;
            cin >> id;
            cout << "please enter password" << endl;
            cin >> password;
            break;
        case 2:
            exit(0);
        default:
            cout << "you entered a wrong choice. Please try again" << endl;
            goto start4;
        }
    }

    void check_details()
    {
        if (id == cllg_alloted_id && password == cllg_alloted_password)
        {
            cout << "Welcome to student portal" << endl;
        }
        else
        {
            cout << "you entered wrong details. please try again" << endl;
            entering_details();
            check_details();
        }
    }
};

class student_selection : public parent_login
{
    int classs, insert_ID;
    string strp;

public:
    void class_selection()
    {
        cout << "select class" << endl;
        cout << "\t class1" << endl;
        cout << "\t class2" << endl;
        cout << "\t class3" << endl;
    }
    void class_entering()
    {
        cin >> classs;
        switch (classs)
        {
        case 1:
            cout << "welcome to class 1" << endl;
            cout << "enter a student ID" << endl;
            cin >> insert_ID;
            if (insert_ID == 412)
            {
                cout << "student 1" << endl;
                ifstream in("class_1_student1.txt");
                getline(in, strp);
                cout << strp << endl;
                getline(in, strp);
                cout << strp << endl;
                getline(in, strp);
                cout << strp << endl;
                getline(in, strp);
                cout << strp << endl;
                getline(in, strp);
                cout << strp << endl;
                getline(in, strp);
                cout << strp << endl;
            }
            else if (insert_ID == 413)
            {
                cout << "student 2" << endl;
                ifstream in("class_1_student2.txt");
                getline(in, strp);
                cout << strp << endl;
                getline(in, strp);
                cout << strp << endl;
                getline(in, strp);
                cout << strp << endl;
                getline(in, strp);
                cout << strp << endl;
                getline(in, strp);
                cout << strp << endl;
                getline(in, strp);
                cout << strp << endl;
            }
            else if (insert_ID == 414)
            {
                cout << "student 3" << endl;
                ifstream in("class_1_student3.txt");
                getline(in, strp);
                cout << strp << endl;
                getline(in, strp);
                cout << strp << endl;
                getline(in, strp);
                cout << strp << endl;
                getline(in, strp);
                cout << strp << endl;
                getline(in, strp);
                cout << strp << endl;
                getline(in, strp);
                cout << strp << endl;
            }
            else
            {
                cout << "the id you entered does not belongs to class 1. please check again" << endl;
                class_selection();
                class_entering();
            }

            break;
        case 2:
            cout << "welcome to class 2" << endl;
            cout << "enter a student ID" << endl;
            cin >> insert_ID;
            if (insert_ID == 001)
            {
                cout << "student 1" << endl;
                ifstream in("class_2_student1.txt");
                getline(in, strp);
                cout << strp << endl;
                getline(in, strp);
                cout << strp << endl;
                getline(in, strp);
                cout << strp << endl;
                getline(in, strp);
                cout << strp << endl;
                getline(in, strp);
                cout << strp << endl;
                getline(in, strp);
                cout << strp << endl;
            }
            else if (insert_ID == 002)
            {
                cout << "student 2" << endl;
                ifstream in("class_2_student2.txt");
                getline(in, strp);
                cout << strp << endl;
                getline(in, strp);
                cout << strp << endl;
                getline(in, strp);
                cout << strp << endl;
                getline(in, strp);
                cout << strp << endl;
                getline(in, strp);
                cout << strp << endl;
                getline(in, strp);
                cout << strp << endl;
            }
            else if (insert_ID == 003)
            {
                cout << "student 3" << endl;
                ifstream in("class_2_student3.txt");
                getline(in, strp);
                cout << strp << endl;
                getline(in, strp);
                cout << strp << endl;
                getline(in, strp);
                cout << strp << endl;
                getline(in, strp);
                cout << strp << endl;
                getline(in, strp);
                cout << strp << endl;
                getline(in, strp);
                cout << strp << endl;
            }
            else
            {
                cout << "the id you entered does not belongs to class 2. please check again" << endl;
                class_selection();
                class_entering();
            }
            break;
        case 3:
            cout << "welcome to class 3" << endl;
            cout << "enter a student ID" << endl;
            cin >> insert_ID;
            if (insert_ID == 357)
            {
                cout << "student 1" << endl;
                ifstream in("class_3_student1.txt");
                getline(in, strp);
                cout << strp << endl;
                getline(in, strp);
                cout << strp << endl;
                getline(in, strp);
                cout << strp << endl;
                getline(in, strp);
                cout << strp << endl;
                getline(in, strp);
                cout << strp << endl;
                getline(in, strp);
                cout << strp << endl;
            }
            else if (insert_ID == 358)
            {
                cout << "student 2" << endl;
                ifstream in("class_3_student2.txt");
                getline(in, strp);
                cout << strp << endl;
                getline(in, strp);
                cout << strp << endl;
                getline(in, strp);
                cout << strp << endl;
                getline(in, strp);
                cout << strp << endl;
                getline(in, strp);
                cout << strp << endl;
                getline(in, strp);
                cout << strp << endl;
            }
            else if (insert_ID == 359)
            {
                cout << "student 3" << endl;
                ifstream in("class_3_student3.txt");
                getline(in, strp);
                cout << strp << endl;
                getline(in, strp);
                cout << strp << endl;
                getline(in, strp);
                cout << strp << endl;
                getline(in, strp);
                cout << strp << endl;
                getline(in, strp);
                cout << strp << endl;
                getline(in, strp);
                cout << strp << endl;
            }
            else
            {
                cout << "the id you entered does not belongs to class 3. please check again" << endl;
                class_selection();
                class_entering();
            }
            break;
        case 0:
            exit(0);
        default:
            cout << "you entered a wrong choice." << endl;
            class_selection();
            class_entering();
            break;
        }
    }
};

int main()
{
    school_management_sysyem user_1;
    user_1.display_school_details_options();
    user_1.display_school_details();

    parent_login par_1;
    par_1.entering_details();
    par_1.check_details();

    student_selection st1;
    st1.class_selection();
    st1.class_entering();

    return 0;
}