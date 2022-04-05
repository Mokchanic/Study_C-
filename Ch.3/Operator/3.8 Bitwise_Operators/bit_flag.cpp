#include <iostream>
#include <bitset>

using namespace std;

int main()
{
	const unsigned int red_mask = 0xFF0000;
	const unsigned int green_mask = 0x00FF00;
	const unsigned int blue_mask = 0x0000FF;
	
	/*
	cout << std::bitset<32>(red_mask) << endl;
	cout << std::bitset<32>(green_mask) << endl;
	cout << std::bitset<32>(blue_mask) << endl;
	*/

	//°ñµå
	unsigned int pixel_color = 0xDAA520; // DA: red, A5: green, 20: blue

	cout << std::bitset<32>(pixel_color) << endl;

	unsigned char red = (pixel_color & red_mask) >> 16;
	unsigned char green = (pixel_color & green_mask) >> 8;
	unsigned char blue = pixel_color & blue_mask;



	cout << "red: " << bitset<8>(pixel_color) << "\t" << "decimal: " << " " << int(red) << endl;
	cout << "blue: " << bitset<8>(pixel_color) << "\t" << "decimal: " << " " << int(blue) << endl;
	cout << "green: " << bitset<8>(pixel_color) << "\t" << "decimal: " << " " << int(green) << endl;

	return 0;
}