#include "Date.h"

using namespace std;




int main()
{
 
    Date un(26,2,2019);
    Date deux(25,2,2019);

    
    //Operator <<
    cout<<un<<endl;
    cout<<deux<<endl;

    //Operator <,>,>=,<=
    cout<<boolalpha;
    cout<<un<<" > "<< deux <<" "<< (un>deux)<<endl;
    cout<<un<<" < "<< deux <<" "<< (un<deux)<<endl;
    cout<<un<<" >= "<< deux <<" "<< (un>=deux)<<endl;
    cout<<un<<" <= "<< deux <<" "<< (un<=deux)<<endl;
    cout<<noboolalpha;

    //operator +/-
    cout<<"Operator +,-"<<endl;
    Date add =  un + 100;
    Date sub = deux - 100 ;

    cout<<"Operator ++,--"<<endl;
    cout<<add<<endl;
    cout<<sub<<endl;

    //Operator ++
    for(int i = 0; i < 5 ; i++)
        cout<<++add<<endl;

    //Operator --
    for(int i = 0; i < 5 ; i++)
        cout<<--sub<<endl;    

    cout<<"Result"<<endl;
    cout<<add<<endl;
    cout<<sub<<endl;

    //Operator >>
    cout<<"entrez une date"<<endl;

    Date date;
    string entree;

    
    date>>entree;

    cout<<"vous avez rentre "<<date<<endl;

    //Operator =
    cout<<"Operator ="<<endl;
    Date test = {20,2,20};
    cout<<test<<endl;
    return 0;
}