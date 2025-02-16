#include<stdio.h>
#include<string.h>
int main(){
	typedef struct pokemon{
		int speed;
		int attack;
		char type[20];
	}pokemon;

	typedef struct legendaryPokemon{
		pokemon p1;
		char ability[20];
	}legendaryPokemon;
	pokemon pikachu ={100,70,"electric"};
	pokemon charizard ={80,120,"fire"};
	legendaryPokemon mewtwo;
	mewtwo.p1.attack=130;
	mewtwo.p1.speed=150;

	starcpy(mewtwo.p1.type,"psychic");
	starcpy(mewtwo.ability,"pressure");

	
	
	

	return 0;
	
}