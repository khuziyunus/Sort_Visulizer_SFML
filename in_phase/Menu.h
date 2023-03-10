#pragma once
#include<SFML/Graphics.hpp>
#include<iostream>
using namespace std;
using namespace sf;

#define Max_Main_Menue 4

class MainMenu
{

    private:
        int MainMenuSelected;
        Font font;
        Text mainMenu[Max_Main_Menue];
    public:
        MainMenu(float width, float height);

        void draw(RenderWindow& window);
        void MoveUp();
        void MoveDown();

        int MainMenuPressed()
        {
            return MainMenuSelected;
        }

~MainMenu();

};


