#include <iostream>
#include <string>
#include <stdint.h>
#define STB_IMAGE_IMPLEMENTATION
#include "stb_image.h"

char const* read_file() {
	char * in = new char[256];
	std::cout << "Enter file name";
	std::cin >> in;
	return in;
}

int main()
{
	int width, height, bpp;

	const char* filename;

	filename = read_file();

	uint8_t* main_image = stbi_load(filename, &width, &height, &bpp, 3);

	stbi_image_free(main_image);
}




