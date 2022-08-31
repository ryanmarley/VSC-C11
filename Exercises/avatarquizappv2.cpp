#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>
#include <stdlib.h>
#include <cstring>
#include "avatarquiz.h"
using namespace std;
//const int Q1 = 0, Q2 = 1, Q3 = 2, Q4 = 3,
          //Q5 = 4, Q6 = 5, Q7 = 6, Q8 = 7, Q9 = 8, Q10 = 9, Q11 = 10; //global constants
void aang();
void katara();
void sokka();
void toph();
void zuko();
void iroh();
void azula();
char printBanner();
void questionsFile(vector<Avatar>&questions, char userChoice);
void listQuestions(vector<Avatar>&questions, string fileName);//read questions
void write(vector<Avatar>&questions, string fileName);
int maxLoop(vector<int> character); //CHANGE INT #6 !
int find(vector<int>character, int maxValue); //ADD HERE #2 !

int main ()
{
    char userChoice = 'x';
    char userAnswer;
    userAnswer = printBanner();
    vector<Avatar> questions;
    string fileName = "questions.txt";
    listQuestions(questions, fileName);
    //start the preliminary question for user
    if(userAnswer == 'Q') {
        cout << "Sorry to see you go! Come back soon!" << endl;
        return 0;
    } else if (userAnswer == 'Y') {
        cout << "Great! Let's begin!" << endl;
        questionsFile(questions, userChoice); //calls function to print questions 1 - 11
        write(questions, "questionsOutFile.txt"); //ADD THIS!
        return 0;
    }
}
char printBanner()
{
    char userAnswer;
    cout<<"    /\\            | |            _"<<endl; //DELETE1Space !
    cout <<"   /  \\__   ____ _| |_ __ _ _ __(_)"<<endl;
    cout<<"  / /\\ \\ \\ / / _` | __/ _` | '__|"<<endl; //DELETE1SPACE !
    cout << " / ____ \\ V / (_| | || (_| | |   _ "<<endl; //ADDSPACE !
    cout <<"/_/    \\_\\_/ \\__,_|\\__\\__,_|_|  (_)"<<endl;
    cout<<"  _______ _             ____        _"<<endl;
    cout<<" |__   __| |           / __ \\      (_)" <<endl;
    cout<<"    | |  | |__   ___  | |  | |_   _ _ ____"<<endl;
    cout<<"    | |  | '_ \\ / _ \\ | |  | | | | | |_  /"<<endl;
    cout<<"    | |  | | | |  __/ | |__| | |_| | |/ /"<<endl;
    cout<<"    |_|  |_| |_|\\___|  \\___\\_\\\\__,_|_/___|"<<endl;
    cout << "Welcome to the C++ Avatar: The Last Airbender quiz!" << endl;
    cout << "This quiz will ask questions and your job is to answer them! At ";
    cout << "the end of the quiz, you will be given the Avatar: The Last Airbender ";
    cout << "character you most resemble as well as some fun facts about your personality type! Ready to begin? ";
    cout << "If yes, press Y, else press Q to quit: ";
    cin >> userAnswer;
    return userAnswer;
}
void questionsFile(vector<Avatar>&questions, char userChoice)
{
    //write(questions, "questions.txt"); //CHANGE THIS !
    vector<int>character;//vector for character count
    for (unsigned int i = 0; i < questions.size(); i++) {
        questions[i].print();
        cout << endl;
        cout << "Please make a selection(a-g): ";
        cin >> userChoice;
        switch(userChoice) {
        case 'a':
            character.at(0) = character.at(0) + 1;
            break;
        case 'b':
            character.at(1) = character.at(1) + 1;
            break;
        case 'c':
            character.at(2) = character.at(2) + 1;
            break;
        case 'd':
            character.at(3) = character.at(3) + 1;
            break;
        case 'e':
            character.at(4) = character.at(4) + 1;
            break;
        case 'f':
            character.at(5) = character.at(5) + 1;
            break;
        case 'g':
            character.at(6) = character.at(6) + 1;
            break;
        default:
            cout << "Unknown character, please choose characters a - f";
            i--;
            break;
        }
    }
    /*
    if (character[0] > character.at(i)) {
            aang().print();
        } else if (character[1] > character.at(i)) {
            katara().print();
        } else if (character[2] > character.at(i)) {
            sokka().print();
        } else if (character[3] > character.at(i)) {
            toph().print();
        } else if (character[4] > character.at(i)) {
            zuko().print();
        } else if (character[5] > character.at(i)) {
            iroh().print();
        } else if (character[6] > character.at(i)) {
            azula().print();
        }
        */
    int maxVal = maxLoop(character);
    int maxIndex = find(character, maxVal);
    if (maxIndex == 0) {
        aang(); 
    }
    else if (maxIndex == 1) {
        katara(); 
    }
    //KEEP GOING LIKE THIS #7
}

int maxLoop(vector<int> character){
    int maxValue = -1; 
    for(unsigned int i = 0; i < character.size(); i++) {
        if (character.at(i) > maxValue) {
            maxValue = character.at(i);
        }
    }
    return maxValue;
}
int find(vector<int>character, int maxValue) {
    for (unsigned int i = 0; i < character.size(); i++) {
        if (character.at(i) == maxValue) {
            return i;
        }
    }
    return -1;
}

        //make function that loops through the characterVect to find the max value(vector<int>character) and it must return the int max value
        //make function for finding the largest num (vector, param int of max value) takes max and finds the largest value;
        //temp variable maxIndex = find()
        //make a swtich statement
        //checking the index
        //if statement to check what counter is bigger or switch statement
        //if else statement compare counter to check which one is largest
void listQuestions(vector<Avatar>& questions, string fileName)
{
    ifstream fin(fileName);
    if (fin.fail()) {
        cout << "Input failed, file unreadable.\n";
        exit(-1);
    }
    //still confused?v
    while (fin.good()) {
        Avatar questionTemp;
        questionTemp.read(fin);
        if (fin.good()) {
            questions.push_back(questionTemp);
        }
        fin.close();
    }
}
void write(vector<Avatar>&questions, string fileName)
{
    //string fileName; DELETE THIS LINE #8 !
    ofstream fout(fileName);
    if (fout.fail()) {
        cout << "Input failed to open.\n";
        exit(-1);
    }
    for (unsigned int i = 0; i < questions.size(); i++) {
        //fout << setw(10) << right << questions.at(i) << endl; DELETE THIS LINE
        questions.at(i).write(fout);
    }
    fout.close();
}
void aang()
{
    cout << "You got Aang! ENFP (Extrovert - Intuition - Feeling - Perception): The Inspirer. "<<endl;
    cout << "You inspire people! You are a warm, enthusiastic person , typically very bright "<<endl;
    cout << "and full of potential. You live in the world of possibilities, and can become very "<<endl;
    cout << "passionate and excited about things. Your enthusiasm lends you the ability to inspire "<<endl;
    cout << "and motivate others, more so than we see in other types. You can talk your way in or out of "<<endl;
    cout << "anything. You love life, seeing it as a special gift, and strive to make the most out of it. "<<endl;
    cout << "Unlike other Extraverted types, ENFPs need time alone to center themselves, and make sure they are "<<endl;
    cout << "moving in a direction that is in sync with their values. ENFPs who remain centered will usually be quite "<<endl;
    cout << "successful in their endeavors."<<endl;
    cout << "You are SO Aang, yip yip!"<<endl;
    cout << "Aang:\"Relax Sokka, where we're going, you won't need any pants!\""<<endl;
}
void katara()
{
    cout << "You got Katara! ENFJ (Extroverted - Intuition - Feeling - Judgement): The Giver. "<<endl;
    cout << "You are a people-focused individual. Just like Katara, you live in the world of people possibilities. "<<endl;
    cout << "More so than any other type, you have excellent people skills. You understand and care about people, and "<<endl;
    cout << "have a special talent for bringing out the best in others. "<<endl;
    cout << "As an ENFJ, your main interest in life is giving love, support, and a good time to other people! "<<endl;
    cout << "Usually ENFJs exude a lot of self-confidence, and have a great amount of ability to do many different things. "<<endl;
    cout << "They are generally bright, full of potential, energetic and fast-paced. They are usually good at anything which captures "<<endl;
    cout << "their interest. "<<endl;
    cout << "That sounds just like Katara, good on ya!"<<endl;
    cout << "Katara:\"You've Been Hallucinating On Cactus Juice All Day, And Now You Lick Something You Find Stuck To The Wall Of A Cave?\""<<endl;
}
void sokka()
{
    cout << "You got Sokka! ENTJ (Extroverted - Intuition - Thinking - Judgement): The Leader. "<<endl;
    cout << "ENTJs are natural born leaders. They live in a world of possibilities where they see all sorts challenges to be surmounted, "<<endl;
    cout << "and they want to be the ones responsible for surmounting them. They have a drive for leadership, which is well-served by their "<<endl;
    cout << "quickness to grasp complexities, their ability to absorb a large amount of impersonal information, and their quick and decisive judgments. "<<endl;
    cout << "They are \"take charge\" people. ENTJs are very forceful, decisive individuals. They make decisions quickly, and are quick to verbalize their opinions "<<endl;
    cout << "and decisions to the rest of the world"<<endl;
    cout << "Now, where's your boomerang!?"<<endl;
    cout << "Sokka:\"[Zuko is]Just Some Angry Freak With A Ponytail Who�s Tracked Us All Over The World\""<<endl;
}
void toph()
{
    cout << "You got Toph! ISTP (Introversion - Sensing - Thinking - Perception): The Craftsman."<<endl;
    cout << "ISTPs have a compelling drive to understand the way things work. They�re good at logical analysis, and like to use it on practical concerns. "<<endl;
    cout << "They typically have strong powers of reasoning, although they�re not interested in theories or concepts unless they can see a practical application. "<<endl;
    cout << "ISTPs have an adventuresome spirit.  They thrive on action, and are usually fearless. ISTPs are fiercely independent, needing to have the space to make their "<<endl;
    cout << "own decisions about their next step. They do not believe in or follow rules and regulations, as this would prohibit their ability to \"do their own thing\". "<<endl;
    cout << "Their sense of adventure and desire for constant action makes ISTPs prone to becoming bored rather quickly."<<endl;
    cout << "Toph:\"There's No Different Angle, No Clever Solution, No Trickity Trick That's Gonna Move That Rock. You Gotta Face It Head On\""<<endl;
}
void zuko()
{
    cout << "You got Zuko! ISFP (Introversion - Sensing - Feeling - Perception): The Artist."<<endl;
    cout << "ISFPs live in the world of sensation possibilities.They have a strong set of values, which they strive to consistently meet in their lives. "<<endl;
    cout << "They need to feel as if they�re living their lives in accordance with what they feel is right, and will rebel against anything which conflicts with that goal. "<<endl;
    cout << "ISFPs are warm and sympathetic. They genuinely care about people, and are strongly service-oriented in their desire to please. They have an unusually deep well of caring for "<<endl;
    cout << "those who are close to them, and are likely to show their love through actions, rather than words." <<endl;
    cout << "Now that we have all the good stuff out of the way, let's go find your honor..."<<endl;
    cout << "Zuko:\"I Have Changed.\"" <<endl;
}
void iroh()
{
    cout << "You got Iroh! INFP (Introversion - Intuition - Feeling - Perception): The Idealist. "<<endl;
    cout << "INFPs, more than other Intuitive Feeling types, are focused on making the world a better ";
    cout << "place for people. Their primary goal is to find out their meaning in life. "<<endl;
    cout << "What is their purpose? How can they best serve humanity in their lives? They are idealists and perfectionists, ";
    cout << "who drive themselves hard in their quest for achieving ";
    cout << "the goals they have identified for themselves."<<endl;
    cout << "INFPs are highly intuitive about people. They rely heavily on their intuitions to guide them, and use their discoveries ";
    cout << "to constantly search for value in life. "<<endl;
    cout << "They are on a continuous mission to find the truth and meaning underlying things."<<endl;
    cout << "Iroh:\"It's time for you to look inward and start asking yourself the big question: WHO ARE YOU AND WHAT DO YOU WANT?\"" << endl;
}
void azula()
{
    cout << "You got Azula! ENTJ's (Extroverted - Intuition - Thinking - Judging): The Commander. ";
    cout << "are very career-focused. They are constantly scanning their environment for potential problems ";
    cout << "which they can turn into solutions. They generally see things from a long-range perspective, and are usually successful " << endl;
    cout << "at identifying plans to turn problems around.  There is not much room for error in the world of the ENTJ. They dislike to see mistakes ";
    cout << "repeated, and have no patience with inefficiency. They may become quite harsh when their " << endl;
    cout << "patience is tried in these respects, because they are not naturally tuned in to people�s feelings, and more than likely don�t believe ";
    cout << "that they should tailor their judgments in consideration for people�s feelings. ENTJs, like " << endl;
    cout << "many types, have difficulty seeing things from outside their own perspective." << endl;
    cout << "Azula:\"Don't flatter yourself. You weren't even a player.\"" << endl;
}
