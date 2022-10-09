#include <SMFL/Graphics.hpp>





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
