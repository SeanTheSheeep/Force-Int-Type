#include <iostream>
#include <string>

using namespace std;

int main()
{
    int score = 0;
    char answer1, answer2, answer3, answer5, answer6, answer7, answer8;
    int answer4;

    cout << "This test will determine who your favourite rapper is!\n\n\n\n";


    // Question 1
    cout << "\nQuestion 1:\n";
    cout << "What is your favourite sport? " << endl << endl;
    cout << "A) Hockey" << endl;
    cout << "B) Soccer" << endl;
    cout << "C) Football" << endl;
    cout << "D) Basketall" << endl;
    cin >> answer1;

    // Question 2
    cout << "\nWhat is your favourite school subject? " << endl;
    cout << "A) Gym" << endl;
    cout << "B) Math" << endl;
    cout << "C) History" << endl;
    cout << "D) Science" << endl;
    cin >> answer2;

    // Question 3
    cout << "\nPeople should keep up to date with politics. " << endl;
    cout << "A) Strongly agree" << endl;
    cout << "B) Agree" << endl;
    cout << "C) Disagree" << endl;
    cout << "D) Strongly Disagree\n" << endl;
    cin >> answer3;

    // Switch statement that returns what was chosen in question 3
    switch (answer3)
    {
    case 'A':
        cout << "You have selected A\n";
        break;
    case 'a':
        cout << "You have selected a\n";
        break;
    case 'B':
        cout << "You have selected B\n";
        break;
    case 'b':
        cout << "You have selected b\n";
        break;
    case 'c':
        cout << "You have selected c\n";
        break;
    case 'C':
        cout << "You have selected C\n";
        break;
    case 'd':
        cout << "You have selected d\n";
        break;
    case 'D':
        cout << "You have selected D\n";
        break;
    }

    // Question 4
    cout << "\nHow old are you?" << endl;
    cin >> answer4;

    // Question 5
    cout << "\nHow happy are you?" << endl;
    cout << "A) Very happy" << endl;
    cout << "B) Happy" << endl;
    cout << "C) meh" << endl;
    cout << "D) Not happy" << endl;
    cin >> answer5;

    // Question 6
    cout << "\nHow many fingers do you have?" << endl;
    cout << "A) 0 - 4" << endl;
    cout << "B) 4 - 9" << endl;
    cout << "C) 10 - 14" << endl;
    cout << "D) 15+" << endl;
    cin >> answer6;

    // Question 7
    cout << "\nWhat is your favourite planet?" << endl;
    cout << "A) Mars" << endl;
    cout << "B) Jupiter" << endl;
    cout << "C) Saturn" << endl;
    cout << "D) Neptune" << endl;
    cout << "E) Other" << endl;
    cin >> answer7;

    // Quetion 8
    cout << "\nWhy are you taking this test?" << endl;
    cout << "A) For fun" << endl;
    cout << "B) I want to" << endl;
    cout << "C) There is someone with a gun to my head making me" << endl;
    cout << "D) Other!" << endl;
    cin >> answer8;

    // Question 1 scoring system
    if (answer1 == 'a' || 'A')
    {
        score += 2;
    }
    else if (answer1 == 'b' || 'B')
    {
        score += 1;
    }
    else if (answer1 == 'c' || 'C')
    {
        score += 1;
    }
    else if (answer1 == 'd' || 'D')
    {
        score += 3;
    }

    // Question 2 scoring system
    if (answer2 == 'a' || 'A')
    {
        score += 4;
    }
    else if (answer2 == 'b' || 'B')
    {
        score += 1;
    }
    else if (answer2 == 'c' || 'C')
    {
        score += 3;
    }
    else if (answer2 == 'd' || 'D')
    {
        score += 2;
    }

    // Question 3 scoring system
    if (answer3 == 'a' || 'A')
    {
        score += 4;
    }
    else if (answer3 == 'b' || 'B')
    {
        score += 1;
    }
    else if (answer3 == 'c' || 'C')
    {
        score += 1;
    }
    else if (answer3 == 'd' || 'D')
    {
        score += 4;
    }

    // Question 4 scoring system
    if (answer4 <= 20)
    {
        score += 3;
    }
    else if (answer4 <= 40)
    {
        score += 2;
    }
    else if (answer4 <= 60)
    {
        score += 2;
    }
    else if (answer4 >= 61)
    {
        score += 4;
    }

    // Question 5 scoring system
    if (answer5 == 'a' || 'A')
    {
        score += 4;
    }
    else if (answer5 == 'b' || 'B')
    {
        score += 1;
    }
    else if (answer5 == 'c' || 'C')
    {
        score += 2;
    }
    else if (answer5 == 'd' || 'D')
    {
        score += 4;
    }

    // Question 6 scoring system
    if (answer6 == 'a' || 'A')
    {
        score += 1;
    }
    else if (answer6 == 'b' || 'B')
    {
        score += 4;
    }
    else if (answer6 == 'c' || 'C')
    {
        score += 2;
    }
    else if (answer6 == 'd' || 'D')
    {
        score += 4;
    }

    // Question 7 scoring system
    if (answer5 == 'a' || 'A')
    {
        score += 3;
    }
    else if (answer7 == 'b' || 'B')
    {
        score += 1;
    }
    else if (answer7 == 'c' || 'C')
    {
        score += 2;
    }
    else if (answer7 == 'd' || 'D')
    {
        score += 4;
    }
    else if (answer7 == 'e' || 'E')
    {
        score += 4;
    }

    // Question 8 scoring system
    if (answer8 == 'a' || 'A')
    {
        score += 3;
    }
    else if (answer8 == 'b' || 'B')
    {
        score += 5;
    }
    else if (answer8 == 'c' || 'C')
    {
        score += 4;
    }
    else if (answer8 == 'd' || 'D')
    {
        score += 1;
    }

    cout << "Your final score is " << score << "!\n\n";

    // What the score means
    if (score >= 32)
    {
        cout << "You got a perfect score and are a very cool person!\nBased on this result your favourite rapper is Kanye West!";
    }
    else if (score >= 20)
    {
        cout << "Based on your score your favourite rapper is Baby Keem!";
    }
    else if (score >= 13)
    {
        cout << "Based on this score your favourite rapper is Polo G!";
    }
    else if (score >= 5)
    {
        cout << "Because this is your score your favourite rapper is Lil Durk!";
    }
    else if (score >= 1)
    {
        cout << "If this is your score your favourite rapper is NBA Youngboy!";
    }
    else
    {
        cout << "You don't understand simple instructions.";
    }
}
