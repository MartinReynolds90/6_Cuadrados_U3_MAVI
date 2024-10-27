#include "SFML/Graphics.hpp"
#include "iostream"

using namespace sf;
using namespace std;

//CUADRADOS - CUADRADOS - CUADRADOS - CUADRADOS - CUADRADOS - CUADRADOS - CUADRADOS - CUADRADOS - ///////////
int main(){
	RenderWindow ventana(VideoMode(800,600),"Cuadrados");
	
	Texture cuad_rojo, cuad_amarillo, cuad_negro,cuad_azul;;
	cuad_rojo.loadFromFile("cuad_red.png");
	cuad_amarillo.loadFromFile("cuad_yellow.png");
	cuad_negro.loadFromFile("chessb.png");
	cuad_azul.loadFromFile("cuad_blue.png");
	
	Sprite sprite_rojo,sprite_amarillo,sprite_negro,sprite_azul;
	sprite_rojo.setTexture(cuad_rojo);
	sprite_amarillo.setTexture(cuad_amarillo);
	sprite_negro.setTexture(cuad_negro);
	sprite_azul.setTexture(cuad_azul);
	
	sprite_amarillo.setScale(0.25,0.25);
	sprite_rojo.setScale(0.5,0.5);
	sprite_rojo.setPosition(272,122);
	sprite_amarillo.setPosition(400,122);
	sprite_negro.setPosition(400,250);
	sprite_azul.setPosition(272,250);
	
	
	while(ventana.isOpen()){
		ventana.clear(Color::White);
		ventana.draw(sprite_rojo);
		ventana.draw(sprite_amarillo);
		ventana.draw(sprite_negro);
		ventana.draw(sprite_azul);
		ventana.display();
		
	}

	return 0;
}
