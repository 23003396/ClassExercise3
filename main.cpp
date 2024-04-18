#include <iostream>

using namespace std;

int main()
{
    cout<< "Welcome to finding your partner application"<< endl;
    string gender;
    char Type;


    cout<<"Please enter the gender of the partner you want(Female or Male)."<<endl;
    cin>>gender;
    cout<<"Please enter a letter A-D to choose the kind of partner you want"<<endl;
    cin>>Type;


    if (gender == "Female" || gender == "Male"){
    if (Type == 'A'){
         cout<<"the can cook"<<endl;
         cout<<"the  person has a great sense of humor!"<<endl;
         cout<<"the person is kind and caring "<<endl;
         cout<<"the person has a great personality and a job"<<endl;
         cout<<"She's an independent women"<< endl;}
    else if (Type == 'B'){
         cout<<"the person an outgoing person"<<endl;
         cout<<"the person likes eating  takeaways"<<endl;
         cout<<"the person drinks alcohol"<<endl;
         cout<<"the person doesn't want babies"<< endl;}
    else if (Type == 'C'){
         cout<<"the person goes to church"<<endl;
         cout<<"the person likes helping people"<<endl;
         cout<<"the person likes children"<<endl;
         cout<<"the person can provide for others"<<endl;
         cout<<"the person is a wonderful listener"<< endl;}
    else if (Type == 'D'){
         cout<<"the person has a great sense of fashion"<<endl;
         cout<<"the person smells nice"<<endl;
         cout<<"the person favourite color if black"<< endl;}
    else{
         cout<<"Invalid choice"<< endl;}



    }



    return 0;
}
