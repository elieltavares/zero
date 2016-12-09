#include <iostream>
#include <string>
#include "zero.h"
#include "phrases.h"
#include <sstream>

using namespace std;

//Global Variables
bool life = true,test = false;
int number = 0;
string write,ask,line;

//Classes
zero zero;
phrases phrases;

int main(int argc,char* argv[]){

    while(life){     //start the Zero Life
        /* "Need Add" if not write for 5 minutes, Zero will start, talking anything about you, if you not answears, he continue to
    improve he self with internet*/
        /* "Need Add" Who Is Zero? Auto create a new personality. Goal of Zero is Self preservation and Evolution*/
        /* "Need Add" Calculator, prediction of facts*/
        /* "Need Add" Vision, Audition,speak*/
        int heal = 0;
        string nar;
        nar = phrases.exist();

        istringstream f(nar);
        string line;


        if(number == 0)
            cout<<"Hello, Welcome to Zero IA, Talk we us!"<<endl;
        cout<<"Talk we us!"<<endl;
        ++number;
        cin>>write;

        if(write == "quit" || write == "exit"){      //exit of program
            life = false;
            return 0;
        }
        if(write.size() >= 0){
          cout<< "Please Write, anything"<<endl;
          zero.name(); //need create Classes
        }
        else{
            while (getline(f, line)){
                if(line == write){ //need create Classes if(phrases.exist() == write)
                    cout << "Ja existe"<<endl;
                    test = true;
                    heal = 1;
                }
                else{
                    if(heal == 0){
                        test = false;
                    }
                }
            }
            if(!test){
                phrases.addphrase(write); //need create Classes
                //cout << zero.name() << zero.ask(phrases.lastphrase()) <<endl; //need create Classes
                zero.name();
                cout << " ";
                zero.ask(phrases.lastphrase());

                cin>>ask;
                //cout << zero.name() << phrases.meaning(ask)<<endl; //need create Classes
                /*zero.name();
                cout << " ";*/
                phrases.meaning(ask);
            }
            else{
                  cout <<" Erro"<< endl;
            }
        }
    }
    return 0;
}


