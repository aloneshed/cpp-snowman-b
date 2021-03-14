#include <string>
#include <iostream>
#include <array>
#include "snowman.hpp"

//Hats
std::string straw_hat = "       \n _===_ ";
std::string mexican_hat = "  ___  \n ..... ";
std::string fez_hat = "   _   \n  /_\\  ";
std::string russian_hat = "  ___  \n(_*_)";

//Torso
std::string buttons_torso = " : ";
std::string vest = "] [";
std::string inward_arms = "> <";
std::string none_torso = "   ";

//Base
std::string buttons_base = " : ";
std::string feet = "\" \"";
std::string flat = "___";
std::string none_base = "   ";

namespace ariel
{
    int const hat_index = 0;
    int const nose_index = 1;
    int const left_eye_index = 2;
    int const right_eye_index = 3;
    int const left_arm_index = 4;
    int const right_arm_index = 5;
    int const torso_index = 6;
    int const base_index = 7;
    long const MIN = 11111111;
    long const MAX = 44444444;
    std::array<std::string, 4> hats = {straw_hat, mexican_hat, fez_hat, russian_hat};
    std::array<std::string, 4> nose = {",", ".", "_", " "};
    std::array<std::string, 4> left_eyes = {".", "o", "O", "-"};
    std::array<std::string, 4> right_eyes = {".", "o", "O", "-"};
    std::array<std::string, 4> left_arm_upper = {" ", "\\", " ", " "};
    std::array<std::string, 4> left_arm_lower = {"<", " ", "/", " "};
    std::array<std::string, 4> right_arm_upper = {" ", "/", " ", " "};
    std::array<std::string, 4> right_arm_lower = {">", " ", "\\", " "};
    std::array<std::string, 4> torso = {buttons_torso, vest, inward_arms, none_torso};
    std::array<std::string, 4> base = {buttons_base, feet, flat, none_base};

    std::string snowman(long number)
    {
        if (number < MIN || number > MAX)
        {
            throw std::range_error("Input out of range");
        }
        std::string number_to_string = std::to_string(number);
        std::string my_snowman;

        //Hat
        switch (number_to_string[hat_index])
        {
        case '1':
            my_snowman += hats[0];
            break;
        case '2':
            my_snowman += hats[1];
            break;
        case '3':
            my_snowman += hats[2];
            break;
        case '4':
            my_snowman += hats[3];
            break;

        default:
            throw std::invalid_argument("Invalid input");
            break;
        }

        my_snowman += "\n";

        //Left arm upper
        switch (number_to_string[left_arm_index])
        {
        case '1':
            my_snowman += left_arm_upper[0];
            break;
        case '2':
            my_snowman += left_arm_upper[1];
            break;
        case '3':
            my_snowman += left_arm_upper[2];
            break;
        case '4':
            my_snowman += left_arm_upper[3];
            break;

        default:
            throw std::invalid_argument("Invalid input");
            break;
        }

        my_snowman += "(";

        //Left eye
        switch (number_to_string[left_eye_index])
        {
        case '1':
            my_snowman += left_eyes[0];
            break;
        case '2':
            my_snowman += left_eyes[1];
            break;
        case '3':
            my_snowman += left_eyes[2];
            break;
        case '4':
            my_snowman += left_eyes[3];
            break;

        default:
            throw std::invalid_argument("Invalid input");
            break;
        }

        //Nose
        switch (number_to_string[nose_index])
        {
        case '1':
            my_snowman += nose[0];
            break;
        case '2':
            my_snowman += nose[1];
            break;
        case '3':
            my_snowman += nose[2];
            break;
        case '4':
            my_snowman += nose[3];
            break;

        default:
            throw std::invalid_argument("Invalid input");
            break;
        }

        //Right eye
        switch (number_to_string[right_eye_index])
        {
        case '1':
            my_snowman += right_eyes[0];
            break;
        case '2':
            my_snowman += right_eyes[1];
            break;
        case '3':
            my_snowman += right_eyes[2];
            break;
        case '4':
            my_snowman += right_eyes[3];
            break;

        default:
            throw std::invalid_argument("Invalid input");
            break;
        }

        my_snowman += ")";

        //Right arm upper
        switch (number_to_string[right_arm_index])
        {
        case '1':
            my_snowman += right_arm_upper[0];
            break;
        case '2':
            my_snowman += right_arm_upper[1];
            break;
        case '3':
            my_snowman += right_arm_upper[2];
            break;
        case '4':
            my_snowman += right_arm_upper[3];
            break;

        default:
            throw std::invalid_argument("Invalid input");
            break;
        }

        my_snowman += "\n";

        //Left arm lower
        switch (number_to_string[left_arm_index])
        {
        case '1':
            my_snowman += left_arm_lower[0];
            break;
        case '2':
            my_snowman += left_arm_lower[1];
            break;
        case '3':
            my_snowman += left_arm_lower[2];
            break;
        case '4':
            my_snowman += left_arm_lower[3];
            break;

        default:
            throw std::invalid_argument("Invalid input");
            break;
        }

        my_snowman += "(";

        //Torso
        switch (number_to_string[torso_index])
        {
        case '1':
            my_snowman += torso[0];
            break;
        case '2':
            my_snowman += torso[1];
            break;
        case '3':
            my_snowman += torso[2];
            break;
        case '4':
            my_snowman += torso[3];
            break;

        default:
            throw std::invalid_argument("Invalid input");
            break;
        }

        my_snowman += ")";

        //Right arm lower
        switch (number_to_string[right_arm_index])
        {
        case '1':
            my_snowman += right_arm_lower[0];
            break;
        case '2':
            my_snowman += right_arm_lower[1];
            break;
        case '3':
            my_snowman += right_arm_lower[2];
            break;
        case '4':
            my_snowman += right_arm_lower[3];
            break;

        default:
            throw std::invalid_argument("Invalid input");
            break;
        }

        my_snowman += "\n (";

        //Base
        switch (number_to_string[base_index])
        {
        case '1':
            my_snowman += base[0];
            break;
        case '2':
            my_snowman += base[1];
            break;
        case '3':
            my_snowman += base[2];
            break;
        case '4':
            my_snowman += base[3];
            break;

        default:
            throw std::invalid_argument("Invalid input");
            break;
        }

        my_snowman += ") ";

        return my_snowman;
    }

}
