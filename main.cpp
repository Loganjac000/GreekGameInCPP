#include <iostream>
using namespace std;
class Room { 
    public:
        string type;
        Room(){
            cout << "Created" << endl;
        }
};
class Maze {
    public:
        Room rooms[5][11];
};
int main() 
{
    Maze myMaze;
    return 0;
}