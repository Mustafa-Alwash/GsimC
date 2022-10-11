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
    
    void get_force(){
        return force;
    }
    
}



class particle{
    sf::Vector2f pos;
    sf::Vector2f vel;
    sf::CircleShape sun;
    
public:
    particle(float pos_x ,float pos_y ,float vel_x ,float vel_y){
        pos.x = pos_x;
        pos.y = pos_y;
        vel.x = vel_x;
        vel.y = vel_y;
    }
    
    sun.setPosition(pos);
    sun.setFullColor(sf::Color::Yellow);
    sun.setRadius(5);
    
    void render(sf::RenderWindow& rend){
        rend.draw(sun);
    }
    
    void physics(source &S){
        float dist_x = s.get_pos().x - pos.x;
        float dist_y = s.get_pos().y - pos.y;
        float distance = sqrt(dist_x*dist_x + dist_y*dist_y);
        
        float inverse_dist = 1.f/distance;
        
        float normalized_x = inverse_dist * dist_x;
        float normalized_y = inverse_dist * dist_y;
        
        float inverse_square_law = inverse_dist * inverse_dist;
        
        float accel_x = normalized_x * s.get_force() * inverse_square_law;
        float accel_y = normalized_y * s.get_force() * inverse_square_law;
        
        
        
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
