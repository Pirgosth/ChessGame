//
// Created by renau on 09/01/2024.
//

#ifndef MAIN_PAWN_HPP
#define MAIN_PAWN_HPP

#include "Piece.hpp"

class Pawn : public Piece {
public:
    Pawn(Coordonnees position, Couleur couleur1);

    vector<Action> getAllActions() override;

    Type getType() override;

    unsigned int getValue() override;

};


#endif //MAIN_PAWN_HPP
