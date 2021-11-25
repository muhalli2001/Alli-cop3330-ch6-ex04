#include "std_lib_facilities.h"

class Name_value
{
    public: //i made them public so i wouldn't have to write getters/setters for this problem.
    string name;
    int value;

    Name_value(string str, int val)
    {
        name=str;
        value=val;
    }

};
int main()
{

    vector<Name_value> name_val_vector; //declare vector of namevalues.

    cout<<"enter a name and value with 1 space between, to terminate make the pair: (NoName,0)";
    
    string name="";
    int val=-1, i;


    //processing names
    while (cin>>name>>val && (name!="NoName" || val!=0)) 
    {
        for (i = 0; i<name_val_vector.size(); ++i)
        {
            if (name == name_val_vector[i].name)
            {
                printf("name occurs more than once. Can't continue processing.");
                return 1;
            }
        }
        cout<<"name added.";
        name_val_vector.push_back(Name_value(name,val));
    }

    //printing names

    for (int j = 0; j<name_val_vector.size(); ++j) {
        cout << "(" << name_val_vector[j].name << ',' << name_val_vector[j].value << ")";
    }

    return 0;
} 
