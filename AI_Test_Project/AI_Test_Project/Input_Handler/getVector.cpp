//
//  getVector.cpp
//  AI_Test_Project
//
//  Created by Luke Nasby on 10/28/20.
//  Copyright © 2020 Luke Nasby. All rights reserved.
//

#include <stdio.h>
#include "Input_Handler.hpp"
#include "Player.hpp"
#include <math.h>

vector* Input_handler::getVector(Coordinate* coord)
{
    //This will scan an image found in the config for the RGB value at that pixel...

    ImageRGB image;
    //vector* test_vector = createVector();
    //test_vector->X = 127;
    //test_vector->Y = 0;
    //test_vector->Z = 50;
    //return test_vector;
    vector* test_vector = (vector*)malloc(sizeof(vector));
    if(coord->Y > 550)
    {
        test_vector->X = 255;
        test_vector->Y = 91;
        test_vector->Z = 2;
        return test_vector;
    }else if(coord->X < 0 || coord->Y < 0)
    {
        test_vector->X = -200;
        test_vector->Y = -200;
        test_vector->Z = 200;
        return test_vector;
    }else
    {
        test_vector->X = 10;
        test_vector->Y = 10;
        test_vector->Z = 10;
        return test_vector;
    }
}

