#include <iostream>
#include <SFML/Graphics.hpp>

class Tile{
};

class Terrain{
};

/*
Will include Dirt, plants, Rock,
, WoodFloor, StoneFloor, VolcanicFloor,
Trap, Wall, Swamp, Snow, Ice, Lava
*/
class Plant{
};
/*Trees, weeds, bushes, flowers, cactuses, mushrooms
*/

class Water{
};
/* RiverWater, LakeWater, SeaWater,
ThermalWater*/

class Body{
};

class Player{
};

class NPC{
};

class Item{
};

class Buildings{
};

// Main Menu
// Pause Menu
// Stats
// Inventory
// Combat Skills
// Survival Tree
// Log Book (Lore and Quests)
// Community Board (Quests and Renoun)
// Saving

int main(){
    
    std::cout<<"Hello World\n";
    sf::RenderWindow window(sf::VideoMode(200, 200), "SFML works!");
    sf::CircleShape shape(100.f);
    shape.setFillColor(sf::Color::Green);

    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
        }

        window.clear();
        window.draw(shape);
        window.display();
    }

    return 0;
}