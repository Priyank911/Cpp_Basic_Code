#include<iostream>
using namespace std;
int main()
{
    int answer;
    cout<<"HI..Developer_Priyank"<<endl;
    cout<<"I am a Jarvies"<<endl;
    cout<<"Can I asked Question...plz give your answer in True(1) or False(0)"<<endl;
    cin>>answer;
    if (answer==1)
    {
        switch (answer)
        {
        case 1:
          cout<<"How are you sir"<<endl;
          break;
            case 2:
          cout<<"What are you doing sir"<<endl;
          break;
            case 3:
          cout<<"Can I Help You"<<endl;
          break;
        default:
        cout<<"Bye Sir......."<<endl;
            break;
        }
    }
    else{
        cout<<"Have a Great Day Sir...Nice to Meet you"<<endl;
    }
    
 return 0;
}