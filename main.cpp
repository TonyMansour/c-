#include <iostream>
#include <string>
#include <string.h>
#include<vector>
using namespace std;
static  vector<string> word;
static int  printCounter=0;
void RecPermute(string soFar, string rest)
{
    if(rest == "")
    {
        if(printCounter==0)
        {
            cout<<soFar<<endl;
            word.push_back(soFar);
            printCounter++;
        }
        else if(printCounter!=0)
        {
            for(int i=0 ; i<word.size();i++)
            {
                if(soFar==word[i])
                {
                    goto DO;
                }
            }
            cout<<soFar<<endl;
            word.push_back(soFar);
            printCounter++;
        }
    }
        else
    {
        DO :
            {
                for(int i=0;i<rest.length();i++)
        {
            string next = soFar + rest[i];
            string remaining =  rest.substr(0,i)+rest.substr(i+1);
            RecPermute(next,remaining);
    }
            }

    }

}
void ListPermutations(string s)
{
    RecPermute("",s);
}

int main()
{
    string s="ABCA";
   RecPermute(s,"");
   ListPermutations(s);
   cout<<"***********"<<endl;








}
