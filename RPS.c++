#include<iostream>
#include<ctime>
using namespace std;
void RPS(string you, string comp){
    if(you == "Rock"){
        if(comp == "Scissors"){
            cout<<"You Won";
        }
        else if(comp=="Paper"){
            cout<<"You Lost";
        }
        else {
            cout<<"It's a tie";
        }
    }
    else if(you == "Scissors"){
        if(comp == "Paper"){
            cout<<"You Won";
        }
        else if(comp=="Rock"){
            cout<<"You Lost";
        }
        else {
            cout<<"It's a tie";
        }
    }
    else if(you=="Paper"){
        if(comp == "Rock"){
            cout<<"You Won";
        }
        else if(comp=="Scissors"){
            cout<<"You Lost";
        }
        else {
            cout<<"It's a tie";
        }
    }
    else{
        cout<<"Bhai dekh kr choose kr na";
    }
}
int main(){
    string you,comp;
    cout<<"Enter your choice(Rock,Paper,Scissors): ";
    cin>>you;
    srand(time(0));
    int a = (rand()%3)+1;
    if (a == 1){
        comp = "Rock";
    }
    else if (a == 2){
        comp = "Scissors";
    }
    else {
        comp = "Paper";
    }
    cout<<"The computer choose: "<<comp<<"\n";
    RPS(you,comp);
}

    
