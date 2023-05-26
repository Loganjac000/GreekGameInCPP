#include <iostream>
#include <cmath>
using namespace std;
class Room { 
    public:
        inline static int NumOfRooms;
        int XCord;
        int YCord;
        int RoomType;
        Room(){
            NumOfRooms ++;
            // When creating the 55 rooms, keeps track of how many have been created. ahhhh
            YCord = (NumOfRooms - 1) / 11; 
            // When creating the 55 rooms this assigns y values
            if (NumOfRooms % 11 - 1 != -1){
                XCord = NumOfRooms % 11 - 1;
            }
            else {
                XCord = 10;
            }
            // When creating the 55 rooms this assigns x values
            RoomType = 1;
        }
};
void Display(Room Rooms[5][11], string DisplayRoomTypes[16][3]){
    cout << "____________________________________\n";

    for (int i = 0; i < 5; i++) {
        for (int n = 0; n < 3; n++) {
            cout << "|| ";
            for (int j = 0; j < 11; j++) {
                cout << DisplayRoomTypes[Rooms[i][j].RoomType][n];
            }
            cout << " ||\n";
        }

    }
}
int main() 
{
    Room Rooms[5][11]; 
    string DisplayRoomTypes[16][3] = {
        {"   ", "   ", "   "}, // Empty---------------0
        {" | ", "-+-", " | "}, // FourWay-------------1
        {" | ", " | ", " | "}, // Verticle------------2
        {"   ", "---", "   "}, // Horizantle----------3
        {" | ", "-+-", "   "}, // No Bottom-----------4
        {" | ", " +-", " | "}, // No Left-------------5
        {" | ", "-+ ", " | "}, // No Right------------6
        {"   ", "-+-", " | "}, // No Up---------------7
        {" | ", "-+ ", "   "}, // Up & Left-----------8
        {" | ", " +-", "   "}, // Up & Right----------9
        {"   ", "-+ ", " | "}, // Bottom & Left-------10
        {"   ", " +-", " | "}, // Bottom & Right------11
        {" | ", " X ", "   "}, // Deadend from Up-----12
        {"   ", "-X ", "   "}, // Deadend from Left---13
        {"   ", " X ", " | "}, // Deadend from Bottom-14
        {"   ", " X-", "   "}  // Deadend from Right--15
    };
    // Creates 55 Room objects. Array of 11 nested in a Array of 5. Rooms[y][x]
    Display(Rooms, DisplayRoomTypes);
    return 0;
}