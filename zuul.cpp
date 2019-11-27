#include <iostream>
#include <cstring>
#include <map>
#include <vector>
#include "room.h"

using namespace std;

struct item {
	char* name;
	int roomid;
	int id;


};

void setRooms(vector<Room*>* rooms);
void setItems(vector<item*>* items);
void printRoom(vector<Room*>* rooms, vector<item*>*, int currentroom);
void getItem();
void dropItem();
int move();


int main() {
vector<Room*> rooms;
vector<item*> items;
vector<int> inventory;
setRooms(&rooms);
setItems(&items);
int currentRoom = 1;

cout << "You scraped you're knee




}



void setRooms(vector<Room*>* rooms) {
char* west = (char*)("west");
char* east = (char*)("east");
char* north = (char*)("north");
char* south = (char*)("south");
map<int,char*> roomMap;
// health Office
Room* healthOffice = new Room((char*)("You are in the health office"));
healthOffice -> setId(1);
roomMap.insert(pair<int,char*> (2, north));
healthOffice -> setExits(roomMap);
rooms -> push_back(healthOffice);
roomMap.clear();
// Science Room
Room* scienceRoom = new Room((char*)("You are in the science room where crazy stuff happens!"));
scienceRoom -> setId(2);
roomMap.insert(pair<int,char*> (3, north));
roomMap.insert(pair<int,char*> (1, south));
scienceRoom -> setExits(roomMap);
rooms -> push_back(scienceRoom);
roomMap.clear();
// Math Room
Room* mathRoom = new Room((char*)("You are in a math class! It is very boring."));
mathRoom -> setId(3);
roomMap.insert(pair<int,char*> (2, south));
roomMap.insert(pair<int,char*> (4, north));
mathRoom -> setExits(roomMap);
rooms -> push_back(mathRoom);
roomMap.clear();
// Galbraith's Room
Room* galbraithsRoom = new Room((char*)("You are in Galbraith's room. It is the best room"));
galbraithsRoom -> setId(4);
roomMap.insert(pair<int,char*> (5, north));
roomMap.insert(pair<int, char*> (3, south));
galbraithsRoom -> setExits(roomMap);
rooms -> push_back(galbraithsRoom);
roomMap.clear();
// History Room
Room* historyRoom = new Room((char*)("You are in the history Room. It is also pretty boring in here!"));
historyRoom -> setId(5);
roomMap.insert(pair<int,char*> (4, south));
roomMap.insert(pair<int, char*> (6,east));
historyRoom -> setExits(roomMap);
rooms -> push_back(historyRoom);
roomMap.clear();
// Music studio
Room* musicStudio = new Room((char*)("You are in the music Studio. You boutta drop some heat, and lil uzi vert in the studio too!"));
musicStudio -> setId(6);
roomMap.insert(pair<int,char*> (5, west));
roomMap.insert(pair<int,char*> (7, east));
musicStudio -> setExits(roomMap);
rooms -> push_back(musicStudio);
roomMap.clear();
// Rec Room
Room* recRoom = new Room((char*)("You are in rec Room. Relax for a little bit!"));
recRoom -> setId(7);
roomMap.insert(pair<int,char*> (6, west));
roomMap.insert(pair<int,char*> (8, east)); 
recRoom -> setExits(roomMap);
rooms -> push_back(recRoom);
roomMap.clear();
// Boys bathroom
Room* boysBathroom = new Room((char*)("You are in the boys bathroom where sacred rituals occur. Make sure to avoid juuls"));
boysBathroom -> setId(8);
roomMap.insert(pair<int,char*> (7, west));
roomMap.insert(pair<int,char*> (9,east));
boysBathroom -> setExits(roomMap);
rooms -> push_back(boysBathroom);
roomMap.clear();
// Prison
Room* prison = new Room((char*)("You are in prison. Try to stay safe!"));
prison -> setId(9);
roomMap.insert(pair<int,char*> (8, west));
roomMap.insert(pair<int, char*> (10, east));
prison -> setExits(roomMap);
rooms -> push_back(prison);
roomMap.clear();
// Browns stadium
Room* brownsStadium = new Room((char*)("You are in the browns stadium! You see players on the field, oh wait it's just trash. Littering is not good"));
brownsStadium -> setId(10);
roomMap.insert(pair<int,char*> (9, west));
roomMap.insert(pair<int,char*> (11, east));
brownsStadium -> setExits(roomMap);
rooms -> push_back(brownsStadium);
roomMap.clear();
// Vr Room
Room* vrRoom = new Room((char*)("You are in the vr Room. Go have some fun!"));
vrRoom -> setId(11);
roomMap.insert(pair<int,char*> (10, west));
roomMap.insert(pair<int,char*> (12, south));
vrRoom -> setExits(roomMap);
rooms -> push_back(vrRoom);
roomMap.clear();
// Cuba
Room* cuba = new Room((char*)("You are in Cuba, you finally meet Tupac!"));
cuba -> setId(12);
roomMap.insert(pair<int,char*> (11, north));
roomMap.insert(pair<int,char*> (13, south));
cuba -> setExits(roomMap);
rooms -> push_back(cuba);
roomMap.clear();
// Gaming room
Room* gamingRoom = new Room((char*)("You are in a gaming Room. Time to play Csgo"));
gamingRoom -> setId(13);
roomMap.insert(pair<int,char*> (12, north));
roomMap.insert(pair<int, char*> (14, south));
gamingRoom -> setExits(roomMap);
rooms -> push_back(gamingRoom);
roomMap.clear();
// Buisness Office
Room* buisnessOffice = new Room((char*)("You are in the buisness office. It is closed right now, in fact most of the time it is closed"));
buisnessOffice -> setId(14);
roomMap.insert(pair<int,char*> (13, north));
roomMap.insert(pair<int,char*> (15,south));
buisnessOffice -> setExits(roomMap);
rooms -> push_back(buisnessOffice);
roomMap.clear();
// Compton
Room* compton = new Room((char*)("You are in Compton. You are in imminent danger"));
compton -> setId(15);
roomMap.insert(pair<int,char*> (14, north));
compton -> setExits(roomMap);
rooms -> push_back(compton);
roomMap.clear();

}






void setItems(vector<item*>* items) {
char* band = (char*)("bandaid");
char* calc = (char*)("calculator");
char* ea = (char*)("eternal atake album");
char* trash = (char*)("trash");
char* tupac = (char*)("tupac's mixtape");


items -> push_back(new item());
items -> back() -> name = band;
items -> back() -> id = 1; 
items -> back() -> roomid = 1;

items -> push_back(new item());
items ->back() -> name = calc;
items ->back() -> id = 2;
items ->back() -> roomid = 3;

items -> push_back(new item());
items -> back() -> name = ea;
items -> back() -> id = 3;
items ->back() -> roomid = 6;

items -> push_back(new item());
items -> back() -> name = trash;
items -> back() -> id = 4;
items -> back() -> roomid = 10;

items -> push_back(new item());
items -> back() -> name = tupac;
items ->back() -> id = 5;
items ->back() -> roomid = 12;


}
