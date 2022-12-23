#include <iostream>
#include <cmath>
using namespace std;


int age, height, bounty;
int main(){
    
    cout << "Enter your age: ";
    cin >> age;
        if(age <= 25){
            cout << "Enter your height: ";
            cin.ignore();
            cin >> height;
                if(height < 100)
                    cout << "Your character = Chopper";
                else if(height < 180 )
                    cout << "Your character = Usopp";
                else{
                     cout << "Enter your bounty: ";
                cin >> bounty;
                if(bounty <= 11*pow(10,8))
                    cout << "Your character = Sanji";
                else if(bounty > 11*pow(10,8))
                    cout << "Your character = Zoro";
                    }
           
        }
        
        if(age <= 60 and age > 25){
            cout << "Enter your bounty: ";
            cin >> bounty;
                if(bounty <= 5*pow(10,8))
                    cout << "Your character = Franky";
                else if(bounty > 5*pow(10,8))
                    cout << "Your character = Jinbe";
        }
        if(age > 60){
            cout << "Your character = Brook";
        }
        
        return 0;
    }