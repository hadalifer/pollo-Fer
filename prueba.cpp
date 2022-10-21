#include <SFML/Graphics.hpp>

int main()
{
    sf::RenderWindow window(sf::VideoMode(500, 900), "SFML works!");
   
    sf::CircleShape shape2 (200.f);
     shape2.setFillColor(sf::Color::Yellow);
     shape2.setPosition(sf::Vector2f(50, 160));
    sf::CircleShape triangle(75, 3);
     triangle.setFillColor(sf::Color(253,107,43));
     triangle.rotate(180.f);
     triangle.setPosition(sf::Vector2f(330, 530));
    sf::CircleShape ojo1(80.f);
     ojo1.setFillColor(sf::Color::White);
     ojo1.setPosition(sf::Vector2f(92, 230));
    sf::CircleShape ojo2(80.f);
     ojo2.setFillColor(sf::Color::White);
     ojo2.setPosition(sf::Vector2f(243, 230));
    sf::CircleShape negro1(60.f);
     negro1.setFillColor(sf::Color::Black);
     negro1.setPosition(sf::Vector2f(265, 252));
    sf::CircleShape negro2(60.f);
     negro2.setFillColor(sf::Color::Black);
     negro2.setPosition(sf::Vector2f(110, 252));
    sf::CircleShape blanco1(20.f);
     blanco1.setFillColor(sf::Color::White);
     blanco1.setPosition(sf::Vector2f(190,265));
    sf::CircleShape blanco2(20.f);
     blanco2.setFillColor(sf::Color::White);
     blanco2.setPosition(sf::Vector2f(345, 265));
    sf::CircleShape triangle2(38, 3);
     triangle2.setFillColor(sf::Color(235, 146, 23));
     triangle2.rotate(180.f);
     triangle2.setPosition(sf::Vector2f(293, 530));
    sf::CircleShape pelo1(25.f);
     pelo1.setScale(2, 1);
     pelo1.setFillColor(sf::Color (231,187,51));
     pelo1.rotate(130.f);
     pelo1.setPosition(340, 115);
    sf::CircleShape pelo2(25.f);
     pelo2.setScale(3, 1);
     pelo2.setFillColor(sf::Color(231, 187, 51));
     pelo2.rotate(45.f);
     pelo2.setPosition(165, 60);
     sf::CircleShape cuerpo1(220.f);
     cuerpo1.setScale(1.5, 1);
     cuerpo1.rotate(90.f);
     cuerpo1.setFillColor(sf::Color::Yellow);
     cuerpo1.setPosition(480, 450);
     sf::CircleShape cuello(230.f);
     cuello.setFillColor(sf::Color::Black);
     cuello.setPosition(sf::Vector2f(20, 105));
     sf::CircleShape ala1(60.f);
     ala1.setFillColor(sf::Color(231, 187, 51));
     ala1.rotate(81.f);
     ala1.setPosition(463, 575);
     ala1.setScale(2.5, 1);
     sf::CircleShape ala2(60.f);
     ala2.setFillColor(sf::Color(231, 187, 51));
     ala2.rotate(100.f);
     ala2.setPosition(180, 590);
     ala2.setScale(2.5, 1);
     sf::CircleShape pansa(140.f);
     pansa.setFillColor(sf::Color(240,223,74));
     pansa.rotate(90.f);
     pansa.setPosition(400, 590);
     pansa.setScale(1.5, 1);


     while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
        }

        window.clear();
        window.draw(cuerpo1);
        window.draw(cuello);
        window.draw(pelo1);
        window.draw(pelo2);
        window.draw(shape2);
        window.draw(triangle);
        window.draw(triangle2);
        window.draw(ojo1);
        window.draw(ojo2);
        window.draw(negro1);
        window.draw(negro2);
        window.draw(blanco1);
        window.draw(blanco2);
        window.draw(pansa);
        window.draw(ala1);
        window.draw(ala2);
        
       // window.draw(cuello);

       
        window.display();
    }

    return 0;
}