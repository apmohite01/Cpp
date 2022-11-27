#include<iostream>
using namespace std;

int main(){

    char button;
    cout<<"Input a character"<<endl;
    cin>>button;
    // if(button=='a'){
    //     cout<<"Hello"<<endl;
    // }
    // else if(button=='b'){
    //     cout<<"Aur bhai kaisa sab"<<endl;
    // }
    // else if(button=='c'){
    //     cout<<"Kya haalchaal"<<endl;

    // }
    // else if(button=='d'){
    //     cout<<"Ki haal guru"<<endl;
    // }
    // else{
    //     cout<<"Thik hai bhai...mei chalta hu"<<endl;
    // }

    switch (button)
    {
    case 'a':
        cout<<"Hello"<<endl;
        break;
    case 'b':
        cout<<"Aur bhai kaisa sab"<<endl;
        break;
    case 'c':
        cout<<"Kya haalchaal"<<endl;
        break;
    case 'd':
        cout<<"Ki haal guru"<<endl;
        break;
    
    default:
    cout<<"Thik hai bhai....mei chalta hu"<<endl;
        break;

    }
    return 0;

}

