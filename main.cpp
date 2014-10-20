#include <iostream>
using namespace std;

#include <iomanip>
using std::setw;

#include <string.h>
#include "stdio.h"
#include <stdlib.h>
#include <fcntl.h>
#include <time.h>

#include <algorithm>
#include <string>
#include <iostream>


const int tagnum=10;
const int idlong=8;
string tagno;
string tagno1;
char tagno2[8];
string prefix;
string stack1="";
string coll = "";
string cnt;

int collisionnum=0;
int collno=0;

char answer[idlong+1];
struct node{
	bool sleep;
	char id[idlong+1];

};
struct node tag[tagnum];

void creatID() {
	int i;
	int j;
	printf("Binary-Tree Algorithms Tags examples ID is:\n");
	//printf("Total Number of Tags: "+tagnum+"\n");
	for( i=0;i<tagnum;i++) {
		tag[i].sleep=true;
		for(j=0;j<idlong;j++) {
                tag[i].id[j]=rand()%2+48; tag[i].id[idlong]='\0';
                tagno1 = tag[i].id;
		}
		    cout << "Tag ID " << i+1 << " = " << tagno1 << "\n";

		//printf("Tag ID %d = %s\n",i+1, tagno2);
	}

}

string convertInt(int number)
{
    if (number == 0)
        return "0";
    string temp="";
    string returnvalue="";
    while (number>0)
    {
        temp+=number%10+48;
        number/=10;
    }
    for (int i=0;i<temp.length();i++)
        returnvalue+=temp[temp.length()-i-1];
    return returnvalue;
}


string checkcollusion(string prefix, int no)
{
   // local variable declaration
   string result;

//result = "Collusion Number: 1 (collusion ids: " << coll << ") Number of Collusion: " << count(coll.begin(), coll.end(), ',')
    for(int i=0;i<tagnum;i++) {
        tagno = tag[i].id;
        //cout << tagno << "\n";

        prefix = "0";
        string p1="";
        p1 = tagno.substr(0,1);
        if(p1==prefix) { coll.append(convertInt(i)); coll.append(","); }
        stack1.append("1");
        stack1.append(",");

        //prefix = "00";
        //coll = "";
       // p1 = tagno.substr(0,2);
        //if(p1==prefix) { coll.append(convertInt(i)); coll.append(","); }

        //cout << p1 << "\n";


    }
//result = "Collusion Number: 1 (collusion ids: " + coll + ") Number of Collusion: " + count(coll.begin(), coll.end(), ',');
int col = count(coll.begin(), coll.end(), ',');
//string mystring = string(col);
char numstr[100];
sprintf(numstr, "%d", col);
string name = "(collusion ids: " + coll + ") Number of Collusion: ";

sprintf(numstr, "%d", col);
result = name + numstr;
//cout << "Collusion Number: 1 (collusion ids: " << coll << ") Number of Collusion: " << count(coll.begin(), coll.end(), ',') << "\n";

   return result;
}

int main ()
{
    creatID();


cout << checkcollusion("0", 1) << "\n";
cout << checkcollusion("00", 2) << "\n";
cout << checkcollusion("000", 3) << "\n";
cout << checkcollusion("001", 4) << "\n";
cout << checkcollusion("0010", 5) << "\n";
cout << checkcollusion("0011", 6) << "\n";
cout << checkcollusion("01", 7) << "\n";
//cout << "Collusion Number: 2 (collusion ids: " << coll << ") Number of Collusion: " << count(coll.begin(), coll.end(), ',') << "\n";
   return 0;
}
