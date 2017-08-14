#include <iostream>
#include <fstream>
#include <string>
#include <stdlib.h>
using namespace std;
void read(string s)
{
    s.insert(s.begin(),'\"'); s+='\"';
    ofstream myfile;
    myfile.open("read.sh");
    myfile<<"espeak "<<s<<"\n";
    myfile.close();
    system("chmod +x read.sh");
    system("./read.sh");
}
int main()
{
    cout<<"Hello user! Please enter your name!\n";
    read("Hello user! Please enter your name!");
    string name="";
    while(!name.length())
        getline(cin,name);
    cout<<"Hello "<<name<<", this program finds the sum of two integers entered by you\n";
    read("Hello "+name+", this program finds the sum of two integers entered by you");
    cout<<"Please enter the first integer\n";
    read("Please enter the first integer");
    int x,y;
    cin>>x;
    cout<<"Please enter the second integer\n";
    read("Please enter the second integer");
    cin>>y;
    int z=x+y;
    cout<<"The sum of "<<x<<" and "<<y<<" is "<<z<<"\n";
    read("The sum of "+to_string(x)+" and "+to_string(y)+" is "+to_string(z));
    cout<<"This program is very simple to write only, mind you only in linux!!! All hail Linux Bash terminal! This is something far beyond the domain of Windows users\n";
    read("This program is very simple to write only, mind you only in linux!!! All hail Linux Bash terminal! This is something far beyond the domain of Windows users");
}
