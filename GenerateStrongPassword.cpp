// https://github.com/RahulM2416/Strong-Password-Generator-cpp

#include<iostream>
#include<string>
#include<ctime>
#include<cstdlib>

using namespace std;

string getPassword(int length) {
    string password="";
    string characters = "enillabrosumneEnotrymadthaediniasteNRMREHIAIEBfRuDkCUlgDYWIVD125268ra416791gj7t2j90jy179dugene243014rrauillwbate517";
    int charsize = characters.size();
    srand(time(0));
    int randomIndex;
    for(int i=0;i<length;i++){
        randomIndex = rand() % charsize;
        password = password + characters[randomIndex];
    }
    return password;
}


int main(){
    int length;
    cout<<"Enter the length of the Password :"<<endl;
    cin>>length;
    string password = getPassword(length);
    cout<<"Generated Password : "<<password<<endl;

    return 0;
}

// If you like this repository, Give a Star ⭐ 
// Made for Practice.. 😊
