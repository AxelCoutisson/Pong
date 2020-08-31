#pragma one
#include <SDL2/SDL.h>

class GameWindow
{
    public:
        GameWindow();
        ~GameWindow();

        void init();
        void update(int heightLeftBar, int heightRighBar, int xPosBall, int yPosBall, int scoreJ1, int scoreJ2);

    
    private:
        void createWindow();

        void drawLeftBar(int height);
        void drawRightBar(int height);
        void drawBall(int xPos, int Ypos);
    
        void drawScore(int scoreJ1, int scoreJ2);

        void drawRect(int xPos, int yPos, int width, int height, SDL_Color color);
};