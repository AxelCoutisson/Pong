#pragma once
#include "pong.cpp"
class Pong
{
    public:
    Pong();
    ~Pong() = default;

    void game_loop();
    void update(double delta time);
    void draw();

    private:
    SDL_Window *m_game_window;
    SDL_EVENT m_game_window_event;
    SDL_Renderer *m_game_window_renderer;
};