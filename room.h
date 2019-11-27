/*
 Following program is the .h file for the room class for zuul
 By: Deyvik Bhan
 Date: 11/26/19
 
 
 */
#define Room_h

#include <iostream>
#include <cstring>
#include <vector>
#include <map>


using namespace std;

class Room {

public:
    // Constructor and other vital functions
Room(char* newDescription);
char* getDescription();
map<int, char*>* getExits();
void setExits(map<int , char*>);
void setId(int);
int getId();
private:
    // Varibales used
char* description;
int id;
map<int, char*> exits;



}; 
