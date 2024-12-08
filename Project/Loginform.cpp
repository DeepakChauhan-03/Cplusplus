//Student login and registration form
#include<iostream>
#include<fstream>
using namespace std;
class temp{
    string username,Email,password;
    string searchname,searchpass,searchemail;
    fstream file;
    public:
    void login();
    void signup();
    void forgot();
}obj;

int main(){
    char choice;
    cout<<"\n1- Login"<<endl;
    cout<<"2- Sign-up"<<endl;
    cout<<"3- Forgot Password"<<endl;
    cout<<"4- Exit"<<endl;
    cout<<"Enter Your Choice : ";
    cin>>choice;
    switch(choice){
        case '1': obj.login();
        break;
            
        case '2': obj.signup();
        break;

        case '3': obj.forgot();
        break;

        case '4': return 0;
        break;

        default :
         cout<<"Invalid Selection";
    }
    void temp::signup(){
        cout<<"Enter Your Username : ";
        getline(cin,username);
        cout<<"Enter Your Email : ";
        getline(cin,Email);
        cout<<"Enter your Password : ";
        getline(cin,password);

        file.open("loginData.txt", ios::out | ios::app);
        file<<username<<"*"<<Email<<"*"<<password<<endl;
        file.close();
    }
    void temp :: login(){
        // string serachname,searchpass;
        cout<<"---LOGIN---"<<endl;
        cout<<<"Enter your username : ";
        getline(cin,serachname);
        cout<<"Enter Your Password :: ";
        getline(cin,serachpass);

        file.open("loginData.txt",ios::in);
        getline(file,username,"*");
        getline(file,Email,"*");
        getline(file,password,"\n");
        while(!file.eof()){
            if(password==searchpass){
                cout<<"\nAccount Login Succesfully";
                cout<<"\nUsername : "<<username<<endl;
                cout<<"\nEmail : "<<Email<<endl;
            }
            else{
                cout<<"\nAccount Not Login Please Enter Correct Details.";
            }
        }
    }
    void temp::forgot(){
        cout<<"\nEnter Your UserName : ";
        getline(cin,searchname);
        cout<<"\nEnter your Email : ";
        getline(cin,searchemail);

        file.open("LoginData.txt",ios::in);
         getline(file,username,"*");
         getline(file,Email,"*");
         getline(file,password,"\n");
         while(!file.eof()){
          if(username==searchname){
            if(Email==searchemail){
              cout<<"\nAccount found";
              cout<<"\nYour password : "<<password<<endl;
          }  
          else{
            cout<<"Not Found....!";
          } 
          }
          else{
            cout<<"\nNot Found....!";
          }
         
     }
     file.close();
}
return 0;
}
