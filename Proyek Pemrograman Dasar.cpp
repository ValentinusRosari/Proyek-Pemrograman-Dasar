#include<iostream>
#include<string>
using namespace std;
class facultyType
{
private:
    string firstname;
    string lastname;
    string department;
    double salary;
    int serviceyears;
public:
    facultyType(){}
    void print(facultyType* faculty,int count);
    void setAll(facultyType faculty[],float percent,int count);
   //setter and getter
};
void facultyType::print(facultyType* faculty,int count)//need help here
{
    int i;
    for(i=0;i<count;i++)
    {
    //want to iterate all facultyType one by one
        facultyType f=faculty[i];//here the problem

        int serviceYear;
        serviceYear =f.getServiceYears();//not getting the exact values
        cout<<"service year "<<serviceYear<<endl;
        cout<<"dfhh"<<endl;
        if(serviceYear>=15) {
            cout<<f.getFirstName()<<"\n"<<f.getLastName()<<"\n"
                <<f.getDepartment();
            cout<<f.getSalary()<<"\n"<<f.getServiceYears()<<endl;
            cout<<"-------------------------------------------------\n";
        }
    }
}

int main()
{
    facultyType Faculty[250];
    facultyType f;
    int count=0;
    int status=0;
    string fname,lastname,depart;
    double sal;
    int serviceyears;
    while(status!=4)
    {
        cout<<"1. Add new Faculty member"<<endl;
        cout<<"2. increase all faculty member salary"<<endl;
        cout<<"3. Print Employee"<<endl;
        cout<<"4. Exit"<<endl;

        cin>>status;

        switch(status)
        {
            case 1:
            {
              cout<<"Enter first name : ";
                    cin>>fname;
                   //..other code for setter and getter values
                   Faculty[count]=newFaculty;
                   count++;
                    break;
                }

            case 3:{
                f.print(Faculty,count);//calling print method
                break;
            }
             case 4: break;
        }

    }

    return 0;
}