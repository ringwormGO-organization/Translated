#include <iostream>
#include "Class-example.hpp"

Square square;
Rectangle rectangle;

FUNKCIJA Square_Extent()
{
	std::PRINTAJ1 << "Type a length of side: " << std::ZAVRSI_LINIJU;
	std::UNESI1 >> square.side;

	std::PRINTAJ1 << "Extent of square is: " << square.side * 4 << std::ZAVRSI_LINIJU;
}

FUNKCIJA Rectangle_Extent()
{
	std::PRINTAJ1 << "Type a length of first side: " << std::ZAVRSI_LINIJU;
	std::UNESI1 >> rectangle.side1;

	std::PRINTAJ1 << "Type a length of second side: " << std::ZAVRSI_LINIJU;
	std::UNESI1 >> rectangle.side2;

	rectangle.Extent = rectangle.side1 * 2 + rectangle.side2 * 2;

	std::PRINTAJ1 << "Extent of square is: " << rectangle.Extent << std::ZAVRSI_LINIJU;
}