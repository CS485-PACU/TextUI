//***************************************************************************
// File name:   main.cpp
// Author:      
// Date:        
// Class:       
// Assignment:  
// Purpose:     
//***************************************************************************

#include <iostream>
#include <vector> 
#include <string>
#include "../include/TextUI.h"
#include "../include/TextUITextWidget.h"

TextUITextWidget cName ("Name", "");
TextUITextWidget cCourse ("Course", "");

void setName(std::string value)
{
    cName.setData(value);
}

//***************************************************************************
// Function:    main
//
// Description: Print hi!
//
// Parameters:  none
//
// Returned:    EXIT_SUCCESS
//***************************************************************************
int main()
{
    TextUI cTextUI(std::cout, std::cin);

    cTextUI.addWidget(3,3, &cName);
    cTextUI.addWidget(4,4, &cCourse);

    cTextUI.registerEvent("SETNAME", setName);

    cTextUI.UIEventLoop();

    std::cout << "hi";  
    return EXIT_SUCCESS;
}
