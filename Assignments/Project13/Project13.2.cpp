#include <iostream>

using namespace std;

class TagMaker {
    private:
        string name;
        string organization;

    public:
        // constructors 
        TagMaker(){};
        TagMaker(string n, string org) {
            name = n;
            organization = org;
        }

        // methods
        //setname
        void setName(string n) {
            name = n;
        }
        //set organization
        void setOrg(string org) {
            organization = org;
        }
        //print tag with name and org
        void printTag() {
            cout << "##########################################################################" << endl;
            cout << "###                        ANNUAL CONFERENCE                           ###" << endl;
            cout << "##########################################################################" << endl;
            cout << "### NAME: " << name;
            for (int i = 0; i < (70 - 9 - name.length()); i++) {
                cout << " ";
            }
            cout << "###" << endl;
            cout << "##########################################################################" << endl;
            cout << "### ORGANIZATION: " << organization;
            for (int i = 0; i < (70 - 17 - organization.length()); i++) {
                cout << " ";
            }
            cout << "###" << endl;
            cout << "###                                                                    ###" << endl;
            cout << "##########################################################################" << endl;
        }
        //clear name and org
        void clear() {
            name = "";
            organization = "";
        }
        //print blank
        void printBlank() {
            cout << "##########################################################################" << endl;
            cout << "###                        ANNUAL CONFERENCE                           ###" << endl;
            cout << "##########################################################################" << endl;
            cout << "### NAME:                                                              ###" << endl;
            cout << "##########################################################################" << endl;
            cout << "### ORGANIZATION:                                                      ###" << endl;
            cout << "###                                                                    ###" << endl;
            cout << "##########################################################################" << endl;
        }
};

int main() {
    TagMaker t1;
    //print empty

    t1.setName("Cairo Flores");
    t1.setOrg("Berkeley City College");

    cout << "1--> ----- FILLED OUT -----" << endl;
    t1.printTag();

    cout << endl << endl << "1--> ----- BLANK TAG -----" << endl;
    t1.printBlank();

    t1.clear();
    
    cout << endl << endl << "3--> ----- CLEARED TAG -----" << endl;
    t1.printTag();
}

/*
OUTPUT 

1--> ----- FILLED OUT -----
##########################################################################
###                        ANNUAL CONFERENCE                           ###
##########################################################################
### NAME: Cairo Flores                                                 ###
##########################################################################
### ORGANIZATION: Berkeley City College                                ###
###                                                                    ###
##########################################################################


1--> ----- BLANK TAG -----
##########################################################################
###                        ANNUAL CONFERENCE                           ###
##########################################################################
### NAME:                                                              ###
##########################################################################
### ORGANIZATION:                                                      ###
###                                                                    ###
##########################################################################


3--> ----- CLEARED TAG -----
##########################################################################
###                        ANNUAL CONFERENCE                           ###
##########################################################################
### NAME:                                                              ###
##########################################################################
### ORGANIZATION:                                                      ###
###                                                                    ###
##########################################################################
*/