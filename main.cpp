/*
OBJECTIVE:
    - FUNCTION: display a semi transparent, yellow square on piece and available moves when there is a left mouse click on a piece's sprite space
    - FUNCTION: when one of the yellow available move squares are clicked on, relocate chess piece to the board grid space accordingly
*/

#include <iostream>
#include <sstream>
#include <SFML/Window.hpp>
#include <SFML/Graphics.hpp>

std::string parameterDisplay(sf::Vector2i parameter);

int main()
{
    sf::RenderWindow targetBoard(sf::VideoMode(800, 800), "Chess");

    while (targetBoard.isOpen())
    {
        sf::Event event;
        while (targetBoard.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
            {
                targetBoard.close();
            }

            //textures
            sf::Texture chessBoardImage;
            sf::Texture whitePawnImage;
            sf::Texture whiteRookImage;
            sf::Texture whiteKnightImage;
            sf::Texture whiteBishopImage;
            sf::Texture whiteQueenImage;
            sf::Texture whiteKingImage;
            sf::Texture blackPawnImage;
            sf::Texture blackRookImage;
            sf::Texture blackKnightImage;
            sf::Texture blackBishopImage;
            sf::Texture blackQueenImage;
            sf::Texture blackKingImage;

            //sprites
            sf::Sprite chessBoard;
            sf::Sprite whitePawn1;
            sf::Sprite whitePawn2;
            sf::Sprite whitePawn3;
            sf::Sprite whitePawn4;
            sf::Sprite whitePawn5;
            sf::Sprite whitePawn6;
            sf::Sprite whitePawn7;
            sf::Sprite whitePawn8;
            sf::Sprite whiteRook1;
            sf::Sprite whiteRook2;
            sf::Sprite whiteKnight1;
            sf::Sprite whiteKnight2;
            sf::Sprite whiteBishop1;
            sf::Sprite whiteBishop2;
            sf::Sprite whiteQueen;
            sf::Sprite whiteKing;
            sf::Sprite blackPawn1;
            sf::Sprite blackPawn2;
            sf::Sprite blackPawn3;
            sf::Sprite blackPawn4;
            sf::Sprite blackPawn5;
            sf::Sprite blackPawn6;
            sf::Sprite blackPawn7;
            sf::Sprite blackPawn8;
            sf::Sprite blackRook1;
            sf::Sprite blackRook2;
            sf::Sprite blackKnight1;
            sf::Sprite blackKnight2;
            sf::Sprite blackBishop1;
            sf::Sprite blackBishop2;
            sf::Sprite blackQueen;
            sf::Sprite blackKing;

            //texture image loading
            chessBoardImage.loadFromFile("Black and White Chess Board.png");
            whitePawnImage.loadFromFile("w-pawn.png");
            whiteRookImage.loadFromFile("w-rook.png");
            whiteKnightImage.loadFromFile("w-knight.png");
            whiteBishopImage.loadFromFile("w-bishop.png");
            whiteQueenImage.loadFromFile("w-queen.png");
            whiteKingImage.loadFromFile("w-king.png");
            blackPawnImage.loadFromFile("b-pawn.png");
            blackRookImage.loadFromFile("b-rook.png");
            blackKnightImage.loadFromFile("b-knight.png");
            blackBishopImage.loadFromFile("b-bishop.png");
            blackQueenImage.loadFromFile("b-queen.png");
            blackKingImage.loadFromFile("b-king.png");

            //sprite texture loading
            chessBoard.setTexture(chessBoardImage);
            whitePawn1.setTexture(whitePawnImage);
            whitePawn2.setTexture(whitePawnImage);
            whitePawn3.setTexture(whitePawnImage);
            whitePawn4.setTexture(whitePawnImage);
            whitePawn5.setTexture(whitePawnImage);
            whitePawn6.setTexture(whitePawnImage);
            whitePawn7.setTexture(whitePawnImage);
            whitePawn8.setTexture(whitePawnImage);
            whiteRook1.setTexture(whiteRookImage);
            whiteRook2.setTexture(whiteRookImage);
            whiteKnight1.setTexture(whiteKnightImage);
            whiteKnight2.setTexture(whiteKnightImage);
            whiteBishop1.setTexture(whiteBishopImage);
            whiteBishop2.setTexture(whiteBishopImage);
            whiteQueen.setTexture(whiteQueenImage);
            whiteKing.setTexture(whiteKingImage);
            blackPawn1.setTexture(blackPawnImage);
            blackPawn2.setTexture(blackPawnImage);
            blackPawn3.setTexture(blackPawnImage);
            blackPawn4.setTexture(blackPawnImage);
            blackPawn5.setTexture(blackPawnImage);
            blackPawn6.setTexture(blackPawnImage);
            blackPawn7.setTexture(blackPawnImage);
            blackPawn8.setTexture(blackPawnImage);
            blackRook1.setTexture(blackRookImage);
            blackRook2.setTexture(blackRookImage);
            blackKnight1.setTexture(blackKnightImage);
            blackKnight2.setTexture(blackKnightImage);
            blackBishop1.setTexture(blackBishopImage);
            blackBishop2.setTexture(blackBishopImage);
            blackQueen.setTexture(blackQueenImage);
            blackKing.setTexture(blackKingImage);

            //sprite positioning
            whitePawn1.setPosition(0.f, 600.f);
            whitePawn2.setPosition(100.f, 600.f);
            whitePawn3.setPosition(200.f, 600.f);
            whitePawn4.setPosition(300.f, 600.f);
            whitePawn5.setPosition(400.f, 600.f);
            whitePawn6.setPosition(500.f, 600.f);
            whitePawn7.setPosition(600.f, 600.f);
            whitePawn8.setPosition(700.f, 600.f);
            whiteRook1.setPosition(0.f, 699.f);
            whiteRook2.setPosition(700.f, 699.f);
            whiteKnight1.setPosition(100.f, 699.f);
            whiteKnight2.setPosition(500.f, 699.f);
            whiteBishop1.setPosition(200.f, 699.f);
            whiteBishop2.setPosition(600.f, 699.f);
            whiteQueen.setPosition(300.f, 699.f);
            whiteKing.setPosition(400.f, 699.f);
            blackPawn1.setPosition(0.f, 105.f);
            blackPawn2.setPosition(100.f, 105.f);
            blackPawn3.setPosition(200.f, 105.f);
            blackPawn4.setPosition(300.f, 105.f);
            blackPawn5.setPosition(400.f, 105.f);
            blackPawn6.setPosition(500.f, 105.f);
            blackPawn7.setPosition(600.f, 105.f);
            blackPawn8.setPosition(700.f, 105.f);
            blackRook1.setPosition(0.f, 7.f);
            blackRook2.setPosition(700.f, 7.f);
            blackKnight1.setPosition(100.f, 7.f);
            blackKnight2.setPosition(600.f, 7.f);
            blackBishop1.setPosition(200.f, 7.f);
            blackBishop2.setPosition(500.f, 7.f);
            blackQueen.setPosition(300.f, 7.f);
            blackKing.setPosition(400.f, 7.f);

            //store sprite positioning in memory
            sf::Vector2f whitePawn1Position = whitePawn1.getPosition();
            sf::Vector2f whitePawn2Position = whitePawn2.getPosition();
            sf::Vector2f whitePawn3Position = whitePawn3.getPosition();
            sf::Vector2f whitePawn4Position = whitePawn4.getPosition();
            sf::Vector2f whitePawn5Position = whitePawn5.getPosition();
            sf::Vector2f whitePawn6Position = whitePawn6.getPosition();
            sf::Vector2f whitePawn7Position = whitePawn7.getPosition();
            sf::Vector2f whitePawn8Position = whitePawn8.getPosition();
            sf::Vector2f whiteRook1Position = whiteRook1.getPosition();
            sf::Vector2f whiteRook2Position = whiteRook2.getPosition();
            sf::Vector2f whiteKnight1Position = whiteKnight1.getPosition();
            sf::Vector2f whiteKnight2Position = whiteKnight2.getPosition();
            sf::Vector2f whiteBishop1Position = whiteBishop1.getPosition();
            sf::Vector2f whiteBishop2Position = whiteBishop2.getPosition();
            sf::Vector2f whiteQueenPosition = whiteQueen.getPosition();
            sf::Vector2f whiteKingPosition = whiteKing.getPosition();
            sf::Vector2f blackPawn1Position = blackPawn1.getPosition();
            sf::Vector2f blackPawn2Position = blackPawn2.getPosition();
            sf::Vector2f blackPawn3Position = blackPawn3.getPosition();
            sf::Vector2f blackPawn4Position = blackPawn4.getPosition();
            sf::Vector2f blackPawn5Position = blackPawn5.getPosition();
            sf::Vector2f blackPawn6Position = blackPawn6.getPosition();
            sf::Vector2f blackPawn7Position = blackPawn7.getPosition();
            sf::Vector2f blackPawn8Position = blackPawn8.getPosition();
            sf::Vector2f blackRook1Position = blackRook1.getPosition();
            sf::Vector2f blackRook2Position = blackRook2.getPosition();
            sf::Vector2f blackKnight1Position = blackKnight1.getPosition();
            sf::Vector2f blackKnight2Position = blackKnight2.getPosition();
            sf::Vector2f blackBishop1Position = blackBishop1.getPosition();
            sf::Vector2f blackBishop2Position = blackBishop2.getPosition();
            sf::Vector2f blackQueenPosition = blackQueen.getPosition();
            sf::Vector2f blackKingPosition = blackKing.getPosition();

            //draw board
            targetBoard.clear(sf::Color::White);
            targetBoard.draw(chessBoard);

            //player interaction
            sf::Vector2i cursorPositionRaw = sf::Mouse::getPosition(targetBoard);
            sf::Vector2f cursorPositionFloat = static_cast<sf::Vector2f>(cursorPositionRaw);
            if ((sf::Mouse::isButtonPressed(sf::Mouse::Left) == true) || (cursorPositionFloat == whitePawn1Position))
            {
                sf::RectangleShape moveSelection(sf::Vector2f(100.f, 100.f));
                moveSelection.setFillColor(sf::Color(255, 255, 0, 64));
                moveSelection.setPosition(whitePawn1Position);
                moveSelection.move(5.f, -3.f);
                targetBoard.draw(moveSelection);
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

            //overlay cursor position and mouse input parameter logs
            std::string cursorPositionValue = parameterDisplay(cursorPositionRaw);
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

std::string parameterDisplay(sf::Vector2i parameter)
{
    std::ostringstream stream;
    stream << "Cursor Position X: " << parameter.x << "\nCursor Position Y: " << parameter.y << "\n";

    return stream.str();
}