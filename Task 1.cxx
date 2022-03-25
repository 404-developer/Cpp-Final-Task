#include<iostream>
#include<string>
using namespace std;

string username,password,cpassword,email,gender,techskill;

string username_forgot,email_forgot;

string new_password;

int genderoption;

const int  phonelength=10;

string phone;

void hint()
{
    cout<<"1) Registeration"<<endl;
    cout<<"2) Login"<<endl;
    cout<<"3) Forgot Password"<<endl;
    cout<<"4) Dashboard"<<endl;
    cout<<"5) Exit"<<endl;
}

    int registration()
    {
        
        cout<<"Welcome to Registration"<<endl;
        cout<<endl;
        inputusername:
        cout<<"Enter your username"<<endl;
        cin>>username;
        if(username.size() > 15 )
        {
            cout<<endl;
            cout<<"Username Must Be Under 15 Character of Length"<<endl;
            cout<<endl;
            goto inputusername;
        }
       
        
        inputpassword:
        cout<<"Enter your Password"<<endl;
        cin>>password;
        
        // For password length
        if(password.size()<=8)
        {
            cout<<endl;
            cout<<"Password must be 8 character length"<<endl;
            cout<<endl;
            goto inputpassword;
            
        }
              // For special characters  

    if (!((password.find("@") != std::string::npos) || 

          (password.find("#") != std::string::npos) || 

          (password.find("!") != std::string::npos) || 

          (password.find("~") != std::string::npos) || 

          (password.find("$") != std::string::npos) || 

          (password.find("%") != std::string::npos) || 

          (password.find("^") != std::string::npos) || 

          (password.find("&") != std::string::npos) || 

          (password.find("*") != std::string::npos) || 

          (password.find("(") != std::string::npos) || 

          (password.find(")") != std::string::npos) || 

          (password.find("-") != std::string::npos) || 

            (password.find("+") != std::string::npos) || 

          (password.find("/") != std::string::npos) || 

          (password.find(":") != std::string::npos) || 

          (password.find(".") != std::string::npos) || 

          (password.find(",") != std::string::npos) || 

          (password.find("<") != std::string::npos) || 

          (password.find(">") != std::string::npos) || 

          (password.find("?") != std::string::npos) || 

          (password.find("|") != std::string::npos)))
          { 
           cout<<"Password doesn't contains special Characters"<<endl;
           goto inputpassword;
          }
          
    if (true) 

    {  

        int count = 0;  

  

        // Check digits from 0 to 9  

        for(int i = 0; i <= 9; i++) 

        {  

            // To convert int to string  

            string str1 = to_string(i);  

  

            if (password.find(str1) !=  

                std::string::npos)  
               
                count = 1;               
        
        }  
        
        

        if (count == 0)  
             
            return false;
            
            

    } 
    if (true) 

    {  

        int count = 0;  

  

        // Checking capital letters  

        for(int i = 65; i <= 90; i++)  

        {  

              

            // Type casting  

            char c = (char)i; 

            string str1(1, c); 

              

            if (password.find(str1) != 

                std::string::npos)  

                count = 1;  

        }  

        if (count == 0)  
              
             return false;
             

    }  

  

    if (true) 

    {  

        int count = 0;  

  
        // Checking small letters  

        for(int i = 90; i <= 122; i++) 

        {  

              
            // Type casting  

            char c = (char)i;  

            string str1(1, c);  

  

            if (password.find(str1) !=  

                std::string::npos) 

                count = 1; 

        }  

        if (count == 0)  
{
            return false;
           
             
}
    } 
    
        inputcpassword:
        cout<<"Enter Your Confirm Password"<<endl;
        cin>>cpassword;
        if(password==cpassword)
        {
        }
        else
        {
            cout<<"Confirm Password Must be same"<<endl;
            goto inputcpassword;
        }
        
        inputemail:
        cout<<"Enter your Email"<<endl;
        cin>>email;
        
         if (!((email.find("@") != std::string::npos) && (email.find(".") != std::string::npos)))
         {
         cout<<"Invalid gmail"<<endl;
         goto inputemail;
         }
         
         inputphone:
        cout<<"Enter your Phone Number"<<endl;
        cin>>phone;
        
        if(phone.length()==phonelength)
        {
        }
        else
        {
            cout<<"Please Enter 10 digit Phone Number"<<endl;
            goto inputphone;
        }
        
        inputgender:
        cout<<"Choose your Gender"<<endl;
        cout<<"1) Male"<<endl;
        cout<<"2) Female"<<endl;
        cin>>genderoption;
        if(genderoption==1)
        {
            gender = "Male";
        }
        else if(genderoption==2)
        {
            gender = "Female";
        }
        else
        {
            cout<<"Invalid Gender"<<endl;
            goto inputgender;
        }
        cout<<"Enter your Technical Skills"<<endl;
        cin>>techskill;
        
        return 0;
      
    }
    
    
    void login()
    {
        inputlogin:
        string email_login,password_login;
        cout<<"Welcome to Login"<<endl;
        cout<<endl;
        cout<<"Enter your Email"<<endl;
        cin>>email_login;
        cout<<"Enter your Password"<<endl;
        cin>>password_login;
        
        if(email==email_login && password==password_login)
        {
                cout<<endl;
                cout<<" Login Succesfully"<<endl;
                cout<<endl;
        }
        else
        {
            cout<<"Invalid username or Password"<<endl;
            goto inputlogin;
        }
        
    }
    
    
    void forgot_password()
    {
     
    inputforgotpassword:
    cout<<"Welcome to Forgot Password"<<endl;
    cout<<endl;
    cout<<"Enter Your Username"<<endl;
    cin>>username_forgot;
    cout<<"Enter Your Email"<<endl;
    cin>>email_forgot;
    if(username==username_forgot && email==email_forgot)
    {
        cout<<endl;
        cout<<"Enter a New Password"<<endl;
        cin>>new_password;
        
        password = new_password;
        cout<<"Password Changed Succesfully"<<endl;
    }
    else
    {
        cout<<"Invalid username or email"<<endl;
        goto inputforgotpassword;
    }
    
    
    }
    
    
    void dashboard()
    {
        cout<<"Welcome to Dashboard"<<endl;
        cout<<endl;
        cout<<"Your Details"<<endl;
        cout<<"Username: "<<username<<endl;
        cout<<"Password: "<<password<<endl;
        cout<<"Email: "<<email<<endl;
        cout<<"Phone Number: "<<phone<<endl;
        cout<<"Gender: "<<gender<<endl;
        cout<<"Technical Skills "<<techskill<<endl;
        
    }
    
    
    void exited()
    {
        cout<<"Exited Successfully"<<endl;
        exit ( 5 );
    }
  int main()
  {
        repeat:
        hint();
        int option;
        cout<<endl;
        cout<<"Enter Your Option"<<endl;
        cin>>option;
        cout<<endl;
        if(option==1)
        {
            registration();
            goto repeat;
        }
        else if(option==2)
        {
            login();
            goto repeat;
        }
        else if(option==3)
        {
            forgot_password();
            goto repeat;
        }
        else if(option==4)
        {
            dashboard();
            goto repeat;
        }
        else if(option==5)
        {
            exited();
            goto repeat;
        }
    }