#include <iostream>
using namespace std;
class Room { 
    public:
        inline static int NumOfRooms;
        int XCord;
        int YCord;
        Room(){
            NumOfRooms ++;
            // When creating the 55 rooms, keeps track of how many have been created.
            YCord = (NumOfRooms - 1) / 11; 
            // When creating the 55 rooms this assigns y values
            if (NumOfRooms % 11 - 1 != -1){
                XCord = NumOfRooms % 11 - 1;
            }
            else {
                XCord = 10;
            }
            // When creating the 55 rooms this assigns x values
        }
};
int main() 
{
    Room Rooms[5][11]; 
    // Creates 55 Room objects. Array of 11 nested in a Array of 5. Rooms[y][x]
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 11; j++) {
            cout << "(" << Rooms[i][j].XCord << ", " << Rooms[i][j].YCord << ")\n";
        }
    }
    // Loops through all the rooms in the maze and prints out info to test. 
    return 0;
}