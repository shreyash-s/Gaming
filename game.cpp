/*Your program must allow Thor to reach the light of power.
Thor moves on a map which is 40 wide by 18 high. Note that the coordinates (X and Y) start at the top left! This means the most top left cell has the coordinates "X=0,Y=0" and the most bottom right one has the coordinates "X=39,Y=17".

Once the program starts you are given:
the variable lightX: the X position of the light of power that Thor must reach.
the variable lightY: the Y position of the light of power that Thor must reach.
the variable initialTX: the starting X position of Thor.
the variable initialTY: the starting Y position of Thor.
At the end of the game turn, you must output the direction in which you want Thor to go among:

Constraints: 4 integers lightX lightY initialTX initialTY.
(lightX, lightY) indicates the position of the light.
(initialTX, initialTY) indicates the initial position of Thor.
0 ≤ lightX < 40
0 ≤ lightY < 18
0 ≤ initialTX < 40
0 ≤ initialTY < 18
Response time for a game round ≤ 100ms

Story:
The final battle of Ragnarök, the twilight of the gods is approaching. 
You incarnate Thor who is participating in this final battle against all the forces of evil, led by Loki, Thor's wizard brother.

Thor was wounded during a previous battle against Fenrir, the wolf-god. During the battle, Loki took advantage of the general confusion and used his magic to annihilate the magical powers of Thor’s hammer, Mjöllnir, by separating it from his soul: the light of power.

Thor, who now feels very weak, must find and reach the light of power, as fast as possible, since it is the only thing which can restore his and Mjollnir's powers.
*/

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;


int main()
{
    int light_x; // the X position of the light of power
    int light_y; // the Y position of the light of power
    int initial_tx; // Thor's starting X position
    int initial_ty; // Thor's starting Y position
    cin >> light_x >> light_y >> initial_tx >> initial_ty; cin.ignore();
   
    // game loop
    while (1) {
        int remaining_turns; // The remaining amount of turns Thor can move. Do not remove this line.
        cin >> remaining_turns; cin.ignore();
          string dirX = "";
          string dirY = "";

        if(initial_tx > light_x && initial_ty > light_y){
            
            initial_tx--;
            dirX = "W";
            initial_ty--;
            dirY = "N";
        }
        else if(initial_tx < light_x && initial_ty < light_y ){
            initial_tx++;
            dirX = "E";
            initial_ty++;
            dirY = "S";
        }
        else if(initial_tx < light_x && initial_ty > light_y){

            initial_tx++;
            dirX = "E";
            initial_ty--;
            dirY = "N";
        }

        else if(initial_tx > light_x && initial_ty < light_y){
            initial_tx--;
            dirX = "W";
            initial_ty++;
            dirY = "S";
        }
        else if(initial_tx > light_x){
            initial_tx--;
            dirX = "W";
        }
        else if(initial_ty > light_y){
            initial_ty--;
            dirY = "N";
        }
        else if(initial_ty < light_y){
            initial_ty++;
            dirY = "S";
        }
        else if(initial_tx < light_x){
            initial_tx++;
            dirX = "E";
        }


        
        
        cout<<dirY<<dirX<<endl;;

    }
}