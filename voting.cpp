#include<iostream>

using namespace std;

int main() {

    int age;
    
    // Input age
       cout<<"enter your age:";
       cin>>age;
       
    // check voting eligibility   
       if(age>=18)
       {
       cout<<"you are eligible for voting:";
       }
       else
       {
       cout<<"you are noneligible for voting:";
       }
    // how many years to wait for voting eligibility   
       if(age>=18)
       {
        cout<<"you are already eligible before "<<age-18<<"year(s)";
       }
       else
       {
           cout<<"wait for"<<18-age<<"year(s):";
       }

    return 0;
}