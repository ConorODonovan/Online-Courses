#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

// Initialise everything
// Draw board
// Player 1 turn
// Player 2 turn
// Check for win

void print_board(char turns_array[])
{
    printf("\n     |     |     ");
    printf("\n  %c  |  %c  |  %c  ",turns_array[0],turns_array[1],turns_array[2]);
    printf("\n_____|_____|_____");
    printf("\n     |     |     ");
    printf("\n  %c  |  %c  |  %c  ",turns_array[3],turns_array[4],turns_array[5]);
    printf("\n_____|_____|_____");
    printf("\n     |     |     ");
    printf("\n  %c  |  %c  |  %c  ",turns_array[6],turns_array[7],turns_array[8]);
    printf("\n     |     |     \n");
}

int get_player_input(void)
{
    int player_input;

    scanf(" %d",&player_input);

    return player_input;
}

void put_input_on_board(char turns_array[],int player_input,int player_turn)
{
    if (player_turn == 1)
    {
        turns_array[player_input - 1] = 'X';
    }
    else
    {
        turns_array[player_input - 1] = 'O';
    }
}

char check_game_status(char turns_array[])
{
    if ((turns_array[0] == turns_array[1]) && (turns_array[1]) == turns_array[2])
    {
        return 'W';
    }
    else if ((turns_array[3] == turns_array[4]) && (turns_array[4]) == turns_array[5])
    {
        return 'W';
    }
    else if ((turns_array[6] == turns_array[7]) && (turns_array[7]) == turns_array[8])
    {
        return 'W';
    }
    else if ((turns_array[0] == turns_array[3]) && (turns_array[3]) == turns_array[6])
    {
        return 'W';
    }
    else if ((turns_array[1] == turns_array[4]) && (turns_array[4]) == turns_array[7])
    {
        return 'W';
    }
    else if ((turns_array[2] == turns_array[5]) && (turns_array[5]) == turns_array[8])
    {
        return 'W';
    }
    else if ((turns_array[0] == turns_array[4]) && (turns_array[4]) == turns_array[8])
    {
        return 'W';
    }
    else if ((turns_array[2] == turns_array[4]) && (turns_array[4]) == turns_array[6])
    {
        return 'W';
    }
    else if ((turns_array[0] == 'X' || turns_array[0] == 'O') && (turns_array[0] == 'X' || turns_array[0] == 'O') && (turns_array[0] == 'X' || turns_array[0] == 'O') && (turns_array[1] == 'X' || turns_array[1] == 'O') && (turns_array[2] == 'X' || turns_array[2] == 'O') && (turns_array[3] == 'X' || turns_array[3] == 'O') && (turns_array[4] == 'X' || turns_array[4] == 'O') && (turns_array[5] == 'X' || turns_array[5] == 'O') && (turns_array[6] == 'X' || turns_array[6] == 'O') && (turns_array[7] == 'X' || turns_array[7] == 'O') && (turns_array[8] == 'X' || turns_array[8] == 'O'))
    {
        return 'D';
    }
    else
    {
        return 'A';
    }
}

int main()
{
    int player_turn = 1;
    char game_status = 'A';
    int player_input;

    printf("\nTIC TAC TOE");
    printf("\nBy Conor O'Donovan\n");
    printf("\nPlayer 1: X  |  Player 2: O\n");

    char turns[] = {'1','2','3','4','5','6','7','8','9'};

    print_board(turns);

    while (game_status == 'A')
    {
        printf("\nPlayer %d's turn\n",player_turn);
        printf("\nPlayer %d, please enter a number on the board\n", player_turn);
        player_input = get_player_input();
        put_input_on_board(turns,player_input,player_turn);
        game_status = check_game_status(turns);

        if (game_status == 'W')
        {
            printf("\nGame over!\n\nPlayer %d wins!\n",player_turn);
            break;
        }

        if (game_status == 'D')
        {
            printf("\nGame over!\n\nThe game has ended in a draw!\n");
            break;
        }

        print_board(turns);

        if (player_turn == 1)
        {
            player_turn = 2;
        }
        else
        {
            player_turn = 1;
        }
    }

    return 0;
}
