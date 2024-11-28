#include <iostream>
#include <sstream>
#include <SFML/Window.hpp>
#include <SFML/Graphics.hpp>
#include "../class/assets.h"
#include "../class/validMovement.h"

std::string parameterDisplay(sf::Vector2i parameter);

int main()
{
    //window
    sf::RenderWindow targetBoard(sf::VideoMode(800, 800), "Chess");
    
    //initialising objects/variables
    int pieceSelectionID = 0;

    /*
       _____                        _                       
      / ____|                      | |                      
     | |  __  __ _ _ __ ___   ___  | |     ___   ___  _ __  
     | | |_ |/ _` | '_ ` _ \ / _ \ | |    / _ \ / _ \| '_ \ 
     | |__| | (_| | | | | | |  __/ | |___| (_) | (_) | |_) |
      \_____|\__,_|_| |_| |_|\___| |______\___/ \___/| .__/ 
                                                     | |    
                                                     |_|    
    */
    while (targetBoard.isOpen())
    {
        sf::Event event;
        while (targetBoard.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
            {
                targetBoard.close();
            }
            
            //draw board
            assets gameBoard;
            gameBoard.loadNewBoard();
            targetBoard.clear(sf::Color::White);
            targetBoard.draw(gameBoard);
         
            /*
             ____  __     __   _  _  ____  ____    __  __ _  ____  ____  ____   __    ___  ____  __  __   __ _ 
            (  _ \(  )   / _\ ( \/ )(  __)(  _ \  (  )(  ( \(_  _)(  __)(  _ \ / _\  / __)(_  _)(  )/  \ (  ( \
             ) __// (_/\/    \ )  /  ) _)  )   /   )( /    /  )(   ) _)  )   //    \( (__   )(   )((  O )/    /
            (__)  \____/\_/\_/(__/  (____)(__\_)  (__)\_)__) (__) (____)(__\_)\_/\_/ \___) (__) (__)\__/ \_)__)
            */
            sf::Vector2i cursorPositionRaw = sf::Mouse::getPosition(targetBoard);
            sf::Vector2f cursorPositionFloat = static_cast<sf::Vector2f>(cursorPositionRaw);

                //handle input for piece selection behaviour
            if ((whitePawn1.getGlobalBounds().contains(cursorPositionFloat)) && (sf::Mouse::isButtonPressed(sf::Mouse::Left) == true))
            {
                pieceSelectionID = 1;
            }

            else if ((whitePawn2.getGlobalBounds().contains(cursorPositionFloat)) && (sf::Mouse::isButtonPressed(sf::Mouse::Left) == true))
            {
                pieceSelectionID = 2;
            }

            else if ((whitePawn3.getGlobalBounds().contains(cursorPositionFloat)) && (sf::Mouse::isButtonPressed(sf::Mouse::Left) == true))
            {
                pieceSelectionID = 3;
            }

            else if ((whitePawn4.getGlobalBounds().contains(cursorPositionFloat)) && (sf::Mouse::isButtonPressed(sf::Mouse::Left) == true))
            {
                pieceSelectionID = 4;
            }

            else if ((whitePawn5.getGlobalBounds().contains(cursorPositionFloat)) && (sf::Mouse::isButtonPressed(sf::Mouse::Left) == true))
            {
                pieceSelectionID = 5;
            }

            else if ((whitePawn6.getGlobalBounds().contains(cursorPositionFloat)) && (sf::Mouse::isButtonPressed(sf::Mouse::Left) == true))
            {
                pieceSelectionID = 6;
            }

            else if ((whitePawn7.getGlobalBounds().contains(cursorPositionFloat)) && (sf::Mouse::isButtonPressed(sf::Mouse::Left) == true))
            {
                pieceSelectionID = 7;
            }

            else if ((whitePawn8.getGlobalBounds().contains(cursorPositionFloat)) && (sf::Mouse::isButtonPressed(sf::Mouse::Left) == true))
            {
                pieceSelectionID = 8;
            }

            else if ((whiteRook1.getGlobalBounds().contains(cursorPositionFloat)) && (sf::Mouse::isButtonPressed(sf::Mouse::Left) == true))
            {
                pieceSelectionID = 9;
            }

            else if ((whiteRook2.getGlobalBounds().contains(cursorPositionFloat)) && (sf::Mouse::isButtonPressed(sf::Mouse::Left) == true))
            {
                pieceSelectionID = 10;
            }

            else if ((whiteKnight1.getGlobalBounds().contains(cursorPositionFloat)) && (sf::Mouse::isButtonPressed(sf::Mouse::Left) == true))
            {
                pieceSelectionID = 11;
            }

            else if ((whiteKnight2.getGlobalBounds().contains(cursorPositionFloat)) && (sf::Mouse::isButtonPressed(sf::Mouse::Left) == true))
            {
                pieceSelectionID = 12;
            }

            else if ((whiteBishop1.getGlobalBounds().contains(cursorPositionFloat)) && (sf::Mouse::isButtonPressed(sf::Mouse::Left) == true))
            {
                pieceSelectionID = 13;
            }

            else if ((whiteBishop2.getGlobalBounds().contains(cursorPositionFloat)) && (sf::Mouse::isButtonPressed(sf::Mouse::Left) == true))
            {
                pieceSelectionID = 14;
            }

            else if ((whiteQueen.getGlobalBounds().contains(cursorPositionFloat)) && (sf::Mouse::isButtonPressed(sf::Mouse::Left) == true))
            {
                pieceSelectionID = 15;
            }

            else if ((whiteKing.getGlobalBounds().contains(cursorPositionFloat)) && (sf::Mouse::isButtonPressed(sf::Mouse::Left) == true))
            {
                pieceSelectionID = 16;
            }

            else if ((blackPawn1.getGlobalBounds().contains(cursorPositionFloat)) && (sf::Mouse::isButtonPressed(sf::Mouse::Left) == true))
            {
                pieceSelectionID = 17;
            }

            else if ((blackPawn2.getGlobalBounds().contains(cursorPositionFloat)) && (sf::Mouse::isButtonPressed(sf::Mouse::Left) == true))
            {
                pieceSelectionID = 18;
            }

            else if ((blackPawn3.getGlobalBounds().contains(cursorPositionFloat)) && (sf::Mouse::isButtonPressed(sf::Mouse::Left) == true))
            {
                pieceSelectionID = 19;
            }

            else if ((blackPawn4.getGlobalBounds().contains(cursorPositionFloat)) && (sf::Mouse::isButtonPressed(sf::Mouse::Left) == true))
            {
                pieceSelectionID = 20;
            }

            else if ((blackPawn5.getGlobalBounds().contains(cursorPositionFloat)) && (sf::Mouse::isButtonPressed(sf::Mouse::Left) == true))
            {
                pieceSelectionID = 21;
            }

            else if ((blackPawn6.getGlobalBounds().contains(cursorPositionFloat)) && (sf::Mouse::isButtonPressed(sf::Mouse::Left) == true))
            {
                pieceSelectionID = 22;
            }

            else if ((blackPawn7.getGlobalBounds().contains(cursorPositionFloat)) && (sf::Mouse::isButtonPressed(sf::Mouse::Left) == true))
            {
                pieceSelectionID = 23;
            }

            else if ((blackPawn8.getGlobalBounds().contains(cursorPositionFloat)) && (sf::Mouse::isButtonPressed(sf::Mouse::Left) == true))
            {
                pieceSelectionID = 24;
            }

            else if ((blackRook1.getGlobalBounds().contains(cursorPositionFloat)) && (sf::Mouse::isButtonPressed(sf::Mouse::Left) == true))
            {
                pieceSelectionID = 25;
            }

            else if ((blackRook2.getGlobalBounds().contains(cursorPositionFloat)) && (sf::Mouse::isButtonPressed(sf::Mouse::Left) == true))
            {
                pieceSelectionID = 26;
            }

            else if ((blackKnight1.getGlobalBounds().contains(cursorPositionFloat)) && (sf::Mouse::isButtonPressed(sf::Mouse::Left) == true))
            {
                pieceSelectionID = 27;
            }

            else if ((blackKnight2.getGlobalBounds().contains(cursorPositionFloat)) && (sf::Mouse::isButtonPressed(sf::Mouse::Left) == true))
            {
                pieceSelectionID = 28;
            }

            else if ((blackBishop1.getGlobalBounds().contains(cursorPositionFloat)) && (sf::Mouse::isButtonPressed(sf::Mouse::Left) == true))
            {
                pieceSelectionID = 29;
            }

            else if ((blackBishop2.getGlobalBounds().contains(cursorPositionFloat)) && (sf::Mouse::isButtonPressed(sf::Mouse::Left) == true))
            {
                pieceSelectionID = 30;
            }

            else if ((blackQueen.getGlobalBounds().contains(cursorPositionFloat)) && (sf::Mouse::isButtonPressed(sf::Mouse::Left) == true))
            {
                pieceSelectionID = 31;
            }

            else if ((blackKing.getGlobalBounds().contains(cursorPositionFloat)) && (sf::Mouse::isButtonPressed(sf::Mouse::Left) == true))
            {
                pieceSelectionID = 32;
            }

            else if (sf::Mouse::isButtonPressed(sf::Mouse::Left) == true)
            {
                pieceSelectionID = 0;
            }

                //valid move highlighting
            switch (pieceSelectionID)
            {
            case 1:
                if (openingMove_Piece1 == false)
                {
                    moveSelection1.setFillColor(sf::Color(255, 255, 0, 96));
                    moveSelection1.setPosition(whitePawn1Position);

                    sf::RectangleShape moveSelection1_2(sf::Vector2f(0.f, 0.f));
                    /*
                    moveSelection1.move(0.f, -100.f);
                    sf::RectangleShape moveSelection1_3(moveSelection1);
                    moveSelection1.move(0.f, -100.f);
                    */

                    if ((moveSelection1_2.getGlobalBounds().contains(cursorPositionFloat)) || (sf::Mouse::isButtonPressed(sf::Mouse::Left) == true))
                    {
                        openingMove_Piece1 = true;

                    }

                    /*
                    else if ((moveSelection1_3.getGlobalBounds().contains(cursorPositionFloat)) || (sf::Mouse::isButtonPressed(sf::Mouse::Left) == true))
                    {
                        openingMove_Piece1 = true;
                    }
                    */

                    targetBoard.draw(moveSelection1);
                    targetBoard.draw(moveSelection1_2);
                    //targetBoard.draw(moveSelection1_3);
                }

                //FIX: this is constantly being triggered after user clicks for the first time
                else if (openingMove_Piece1 == true)
                {
                    moveSelection1.setFillColor(sf::Color(255, 255, 0, 96));
                    moveSelection1.setPosition(whitePawn1Position);

                    /*
                    sf::RectangleShape moveSelection1_2(moveSelection1);
                    moveSelection1.move(0.f, -100.f);

                    if ((moveSelection1_2.getGlobalBounds().contains(cursorPositionFloat)) && (sf::Mouse::isButtonPressed(sf::Mouse::Left) == true))
                    {
                        openingMove_Piece1 = true;
                    }
                    */

                    targetBoard.draw(moveSelection1);
                    //targetBoard.draw(moveSelection1_2);
                }

                else
                {
                    std::cout << "Error: Undefined Behaviour\n";
                }

                break;
            
            /*
            case 2:
                if (storedEventLoopID_2 == 0)
                {
                    storedEventLoopID_2 = eventLoopID;
                }

                moveSelection2.setFillColor(sf::Color(255, 255, 0, 96));
                moveSelection2.setPosition(whitePawn2Position);
                targetBoard.draw(moveSelection2);
                break;
            case 3:
                if (storedEventLoopID_3 == 0)
                {
                    storedEventLoopID_3 = eventLoopID;
                }

                moveSelection3.setFillColor(sf::Color(255, 255, 0, 96));
                moveSelection3.setPosition(whitePawn3Position);
                targetBoard.draw(moveSelection3);
                break;
            case 4:
                if (storedEventLoopID_4 == 0)
                {
                    storedEventLoopID_4 = eventLoopID;
                }

                moveSelection4.setFillColor(sf::Color(255, 255, 0, 96));
                moveSelection4.setPosition(whitePawn4Position);
                targetBoard.draw(moveSelection4);
                break;
            case 5:
                if (storedEventLoopID_5 == 0)
                {
                    storedEventLoopID_5 = eventLoopID;
                }

                moveSelection5.setFillColor(sf::Color(255, 255, 0, 96));
                moveSelection5.setPosition(whitePawn5Position);
                targetBoard.draw(moveSelection5);
                break;
            case 6:
                if (storedEventLoopID_6 == 0)
                {
                    storedEventLoopID_6 = eventLoopID;
                }

                moveSelection6.setFillColor(sf::Color(255, 255, 0, 96));
                moveSelection6.setPosition(whitePawn6Position);
                targetBoard.draw(moveSelection6);
                break;
            case 7:
                if (storedEventLoopID_7 == 0)
                {
                    storedEventLoopID_7 = eventLoopID;
                }

                moveSelection7.setFillColor(sf::Color(255, 255, 0, 96));
                moveSelection7.setPosition(whitePawn7Position);
                targetBoard.draw(moveSelection7);
                break;
            case 8:
                if (storedEventLoopID_8 == 0)
                {
                    storedEventLoopID_8 = eventLoopID;
                }

                moveSelection8.setFillColor(sf::Color(255, 255, 0, 96));
                moveSelection8.setPosition(whitePawn8Position);
                targetBoard.draw(moveSelection8);
                break;
            case 9:
                if (storedEventLoopID_9 == 0)
                {
                    storedEventLoopID_9 = eventLoopID;
                }

                moveSelection9.setFillColor(sf::Color(255, 255, 0, 96));
                moveSelection9.setPosition(whiteRook1Position);
                targetBoard.draw(moveSelection9);
                break;
            case 10:
                if (storedEventLoopID_10 == 0)
                {
                    storedEventLoopID_10 = eventLoopID;
                }

                moveSelection10.setFillColor(sf::Color(255, 255, 0, 96));
                moveSelection10.setPosition(whiteRook2Position);
                targetBoard.draw(moveSelection10);
                break;
            case 11:
                if (storedEventLoopID_11 == 0)
                {
                    storedEventLoopID_11 = eventLoopID;
                }

                moveSelection11.setFillColor(sf::Color(255, 255, 0, 96));
                moveSelection11.setPosition(whiteKnight1Position);
                targetBoard.draw(moveSelection11);
                break;
            case 12:
                if (storedEventLoopID_12 == 0)
                {
                    storedEventLoopID_12 = eventLoopID;
                }

                moveSelection12.setFillColor(sf::Color(255, 255, 0, 96));
                moveSelection12.setPosition(whiteKnight2Position);
                targetBoard.draw(moveSelection12);
                break;
            case 13:
                if (storedEventLoopID_13 == 0)
                {
                    storedEventLoopID_13 = eventLoopID;
                }

                moveSelection13.setFillColor(sf::Color(255, 255, 0, 96));
                moveSelection13.setPosition(whiteBishop1Position);
                targetBoard.draw(moveSelection13);
                break;
            case 14:
                if (storedEventLoopID_14 == 0)
                {
                    storedEventLoopID_14 = eventLoopID;
                }

                moveSelection14.setFillColor(sf::Color(255, 255, 0, 96));
                moveSelection14.setPosition(whiteBishop2Position);
                targetBoard.draw(moveSelection14);
                break;
            case 15:
                if (storedEventLoopID_15 == 0)
                {
                    storedEventLoopID_15 = eventLoopID;
                }

                moveSelection15.setFillColor(sf::Color(255, 255, 0, 96));
                moveSelection15.setPosition(whiteQueenPosition);
                targetBoard.draw(moveSelection15);
                break;
            case 16:
                if (storedEventLoopID_16 == 0)
                {
                    storedEventLoopID_16 = eventLoopID;
                }

                moveSelection16.setFillColor(sf::Color(255, 255, 0, 96));
                moveSelection16.setPosition(whiteKingPosition);
                targetBoard.draw(moveSelection16);
                break;
            case 17:
                if (storedEventLoopID_17 == 0)
                {
                    storedEventLoopID_17 = eventLoopID;
                }

                moveSelection17.setFillColor(sf::Color(255, 255, 0, 96));
                moveSelection17.setPosition(blackPawn1Position);
                targetBoard.draw(moveSelection17);
                break;
            case 18:
                if (storedEventLoopID_18 == 0)
                {
                    storedEventLoopID_18 = eventLoopID;
                }

                moveSelection18.setFillColor(sf::Color(255, 255, 0, 96));
                moveSelection18.setPosition(blackPawn2Position);
                targetBoard.draw(moveSelection18);
                break;
            case 19:
                if (storedEventLoopID_19 == 0)
                {
                    storedEventLoopID_19 = eventLoopID;
                }

                moveSelection19.setFillColor(sf::Color(255, 255, 0, 96));
                moveSelection19.setPosition(blackPawn3Position);
                targetBoard.draw(moveSelection19);
                break;
            case 20:
                if (storedEventLoopID_20 == 0)
                {
                    storedEventLoopID_20 = eventLoopID;
                }

                moveSelection20.setFillColor(sf::Color(255, 255, 0, 96));
                moveSelection20.setPosition(blackPawn4Position);
                targetBoard.draw(moveSelection20);
                break;
            case 21:
                if (storedEventLoopID_21 == 0)
                {
                    storedEventLoopID_21 = eventLoopID;
                }

                moveSelection21.setFillColor(sf::Color(255, 255, 0, 96));
                moveSelection21.setPosition(blackPawn5Position);
                targetBoard.draw(moveSelection21);
                break;
            case 22:
                if (storedEventLoopID_22 == 0)
                {
                    storedEventLoopID_22 = eventLoopID;
                }

                moveSelection22.setFillColor(sf::Color(255, 255, 0, 96));
                moveSelection22.setPosition(blackPawn6Position);
                targetBoard.draw(moveSelection22);
                break;
            case 23:
                if (storedEventLoopID_23 == 0)
                {
                    storedEventLoopID_23 = eventLoopID;
                }

                moveSelection23.setFillColor(sf::Color(255, 255, 0, 96));
                moveSelection23.setPosition(blackPawn7Position);
                targetBoard.draw(moveSelection23);
                break;
            case 24:
                if (storedEventLoopID_24 == 0)
                {
                    storedEventLoopID_24 = eventLoopID;
                }

                moveSelection24.setFillColor(sf::Color(255, 255, 0, 96));
                moveSelection24.setPosition(blackPawn8Position);
                targetBoard.draw(moveSelection24);
                break;
            case 25:
                if (storedEventLoopID_25 == 0)
                {
                    storedEventLoopID_25 = eventLoopID;
                }

                moveSelection25.setFillColor(sf::Color(255, 255, 0, 96));
                moveSelection25.setPosition(blackRook1Position);
                targetBoard.draw(moveSelection25);
                break;
            case 26:
                if (storedEventLoopID_26 == 0)
                {
                    storedEventLoopID_26 = eventLoopID;
                }

                moveSelection26.setFillColor(sf::Color(255, 255, 0, 96));
                moveSelection26.setPosition(blackRook2Position);
                targetBoard.draw(moveSelection26);
                break;
            case 27:
                if (storedEventLoopID_27 == 0)
                {
                    storedEventLoopID_27 = eventLoopID;
                }

                moveSelection27.setFillColor(sf::Color(255, 255, 0, 96));
                moveSelection27.setPosition(blackKnight1Position);
                targetBoard.draw(moveSelection27);
                break;
            case 28:
                if (storedEventLoopID_28 == 0)
                {
                    storedEventLoopID_28 = eventLoopID;
                }

                moveSelection28.setFillColor(sf::Color(255, 255, 0, 96));
                moveSelection28.setPosition(blackKnight2Position);
                targetBoard.draw(moveSelection28);
                break;
            case 29:
                if (storedEventLoopID_29 == 0)
                {
                    storedEventLoopID_29 = eventLoopID;
                }

                moveSelection29.setFillColor(sf::Color(255, 255, 0, 96));
                moveSelection29.setPosition(blackBishop1Position);
                targetBoard.draw(moveSelection29);
                break;
            case 30:
                if (storedEventLoopID_30 == 0)
                {
                    storedEventLoopID_30 = eventLoopID;
                }

                moveSelection30.setFillColor(sf::Color(255, 255, 0, 96));
                moveSelection30.setPosition(blackBishop2Position);
                targetBoard.draw(moveSelection30);
                break;
            case 31:
                if (storedEventLoopID_31 == 0)
                {
                    storedEventLoopID_31 = eventLoopID;
                }

                moveSelection31.setFillColor(sf::Color(255, 255, 0, 96));
                moveSelection31.setPosition(blackQueenPosition);
                targetBoard.draw(moveSelection31);
                break;
            case 32:
                if (storedEventLoopID_32 == 0)
                {
                    storedEventLoopID_32 = eventLoopID;
                }

                moveSelection32.setFillColor(sf::Color(255, 255, 0, 96));
                moveSelection32.setPosition(blackKingPosition);
                targetBoard.draw(moveSelection32);
                break;
            */

            default:
                break;
            }

            //draw pieces
            targetBoard.draw(whitePawn1);
            targetBoard.draw(whitePawn2);
            targetBoard.draw(whitePawn3);
            targetBoard.draw(whitePawn4);
            targetBoard.draw(whitePawn5);
            targetBoard.draw(whitePawn6);
            targetBoard.draw(whitePawn7);
            targetBoard.draw(whitePawn8);
            targetBoard.draw(whiteRook1);
            targetBoard.draw(whiteRook2);
            targetBoard.draw(whiteKnight1);
            targetBoard.draw(whiteKnight2);
            targetBoard.draw(whiteBishop1);
            targetBoard.draw(whiteBishop2);
            targetBoard.draw(whiteQueen);
            targetBoard.draw(whiteKing);
            targetBoard.draw(blackPawn1);
            targetBoard.draw(blackPawn2);
            targetBoard.draw(blackPawn3);
            targetBoard.draw(blackPawn4);
            targetBoard.draw(blackPawn5);
            targetBoard.draw(blackPawn6);
            targetBoard.draw(blackPawn7);
            targetBoard.draw(blackPawn8);
            targetBoard.draw(blackRook1);
            targetBoard.draw(blackRook2);
            targetBoard.draw(blackKnight1);
            targetBoard.draw(blackKnight2);
            targetBoard.draw(blackBishop1);
            targetBoard.draw(blackBishop2);
            targetBoard.draw(blackQueen);
            targetBoard.draw(blackKing);

            //CLI logging
            loopID++;

            std::cout << "\nLoop ID: " << loopID << "\n";
            std::cout << "openingMove_Piece1 Boolean Value: " << openingMove_Piece1 << "\n";

            //CLI + GUI logging
            std::string cursorPositionValue = parameterDisplay(cursorPositionRaw);
            std::cout << cursorPositionValue;

            sf::Font cursorPositionFont;
            sf::Text cursorPosition;
            cursorPositionFont.loadFromFile("calibri-regular.ttf");
            cursorPosition.setFont(cursorPositionFont);
            cursorPosition.setString(cursorPositionValue);
            cursorPosition.setCharacterSize(15);
            cursorPosition.setFillColor(sf::Color::Green);
            cursorPosition.setOutlineColor(sf::Color::Black);
            cursorPosition.setOutlineThickness(2);
            cursorPosition.setStyle(sf::Text::Bold);
            targetBoard.draw(cursorPosition);

            if (sf::Mouse::isButtonPressed(sf::Mouse::Left) == true)
            {
                std::cout << "LMB Pressed\n";
                
                sf::Font leftMouseButtonLogFont;
                sf::Text leftMouseButtonLog;
                leftMouseButtonLogFont.loadFromFile("calibri-regular.ttf");
                leftMouseButtonLog.setFont(leftMouseButtonLogFont);
                leftMouseButtonLog.setString("Last Pressed: Left Mouse Button");
                leftMouseButtonLog.setCharacterSize(15);
                leftMouseButtonLog.setFillColor(sf::Color::Green);
                leftMouseButtonLog.setOutlineColor(sf::Color::Black);
                leftMouseButtonLog.setOutlineThickness(2);
                leftMouseButtonLog.setStyle(sf::Text::Bold);
                leftMouseButtonLog.setPosition(0.f, 35.f);
                targetBoard.draw(leftMouseButtonLog);
            }
            else if (sf::Mouse::isButtonPressed(sf::Mouse::Right) == true)
            {
                std::cout << "RMB Pressed\n";

                sf::Font rightMouseButtonLogFont;
                sf::Text rightMouseButtonLog;
                rightMouseButtonLogFont.loadFromFile("calibri-regular.ttf");
                rightMouseButtonLog.setFont(rightMouseButtonLogFont);
                rightMouseButtonLog.setString("Last Pressed: Right Mouse Button");
                rightMouseButtonLog.setCharacterSize(15);
                rightMouseButtonLog.setFillColor(sf::Color::Green);
                rightMouseButtonLog.setOutlineColor(sf::Color::Black);
                rightMouseButtonLog.setOutlineThickness(2);
                rightMouseButtonLog.setStyle(sf::Text::Bold);
                rightMouseButtonLog.setPosition(0.f, 35.f);
                targetBoard.draw(rightMouseButtonLog);
            }

            //display game
            targetBoard.display();
        }
    }

    return 0;
}

//transpose cursor position values submitted as the function argument as a string
std::string parameterDisplay(sf::Vector2i parameter)
{
    std::ostringstream stream;
    stream << "Cursor Position X: " << parameter.x << "\nCursor Position Y: " << parameter.y << "\n";

    return stream.str();
}