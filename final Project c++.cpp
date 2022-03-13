//THIS PROGRAM IS FOR CYBER CAFE MANAGEMENT SYSTEM .
//BY: REHAN AKHTAR #210953

#include<iostream>
#include<iomanip>
#include<string>
#include<windows.h>
#include<fstream>


using namespace std;

void menue();           //function to show menue
void user();               //function contain user module
void login();             //function contain login username and password
void header();              //contain main heading
void changepassword();    //to change password.
void login_page();          //show login page .(display username and password)
void show_record();            //show record of computer
void search_record();      //for search record.
void update_record();     //function to update the record
void registration();
void mainmenue();

 string    username ,password,admin, change,
           str1="admin",                          //username of 1st user
           str2="admin",                      //password of 1st user
           str3="user",                           //username of 2nd user
           str4="user",                       //password of 2nd user
           update="new",
           upd="update",
           again="again",
           rehan;

string comp_data[]={"HAIER","DELL","HP","LENOVO","ACER"};    //arrays to show computers name
string comp_loc[]={"A1","B1","C1","D1","E1"};                //arrays use to show comp location
string comp_number[]={"789","906","985","456","843"};           //array use to define comp location

    int bill=0,charges=5,input,serial_number,search,comp_num;
    int temp=1;


int main(){
    system("color 80");
   header();     //It will show the title.
   mainmenue();
   //registration();
  // login_page();  //it will show login page (username & password)

 return 0;

}

void menue(){

     cout<<endl<<"SELECT THE OPTION BELOW FROM 1 TO 5 \n"<<endl;
     cout<<"  1.SHOW COMPUTERS"<<endl;             //show record of computers
     cout<<"  2.UPDATE RECORDS"<<endl;             //update record of compuuter
     cout<<"  3.SEARCH RECORDS"<<endl;              //search record of computers
     cout<<"  4.RETURN"<<endl;                     //Return to login page
     cout<<"  5.EXIT"<<endl;                       //exit the program.
     cin>>input;
switch(input){

     case 1:
    {
        cout<<"The Records Of Computer Is "<<endl;
       show_record();                              //function to show record .
         temp=0;


    }
    break;
     case 2:
    {
        cout<<"Update records"<<endl;
        update_record();

    }
    break;
    case 3:
    {
        cout<<"Search Record"<<endl;
            search_record();                  //fuction to ssearch the record.
        temp=0;
    }
    break;

   case 4:
    {
        cout<<endl<<"RETURN TO LOGIN PAGE "<<endl;
        login_page();                                    //fuction show login page
        temp=0;
    }
    break;
    case 5:
    {
        cout<<"PRESS 'ENTER' KEY TO EXIT THE PROGRAM"<<endl;
        return;
        temp=0;           //to exit the program
    }


}
 if(temp!=0) {
    menue();                      //show menu again if needed according to logic.
 } }
void user(){


int time;

     cout<<endl<<"\t\t CHARGES DETAILS"<<endl;
     cout<<endl<<"   FOR 01 MIN CHARGES ARE  5 RS."<<endl;
     cout<<endl<<"ENTER THE TIME YOU WANT TO USE IN MINUTES  : ";
     cin>>time;
     cout<<endl<<"YOU CAN USE COMPUTER NUMBER 1 AT LOCATION A1"<<endl;
    cout<<endl<<"\t \t YOUR BILL IS "<<endl;
     bill=time*charges;
     cout<<"_____________________________________________________"<<endl;
     cout<<" Charges per minute |   TIME (min)  |   BILL (Rs.)   | "<<endl;
     cout<<"      "<<charges<<"             |     "         <<time       <<"        |     " <<bill <<"        |    " <<endl;
     cout<<"______________________________________________________"<<endl;
     cout<<endl<<"  PLEASE PAY THE BILL AT COUNTER\n "<<endl;
     cout<<"******* THANK YOU FOR COMING******* "<<endl;



}
void login(){



 cout<<endl<<"\t\t\t\t\t\t\t\t LOGIN PAGE \n\n"<<endl;
 cout<<"\t \t\t\t\t\t ENTER USERNAME & PASSWORD BELOW \n"<<endl;
 cout<<" \t \t\t\t\t\tUSERNAME : ";
 cin>>username;
 cout<<" \t\t\t\t\t\tPASSWORD : ";
 cin>>password;

 if(username==str1 && password==str2)
 {
     menue();

 }
 else if(username==str3 && password==str4)
 {
 user();
 }
      else
 {
     cout<<" ALERT!"<<endl;
     cout<<endl<<"        YOU ENTER INVALID USERNAME & PASSWORD   "<<endl;
     changepassword();

  }


}
void header(){



    cout<<"                                ###  #      # ###   ###### ####              ###      ###    ###### ######  "<<endl;
    cout<<"                               #   #  #    #  #  #  #      #   #            #   #    #   #   #      #       "<<endl;
    cout<<"                              #         #     ####  #####  ###             #        #######  ####   #####   "<<endl;
    cout<<"                              #         #     #   # #      #  #            #        #     #  #      #       "<<endl;
    cout<<"                               #   #    #     #   # #      #   #            #   #   #     #  #      #       "<<endl;
    cout<<"                                ###     #     ####  ###### #    #            ###    #     #  #      ######  "<<endl;
    cout<<"                                                                                                                                                                           "<<endl;
	cout<<"  #         #     #     #      #     #      ####   ##### #         # ##### #      # #######          #####   #   #   #####  ####### ###### #         #                    "<<endl;
    cout<<"  # #     # #    # #    # #    #    # #    #    #  #     # #     # # #     # #    #    #            #     #   # #   #     #    #    #      # #     # #                    "<<endl;
    cout<<"  #  #   #  #   #####   #  #   #   #####   #       ###   #  #   #  # ####  #  #   #    #             ###       #     ###       #    #####  #  #   #  #                   "<<endl;
    cout<<"  #   # #   #  #     #  #   #  #  #     #  #  ###  #     #   # #   # #     #   #  #    #          #     #      #  #     #      #    #      #   # #   #                    "<<endl;
    cout<<"  #    #    # #       # #    # # #       #  #### # ##### #    #    # ##### #    # #    #           #####       #   #####       #    ###### #    #    #                     "<<endl;
	cout<<"________________________________________________________________________________________________________________________________________________________"<<endl;
	cout<<"________________________________________________________________________________________________________________________________________________________\n"<<endl;



}
void changepassword(){
     cout<<endl<<"TYPE 'update' TO CHANGE USERNAME AND PASSWORD OR TYPE 'again' to LOGIN again ";
    cin>>change;
 if(change==upd)
 {
     cout<<"ENTER YOUR NEW USERNAME ";
     cin>>str1;
     cout<<"ENTER YOUR NEW PASSWORD ";
     cin>>str2;

     cout<<"CONGRAGULATIONS YOUR USERNAME & PASSWORD CHANGED SUCESSFULLY "<<endl;
     login();
 }
 else if(change==again)
 {

     login_page();

 }
 else
    {
    cout<<endl<<"YOU ENTER INVALID ENTRY\n"<<endl;
    exit(0);

 }

}
void login_page(){
string rusername,rpassword;

cout<<endl<<"\t\t\t\t\t\t\t\t LOGIN PAGE \n\n"<<endl;
 cout<<"\t \t\t\t\t\t ENTER USERNAME & PASSWORD BELOW \n"<<endl;
 cout<<" \t \t\t\t\t\t USERNAME : ";
 cin>>username;
 cout<<" \t\t\t\t\t\t PASSWORD : ";
 cin>>password;

 ifstream read("credentials.txt");
 read>>rusername>>rpassword;
 if(username==rusername && password==rpassword)
 {
     menue();

 }
 else if(username==str3 && password==str4)
 {
 user();
 }
      else
 {
     cout<<" ALERT!"<<endl;
     cout<<endl<<"        YOU ENTER INVALID USERNAME & PASSWORD   "<<endl;


     changepassword();


  }

}
void show_record(){


            cout<<"\t\t______________________________________________________________"<<endl;
        	cout<<"\t\t|\t| Computer Name | Computer Location | Computer Number | "<<endl;
        	cout<<"\t\t______________________________________________________________"<<endl;
        	cout<<"\t\t| 1\t|\t"<<comp_data[0]    <<"\t| \t"<<comp_loc[0]<<"\t    |    " <<comp_number[0] <<"          |"<<endl;
        	cout<<"\t\t_______________________________________________________________"<<endl;
        	cout<<"\t\t| 2\t|\t"<<comp_data[1]    <<"\t|    \t"<<comp_loc[1]<<"\t    |    "<<comp_number[1] <<"          |"<<endl;
        	cout<<"\t\t_______________________________________________________________"<<endl;
        	cout<<"\t\t| 3\t|\t"<<comp_data[2]<<"\t|    \t"<<comp_loc[2]<<"\t    |    "<<comp_number[2] <<"          |"<<endl;
        	cout<<"\t\t_______________________________________________________________"<<endl;
        	cout<<"\t\t| 4\t|\t"<<comp_data[3]<<"\t|    \t"<<comp_loc[3]<<"\t    |    " <<comp_number[3] <<"          |"<<endl;
        	cout<<"\t\t_______________________________________________________________"<<endl;
        	cout<<"\t\t| 5\t|\t"<<comp_data[4]<<"\t|   \t"<<comp_loc[4]<<"\t    |    " <<comp_number[4] <<"          |"<<endl;
        	cout<<"\t\t_______________________________________________________________"<<endl;
        	cout<<endl<<"\t\t********************THANKYOU FOR USING ************************"<<endl;

}
void search_record(){

cout<<"ENTER THE SERIAL NUMBER OF THE COMPUTER YOU WANT TO SEARCH "<<endl;
        cin>>search;
        switch(search){
    case 1:
        {
              cout<<"\t\t______________________________________________________________"<<endl;
        	cout<<"\t\t|\t| Computer Name | Computer Location | Computer Number | "<<endl;
        	cout<<"\t\t______________________________________________________________"<<endl;
        	cout<<"\t\t| 1\t|\t"<<comp_data[0]    <<"\t| \t"<<comp_loc[0]<<"\t    |    " <<comp_number[0] <<"          |"<<endl;
        	cout<<"\t\t_______________________________________________________________"<<endl;
        	cout<<endl<<"\t\t\t*****************THANKYOU FOR USING ***************"<<endl;

        } break;
    case 2:
        {
             cout<<"\t\t______________________________________________________________"<<endl;
        	cout<<"\t\t|\t| Computer Name | Computer Location | Computer Number | "<<endl;
             cout<<"\t\t______________________________________________________________"<<endl;
       cout<<"\t\t| 2\t|\t"<<comp_data[1]    <<"\t|    \t"<<comp_loc[1]<<"\t    |    "<<comp_number[1] <<"          |"<<endl;
        	cout<<"\t\t_______________________________________________________________"<<endl;
        	cout<<endl<<"\t\t\t***************THANKYOU FOR USING *************"<<endl;

        }
        break;
    case 3:
        {
             cout<<"\t\t______________________________________________________________"<<endl;
        	cout<<"\t\t|\t| Computer Name | Computer Location | Computer Number | "<<endl;
        	cout<<"\t\t_______________________________________________________________"<<endl;
            cout<<"\t\t| 3\t|\t"<<comp_data[2]<<"\t|    \t"<<comp_loc[2]<<"\t    |    "<<comp_number[2] <<"          |"<<endl;
        	cout<<"\t\t_______________________________________________________________"<<endl;
        	cout<<endl<<"\t\t\t***************THANKYOU FOR USING *************"<<endl;

        } break;
    case 4:
        {
             cout<<"\t\t______________________________________________________________"<<endl;
        	cout<<"\t\t|\t| Computer Name | Computer Location | Computer Number | "<<endl;
        	cout<<"\t\t_______________________________________________________________"<<endl;
            cout<<"\t\t| 4\t|\t"<<comp_data[3]<<"\t|    \t"<<comp_loc[3]<<"\t    |    " <<comp_number[3] <<"          |"<<endl;
        	cout<<"\t\t_______________________________________________________________"<<endl;
        	cout<<endl<<"\t\t\t*****************THANKYOU FOR USING ***************"<<endl;

        } break;
    case 5:
        {
             cout<<"\t\t______________________________________________________________"<<endl;
        	cout<<"\t\t|\t| Computer Name | Computer Location | Computer Number | "<<endl;
        	cout<<"\t\t_______________________________________________________________"<<endl;
        	cout<<"\t\t| 5\t|\t"<<comp_data[4]<<"\t|   \t"<<comp_loc[4]<<"\t    |    " <<comp_number[4] <<"          |"<<endl;
        	cout<<"\t\t_______________________________________________________________"<<endl;
        	cout<<endl<<"\t\t\t*****************THANKYOU FOR USING ***************"<<endl;

        }
        break;
        default :
        {
            cout<<endl<<"YOU ENTER INVALID NUMBER !";
        }

} }
void update_record(){
     cout<<"Your previous records are shown below"<<endl;
    show_record();
    cout<<"Do you want to update records ? 'yes; or 'no' "<<endl;
    cin>>rehan;
    if( rehan=="yes" )
        {

            cout<<"Which computer number's records you want to update ?"<<endl;

            cin>>comp_num;
            switch(comp_num){

            case 1 :
                {
                   cout<<endl<<"YOU CAN CHANGE THE : "<<endl;
                   cout<<"1.Name of computer"<<endl;
                   cout<<"2.Location of computer"<<endl;
                   cout<<"3.serial number of computer \n"<<endl;

                    cout<<"ENTER THE NEW NAME OF COMPUTER" <<endl;
                    cin>>comp_data[0] ;
                    cout<<"ENTER NEW LOCATION OF COMPUTER  "<<endl;
                    cin>>comp_loc[0];
                    cout<<"ENTER NEW SERIAL NUMBER OF COMPUTER "<<endl;
                    cin>>comp_number[0];
                    cout<<endl<<"*****YOUR DATA UPDATE SUCESSFULLY*****"<<endl;

                }
                 break;

            case 2 :
                {
                    cout<<endl<<"YOU CAN CHANGE THE : "<<endl;
                   cout<<"1.Name of computer"<<endl;
                   cout<<"2.Location of computer"<<endl;
                   cout<<"3.serial number of computer \n"<<endl;

                    cout<<"ENTER THE NEW NAME OF COMPUTER" <<endl;
                    cin>>comp_data[1] ;
                    cout<<"ENTER NEW LOCATION OF COMPUTER  "<<endl;
                    cin>>comp_loc[1];
                    cout<<"ENTER NEW SERIAL NUMBER OF COMPUTER "<<endl;
                    cin>>comp_number[1];
                    cout<<endl<<"*****YOUR DATA UPDATE SUCESSFULLY*****"<<endl;
                }
                                   break;
            case 3 :
                {
                    cout<<endl<<"YOU CAN CHANGE THE : "<<endl;
                   cout<<"1.Name of computer"<<endl;
                   cout<<"2.Location of computer"<<endl;
                   cout<<"3.serial number of computer \n"<<endl;

                    cout<<"ENTER THE NEW NAME OF COMPUTER" <<endl;
                    cin>>comp_data[2] ;
                    cout<<"ENTER NEW LOCATION OF COMPUTER  "<<endl;
                    cin>>comp_loc[2];
                    cout<<"ENTER NEW SERIAL NUMBER OF COMPUTER "<<endl;
                    cin>>comp_number[2];
                    cout<<endl<<"*****YOUR DATA UPDATE SUCESSFULLY*****"<<endl;
                }
                 break;

            case 4 :
                {
                    cout<<endl<<"YOU CAN CHANGE THE : "<<endl;
                   cout<<"1.Name of computer"<<endl;
                   cout<<"2.Location of computer"<<endl;
                   cout<<"3.serial number of computer \n"<<endl;

                    cout<<"ENTER THE NEW NAME OF COMPUTER" <<endl;
                    cin>>comp_data[3] ;
                    cout<<"ENTER NEW LOCATION OF COMPUTER  "<<endl;
                    cin>>comp_loc[3];
                    cout<<"ENTER NEW SERIAL NUMBER OF COMPUTER "<<endl;
                    cin>>comp_number[3];
                    cout<<endl<<"*****YOUR DATA UPDATE SUCESSFULLY*****"<<endl;
                }
                    break;
            case 5 :
                {
                    cout<<endl<<"YOU CAN CHANGE THE : "<<endl;
                   cout<<"1.Name of computer"<<endl;
                   cout<<"2.Location of computer"<<endl;
                   cout<<"3.serial number of computer \n"<<endl;

                    cout<<"ENTER THE NEW NAME OF COMPUTER" <<endl;
                    cin>>comp_data[4] ;
                    cout<<"ENTER NEW LOCATION OF COMPUTER  "<<endl;
                    cin>>comp_loc[4];
                    cout<<"ENTER NEW SERIAL NUMBER OF COMPUTER "<<endl;
                    cin>>comp_number[4];
                    cout<<endl<<"*****YOUR DATA UPDATE SUCESSFULLY*****"<<endl;
                }
                                   break;
            default : cout<<"!!! Please enter the number from above ranges !!!"<<endl;

            }

        }
    else if( rehan=="no" )
        {
            cout<<"  You do not want to update records  "<<endl;
            cout<<"******GOOD BYE! SEE YOU SOON **********"<<endl;
            exit(0);
        }
}
void registration(){
    string rusername,rpassword;
    cout<<"\t\t\t\t\t\t\t\t________________________WELCOME TO REGISTRATION ___________________"<<endl;
    cout<<endl;
    cout<<"\t\t\t\t\t\t\tENTER THE USERNAME ";
    cin>>rusername;
    cout<<"\t\t\t\t\t\t\tENTER THE PASSWORD ";
    cin>>rpassword;

    ofstream write("credentials.txt");
    write<<rusername<<endl<<rpassword;
    write.close();

}
void mainmenue(){
     int mvalue;
    cout<<"\t\t\t\t\t\t\t__________________________WELCOME _____________________"<<endl;
    cout<<endl;
    cout<<"\t\t\t\t\t\t\tCHOOSE ANY ONE FOM FOLLOWING "<<endl;
    cout<<"\t\t\t\t\t\t\t1. LOGIN "<<endl;
    cout<<"\t\t\t\t\t\t\t2, REGISTERATION "<<endl;
    cout<<"\t\t\t\t\t\t\t3. EXIT "<<endl;
    cin>>mvalue;

    switch(mvalue)
    {
    case 1 :
        {    system("cls");
            header();
            login_page();
        }
        break;
    case 2:
        {
            system("cls");
            header();
            registration();
            system("cls");
            header();
            mainmenue();
        }
        break;
    case 3:
        {
            exit(0);
        }
    }


}
