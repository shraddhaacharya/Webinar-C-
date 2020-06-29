
#include <iostream>

using namespace std;
int i;
int n;
class student
{
    private:
        string name[10];
        int id[10];
        char sec[10];
    public:
        void studentDetails()
        {
            for(i=0;i<n;i++)
            {
                cout<<"Name=";
                cin>>name[i];
                cout<<"ID=";
                cin>>id[i];
                cout<<"Section=";
                 cin>>sec[i];
            }
        }
        void display()
        {
            cout<<"Name\tID\tSection"<<endl;
             for(i=0;i<n;i++)
            {
                cout<<name[i]<<"\t"<<id[i]<<"\t"<<sec[i]<<endl;
            }
        }
};
int main()
{
    student obj;
    cout<<"Enter the number of students"<<endl;
    cin>>n;
    obj.studentDetails();
    obj.display();
    return 0;
}