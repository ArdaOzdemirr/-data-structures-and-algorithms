#include <iostream>
using namespace std;


class Robot {
private:

	int x, y; // 2 boyutlu robotun bulunduğu düzlem.
	char direction; // Başlangıç konumu N,S,E,W.

public:
	/*
	* Başlangıc konumunu x,y (0,0) olarak ayarlandı.
	* Başlangıcta kuzeye "N" ye bakıyor.
	*/
	Robot() {
		x = 0;
		y = 0;
		direction = 'N';

	}
	// Robotu "turn" komutu ile sağa 90 derece döndürür
	void turn() {
		switch (direction)
		{
		case 'N':
			direction = 'E';
			break;

		case 'E':
			direction = 'S';
			break;

		case 'S':
			direction = 'W';
			break;

		case 'W':
			direction = 'N';
			break;
		}
			}
	//Robotu "move" komutu ile 1 birim ilerletir
	void move(){
		switch(direction){
		case 'N':
			direction = 'y+=1';
			break;

		case 'E':
			direction = 'x+=1';
			break;

		case 'S':
			direction = 'y-=1';
			break;

		case 'W':
			direction = 'x-=1';
			break;
		}
	}
	// Robotun Şu anki konumunu yazdırma
	void display() const {
		cout << "Current Position: (" << x << ", " << y << ")" << endl;
	}
};

int main()
{
		Robot robot;

		// Başlangıç konumunu yazdır
		cout << "Starting Position: ";
		robot.display();

		// Robotu hareket ettir
		robot.move(); // Kuzey yönünde 1 birim ilerler
		robot.turn(); // Sağa dönüp doğuya bakar
		robot.move(); // Doğu yönünde 1 birim ilerler
		robot.move(); // Doğu yönünde 1 birim daha ilerler
		robot.turn(); // Sağa dönüp güneye bakar
		robot.move(); // Güney yönünde 1 birim ilerler

		// Son konumu yazdır
		cout << "Final Position: ";
		robot.display();

		return 0;
}

