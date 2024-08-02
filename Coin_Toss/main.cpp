#include<iostream>
#include<string>
#include<stdlib.h>
#include<ctime>
using namespace std;

class coin_toss
{
private:
    string call;
    string outcome;
public:
    void make_call()
    {
        cout<<"\nEnter your call(heads/tails):"<<endl;
        cin>>call;
    }
    void toss()
    {
        srand(time(0));
        int rem=rand()%2;
        if(rem==0) outcome="heads";
        else outcome="tails";
    }
    void analyze()
    {
        if(call==outcome) cout<<"You Won!"<<endl;
        else cout<<"You Lose!"<<endl;
    }
    void declare()
    {
        cout<<"The outcome is "<<outcome<< "\n" << endl;
    }
};
int main()
{
    coin_toss coin;
    while(1){
        int choice;
        cout << "1 --> Make call\n2 --> Exit\nEnter choice: " << endl;
        cin >> choice;
        if(choice==1){
            coin.make_call();
            coin.toss();
            coin.analyze();
            coin.declare();
        }
        else if(choice==2){
            cout << "Exited !" << endl;
            break;
        }
        else{
            cout << "Invalid choice !\n" << endl;
        }
    }
    return 0;
}
