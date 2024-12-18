#pragma once

#include <SFML/Window.hpp>
#include <SFML/Graphics.hpp>

class assets
{
private:
    sf::VertexArray boardGrid;

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

    sf::Vector2f whitePawn1Position;
    sf::Vector2f whitePawn2Position;
    sf::Vector2f whitePawn3Position;
    sf::Vector2f whitePawn4Position;
    sf::Vector2f whitePawn5Position;
    sf::Vector2f whitePawn6Position;
    sf::Vector2f whitePawn7Position;
    sf::Vector2f whitePawn8Position;
    sf::Vector2f whiteRook1Position;
    sf::Vector2f whiteRook2Position;
    sf::Vector2f whiteKnight1Position;
    sf::Vector2f whiteKnight2Position;
    sf::Vector2f whiteBishop1Position;
    sf::Vector2f whiteBishop2Position;
    sf::Vector2f whiteQueenPosition;
    sf::Vector2f whiteKingPosition;
    sf::Vector2f blackPawn1Position;
    sf::Vector2f blackPawn2Position;
    sf::Vector2f blackPawn3Position;
    sf::Vector2f blackPawn4Position;
    sf::Vector2f blackPawn5Position;
    sf::Vector2f blackPawn6Position;
    sf::Vector2f blackPawn7Position;
    sf::Vector2f blackPawn8Position;
    sf::Vector2f blackRook1Position;
    sf::Vector2f blackRook2Position;
    sf::Vector2f blackKnight1Position;
    sf::Vector2f blackKnight2Position;
    sf::Vector2f blackBishop1Position;
    sf::Vector2f blackBishop2Position;
    sf::Vector2f blackQueenPosition;
    sf::Vector2f blackKingPosition;

public:
    void loadTextures()
    {
        //texture image loading
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
    }

    void loadNewBoard(sf::VertexArray boardGrid)
    {
        //chess board (192 vertices of black squares)
        sf::VertexArray boardGrid(sf::Triangles, 192);
        //row 8
        boardGrid[0].position = sf::Vector2f(100.f, 0.f);
        boardGrid[1].position = sf::Vector2f(100.f, 100.f);
        boardGrid[2].position = sf::Vector2f(200.f, 0.f);
        boardGrid[3].position = sf::Vector2f(200.f, 0.f);
        boardGrid[4].position = sf::Vector2f(200.f, 100.f);
        boardGrid[5].position = sf::Vector2f(100.f, 100.f);

        boardGrid[6].position = sf::Vector2f(300.f, 0.f);
        boardGrid[7].position = sf::Vector2f(300.f, 100.f);
        boardGrid[8].position = sf::Vector2f(400.f, 0.f);
        boardGrid[9].position = sf::Vector2f(400.f, 0.f);
        boardGrid[10].position = sf::Vector2f(400.f, 100.f);
        boardGrid[11].position = sf::Vector2f(300.f, 100.f);

        boardGrid[12].position = sf::Vector2f(500.f, 0.f);
        boardGrid[13].position = sf::Vector2f(500.f, 100.f);
        boardGrid[14].position = sf::Vector2f(600.f, 0.f);
        boardGrid[15].position = sf::Vector2f(600.f, 0.f);
        boardGrid[16].position = sf::Vector2f(600.f, 100.f);
        boardGrid[17].position = sf::Vector2f(500.f, 100.f);

        boardGrid[18].position = sf::Vector2f(700.f, 0.f);
        boardGrid[19].position = sf::Vector2f(700.f, 100.f);
        boardGrid[20].position = sf::Vector2f(800.f, 0.f);
        boardGrid[21].position = sf::Vector2f(800.f, 0.f);
        boardGrid[22].position = sf::Vector2f(800.f, 100.f);
        boardGrid[23].position = sf::Vector2f(700.f, 100.f);
        //row 7
        boardGrid[24].position = sf::Vector2f(0.f, 100.f);
        boardGrid[25].position = sf::Vector2f(100.f, 100.f);
        boardGrid[26].position = sf::Vector2f(0.f, 200.f);
        boardGrid[27].position = sf::Vector2f(0.f, 200.f);
        boardGrid[28].position = sf::Vector2f(100.f, 100.f);
        boardGrid[29].position = sf::Vector2f(100.f, 200.f);

        boardGrid[30].position = sf::Vector2f(200.f, 100.f);
        boardGrid[31].position = sf::Vector2f(300.f, 100.f);
        boardGrid[32].position = sf::Vector2f(200.f, 200.f);
        boardGrid[33].position = sf::Vector2f(200.f, 200.f);
        boardGrid[34].position = sf::Vector2f(300.f, 100.f);
        boardGrid[35].position = sf::Vector2f(300.f, 200.f);

        boardGrid[36].position = sf::Vector2f(400.f, 100.f);
        boardGrid[37].position = sf::Vector2f(500.f, 100.f);
        boardGrid[38].position = sf::Vector2f(400.f, 200.f);
        boardGrid[39].position = sf::Vector2f(400.f, 200.f);
        boardGrid[40].position = sf::Vector2f(500.f, 100.f);
        boardGrid[41].position = sf::Vector2f(500.f, 200.f);

        boardGrid[42].position = sf::Vector2f(600.f, 100.f);
        boardGrid[43].position = sf::Vector2f(700.f, 100.f);
        boardGrid[44].position = sf::Vector2f(600.f, 200.f);
        boardGrid[45].position = sf::Vector2f(600.f, 200.f);
        boardGrid[46].position = sf::Vector2f(700.f, 100.f);
        boardGrid[47].position = sf::Vector2f(700.f, 200.f);
        //row 6
        boardGrid[48].position = sf::Vector2f(100.f, 200.f);
        boardGrid[49].position = sf::Vector2f(100.f, 300.f);
        boardGrid[50].position = sf::Vector2f(200.f, 200.f);
        boardGrid[51].position = sf::Vector2f(200.f, 200.f);
        boardGrid[52].position = sf::Vector2f(200.f, 300.f);
        boardGrid[53].position = sf::Vector2f(100.f, 300.f);

        boardGrid[54].position = sf::Vector2f(300.f, 200.f);
        boardGrid[55].position = sf::Vector2f(300.f, 300.f);
        boardGrid[56].position = sf::Vector2f(400.f, 200.f);
        boardGrid[57].position = sf::Vector2f(400.f, 200.f);
        boardGrid[58].position = sf::Vector2f(400.f, 300.f);
        boardGrid[59].position = sf::Vector2f(300.f, 300.f);

        boardGrid[60].position = sf::Vector2f(500.f, 200.f);
        boardGrid[61].position = sf::Vector2f(500.f, 300.f);
        boardGrid[62].position = sf::Vector2f(600.f, 200.f);
        boardGrid[63].position = sf::Vector2f(600.f, 200.f);
        boardGrid[64].position = sf::Vector2f(600.f, 300.f);
        boardGrid[65].position = sf::Vector2f(500.f, 300.f);

        boardGrid[66].position = sf::Vector2f(700.f, 200.f);
        boardGrid[67].position = sf::Vector2f(700.f, 300.f);
        boardGrid[68].position = sf::Vector2f(800.f, 200.f);
        boardGrid[69].position = sf::Vector2f(800.f, 200.f);
        boardGrid[70].position = sf::Vector2f(800.f, 300.f);
        boardGrid[71].position = sf::Vector2f(700.f, 300.f);
        //row 5
        boardGrid[72].position = sf::Vector2f(0.f, 300.f);
        boardGrid[73].position = sf::Vector2f(100.f, 300.f);
        boardGrid[74].position = sf::Vector2f(0.f, 400.f);
        boardGrid[75].position = sf::Vector2f(0.f, 400.f);
        boardGrid[76].position = sf::Vector2f(100.f, 300.f);
        boardGrid[77].position = sf::Vector2f(100.f, 400.f);

        boardGrid[78].position = sf::Vector2f(200.f, 300.f);
        boardGrid[79].position = sf::Vector2f(300.f, 300.f);
        boardGrid[80].position = sf::Vector2f(200.f, 400.f);
        boardGrid[81].position = sf::Vector2f(200.f, 400.f);
        boardGrid[82].position = sf::Vector2f(300.f, 300.f);
        boardGrid[83].position = sf::Vector2f(300.f, 400.f);

        boardGrid[84].position = sf::Vector2f(400.f, 300.f);
        boardGrid[85].position = sf::Vector2f(500.f, 300.f);
        boardGrid[86].position = sf::Vector2f(400.f, 400.f);
        boardGrid[87].position = sf::Vector2f(400.f, 400.f);
        boardGrid[88].position = sf::Vector2f(500.f, 300.f);
        boardGrid[89].position = sf::Vector2f(500.f, 400.f);

        boardGrid[90].position = sf::Vector2f(600.f, 300.f);
        boardGrid[91].position = sf::Vector2f(700.f, 300.f);
        boardGrid[92].position = sf::Vector2f(600.f, 400.f);
        boardGrid[93].position = sf::Vector2f(600.f, 400.f);
        boardGrid[94].position = sf::Vector2f(700.f, 300.f);
        boardGrid[95].position = sf::Vector2f(700.f, 400.f);
        //row 4
        boardGrid[96].position = sf::Vector2f(100.f, 400.f);
        boardGrid[97].position = sf::Vector2f(100.f, 500.f);
        boardGrid[98].position = sf::Vector2f(200.f, 400.f);
        boardGrid[99].position = sf::Vector2f(200.f, 400.f);
        boardGrid[100].position = sf::Vector2f(200.f, 500.f);
        boardGrid[101].position = sf::Vector2f(100.f, 500.f);

        boardGrid[102].position = sf::Vector2f(300.f, 400.f);
        boardGrid[103].position = sf::Vector2f(300.f, 500.f);
        boardGrid[104].position = sf::Vector2f(400.f, 400.f);
        boardGrid[105].position = sf::Vector2f(400.f, 400.f);
        boardGrid[106].position = sf::Vector2f(400.f, 500.f);
        boardGrid[107].position = sf::Vector2f(300.f, 500.f);

        boardGrid[108].position = sf::Vector2f(500.f, 400.f);
        boardGrid[109].position = sf::Vector2f(500.f, 500.f);
        boardGrid[110].position = sf::Vector2f(600.f, 400.f);
        boardGrid[111].position = sf::Vector2f(600.f, 400.f);
        boardGrid[112].position = sf::Vector2f(600.f, 500.f);
        boardGrid[113].position = sf::Vector2f(500.f, 500.f);

        boardGrid[114].position = sf::Vector2f(700.f, 400.f);
        boardGrid[115].position = sf::Vector2f(700.f, 500.f);
        boardGrid[116].position = sf::Vector2f(800.f, 400.f);
        boardGrid[117].position = sf::Vector2f(800.f, 400.f);
        boardGrid[118].position = sf::Vector2f(800.f, 500.f);
        boardGrid[119].position = sf::Vector2f(700.f, 500.f);
        //row 3
        boardGrid[120].position = sf::Vector2f(0.f, 500.f);
        boardGrid[121].position = sf::Vector2f(100.f, 500.f);
        boardGrid[122].position = sf::Vector2f(0.f, 600.f);
        boardGrid[123].position = sf::Vector2f(0.f, 600.f);
        boardGrid[124].position = sf::Vector2f(100.f, 500.f);
        boardGrid[125].position = sf::Vector2f(100.f, 600.f);

        boardGrid[126].position = sf::Vector2f(200.f, 500.f);
        boardGrid[127].position = sf::Vector2f(300.f, 500.f);
        boardGrid[128].position = sf::Vector2f(200.f, 600.f);
        boardGrid[129].position = sf::Vector2f(200.f, 600.f);
        boardGrid[130].position = sf::Vector2f(300.f, 500.f);
        boardGrid[131].position = sf::Vector2f(300.f, 600.f);

        boardGrid[132].position = sf::Vector2f(400.f, 500.f);
        boardGrid[133].position = sf::Vector2f(500.f, 500.f);
        boardGrid[134].position = sf::Vector2f(400.f, 600.f);
        boardGrid[135].position = sf::Vector2f(400.f, 600.f);
        boardGrid[136].position = sf::Vector2f(500.f, 500.f);
        boardGrid[137].position = sf::Vector2f(500.f, 600.f);

        boardGrid[138].position = sf::Vector2f(600.f, 500.f);
        boardGrid[139].position = sf::Vector2f(700.f, 500.f);
        boardGrid[140].position = sf::Vector2f(600.f, 600.f);
        boardGrid[141].position = sf::Vector2f(600.f, 600.f);
        boardGrid[142].position = sf::Vector2f(700.f, 500.f);
        boardGrid[143].position = sf::Vector2f(700.f, 600.f);
        //row 2
        boardGrid[144].position = sf::Vector2f(100.f, 600.f);
        boardGrid[145].position = sf::Vector2f(100.f, 700.f);
        boardGrid[146].position = sf::Vector2f(200.f, 600.f);
        boardGrid[147].position = sf::Vector2f(200.f, 600.f);
        boardGrid[148].position = sf::Vector2f(200.f, 700.f);
        boardGrid[149].position = sf::Vector2f(100.f, 700.f);

        boardGrid[150].position = sf::Vector2f(300.f, 600.f);
        boardGrid[151].position = sf::Vector2f(300.f, 700.f);
        boardGrid[152].position = sf::Vector2f(400.f, 600.f);
        boardGrid[153].position = sf::Vector2f(400.f, 600.f);
        boardGrid[154].position = sf::Vector2f(400.f, 700.f);
        boardGrid[155].position = sf::Vector2f(300.f, 700.f);

        boardGrid[156].position = sf::Vector2f(500.f, 600.f);
        boardGrid[157].position = sf::Vector2f(500.f, 700.f);
        boardGrid[158].position = sf::Vector2f(600.f, 600.f);
        boardGrid[159].position = sf::Vector2f(600.f, 600.f);
        boardGrid[160].position = sf::Vector2f(600.f, 700.f);
        boardGrid[161].position = sf::Vector2f(500.f, 700.f);

        boardGrid[162].position = sf::Vector2f(700.f, 600.f);
        boardGrid[163].position = sf::Vector2f(700.f, 700.f);
        boardGrid[164].position = sf::Vector2f(800.f, 600.f);
        boardGrid[165].position = sf::Vector2f(800.f, 600.f);
        boardGrid[166].position = sf::Vector2f(800.f, 700.f);
        boardGrid[167].position = sf::Vector2f(700.f, 700.f);
        //row 1
        boardGrid[168].position = sf::Vector2f(0.f, 700.f);
        boardGrid[169].position = sf::Vector2f(100.f, 700.f);
        boardGrid[170].position = sf::Vector2f(0.f, 800.f);
        boardGrid[171].position = sf::Vector2f(0.f, 800.f);
        boardGrid[172].position = sf::Vector2f(100.f, 700.f);
        boardGrid[173].position = sf::Vector2f(100.f, 800.f);

        boardGrid[174].position = sf::Vector2f(200.f, 700.f);
        boardGrid[175].position = sf::Vector2f(300.f, 700.f);
        boardGrid[176].position = sf::Vector2f(200.f, 800.f);
        boardGrid[177].position = sf::Vector2f(200.f, 800.f);
        boardGrid[178].position = sf::Vector2f(300.f, 700.f);
        boardGrid[179].position = sf::Vector2f(300.f, 800.f);

        boardGrid[180].position = sf::Vector2f(400.f, 700.f);
        boardGrid[181].position = sf::Vector2f(500.f, 700.f);
        boardGrid[182].position = sf::Vector2f(400.f, 800.f);
        boardGrid[183].position = sf::Vector2f(400.f, 800.f);
        boardGrid[184].position = sf::Vector2f(500.f, 700.f);
        boardGrid[185].position = sf::Vector2f(500.f, 800.f);

        boardGrid[186].position = sf::Vector2f(600.f, 700.f);
        boardGrid[187].position = sf::Vector2f(700.f, 700.f);
        boardGrid[188].position = sf::Vector2f(600.f, 800.f);
        boardGrid[189].position = sf::Vector2f(600.f, 800.f);
        boardGrid[190].position = sf::Vector2f(700.f, 700.f);
        boardGrid[191].position = sf::Vector2f(700.f, 800.f);

        //board colors
        boardGrid[0].color = sf::Color::Black;
        boardGrid[1].color = sf::Color::Black;
        boardGrid[2].color = sf::Color::Black;
        boardGrid[3].color = sf::Color::Black;
        boardGrid[4].color = sf::Color::Black;
        boardGrid[5].color = sf::Color::Black;
        boardGrid[6].color = sf::Color::Black;
        boardGrid[7].color = sf::Color::Black;
        boardGrid[8].color = sf::Color::Black;
        boardGrid[9].color = sf::Color::Black;
        boardGrid[10].color = sf::Color::Black;
        boardGrid[11].color = sf::Color::Black;
        boardGrid[12].color = sf::Color::Black;
        boardGrid[13].color = sf::Color::Black;
        boardGrid[14].color = sf::Color::Black;
        boardGrid[15].color = sf::Color::Black;
        boardGrid[16].color = sf::Color::Black;
        boardGrid[17].color = sf::Color::Black;
        boardGrid[18].color = sf::Color::Black;
        boardGrid[19].color = sf::Color::Black;
        boardGrid[20].color = sf::Color::Black;
        boardGrid[21].color = sf::Color::Black;
        boardGrid[22].color = sf::Color::Black;
        boardGrid[23].color = sf::Color::Black;
        boardGrid[24].color = sf::Color::Black;
        boardGrid[25].color = sf::Color::Black;
        boardGrid[26].color = sf::Color::Black;
        boardGrid[27].color = sf::Color::Black;
        boardGrid[28].color = sf::Color::Black;
        boardGrid[29].color = sf::Color::Black;
        boardGrid[30].color = sf::Color::Black;
        boardGrid[31].color = sf::Color::Black;
        boardGrid[32].color = sf::Color::Black;
        boardGrid[33].color = sf::Color::Black;
        boardGrid[34].color = sf::Color::Black;
        boardGrid[35].color = sf::Color::Black;
        boardGrid[36].color = sf::Color::Black;
        boardGrid[37].color = sf::Color::Black;
        boardGrid[38].color = sf::Color::Black;
        boardGrid[39].color = sf::Color::Black;
        boardGrid[40].color = sf::Color::Black;
        boardGrid[41].color = sf::Color::Black;
        boardGrid[42].color = sf::Color::Black;
        boardGrid[43].color = sf::Color::Black;
        boardGrid[44].color = sf::Color::Black;
        boardGrid[45].color = sf::Color::Black;
        boardGrid[46].color = sf::Color::Black;
        boardGrid[47].color = sf::Color::Black;
        boardGrid[48].color = sf::Color::Black;
        boardGrid[49].color = sf::Color::Black;
        boardGrid[50].color = sf::Color::Black;
        boardGrid[51].color = sf::Color::Black;
        boardGrid[52].color = sf::Color::Black;
        boardGrid[53].color = sf::Color::Black;
        boardGrid[54].color = sf::Color::Black;
        boardGrid[55].color = sf::Color::Black;
        boardGrid[56].color = sf::Color::Black;
        boardGrid[57].color = sf::Color::Black;
        boardGrid[58].color = sf::Color::Black;
        boardGrid[59].color = sf::Color::Black;
        boardGrid[60].color = sf::Color::Black;
        boardGrid[61].color = sf::Color::Black;
        boardGrid[62].color = sf::Color::Black;
        boardGrid[63].color = sf::Color::Black;
        boardGrid[64].color = sf::Color::Black;
        boardGrid[65].color = sf::Color::Black;
        boardGrid[66].color = sf::Color::Black;
        boardGrid[67].color = sf::Color::Black;
        boardGrid[68].color = sf::Color::Black;
        boardGrid[69].color = sf::Color::Black;
        boardGrid[70].color = sf::Color::Black;
        boardGrid[71].color = sf::Color::Black;
        boardGrid[72].color = sf::Color::Black;
        boardGrid[73].color = sf::Color::Black;
        boardGrid[74].color = sf::Color::Black;
        boardGrid[75].color = sf::Color::Black;
        boardGrid[76].color = sf::Color::Black;
        boardGrid[77].color = sf::Color::Black;
        boardGrid[78].color = sf::Color::Black;
        boardGrid[79].color = sf::Color::Black;
        boardGrid[80].color = sf::Color::Black;
        boardGrid[81].color = sf::Color::Black;
        boardGrid[82].color = sf::Color::Black;
        boardGrid[83].color = sf::Color::Black;
        boardGrid[84].color = sf::Color::Black;
        boardGrid[85].color = sf::Color::Black;
        boardGrid[86].color = sf::Color::Black;
        boardGrid[87].color = sf::Color::Black;
        boardGrid[88].color = sf::Color::Black;
        boardGrid[89].color = sf::Color::Black;
        boardGrid[90].color = sf::Color::Black;
        boardGrid[91].color = sf::Color::Black;
        boardGrid[92].color = sf::Color::Black;
        boardGrid[93].color = sf::Color::Black;
        boardGrid[94].color = sf::Color::Black;
        boardGrid[95].color = sf::Color::Black;
        boardGrid[96].color = sf::Color::Black;
        boardGrid[97].color = sf::Color::Black;
        boardGrid[98].color = sf::Color::Black;
        boardGrid[99].color = sf::Color::Black;
        boardGrid[100].color = sf::Color::Black;
        boardGrid[101].color = sf::Color::Black;
        boardGrid[102].color = sf::Color::Black;
        boardGrid[103].color = sf::Color::Black;
        boardGrid[104].color = sf::Color::Black;
        boardGrid[105].color = sf::Color::Black;
        boardGrid[106].color = sf::Color::Black;
        boardGrid[107].color = sf::Color::Black;
        boardGrid[108].color = sf::Color::Black;
        boardGrid[109].color = sf::Color::Black;
        boardGrid[110].color = sf::Color::Black;
        boardGrid[111].color = sf::Color::Black;
        boardGrid[112].color = sf::Color::Black;
        boardGrid[113].color = sf::Color::Black;
        boardGrid[114].color = sf::Color::Black;
        boardGrid[115].color = sf::Color::Black;
        boardGrid[116].color = sf::Color::Black;
        boardGrid[117].color = sf::Color::Black;
        boardGrid[118].color = sf::Color::Black;
        boardGrid[119].color = sf::Color::Black;
        boardGrid[120].color = sf::Color::Black;
        boardGrid[121].color = sf::Color::Black;
        boardGrid[122].color = sf::Color::Black;
        boardGrid[123].color = sf::Color::Black;
        boardGrid[124].color = sf::Color::Black;
        boardGrid[125].color = sf::Color::Black;
        boardGrid[126].color = sf::Color::Black;
        boardGrid[127].color = sf::Color::Black;
        boardGrid[128].color = sf::Color::Black;
        boardGrid[129].color = sf::Color::Black;
        boardGrid[130].color = sf::Color::Black;
        boardGrid[131].color = sf::Color::Black;
        boardGrid[132].color = sf::Color::Black;
        boardGrid[133].color = sf::Color::Black;
        boardGrid[134].color = sf::Color::Black;
        boardGrid[135].color = sf::Color::Black;
        boardGrid[136].color = sf::Color::Black;
        boardGrid[137].color = sf::Color::Black;
        boardGrid[138].color = sf::Color::Black;
        boardGrid[139].color = sf::Color::Black;
        boardGrid[140].color = sf::Color::Black;
        boardGrid[141].color = sf::Color::Black;
        boardGrid[142].color = sf::Color::Black;
        boardGrid[143].color = sf::Color::Black;
        boardGrid[144].color = sf::Color::Black;
        boardGrid[145].color = sf::Color::Black;
        boardGrid[146].color = sf::Color::Black;
        boardGrid[147].color = sf::Color::Black;
        boardGrid[148].color = sf::Color::Black;
        boardGrid[149].color = sf::Color::Black;
        boardGrid[150].color = sf::Color::Black;
        boardGrid[151].color = sf::Color::Black;
        boardGrid[152].color = sf::Color::Black;
        boardGrid[153].color = sf::Color::Black;
        boardGrid[154].color = sf::Color::Black;
        boardGrid[155].color = sf::Color::Black;
        boardGrid[156].color = sf::Color::Black;
        boardGrid[157].color = sf::Color::Black;
        boardGrid[158].color = sf::Color::Black;
        boardGrid[159].color = sf::Color::Black;
        boardGrid[160].color = sf::Color::Black;
        boardGrid[161].color = sf::Color::Black;
        boardGrid[162].color = sf::Color::Black;
        boardGrid[163].color = sf::Color::Black;
        boardGrid[164].color = sf::Color::Black;
        boardGrid[165].color = sf::Color::Black;
        boardGrid[166].color = sf::Color::Black;
        boardGrid[167].color = sf::Color::Black;
        boardGrid[168].color = sf::Color::Black;
        boardGrid[169].color = sf::Color::Black;
        boardGrid[170].color = sf::Color::Black;
        boardGrid[171].color = sf::Color::Black;
        boardGrid[172].color = sf::Color::Black;
        boardGrid[173].color = sf::Color::Black;
        boardGrid[174].color = sf::Color::Black;
        boardGrid[175].color = sf::Color::Black;
        boardGrid[176].color = sf::Color::Black;
        boardGrid[177].color = sf::Color::Black;
        boardGrid[178].color = sf::Color::Black;
        boardGrid[179].color = sf::Color::Black;
        boardGrid[180].color = sf::Color::Black;
        boardGrid[181].color = sf::Color::Black;
        boardGrid[182].color = sf::Color::Black;
        boardGrid[183].color = sf::Color::Black;
        boardGrid[184].color = sf::Color::Black;
        boardGrid[185].color = sf::Color::Black;
        boardGrid[186].color = sf::Color::Black;
        boardGrid[187].color = sf::Color::Black;
        boardGrid[188].color = sf::Color::Black;
        boardGrid[189].color = sf::Color::Black;
        boardGrid[190].color = sf::Color::Black;
        boardGrid[191].color = sf::Color::Black;
    }

    void setSpritePositioning_default()
    {
        whitePawn1.setPosition(0.f, 600.f);
        whitePawn2.setPosition(100.f, 600.f);
        whitePawn3.setPosition(200.f, 600.f);
        whitePawn4.setPosition(300.f, 600.f);
        whitePawn5.setPosition(400.f, 600.f);
        whitePawn6.setPosition(500.f, 600.f);
        whitePawn7.setPosition(600.f, 600.f);
        whitePawn8.setPosition(700.f, 600.f);
        whiteRook1.setPosition(0.f, 700.f);
        whiteRook2.setPosition(700.f, 700.f);
        whiteKnight1.setPosition(100.f, 700.f);
        whiteKnight2.setPosition(500.f, 700.f);
        whiteBishop1.setPosition(200.f, 700.f);
        whiteBishop2.setPosition(600.f, 700.f);
        whiteQueen.setPosition(300.f, 700.f);
        whiteKing.setPosition(400.f, 700.f);
        blackPawn1.setPosition(0.f, 100.f);
        blackPawn2.setPosition(100.f, 100.f);
        blackPawn3.setPosition(200.f, 100.f);
        blackPawn4.setPosition(300.f, 100.f);
        blackPawn5.setPosition(400.f, 100.f);
        blackPawn6.setPosition(500.f, 100.f);
        blackPawn7.setPosition(600.f, 100.f);
        blackPawn8.setPosition(700.f, 100.f);
        blackRook1.setPosition(0.f, 0.f);
        blackRook2.setPosition(700.f, 0.f);
        blackKnight1.setPosition(100.f, 0.f);
        blackKnight2.setPosition(600.f, 0.f);
        blackBishop1.setPosition(200.f, 0.f);
        blackBishop2.setPosition(500.f, 0.f);
        blackQueen.setPosition(300.f, 0.f);
        blackKing.setPosition(400.f, 0.f);
    }

    void getSpritePositioning()
    {
        //store sprite positioning in memory
        whitePawn1Position = whitePawn1.getPosition();
        whitePawn2Position = whitePawn2.getPosition();
        whitePawn3Position = whitePawn3.getPosition();
        whitePawn4Position = whitePawn4.getPosition();
        whitePawn5Position = whitePawn5.getPosition();
        whitePawn6Position = whitePawn6.getPosition();
        whitePawn7Position = whitePawn7.getPosition();
        whitePawn8Position = whitePawn8.getPosition();
        whiteRook1Position = whiteRook1.getPosition();
        whiteRook2Position = whiteRook2.getPosition();
        whiteKnight1Position = whiteKnight1.getPosition();
        whiteKnight2Position = whiteKnight2.getPosition();
        whiteBishop1Position = whiteBishop1.getPosition();
        whiteBishop2Position = whiteBishop2.getPosition();
        whiteQueenPosition = whiteQueen.getPosition();
        whiteKingPosition = whiteKing.getPosition();
        blackPawn1Position = blackPawn1.getPosition();
        blackPawn2Position = blackPawn2.getPosition();
        blackPawn3Position = blackPawn3.getPosition();
        blackPawn4Position = blackPawn4.getPosition();
        blackPawn5Position = blackPawn5.getPosition();
        blackPawn6Position = blackPawn6.getPosition();
        blackPawn7Position = blackPawn7.getPosition();
        blackPawn8Position = blackPawn8.getPosition();
        blackRook1Position = blackRook1.getPosition();
        blackRook2Position = blackRook2.getPosition();
        blackKnight1Position = blackKnight1.getPosition();
        blackKnight2Position = blackKnight2.getPosition();
        blackBishop1Position = blackBishop1.getPosition();
        blackBishop2Position = blackBishop2.getPosition();
        blackQueenPosition = blackQueen.getPosition();
        blackKingPosition = blackKing.getPosition();
    }
};