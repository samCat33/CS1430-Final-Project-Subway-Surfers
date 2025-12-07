#ifndef GAMEOBJECTS_H
#define GAMEOBJECTS_H

struct Obstacle {
    int lane;
    float y;
    int type;
    bool active;

    //Description: Returns x coordinate of obstacle
    //Return: int
    //Precondition: x coordinate of obstacle exists
    //Postcondition: x coordinate is not modified
    int getX() const;
    //Description: Returns width of obstacle
    //Return: int
    //Precondition: width of obstacle exists
    //Postcondition: width of obstacle is not modified
    int getWidth() const;
    //Description: Returns height of obstacle
    //Return: int
    //Precondition: height of obstacle exists
    //Postcondition: height of obstacle is not modified
    int getHeight() const;
};

struct Collectible {
    int lane;
    float y;
    int type;
    bool active;
    float animTime;

    //Descritption: Retuns x coord of collectible
    //Return: int
    //Precondition: x coordinate of collectible exists
    //Postcondition: x coordinate of collectible is not modified
    int getX() const;
};

struct Particle {
    float x, y, vx, vy;
    int r, g, b;
    float life, maxLife;
    int size;
};

#endif
