#include<bits/stdc++.h>
using namespace std;
class student 
{
 private:
     int roll_number;
     string name;
     int phymarks,chemmarks,mathsmarks;
 public:
//  student();//non parameteroized
//  student(string name ,int roll,int phymarks,int chemmarks,int mathsmarks);//paramteroized constructor
 void setRoll(int roll);
 void setPHY(int PHY);
 void setCHEM(int CHEM);
 void setMaths(int M);
 void setname(string n);
 int getRoll(){return roll_number;}
 int getPHY(){return phymarks;}
 int getCHEM(){return chemmarks;}
 int getMaths(){return mathsmarks;}
 string getname(){return name;}
 int totalmarks();
 char grade();
 

};
int main()
{
 student stu1;//object
 string name_of_stu;
 cout<<"enter the student name\n";
 getline(cin,name_of_stu);
 stu1.setname(name_of_stu);
 int uid;
 cout<<"enter the roll number of the student\n";
 cin>>uid;
 stu1.setRoll(uid);
 int physics;
 cout<<"enter the marks of the physics\n";
 cin>>physics;
 stu1.setPHY(physics);
 int chemistry;
 cout<<"enter the marks of chemistry\n";
 cin>>chemistry;
 stu1.setCHEM(chemistry);
 int maths;
 cout<<"enter the marks of the maths\n";
 cin>>maths;
 stu1.setMaths(maths);
 cout<<"totalmarks: "<<stu1.totalmarks()<<endl;
 cout<<"grade of the student: "<<stu1.grade()<<endl;
 return 0;
}

void student ::setname(string n)
{
 name=n;
}
void student::setRoll(int roll)
{
    roll_number=roll;
}
void student::setPHY(int PHY)
{
    phymarks=PHY;
}
void student::setCHEM(int CHEM)
{
    chemmarks=CHEM;
}
void student::setMaths(int M)
{
    mathsmarks=M;
}
int student::totalmarks()
{
    int total=phymarks+chemmarks+mathsmarks;
    return total;
}
char student::grade()
{
    float average=totalmarks()/float(3);
 if(average > 60)
 return 'A';
 else if(average>=40 && average<60)
 return 'B';
 else
 return 'C';
}