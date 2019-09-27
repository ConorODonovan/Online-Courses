/**
 * Udemy Course - Java Programming Masterclass
 * 27/09/2019
 * Conor O'Donovan
 */

public class Main {
    public static void main(String[] args) {

        Score myScore1 = new Score("Conor", 1500); // New instance of Score
        Score myScore2 = new Score("Mary", 900); // New instance of Score
        Score myScore3 = new Score("Bob", 400); // New instance of Score
        Score myScore4 = new Score("Jane", 50); // New instance of Score

        // Test cases
        int myPosition1 = myScore1.calculateHighScore(myScore1.playerScore); // Calculates the first player's high score table position
        myScore1.displayHighScorePosition(myScore1.playerName, myPosition1); // Displays the message with first player's name and high score table position

        int myPosition2 = myScore2.calculateHighScore(myScore2.playerScore); // Calculates the second player's high score table position
        myScore2.displayHighScorePosition(myScore2.playerName, myPosition2); // Displays the message with the second player's name and high score table position

        int myPosition3 = myScore3.calculateHighScore(myScore3.playerScore); // Calculates the third player's high score table position
        myScore3.displayHighScorePosition(myScore3.playerName, myPosition3); // Displays the message with the third player's name and high score table position

        int myPosition4 = myScore4.calculateHighScore(myScore4.playerScore); // Calculates the fourth player's high score table position
        myScore4.displayHighScorePosition(myScore4.playerName, myPosition4); // Displays the message with the fourth player's name and high score table position
    }
}
