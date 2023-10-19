#include<iostream>
#include <bits/stdc++.h>
#include<windows.h>
#include<conio.h>

using namespace std;

struct emp{
    string name,id,address;
    int contact,salary;
};
emp e[100];
int total =0;  
void empdata(){
int choice;
cout<<"How many Employee data do You Want to Enter ?? "<<endl;
cin>>choice;
for(int i=total;i<total+choice;i++){
    cout<<"Enter data of Empoloyee "<<i+1<<endl;
    cout<<"Empolyee Name : ";
    cin>>e[i].name;
    cout<<"ID: ";
    cin>>e[i].id;
    cout<<"Address : ";
    cin>>e[i].address;
    cout<<"Contact :";
    cin>>e[i].contact;
    cout<<"salary : ";
    cin>>e[i].salary;
}
total=total+choice;
}
void show(){
if(total!=0){
    for(int i=0;i<total;i++){
   cout<<"Data of Empolyee "<<i+1<<endl;
   cout<<"Empoloyee Name :" <<e[i].name<<endl;
   cout<<"ID: " <<e[i].id<<endl;
   cout<<"Address : " <<e[i].address<<endl;
   cout<<"Salary : "<<e[i].salary<<endl;
   cout<<"Contact : "<<e[i].contact<<endl;  
    }
}
else{
    cout<<"Your record is Empty "<<endl;
}
}
void search(){
if(total!=0){
    string id;
    cout<<"Enter id of daa which you want to Search"<<endl;
    cin>>id;
    for(int i=0;i<total;i++){
        if(id==e[i].id){
            cout<<"Data of Empolyee "<<i+1<<endl;
   cout<<"Empoloyee Name :" <<e[i].name<<endl;
   cout<<"ID: " <<e[i].id<<endl;
   cout<<"Address : " <<e[i].address<<endl;
   cout<<"Salary : "<<e[i].salary<<endl;
   cout<<"Contact : "<<e[i].contact<<endl;  
   break;  
        }
        if(i==total-1){
            cout<<"No such record found "<<endl; 
        }
    }
}else{
    cout<<"Your record is empty"<<endl;
}
}

void update(){
 if(total!=0){
string id;
    cout<<"Enter id of daa which you want to update"<<endl;
    cin>>id;
    for(int i=0;i<total;i++){
        if(id==e[i].id){
            cout<<"Previous Data"<<endl;
    cout<<"Data of Empolyee "<<i+1<<endl;
   cout<<"Empoloyee Name :" <<e[i].name<<endl;
   cout<<"ID: " <<e[i].id<<endl;
   cout<<"Address : " <<e[i].address<<endl;
   cout<<"Salary : "<<e[i].salary<<endl;
   cout<<"Contact : "<<e[i].contact<<endl; 
   cout<<"\n Enter new data "<<endl; 
   cout<<"Empolyee Name : ";
    cin>>e[i].name;
    cout<<"ID: ";
    cin>>e[i].id;
    cout<<"Address : ";
    cin>>e[i].address;
    cout<<"Contact :";
    cin>>e[i].contact;
    cout<<"salary : ";
    cin>>e[i].salary;
   break;  
        }
        if(i==total-1){
            cout<<"No such record found "<<endl; 
        }
    }
 }
 else{
    cout<<"Your recourd is empty"<<endl;
 }
}
void del(){
if(total!=0){
    char user;
cout<<"Press 1 to full record " <<endl;
cout<<"press 2  to delete specific record "<<endl;
user = getch();
if(user=='1'){
    total=0;
    cout<<"All recors is Deleted...!!!" <<endl;
    
}
else if(user=='2'){
    string id;
    cout<<"Enter id of data which you want to delete"<<endl;
    cin>>id;
    
    for(int i=0;i<total;i++){
        if(id==e[i].id){
            for(int j=i;j<total;j++){
            e[j].name=e[j+1].name;
            e[j].id=e[j+1].id;
            e[j].address=e[j+1].address;
            e[j].contact=e[j+1].contact;
            e[j].salary=e[j+1].salary;
            total--;
            cout<<"your required record is deleted"<<endl;
            break;
            } 
              if(i==total-1){
                cout<<"No such record found "<<endl;
              } 
        }
    }
}
}else{
    cout<<"Your record is Empty :"<<endl;
}
}
int main(){
    cout<<"\n\n\t\tEmployee Management System"<<endl;
    cout<<"\n\n\t\tSign Up"<<endl;
    string username,password;
    cout<<"\n\n\t  \tEnter User name : ";
    cin>>username;
    cout<<"\n\n\t  \tEnter Password : ";
    cin>>password;
    cout<<"\n\t\tYour Id is Creating please Wait "<<endl;
    for(int i=1;i<8;i++){
        cout<<" . ";
        Sleep(1000);
    }
    cout<<"\n\n\t\t Your id is Created Successfully"<<endl;
    system("cls"); 
    start:
     system("cls"); 
      cout<<"\n\n\t\tEmployee Management System"<<endl;
     
      cout<<"\n\n\t\t Login "<<endl;
      string username1,password1;
      cout<<"UserName : ";
      cin>>username1;
      cout<<"Password : ";
      cin>>password1;

      if(username1==username && password1==password){
       system("cls");
       char user;
       while(1){
        cout<<"Press 1 Two Enter Data "<<endl;
        cout<<"Press 2 Two Show Data "<<endl;
        cout<<"Press 3 Two Search Data "<<endl;
        cout<<"Press 4 Two Update Data "<<endl;
        cout<<"Press 5 Two Delete Data "<<endl;
        cout<<"Press 6 Two LogOut Data "<<endl;
        cout<<"Press 7 Two EXit  Data "<<endl;
       user= getch();
        system("cls"); 
       switch(user){
        case '1' :
        empdata();
        break;
        case '2':
        show();
        break;

        case '3':
        search();
        break;

         case '4':
         update();
         break;
       
       case '5':
       del();
       break;

       case '6':
       goto start;
       break;

       default:

       cout<<"\aInvalid";
       }
       }
      }
      else if(username!=username1){
        cout<<"Your User name is InCorrect "<<endl;
        Sleep(3000);
        goto start;
      }
      else if(password1!=password){
        cout<<"Your Password is InCrrect "<<endl;
        Sleep(3000);
        goto start;
      }
}