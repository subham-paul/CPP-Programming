#include<iostream>
#include <string>
using namespace std;
int main(){

    string name = "SUBHAM";
    
    cout<<"the name is " << name <<endl;
    name[0] = 'N'; // FOR MODIFY THE CHARACTER
    cout <<"The address is "<< name.find("AM", 0) << endl; //FOR CHECK THE ADDRESS
    cout<<"the length of name is " << name.length() <<endl;
    cout<<"The 1st character is "<< name[0] << endl;
    cout<<"the substring name is " << name.substr(0,4) <<endl; //SEARCH TWO PARTS OF STRINGS
    cout<<"the substring name is " << name.substr(2,2) <<endl;

    return 0;
}