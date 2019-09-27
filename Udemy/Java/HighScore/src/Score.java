public class Score {

    String playerName;
    int playerScore;

    protected Score() {
        // Default constructor
        playerName = "Unknown";
        playerScore = 0;
    }

    protected Score(String name, int score) {
        playerName = name;
        playerScore = score;
    }

    public void displayHighScorePosition(String name, int position) {
        System.out.println(name + " managed to get into position " + position + " on the high score table.\n");
    }

    public int calculateHighScore(int score) {
        // Calculates the player's position on the high score table

        if (score >= 1000) {
            return 1;
        }
        else if (score >= 500 && score < 1000) {
            return 2;
        }
        else if (score > 100 && score < 500) {
            return 3;
        }
        else return 4;
    }
}
