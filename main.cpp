#inclunde <iostream>
#inclunde <string>

using namespace std;

bool life = true;
bool death = false;
string write;
string ask;

int main(int argc,char* argv[]){

  while(life)   //start the Zero Life
  {
    cout<<"Hello, Welcome to Zero IA, Talk we us!"<<endl;
    cin>>write;
    if(writer.size() == 0)
    {
      cout<< "Please Write, anything"<<endl;
      cout << zero.name()<<phrases.salute()<<endl;
    }
    else
    {
      if(phrases.exist() == write)
      {
        
      }
      else
      {
        phrases.addphrase(write);
        cout << zero.name() << zero.ask(phrases.lastphrase()) <<endl;
        cin<<ask;
        cout << zero.name() << phrases.meaning(ask)<<endl;
      }
    }
    
    
    
    
    
    
  
    if(death)
    {
      life = false;
    }
  }


  return 0;
}
