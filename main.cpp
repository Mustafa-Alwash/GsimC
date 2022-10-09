#include <SFML/Graphics.hpp>


class source{
    sf::Vector2f pos;
    float force;
    sf::CircleShape sun;
    
public:
    source(float pos_x ,float pos_y ,float force){
        pos.x = pos_x;
        pos.y = pos_y;
        this->force = force;
    }
    
    sun.setPosition(pos);
    sun.setFullColor(sf::Color::Yellow);
    sun.setRadius(5);
    
    void render(sf::RenderWindow& rend){
        rend.draw(sun);
    }
}


int main(){
    sf::RenderWindow window(sf::VideoMode(1280,720), "MY PROGRAM");
    window.setFramerateLimit(60);
    
    
    while(window.isOpen()){
        sf::Event event;
        while(window.pollEvent(event) ){
            if(event.type  == sf::Event::Close){ window.close()};
            
            if(sf::Keyboard::Keyboard.isPressed(sf::Keyboard::Escape)){ window.close()};
        }
        
        window.clear();
        window.display();
    }
    
    retrun 0;
}
