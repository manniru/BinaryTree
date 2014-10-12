#include <iostream>
#include <string.h>
#include "stdio.h"
#include <stdlib.h>
#include <fcntl.h>
#include <time.h>

#include <algorithm>
#include <string>

#include <string>
#include <bitset>
#include <cstdlib>
#include <time.h>
using namespace std;

const int tagnum=100;
const int idlong=8;
int collisionnum=0;
int collno=0;

char answer[idlong+1];
struct node{
	bool sleep;
	char id[idlong+1];

};
struct node tag[tagnum];

using namespace std;

void generateTags(int nos) {
    int i;
    srand(time(NULL));
    //cout << "a random 8-bit numbers between 0 and 255" << endl;
    for(int i=0;i<nos;i++){
        int num = rand() % 256;
        cout << (bitset<8>) num << endl;
    }


}

void creatID() {
	int i;
	int j;
	printf("Q-Ary Algorithms Tags examples ID is:\n");
	//printf("Total Number of Tags: "+tagnum+"\n");
	for( i=0;i<tagnum;i++) {
		tag[i].sleep=true;
		for(j=0;j<idlong;j++)
			tag[i].id[j]=rand()%2+48;
		tag[i].id[idlong]='\0';
		printf("Tag ID Number %d :%s\n",i+1,tag[i].id);
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
int main()
{
    //creatID();

    string stack1="";

    string prefix;
    string coll = "";
    string cnt;
    //cout << prefix;

    string ids[] = {"", "11001000", "00111111", "10101001", "00100110", "10101110", "11011011", "10100111", "10100111", "01000001", "01000110",
    "11001010", "00111111", "10101001", "01100110", "10101110", "11011011", "10110111", "10100111", "00101001", "01100110"};

    prefix = "0";
     for(int i = 1; i <= 50; i++) {
            string p1="";
        string id = ids[i];
        p1 = id.substr(0,1);
        if(p1==prefix) { coll.append(convertInt(i)); coll.append(","); }


    cout << "ID[" << i << "] => " << id << "==" << p1 << endl;
  }
    //string colno = count(coll.begin(), coll.end(), ',');
   cout << "Collusion Number: 1 (collusion ids: " << coll << ") Number of Collusion: " << count(coll.begin(), coll.end(), ',') << "\n";
   string coll1 = "m,mm,m,";
   //cnt = count(coll.begin(), coll.end(), ',');

   stack1.append("1");
   stack1.append(",");


    prefix = "00";
    coll = "";

    for(int i = 1; i <= 10; i++) {
        string p1="";
        string id = ids[i];
        p1 = id.substr(0,2);
        if(p1==prefix) { coll.append(convertInt(i)); coll.append(","); }
    }

    cout << "Collusion Number: 2 (collusion ids: " << coll << ") Number of Collusion: " << count(coll.begin(), coll.end(), ',') << "\n";
    stack1.append("01");
    stack1.append(",");

    prefix = "000";
    coll = "";

    for(int i = 1; i <= 10; i++) {
        string p1="";
        string id = ids[i];
        p1 = id.substr(0,3);
        if(p1==prefix) { coll.append(convertInt(i)); coll.append(","); }
    }

   cout << "Collusion Number: 3 (collusion ids: " << coll << ") Number of Collusion: " << count(coll.begin(), coll.end(), ',') << "\n";
   stack1.append("001");
   stack1.append(",");


   prefix = "001";
    coll = "";

    for(int i = 1; i <= 10; i++) {
        string p1="";
        string id = ids[i];
        p1 = id.substr(0,3);
        if(p1==prefix) { coll.append(convertInt(i)); coll.append(","); }
    }

   cout << "Collusion Number: 4 (collusion ids: " << coll << ") Number of Collusion: " << count(coll.begin(), coll.end(), ',') << "\n";
   stack1.append("001");
   stack1.append(",");



    prefix = "0010";
    coll = "";

    for(int i = 1; i <= 10; i++) {
        string p1="";
        string id = ids[i];
        p1 = id.substr(0,4);
        if(p1==prefix) { coll.append(convertInt(i)); coll.append(","); }
    }
   cout << "Collusion Number: 5 (collusion ids: " << coll << ") Number of Collusion: " << count(coll.begin(), coll.end(), ',') << "\n";
   stack1.append("001");
   stack1.append(",");

    prefix = "0011";
    coll = "";
    for(int i = 1; i <= 10; i++) {
        string p1="";
        string id = ids[i];
        p1 = id.substr(0,4);
        if(p1==prefix) { coll.append(convertInt(i)); coll.append(","); }
    }
   cout << "Collusion Number: 6 (collusion ids: " << coll << ") Number of Collusion: " << count(coll.begin(), coll.end(), ',') << "\n";
   stack1.append("001");
   stack1.append(",");


       prefix = "01";
    coll = "";
    for(int i = 1; i <= 10; i++) {
        string p1="";
        string id = ids[i];
        p1 = id.substr(0,4);
        if(p1==prefix) { coll.append(convertInt(i)); coll.append(","); }
    }
   cout << "Collusion Number: 7 (collusion ids: " << coll << ") Number of Collusion: " << count(coll.begin(), coll.end(), ',') << "\n";
   stack1.append("001");
   stack1.append(",");

//generateTags(100);

    return 0;
}


