#include "Neighbours.h"

Moore::Moore()
{
	int i = 0;
    for(int z=-1; z<2; z++)
    {
        for (int x = -1; x < 2; x++)
        {
            for (int y = -1; y < 2; y++)
            {
                if (x == 0 && y == 0 && z==0)pos[26] = { x,y,z };
                else
                {
                    pos[i] = { x,y, z };
                    i++;
                }
            }
        }
    }
}


vec Moore::getNext()
{
	static int index = -1;
	index++;
    if (index == 27) index = 0;
	return pos[index]; 
}

VonNeumann::VonNeumann()
{
	int i = 0;
    for(int z=-1; z<2; z++)
    {
        for (int x = -1; x < 2; x++)
        {
            for (int y = -1; y < 2; y++)
            {
                if (x == 0 && y == 0 && z==0)pos[6] = { x,y,z };
                else if (abs(x) == abs(y) || abs(x) == abs(z) || abs(y) == abs(z))continue;
                else
                {
                    pos[i] = { x,y, z };
                    i++;
                }
            }
        }
    }
}

vec VonNeumann::getNext()
{
	static int index = -1;
	index++;
    if (index == 7) index = 0;
	return pos[index];
}

Random::Random()
{
	int i = 0;
    for(int z=-1; z<2; z++)
    {
        for (int x = -1; x < 2; x++)
       {
            for (int y = -1; y < 2; y++)
            {
                if (x == 0 && y == 0 && z==0)pos[26] = { 0,0,0 };
                else
                {
                    pos[i] = { x,y, z };
                    i++;
                }
            }
        }
    }
}

vec Random::getNext()
{
    static int i = std::abs(std::rand()%26);
	i++;
	static int index = -1;
	index++;
    if (index == 15)
	{
        i = std::abs(std::rand() % 26);
		index = 0;
        return pos[26];
	}
    else if (i >= 26)i = 0;
	return pos[i];
}

