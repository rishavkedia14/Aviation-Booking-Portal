#include<iostream>
#include<fstream> // use for file handeling operation
#include<iomanip>
//use for floating file values

using namespace std;

void mainMenu();
//creating class
class Management 
{
    public:
      Management()
      {
         mainMenu();
      }
       
};

class Details 
{
    public:
    static string name,gender;
    int phoneNo;
    int age;
    string address;
    static int cId;
    char arr[100];

    void information()
    {
        cout<<"\n Enter the customer ID:";
        cin>>cId;
        cout<<"\nEnter the name:";
        cin>>name;
        cout<<"\n Enter the Age:";
        cin>>age;
        cout<<"\n Enter the Address:";
        cin>>address;
        cout<<"\n Enter the Gender:";
        cin>>gender;
        cout<<"\n Enter the Phone NO.:";
        cin>>phoneNo;
        cout<<"Your details are saved with us\n"<<endl;
    }
};

int Details::cId;
string Details::name;
string Details::gender;

class registration
{
    public:
      static int choice;
      int choice1;
      int back;
      static float charges;

      void flights()
      {
          string flightN[]={"Dubai","Canada","UK","USA","Australia","Europe"};
        for(int a=0;a<6;a++)
        {
            cout<<(a+1)<<".flight to"<<flightN[a]<<endl;
        }
        cout<<"\n Welcome to the Airlines!"<<endl;
        cout<<"Press the number of the country of which you want to book the flight:";
        cin>>choice;

        switch(choice)
        {
            case 1:
            {
                cout<<"___________Welcome to Dubai Emirates_________\n"<<endl;

                cout<<"Your confort is our priority. Enjoy the jounery!"<<endl;

                cout<<"Following are the flights\n"<<endl;

                cout<<"1. DUB - 450"<<endl;
                cout<<"\t08-01-2023 8:00AM 10hrs Rs. 25000"<<endl;

                cout<<"2. DUB - 550"<<endl;
                cout<<"\t10-01-2023 11:00AM 12hrs Rs. 26000"<<endl;

                cout<<"3. DUB - 475"<<endl;
                cout<<"\t11-01-2023 10:00AM 11hrs Rs. 23000"<<endl;

                cout<<"\n Select the flight you want to book: ";
                cin>>choice1;

                if(choice1==1)
                {
                    charges=25000;
                    cout<<"\n You have successfully booked the flight DUB - 450"<<endl;
                    cout<<"You can go back to menu and take ticket"<<endl;

                }
                else if(choice1==2)
                {
                    charges=26000;
                    cout<<"\n You have successfully booked the flight DUB - 550"<<endl;
                    cout<<"You can go back to menu and take ticket"<<endl;
                }
                 else if(choice1==3)
                {
                    charges=23000;
                    cout<<"\n You have successfully booked the flight DUB - 475"<<endl;
                    cout<<"You can go back to menu and take ticket"<<endl;
                }
                else 
                {
                    cout<<"Invalid input, shifting to the previous menu"<<endl;
                    flights();
                }
                cout<<"Press any key to go back to the main menu:"<<endl;
                cin>>back;

                if(back==1)
                {
                    mainMenu();
                }
                else
                {
                    mainMenu();
                }

            }

            case 2:
             {
                cout<<"___________Welcome to Canadian Airlines_________\n"<<endl;

                cout<<"Your confort is our priority. Enjoy the jounery!"<<endl;

                cout<<"Following are the flights\n"<<endl;

                cout<<"1. CAN - 200"<<endl;
                cout<<"\t15-02-2023 8:00AM 7hrs Rs. 10000"<<endl;

                cout<<"2. CAN - 250"<<endl;
                cout<<"\t16-02-2023 11:00AM 8hrs Rs. 14000"<<endl;

                cout<<"3. CAN - 300"<<endl;
                cout<<"\t17-02-2023 10:00AM 5hrs Rs. 12000"<<endl;

                cout<<"\n Select the flight you want to book: ";
                cin>>choice1;

                if(choice1==1)
                {
                    charges=10000;
                    cout<<"\n You have successfully booked the flight CAN - 200"<<endl;
                    cout<<"You can go back to menu and take ticket"<<endl;

                }
                else if(choice1==2)
                {
                    charges=14000;
                    cout<<"\n You have successfully booked the flight CAN - 250"<<endl;
                    cout<<"You can go back to menu and take ticket"<<endl;
                }
                 else if(choice1==3)
                {
                    charges=12000;
                    cout<<"\n You have successfully booked the flight CAN - 300"<<endl;
                    cout<<"You can go back to menu and take ticket"<<endl;
                }
                else 
                {
                    cout<<"Invalid input, shifting to the previous menu"<<endl;
                    flights();
                }
                cout<<"Press any key to go back to the main menu:"<<endl;
                cin>>back;

                if(back==1)
                {
                    mainMenu();
                }
                else
                {
                    mainMenu();
                }
             }

             case 3:
             {
                cout<<"___________Welcome to UK Airlines_________\n"<<endl;

                cout<<"Your confort is our priority. Enjoy the jounery!"<<endl;

                cout<<"Following are the flights\n"<<endl;

                cout<<"1. UK - 140"<<endl;
                cout<<"\t20-01-2023 9:00AM 6hrs Rs. 40000"<<endl;

                cout<<"2. UK - 142"<<endl;
                cout<<"\t21-01-2023 5:00AM 5hrs Rs. 35000"<<endl;

                cout<<"3. UK - 144"<<endl;
                cout<<"\t22-01-2023 12:00PM 7hrs Rs. 33000"<<endl;

                cout<<"\n Select the flight you want to book: ";
                cin>>choice1;

                if(choice1==1)
                {
                    charges=40000;
                    cout<<"\n You have successfully booked the flight UK - 450"<<endl;
                    cout<<"You can go back to menu and take ticket"<<endl;

                }
                else if(choice1==2)
                {
                    charges=35000;
                    cout<<"\n You have successfully booked the flight UK - 550"<<endl;
                    cout<<"You can go back to menu and take ticket"<<endl;
                }
                 else if(choice1==3)
                {
                    charges=33000;
                    cout<<"\n You have successfully booked the flight UK - 475"<<endl;
                    cout<<"You can go back to menu and take ticket"<<endl;
                }
                else 
                {
                    cout<<"Invalid input, shifting to the previous menu"<<endl;
                    flights();
                }
                cout<<"Press any key to go back to the main menu:"<<endl;
                cin>>back;

                if(back==1)
                {
                    mainMenu();
                }
                else
                {
                    mainMenu();
                }
             }

             case 4: 
             {
                cout<<"___________Welcome to USA Airlines_________\n"<<endl;

                cout<<"Your confort is our priority. Enjoy the jounery!"<<endl;

                cout<<"Following are the flights\n"<<endl;

                cout<<"1. USA - 130"<<endl;
                cout<<"\t20-01-2023 10:00AM 10hrs Rs. 20000"<<endl;

                cout<<"2. USA - 132"<<endl;
                cout<<"\t21-01-2023 7:00AM 12hrs Rs. 35000"<<endl;

                cout<<"3. USA - 134"<<endl;
                cout<<"\t22-01-2023 12:00PM 15hrs Rs. 40000"<<endl;

                cout<<"\n Select the flight you want to book: ";
                cin>>choice1;

                if(choice1==1)
                {
                    charges=20000;
                    cout<<"\n You have successfully booked the flight  USA - 130"<<endl;
                    cout<<"You can go back to menu and take ticket"<<endl;

                }
                else if(choice1==2)
                {
                    charges=35000;
                    cout<<"\n You have successfully booked the flight USA - 132"<<endl;
                    cout<<"You can go back to menu and take ticket"<<endl;
                }
                 else if(choice1==3)
                {
                    charges=40000;
                    cout<<"\n You have successfully booked the flight USA - 134"<<endl;
                    cout<<"You can go back to menu and take ticket"<<endl;
                }
                else 
                {
                    cout<<"Invalid input, shifting to the previous menu"<<endl;
                    flights();
                }
                cout<<"Press any key to go back to the main menu:"<<endl;
                cin>>back;

                if(back==1)
                {
                    mainMenu();
                }
                else
                {
                    mainMenu();
                }
             }
             case 5:
             {
                cout<<"___________Welcome to Australia Airlines_________\n"<<endl;

                cout<<"Your confort is our priority. Enjoy the jounery!"<<endl;

                cout<<"Following are the flights\n"<<endl;

                cout<<"1. AUS - 100"<<endl;
                cout<<"\t20-02-2023 10:00AM 10hrs Rs. 10000"<<endl;

                cout<<"2. AUS - 102"<<endl;
                cout<<"\t21-02-2023 7:00AM 12hrs Rs. 15000"<<endl;

                cout<<"3. AUS - 104"<<endl;
                cout<<"\t22-01-2023 12:00PM 15hrs Rs. 20000"<<endl;

                cout<<"\n Select the flight you want to book: ";
                cin>>choice1;

                if(choice1==1)
                {
                    charges= 10000;
                    cout<<"\n You have successfully booked the flight  AUS - 100"<<endl;
                    cout<<"You can go back to menu and take ticket"<<endl;

                }
                else if(choice1==2)
                {
                    charges=15000;
                    cout<<"\n You have successfully booked the flight AUS - 102"<<endl;
                    cout<<"You can go back to menu and take ticket"<<endl;
                }
                 else if(choice1==3)
                {
                    charges=20000;
                    cout<<"\n You have successfully booked the flight AUS - 104"<<endl;
                    cout<<"You can go back to menu and take ticket"<<endl;
                }
                else 
                {
                    cout<<"Invalid input, shifting to the previous menu"<<endl;
                    flights();
                }
                cout<<"Press any key to go back to the main menu:"<<endl;
                cin>>back;

                if(back==1)
                {
                    mainMenu();
                }
                else
                {
                    mainMenu();
                }
             }
             case 6:
             {
                cout<<"___________Welcome to Europe Airlines_________\n"<<endl;

                cout<<"Your confort is our priority. Enjoy the jounery!"<<endl;

                cout<<"Following are the flights\n"<<endl;

                cout<<"1. EUR - 700"<<endl;
                cout<<"\t25-01-2023 10:00AM 10hrs Rs. 12000"<<endl;

                cout<<"2. EUR - 732"<<endl;
                cout<<"\t26-01-2023 7:00AM 12hrs Rs. 17000"<<endl;

                cout<<"3. EUR - 753"<<endl;
                cout<<"\t27-01-2023 12:00PM 15hrs Rs. 25000"<<endl;

                cout<<"\n Select the flight you want to book: ";
                cin>>choice1;

                if(choice1==1)
                {
                    charges= 12000;
                    cout<<"\n You have successfully booked the flight  EUR - 700"<<endl;
                    cout<<"You can go back to menu and take ticket"<<endl;

                }
                else if(choice1==2)
                {
                    charges= 17000;
                    cout<<"\n You have successfully booked the flight EUR - 732"<<endl;
                    cout<<"You can go back to menu and take ticket"<<endl;
                }
                 else if(choice1==3)
                {
                    charges=25000;
                    cout<<"\n You have successfully booked the flight EUR - 753"<<endl;
                    cout<<"You can go back to menu and take ticket"<<endl;
                }
                else 
                {
                    cout<<"Invalid input, shifting to the previous menu"<<endl;
                    flights();
                }
                cout<<"Press any key to go back to the main menu:"<<endl;
                cin>>back;

                if(back==1)
                {
                    mainMenu();
                }
                else
                {
                    mainMenu();
                }

             }
             default:
             {
                cout<<"Invailed input, shifting you to main menu!"<<endl;
                mainMenu();
                break;
             }

        }

      }
};

float registration::charges;
int registration::choice;

class ticket : public registration, Details
{
      public:
      void Bill()
      {
         string destination= "";
         ofstream outf("records.txt");
         { 
            outf<<"____________   FLY WITH US   __________"<<endl;
            outf<<"_______________ Ticket  _______________"<<endl;
            outf<<"_______________________________________"<<endl;
            outf<<"Customer ID:"<<Details::cId<<endl;
            outf<<"Customer Name:"<<Details::name<<endl;
            outf<<"\t Description"<<endl<<endl;

            if(registration::choice==1)
            {
                destination="Dubai";
            }
           else if(registration::choice==2)
            {
                destination="Canada";
            }
            else if(registration::choice==3)
            {
                destination="UK";
            }
            else if(registration::choice==4)
            {
                destination="USA";
            }
            else if(registration::choice==5)
            {
                destination="Australia";
            }
             else if(registration::choice==6)
            {
                destination="Europe";
            }
           outf<<"Destination\t\t"<<destination<<endl;
           outf<<"Fligth cost: \t\t"<<registration::charges<<endl;
         }
         outf.close();
      }
        void displayBill()
        {
            ifstream ifs("records.txt");
            {
                if(!ifs)
                {
                    cout<<"File error!"<<endl;

                }
               while(!ifs.eof())
               {
                  ifs.getline(arr,100);
                  cout<<arr<<endl;
               }
             }
             ifs.close();

        }
};


void mainMenu()
{
    int lchoice;
    int schoice;
    int back;

    cout<<"\t                FLY WITH US \n"<<endl;
    cout<<"\t__________________Main Menu__________________"<<endl;

    cout<<"\t______________________________________________"<<endl;


    //create structure
    cout<<"\t|\t Press 1 to add the Customer Details   |"<<endl;
    cout<<"\t|\t Press 2 for flight Registration       |"<<endl;
    cout<<"\t|\t Press 3 for Ticket and Charges        |"<<endl;
    cout<<"\t|\t Press 4 for Exit                      |"<<endl;
    cout<<"\t|_____________________________________________|"<<endl;

    cout<<"Enter the choice: ";
    cin>>lchoice;

    Details d;
    registration r;
    ticket t;


    switch(lchoice)
    {

     case 1: 
        {
            cout<<"_______Customers________\n"<<endl;
            d.information();
            cout<<"Press any key to go back to Main menu";
            cin>>back;

            if(back==1)
            {
                mainMenu();
            }
            else{
                mainMenu();
            }
            break;
        }
     case 2:
       {
          cout<<"__________Book a flight using this System _______\n"<<endl;
          r.flights();
          break;
       }
     case 3: 
     {
        cout<<"_______GET YOUR TICKET_____\n"<<endl;
        t.Bill();
        cout<<"Your Ticket is printed, you can collect it \n"<<endl;
        cout<<"Press 1 to display your ticket";
        cin>>back;
        if(back==1)
        {
            t.displayBill();
            cout<<"Press any key to go back to main menu:";
            cin>>back;
            if(back==1)
            {
                mainMenu();
            }
            else{
                mainMenu();
            }
        }
        else{
            mainMenu();
        }
        break;
     }
     case 4:
     {
        cout<<"\n\n\t_______Thank-you______"<<endl;
        break;
     }
     default:
     {
        cout<<"Invalid input, Please try again!\n"<<endl;
        mainMenu();
        break;
     }

    }

}





int main() 
{
    //creating object of a class
    //class name -> management and object name -> Mobj
    Management Mobj;
    return 0;

}