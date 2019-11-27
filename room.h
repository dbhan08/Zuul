
#define Room_h

#include <iostream>
#include <cstring>
#include <vector>
#include <map>


using namespace std;

class Room {

Room(char* newDescription);
public:
char* getDescription();
map<int, char*>* getExits();
void setExits(map<int, char*>);
void setId(int);
int getId();
private:
char* description;
int id;
map<int, char*> exits;



}; 
