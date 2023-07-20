#include<iostream>
#include<fstream>
 using namespace std;
 class shopping
 {
    private:
    int pcode;
    float price;
    float disc;
    string pname;
    public:
    void administration();
    void edit();
    void list();
    void receipt();
    void buyer();
    void add();
    void rem();
    void menu();
 };
 void shopping::menu()
 {
    m;
    int choice;
    string email;
    string password;
    cout<<"\t\t\t_____________________________"\n;
    cout<<"\t\t\t                              "\n;
    cout<<"\t\t\t supermarket menu "\n;
    cout<<"1) admin"\n;
    cout<<"2) buyer"\n;
    cout<<"\t\t\t                              "\n;
    cout<<"3) exit"\n;
    cout<<"\t\t\t                              "\n;
cout<<"\t\t\t         please select                     "\n;
cin>>choice;
switch(choice)
{
    case 1:
    cout<<"\t\t\t         pls login                     "\n;
    cout<<"\t\t\t          enter email                    "\n;
    cout<<"\t\t\t            enter password                  "\n;
    cin>>password;
    cin>>email;
    if (email"hania.kshariff@gmail.com" && password"hania345")
    {
        administration();
    }
    else{
        cout<<"\t\t\t             invalid                  "\n;
    }
    break;
}
case 2:
{
    buyer();
}
case 3:
{
    exit();

}
default:
{
    cout<<"\t\t\t         pls select     "\n; 
}
 }
 goto m;
 
 void shopping::administrator();
 {
    int choice;
    cout<<"\t\t\t     admin menu                         "\n;
 cout<<"\t\t\t        1)add product                      "\n;
 cout<<"\t\t\t                              "\n;
 cout<<"\t\t\t           2) modify product                   "\n;
 cout<<"\t\t\t                              "\n;
 cout<<"\t\t\t                 3) del the product             "\n;
 cout<<"\t\t\t                              "\n;
 cout<<"\t\t\t               4) back to main menu              "\n;
 cout<<"\t\t\t                         please enter choice      "\n;
 cin>>choice;
 switch(choice)
 {
    case 1:
    add();
    break;
    case 2 :
    edit();
    break;
    case 3:
    rem();
    break;
    case 4:
    menu();
    break;
    default:
    cout<<"\t\t\t       invalid                        "\n;
 }
 goto m;
 }
 void shopping::buyer()
 {
    cout<<"\t\t\t              1- buy product                "\n;
    cout<<"\t\t\t                              "\n;
    cout<<"\t\t\t                2-buyer              "\n;
    cout<<"\t\t\t                              "\n;
    cout<<"\t\t\t              go back                 "\n;
    cout<<"\t\t\t                              "\n;
    cout<<"\t\t\t                 enter ur choice             "\n;
    cout<<"\t\t\t                              "\n;
    cin>>choice;
    switch (choice)
    {
        case 1:
        receipt();
break;
case 2:
menu();
default:
cout<<"\t\t\t     invalid                         "\n;
    }
     goto m;
 }
 void shopping::add()
 {
    fstream data;
    int c;
    int token;
    float p;
    float d ;
    string m;
    cout<<"\t\t\t     add new                         "\n;
    cout<<"\t\t\t                              "\n;
    cout<<"\t\t\t            product code                  "\n;
    cin>>pcode;
    cout<<"\t\t\t                              "\n;
    cout<<"\t\t\t            name of prod                  "\n;
    cout<<"\t\t\t                              "\n;
    cin>>pname;
    cout<<"\t\t\t            price                  "\n;
    cout<<"\t\t\t                              "\n;
    cin>>price;
    cout<<"\t\t\t             discount                 "\n;
    cout<<"\t\t\t                              "\n;
    cin>>disc;
    cout<<"\t\t\t                              "\n;

data.open("database.txt", ios::in);
if(!data)
{
    data.open("database.text", ios::app|ios::out);
    data<<'  '<<pcode<<"   "<<price<<"    "<<disc<<"\n";
    data.close();
}
else
{
    data>>c>>n>>p>>d;
    while(!data.eof())
    {
        if(c ==pcode)
        {
            token++;
        }
            data>>c>>n>>p>>d;
    }
    data.close();
}
if(token==1)
goto m;
else{
    data.open("database.text", ios::app|ios::out);
    data<<'  '<<pcode<<"   "<<price<<"    "<<disc<<"\n";
    data.close();
}
}
 cout<<"\n\n\n\t\t record inserted";
}

void shopping::edit()
{
    fstream data,data1;
    int pkey;
    int token=0;
    int c;
    float p;
    float d;
    string n;
    cout<<"modify record";
    cout<<"product code";
    cin>>pkey;
    data.open("database.txt", ios::in);
if(!data)
{
     cout<<"\n\n\n\t\t file doesnt exist";
}
else{
    data1.open("database.text", ios::app|ios::out);
    data<<'  '<<pcode<<"   "<<price<<"    "<<disc<<"\n";
    while(!data.eof()){
        if (pkey==pcode)
        {
             cout<<"\n\n\n\t\t product new code";
             cin>>c;
             cout<<" name of prod";
             cin>>n;
             cout<<"price";
             cin>>p;
             cout<<"discount";
        }
    }
}

}
 }

 