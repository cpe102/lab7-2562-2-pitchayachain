#include<iostream>
using namespace std;

int main(){
    int age;
    float tall;
    int money;

   cout << "Age: ";
   cin >> age;
   if(age <= 20){
       cout << "Tall: ";
       cin >> tall;
    
    if(tall < 160){
        cout << "UNFRIEND";
    }else{
         if(tall < 175){
             cout << "FRIEND";
         }else{
              cout << "Money: ";
           cin >> money;

           if(money > 69000000){
               cout << "MARRIED";
           }else{
               cout << "ONE-NIGHT-STAND";
           }
         }
    }
   }else
   {
       if(age < 30){
           cout << "Money: ";
           cin >> money;

           if(money > 10000000){
               cout << "BEST FRIEND";
           }else{
               cout << "UNFRIEND";
           }
       }else
       {
           cout << "UNFRIEND";
       }
       
   }
   




}