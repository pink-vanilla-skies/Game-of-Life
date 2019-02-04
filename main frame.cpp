//reconstructing to build final program
//clean code
#include<string>
#include<fstream> //save player details
#include<stdlib.h>
#include<conio.h>
#include<iostream>
#include<time.h>
#define _WIN32_WINNT 0x0500
#include<windows.h>
#include<ctime>
#include<MMSystem.h> //add winmm to linker
#include<cwchar>
#include<thread>
#include<cstdlib>
#include<ctime>
#include<chrono>


using namespace std;

//defining player
class Player{}; //figure it out
class Player_kid{}; //inherits from player

string name;
int lifescore=0;
int schoolscore=0;
int collegepoints=0;
float bankaccount=0;
string testrun;
int countparty=0;
string gender;
string location;
int locationscore;
string job;

//universal random function which game works on
int random_number(int a)
{
    int b;
        srand(time(0));
        for(int x = 1; x < 2; x++)
          {
            b= 1+(rand()%a);
          }
return b;
}

//setting console to fullscreen and console title
void console_details()
{
  SetConsoleTitle("Game of Life");
  system("mode con COLS=700");
      ShowWindow(GetConsoleWindow(),SW_MAXIMIZE);
      HWND hWnd;
        RECT WinRect;
        hWnd = FindWindow(NULL, "Game of Life");

        GetWindowRect(hWnd, &WinRect);

        MoveWindow(hWnd, 0, 0, WinRect.right - WinRect.left, WinRect.bottom - WinRect.top, TRUE);


}

//setting random music for each gameplay

void console_music_gameplay()
{

  switch(random_number(15))
          {
       case 1: PlaySound(TEXT("Name.wav"), NULL, SND_ASYNC | SND_LOOP);
                                    break;
       case 2: PlaySound(TEXT("Name.wav"), NULL, SND_ASYNC | SND_LOOP);
                                    break;
       case 3: PlaySound(TEXT("Name.wav"), NULL, SND_ASYNC | SND_LOOP);
                                    break;
       case 4: PlaySound(TEXT("Name.wav"), NULL, SND_ASYNC | SND_LOOP);
                                    break;
       case 5: PlaySound(TEXT("Name.wav"), NULL, SND_ASYNC | SND_LOOP);
                                    break;
       case 6: PlaySound(TEXT("Name.wav"), NULL, SND_ASYNC | SND_LOOP);
                                    break;
       case 7: PlaySound(TEXT("Name.wav"), NULL, SND_ASYNC | SND_LOOP);
                                    break;
       case 8: PlaySound(TEXT("Name.wav"), NULL, SND_ASYNC | SND_LOOP);
                                    break;
       case 9: PlaySound(TEXT("Name.wav"), NULL, SND_ASYNC | SND_LOOP);
                                    break;
       case 10: PlaySound(TEXT("undertale.wav"), NULL, SND_ASYNC | SND_LOOP);
                                    break;
       case 11: PlaySound(TEXT("heavy.wav"), NULL, SND_ASYNC | SND_LOOP);
                                    break;
       case 12: PlaySound(TEXT("friends.wav"), NULL, SND_ASYNC | SND_LOOP);
                                    break;
       case 13: PlaySound(TEXT("program.wav"), NULL, SND_ASYNC | SND_LOOP);
                                    break;
              default: PlaySound(TEXT("stage.wav"), NULL, SND_ASYNC | SND_LOOP);

          }
  }

//setting text color
void set_text_color(int c)
{
  SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), c);
}

//loading sign
void loadscreen()
  {
      set_text_color(12);
      cout<<"\n\n\n\n\n\a\t\t\t\tLoading game...\n\n";
      char a=177, b=219;
      cout<<"\t\t\t\t";
      for (int i=0;i<=15;i++)
      cout<<a;
      cout<<"\r";
      cout<<"\t\t\t\t";
      for (int i=0;i<=15;i++)
      {
        cout<<b;
        Sleep(500);
      }

      system("cls");
}

//generating character
void gender_location_name()
{
  switch(random_number(8))
    {
    case 1:
        gender= ("male") ;
        break;
    case 2:
        gender=("female");
        break;
    case 3:
        gender=("male");
    case 4:
        gender=("female");
    case 5:
        gender=("male");
    case 6:
        gender=("female");
    case 7:
        gender=("male");
    default: gender=("female");
    }
    switch(random_number(8))
    {
        case 1:
             location=("Australia");
             locationscore=300;
             break;

        case 2:
             location=("Dubai");
             locationscore=500;
             break;
        case 3:
             location=("Singapore");
             locationscore=600;
             break;
        case 4:
             location=("Los Angeles");
             locationscore=400;
             break;
        case 5:
             location=("Sweden");
             locationscore=400;
             break;
        case 6:
             location=("Canada");
             locationscore=700;
             break;
        case 7:
             location=("Tokyo");
             locationscore=800;
             break;
        default: location=("India");
     }
if (gender=="male")
{
        switch(random_number(8))
    {
        case 1:
             name=("Jake Orlando");
             break;
        case 2:
             name=("Josh Pyke");
             break;
        case 3:
             name=("Felix Arvid Ulf Kjellberg");
             break;
        case 4:
             name=("Ryan Gosling");
             break;
        case 5:
             name=("Tom Hardy");
             break;
        case 6:
             name=("Peter Parker");
             break;
        case 7:
             name=("Yusuf Rashid");
             break;
        default: name=("Tony Stark");
    }
}

if (gender=="female")
{
        switch(random_number(8))
    {
        case 1:
             name=("Anne Hall");
             break;

        case 2:
             name=("Jennifer Kingston");
             break;
        case 3:
             name=("Julia Baker");
             break;
        case 4:
             name=("Hailey Baldwin");
             break;
        case 5:
             name=("Ashley Kutcher");
             break;
        case 6:
             name=("Scarlet Johansson");
             break;
        case 7:
             name=("Kaitlyn Keller");
             break;
        default: name=("Natlie Koffman");
    }
  }
}
//menus
void school_menu()
{
        set_text_color(14);
        cout<<endl<<"School choices"<<endl<<endl;
        cout<<"1. Study"<<endl<<"2. Give a test"<<endl<<"3. Join a club"<<endl<<"4. Learn a new language"<<endl<<"5. Play tic-tac-toe"<<endl<<"6. Doze off in class"<<endl<<endl;
}
void college_menu()
{
        set_text_color(14);
        cout<<endl<<"College options"<<endl<<endl;
        cout<<"1. Attend lecture"<<endl<<"2. Party"<<endl<<"3. Work on a project"<<endl<<"4. Go late to class"<<endl<<"5. Work a part time job"<<endl<<"6. Shop"<<endl<<endl;
}
int party_choice;
int college_party_menu()
{
        set_text_color(14);
        cout<<endl<<"Party choices"<<endl<<endl;
        cout<<"1. Introduce yourself"<<endl<<"2. Dance"<<endl<<"3. Perform a party trick"<<endl<<endl;
}

int study_land()
{
    set_text_color(7);
    cout<<endl<<endl<<"Choose what to study"<<endl<<endl;
    cout<<"a. Math"<<endl<<"b. English"<<endl<<"c. Science"<<endl<<"d. History"<<endl;
    int studys=1;

    cout<<"You can only study 3 subjects due to a time constraint...(Tip: It's better to study subjects you are weak at)"<<endl;
    for (int g=1; g<=3; g++)
    {
        char sub_choice;

        cout<<endl<<endl<<"Enter subject "<<g<<"'s character"<<endl<<endl;

        cin>>sub_choice;
        switch(sub_choice)
            {
                case 'a'://Math
                cout<<endl<<endl<<"Math Class: Let's learn Factorials!"<<endl<<endl;
                Sleep(2000);
                cout<<"Factorials are very simple things. They're just products, indicated by an exclamation mark."<<endl;
                cout<<"For instance, 'four factorial' is written as '4!' and means 1x2x3x4=24."<<endl<<"In general, n! (enn factorial) means the product of all the whole numbers from 1 to n; that is, n! = 1x2x3x...xn."<<endl;
           cout<<"(For various reasons, 0! is defined to be equal to 1, not 0. Memorize this now: 0!=1.) Thus 6!= 1x2x3x4x5x6=720"<<endl<<endl;
                Sleep(2000);
                cout<<"You've studied math."<<endl<<endl;
               schoolscore= schoolscore + 600;
                break;
                case 'b'://English
                cout<<endl<<endl<<"English Class: Let's learn Literary Devices!"<<endl<<endl;
                Sleep(2000);
               cout<<"Alliteration is a literary device where words are used in quick succession and begin with letters belonging to the same sound group."<<endl;
                cout<<"Whether it is the consonant sound or a specific vowel group, the alliteration involves creating a repetition of similar sounds in the sentence."<<endl;
                cout<<"Example: The Wicked Witch of the West went her own way. (The ‘W’ sound is repeated throughout the sentence."<<endl<<endl;
                Sleep(2000);
               cout<<"A hyperbole is a literary device wherein the author uses specific words and phrases that exaggerate and overemphasize the basic crux of the statement in order to produce a grander, more noticeable effect."<<endl;
                cout<<"The purpose of hyperbole is to create a larger-than-life effect and overly stress a specific point."<<endl;
              cout<<"Example: I am so tired I can't even walk an inch or I am so hungry I can eat an elephant"<<endl<<endl;
                Sleep(2000);
                cout<<"An imagery is one of the strongest devices is imagery wherein the author uses words and phrases to create “mental images” for the reader. Imagery helps the reader to visualize more realistically the author’s writings."<<endl;
                cout<<"Example: The gushing brook stole its way down the lush green mountains, dotted with tiny flowers in a riot of colors and trees coming alive with gaily chirping birds."<<endl<<endl;
                Sleep(2000);
                cout<<"Onomatopoeia refer to words whose very sound is very close to the sound they are meant to depict."<<endl;
                cout<<"Example: Grunt, huff, buzz, snap etc."<<endl<<endl;
                Sleep(2000);
                cout<<"You've studied English."<<endl<<endl;
              schoolscore= schoolscore + 300;
                break;
                case 'c'://Science
                cout<<endl<<endl<<"Science Class: Let's learn about Light!"<<endl<<endl;
                Sleep(2000);
              cout<<"Light is electromagnetic radiation within a certain portion of the electromagnetic spectrum."<<endl;
                cout<<"The word usually refers to visible light, which is the visible spectrum that is visible to the human eye and is responsible for the sense of sight."<<endl;
                cout<<"Visible light is usually defined as having wavelengths in the range of 400 to 700 nanometres (nm)."<<endl;
                cout<<"The main source of light on Earth is the Sun."<<endl;
                cout<<"Sunlight provides the energy that green plants use to create sugars mostly in the form of starches, which release energy into the living things that digest them."<<endl;
                cout<<"Light behaves like a particle and wave."<<endl;
                cout<<"This dual wave-like and particle-like nature of light is known as the wave–particle duality."<<endl<<endl;
            Sleep(2000);
              cout<<"You've studied Science"<<endl<<endl;
                schoolscore= schoolscore + 700;
        break;
        case 'd'://History
            cout<<endl<<endl<<"History Class: Let's learn about the French Revolution!"<<endl<<endl;
                Sleep(2000);
                cout<<"The French Revolution was a period of far-reaching social and political upheaval in France and its colonies that lasted from 1789 until 1799."<<endl;
              cout<<"It was partially carried forward by Napoleon during the later expansion of the French Empire."<<endl;
                cout<<"Historians widely regard the Revolution as one of the most important events in human history."<<endl;
               cout<<"The causes of the revolution were the rising social and economic inequalities."<<endl;
                cout<<"France was experiencing such a severe economic depression that there wasn't enough food to go around."<<endl;
                cout<<"Poor harvests lasting several years and an inadequate transportation system both contributed to making food more expensive."<<endl<<endl;
               Sleep(2000);
                cout<<"You've studied Science"<<endl<<endl;
                schoolscore+=400;
                break;
                default: cout<<"You should've chosen a valid option.";
                                                                            }

                                        }

}
void test_land()
{
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
        cout<<endl<<endl<<"Test rules: +5 for a correct answer and -2 for a wrong answer"<<endl<<endl;
        Sleep(1500);
        cout<<endl<<endl<<"Please answer in characters 'a', 'b', 'c', 'd' or 'e'."<<endl<<endl;

        testrun=("yes");
                                          switch(random_number(6))
                                          {
                                                case 1:
                                                cout<<"Q1. What is the value of 3!/4!?"<<endl;
                                                char ans1;
                                                cout<<"a. 1/4"<<endl;
                                                cout<<"b. 3"<<endl;
                                                cout<<"c. 5"<<endl;
                                                cout<<"d. 4!"<<endl;
                                                cout<<"e. irrational"<<endl;
                                                cin>>ans1;
                                                if (ans1=='a')schoolscore=schoolscore + 500;
                                                else schoolscore= schoolscore - 200;


                                                cout<<endl<<endl;


                                                break;

                                                case 2:
                                                cout<<"Q1. What is the value of 5!+9!?"<<endl;
                                                char ans5;
                                                cout<<"a. 14!"<<endl;
                                                cout<<"b. 36500"<<endl;
                                                cout<<"c. 65000"<<endl;
                                                cout<<"d. 36300"<<endl;
                                                cout<<"e. too big"<<endl;
                                                cin>>ans1;
                                                if (ans5=='d')schoolscore=schoolscore + 500;
                                                else schoolscore=schoolscore - 200;

                                                cout<<endl<<endl;

                                                break;

                                                case 3:
                                                cout<<"Q1. What is the value of 13!-9!?"<<endl;
                                                char ans9;
                                                cout<<"a. 4!"<<endl;
                                                cout<<"b. 6226657820"<<endl;
                                                cout<<"c. 6226657920"<<endl;
                                                cout<<"d. 7000080000"<<endl;
                                                cout<<"e. irrational"<<endl;
                                                cin>>ans9;
                                                if (ans9=='c')schoolscore=schoolscore + 500;
                                                else schoolscore=schoolscore - 200;

                                                cout<<endl<<endl;

                                                break;

                                                case 4:
                                                cout<<"Q1. What is the value of 3!^3!?"<<endl;
                                                char ans13;
                                                cout<<"a. 81"<<endl;
                                                cout<<"b. 45565"<<endl;
                                                cout<<"c. 46656"<<endl;
                                                cout<<"d. 9"<<endl;
                                                cout<<"e. irrational"<<endl;
                                                cin>>ans13;
                                                if (ans13=='c')schoolscore=schoolscore + 500;
                                                else schoolscore=schoolscore - 200;

                                                cout<<endl<<endl;

                                                break;


                                                default:
                                                cout<<"Q1. What is the value of 3!/4!?"<<endl;
                                                char ans17;
                                                cout<<"a. 1/4"<<endl;
                                                cout<<"b. 3"<<endl;
                                                cout<<"c. 5"<<endl;
                                                cout<<"d. 4!"<<endl;
                                                cout<<"e. irrational"<<endl;
                                                cin>>ans17;
                                                if (ans17=='a')schoolscore=schoolscore + 500;
                                                else schoolscore=schoolscore - 200;

                                                cout<<endl<<endl;
                                            }

                                          switch(random_number(6))
                                          {
                                                case 1:
                                                cout<<"Q2. Dunkin Donuts is a/an"<<endl;
                                                char ans2;
                                                cout<<"a. Imagery"<<endl;
                                                cout<<"b. Alliteration"<<endl;
                                                cout<<"c. Hyperbole"<<endl;
                                                cout<<"d. Onomatopoeia"<<endl;
                                                cout<<"e. Metaphor"<<endl;
                                                cin>>ans2;
                                                if (ans2=='b')schoolscore=schoolscore + 500;
                                                else schoolscore=schoolscore - 200;

                                                cout<<endl<<endl;


                                                break;

                                                case 2:
                                                cout<<"Q2. 'Glittering white, the blanket of snow covered everything in sight.' This is the example of a/an"<<endl;
                                                char ans6;
                                                cout<<"a. Imagery"<<endl;
                                                cout<<"b. Alliteration"<<endl;
                                                cout<<"c. Hyperbole"<<endl;
                                                cout<<"d. Onomatopoeia"<<endl;
                                                cout<<"e. Metaphor"<<endl;
                                                cin>>ans6;
                                                if (ans6=='a')schoolscore=schoolscore + 500;
                                                else schoolscore=schoolscore - 200;

                                                cout<<endl<<endl;

                                                break;

                                                case 3:
                                                cout<<"Q2. 'I have a ton of homework' is an example of a/an"<<endl;
                                                char ans10;
                                                cout<<"a. Imagery"<<endl;
                                                cout<<"b. Alliteration"<<endl;
                                                cout<<"c. Hyperbole"<<endl;
                                                cout<<"d. Onomatopoeia"<<endl;
                                                cout<<"e. Metaphor"<<endl;
                                                cin>>ans10;
                                                if (ans10=='c')schoolscore=schoolscore + 500;
                                                else schoolscore=schoolscore - 200;

                                                cout<<endl<<endl;

                                                break;

                                                case 4:
                                                cout<<"Q2. Gurgle is an example of a/an"<<endl;
                                                char ans14;
                                                cout<<"a. Imagery"<<endl;
                                                cout<<"b. Alliteration"<<endl;
                                                cout<<"c. Hyperbole"<<endl;
                                                cout<<"d. Onomatopoeia"<<endl;
                                                cout<<"e. Metaphor"<<endl;
                                                cin>>ans14;
                                                if (ans14=='d')schoolscore=schoolscore + 500;
                                                else schoolscore=schoolscore - 200;

                                                cout<<endl<<endl;

                                                break;


                                                default:
                                                  cout<<"Q2. 'Glittering white, the blanket of snow covered everything in sight.' This is the example of a/an"<<endl;
                                                char ans18;
                                                cout<<"a. Imagery"<<endl;
                                                cout<<"b. Alliteration"<<endl;
                                                cout<<"c. Hyperbole"<<endl;
                                                cout<<"d. Onomatopoeia"<<endl;
                                                cout<<"e. Metaphor"<<endl;
                                                cin>>ans18;
                                                if (ans18=='a')schoolscore=schoolscore + 500;
                                                else schoolscore=schoolscore - 200;

                                                cout<<endl<<endl;

                                            }

                                          switch(random_number(6))
                                          {
                                                case 1:
                                                cout<<"Q3. Light has"<<endl;
                                                char ans19;
                                                cout<<"a. Particle nature"<<endl;
                                                cout<<"b. Wave nature"<<endl;
                                                cout<<"c. Particle and wave nature"<<endl;
                                                cout<<"d. No nature"<<endl;
                                                cout<<"e. Undetermined nature"<<endl;
                                                cin>>ans19;
                                                if (ans19=='c')schoolscore=schoolscore + 500;
                                                else schoolscore=schoolscore - 200;

                                                cout<<endl<<endl;

                                                break;

                                                case 2:
                                                cout<<"Q3. The main source of light on the earth is"<<endl;
                                                char ans15;
                                                cout<<"a. The sun"<<endl;
                                                cout<<"b. The moon"<<endl;
                                                cout<<"c. The infinite stars of the galaxy"<<endl;
                                                cout<<"d. Light bulbs"<<endl;
                                                cout<<"e. God"<<endl;
                                                cin>>ans15;
                                                if (ans15=='d')schoolscore=schoolscore + 500;
                                                else schoolscore=schoolscore - 200;

                                                cout<<endl<<endl;

                                                break;

                                                case 3:

                                                cout<<"Q3. Light is a/an"<<endl;
                                                char ans11;
                                                cout<<"a. Electronic radiation"<<endl;
                                                cout<<"b. Electro-magnetic radiation"<<endl;
                                                cout<<"c. Magnetic radiation"<<endl;
                                                cout<<"d. Source of potential energy"<<endl;
                                                cout<<"e. All of the above"<<endl;
                                                cin>>ans11;
                                                if (ans11=='b')schoolscore=schoolscore + 500;
                                                else schoolscore=schoolscore - 200;

                                                cout<<endl<<endl;

                                                break;

                                                case 4:
                                                cout<<"Q3. Light has"<<endl;
                                                char ans7;
                                                cout<<"a. Particle nature"<<endl;
                                                cout<<"b. Wave nature"<<endl;
                                                cout<<"c. Particle and wave nature"<<endl;
                                                cout<<"d. No nature"<<endl;
                                                cout<<"e. Undetermined nature"<<endl;
                                                cin>>ans7;
                                                if (ans7=='c')schoolscore=schoolscore + 500;
                                                else schoolscore=schoolscore - 200;

                                                cout<<endl<<endl;

                                                break;


                                                default:
                                                cout<<"Q3. The wavelength of light ranges from"<<endl;
                                                char ans3;
                                                cout<<"a. 4-7 angstroms"<<endl;
                                                cout<<"b. 10-15 nanometers"<<endl;
                                                cout<<"c. 7-9 nanometers"<<endl;
                                                cout<<"d. 4-7x10^(-7) meters"<<endl;
                                                cout<<"e. 3x10^(8)m/s"<<endl;
                                                cin>>ans3;
                                                if (ans3=='d')schoolscore=schoolscore + 500;
                                                else schoolscore=schoolscore - 200;

                                                cout<<endl<<endl;
                                            }

                                          switch(random_number(6))
                                          {
                                                case 1:
                                                cout<<"Q4. The French Revolution started around the year"<<endl;
                                                char ans4;
                                                cout<<"a. 1799"<<endl;
                                                cout<<"b. 1755"<<endl;
                                                cout<<"c. 1789"<<endl;
                                                cout<<"d. 1788"<<endl;
                                                cout<<"e. 2018"<<endl;
                                                cin>>ans4;
                                                if (ans4=='c')schoolscore=schoolscore + 500;
                                                else schoolscore=schoolscore - 200;
                                                break;

                                                cout<<endl<<endl;

                                                break;

                                                case 2:
                                                cout<<"Q4. A main figure in the French Revolution was"<<endl;
                                                char ans8;
                                                cout<<"a. Thomas Jefferson"<<endl;
                                                cout<<"b. Abraham Lincoln"<<endl;
                                                cout<<"c. Denzel Washington"<<endl;
                                                cout<<"d. Napoleon"<<endl;
                                                cout<<"e. Queen Elizabeth"<<endl;
                                                cin>>ans8;
                                                if (ans8=='d')schoolscore=schoolscore + 500;
                                                else schoolscore=schoolscore - 200;


                                                cout<<endl<<endl;

                                                break;

                                                case 3:

                                                cout<<"Q4. The French Revolution was mainly due to "<<endl;
                                                char ans12;
                                                cout<<"a. The rising social injustice"<<endl;
                                                cout<<"b. The new political image of the era"<<endl;
                                                cout<<"c. Napoleon fanicied a revolution"<<endl;
                                                cout<<"d. The rising social and economic inequalities"<<endl;
                                                cout<<"e. None of the above"<<endl;
                                                cin>>ans12;
                                                if (ans12=='d')schoolscore=schoolscore + 500;
                                                else schoolscore=schoolscore - 200;

                                                cout<<endl<<endl;

                                                break;

                                                case 4:
                                                cout<<"Q4. The French Revolution gave birth to an economic depression due to the fact that"<<endl;
                                                char ans16;
                                                cout<<"a. There were not enough coins"<<endl;
                                                cout<<"b. The currency's value had suddenly dropped in the market"<<endl;
                                                cout<<"c. Food scarcity"<<endl;
                                                cout<<"d. The wars"<<endl;
                                                cout<<"e. Napoleon wanted to feel rich"<<endl;
                                                cin>>ans16;
                                                if (ans16=='c')schoolscore=schoolscore + 500;
                                                else schoolscore=schoolscore - 200;


                                                cout<<endl<<endl;

                                                break;


                                                default:

                                                cout<<"Q4. The French Revolution started around the year"<<endl;
                                                char ans20;
                                                cout<<"a. 1799"<<endl;
                                                cout<<"b. 1755"<<endl;
                                                cout<<"c. 1789"<<endl;
                                                cout<<"d. 1788"<<endl;
                                                cout<<"e. 2018"<<endl;
                                                cin>>ans20;
                                                if (ans20=='c')schoolscore=schoolscore + 500;
                                                else schoolscore=schoolscore - 200;

                                                cout<<endl<<endl;
                                            }

}

void club_land()
{
                                                        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 14);
                                                        cout<<"Enter the corresponding club's number to which you want to sign up to, you can only sign up to 3 clubs"<<endl<<endl;
                                                        for(int aa=0; aa<=2; aa++)
                                                        {       cout<<endl<<"Clubs options:"<<endl;
                                                                        int clubchoice;
                                                                        cout<<"1. Basketball Club"<<endl<<"2. Swimming Club"<<endl<<"3. Football Club"<<endl<<"4. Volleyball Club"<<endl<<"5. Cricket Club"<<endl<<"6. Choir"<<endl<<"7. Dramatics Club"<<endl<<"8. Wood Shop"<<endl<<"9. Robotics Club"<<endl<<"10. Art Club"<<endl<<"11. Debate Club"<<endl<<"12. Culinary Club"<<endl<<"13. Dance Club"<<endl<<"14. Fight Club"<<endl<<endl;
                                                                        cin>>clubchoice;
                                                                        schoolscore= schoolscore + 500;

                                                                        cout<<"You have successfully joined the club. This shall help you in a later stage of life.";
                                                        }
}

void language_land()
{
                string language;

                        switch(random_number(8))
                        {
                                        case 1:
                                                language= ("Arabic");//edit
                                                schoolscore=schoolscore + 500;
                                                break;
                                        case 2:
                                                language=("Spanish");
                                                schoolscore=schoolscore + 800;
                                                break;
                                        case 3:
                                                language=("French");
                                                schoolscore=schoolscore + 700;
                                                break;
                                        case 4:
                                                language=("Japanese");
                                                schoolscore=schoolscore + 1000;
                                                break;
                                        case 5:
                                                language=("German");
                                                schoolscore=schoolscore + 500;
                                                break;
                                        case 6:
                                                language=("Portugese");
                                                schoolscore=schoolscore + 300;
                                                break;
                                        case 7:
                                                language=("Mandarin");
                                                schoolscore=schoolscore + 900;
                                              break;
                                        default: language=("Hindi");
                        }

                        cout<<"You have learnt "<<language<<" quite fluently."<<endl;
                        cout<<"This shall help you in life."<<endl<<endl;

}
//setting tic tac toe
//artificially intelligent computer vs. user based algorithm
int a[3][3],t,y,game=1;
char str[500];

void print()//print the board
{
    int i,j;
    cout<<endl;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            if(a[i][j]==0)
                cout<<".\t";
            else if(a[i][j]==1)
                cout<<"X\t";
            else
                cout<<"O\t";
        }
        cout<<endl;
    }
}

int check()//checks if anyone is winning.
{
    for(int i=0;i<3;i++)
        if((a[i][0]!=0&&a[i][0]==a[i][1]&&a[i][1]==a[i][2])||(a[0][i]!=0&&a[0][i]==a[1][i]&&a[1][i]==a[2][i]))
            return 1;

    if(a[0][0]!=0&&a[0][0]==a[1][1]&&a[1][1]==a[2][2])
        return 1;
    else if(a[0][2]!=0&&a[0][2]==a[1][1]&&a[1][1]==a[2][0])
        return 1;
    else
        return 0;
}

void pin()//takes input from player
{
    int r=0,c=0;
    cout<<"Enter row: ";
    cin>>r;
    cout<<"Enter column: ";
    cin>>c;
    r--;
    c--;
    if(r>2||c>2||r<0||c<0)
    {
        cout<<"Enter correct value"<<endl;
        pin();
    }
    else if(a[r][c]!=0)
    {
        cout<<"It is already filled."<<endl;
        pin();
    }
    else
        a[r][c]=t;
}

int defend(int c, int p, int b)
{
    if(b<3)
        return 0;
    else if(a[0][0]+a[1][1]+a[2][2]==2*c&&a[0][0]!=p&&a[1][1]!=p&&a[2][2]!=p)
    {
        for(int i=0;i<3;i++)
        {
            if(a[i][i]==0)
            {
                a[i][i]=y;
                cout<<"Computer's turn: "<<i+1<<" "<<i+1<<endl;
                return 1;
            }
        }
    }
    else if(a[0][2]+a[1][1]+a[2][0]==2*c&&a[0][2]!=p&&a[1][1]!=p&&a[2][0]!=p)
    {
        for(int i=0;i<3;i++)
        {
            if(a[i][2-i]==0)
            {
                a[i][2-i]=y;
                cout<<"Computer's turn: "<<i+1<<" "<<3-i<<endl;
                return 1;
            }
        }
    }
    else
    {
        int i,j;
        for(i=0;i<3;i++)
        {
            if(a[i][0]+a[i][1]+a[i][2]==2*c&&a[i][0]!=p&&a[i][1]!=p&&a[i][2]!=p)
            {
                for(j=0;j<3;j++)
                {
                    if(a[i][j]==0)
                    {
                        a[i][j]=y;
                        cout<<"Computer's turn: "<<i+1<<" "<<j+1<<endl;
                        return 1;                    }
                }
            }
            else if(a[0][i]+a[1][i]+a[2][i]==2*c&&a[0][i]!=p&&a[1][i]!=p&&a[2][i]!=p)
            {
                for(j=0;j<3;j++)
                {
                    if(a[j][i]==0)
                    {
                        a[j][i]=y;
                        cout<<"Computer's turn: "<<j+1<<" "<<i+1<<endl;
                        return 1;
                    }
                }
            }
        }
    }
    return 0;
}

int attack()//takes a move as to win in future.
{
    int i,j;
    if(a[0][0]+a[0][2]+a[2][0]+a[2][2]==t||a[0][0]+a[0][2]+a[2][0]+a[2][2]==2*t)
    {
        for(i=0;i<3;i++)
        {
            if( a[i][0]+a[i][1]+a[i][2]==y && (a[i][0]==y||a[i][1]==y||a[i][2]==y) )
            {
                if(i==1)
                {
                    for(j=0;j<3;j++)
                    {
                        if(a[i][j]==0)
                        {
                            a[i][j]=y;
                            cout<<"Computer's turn: "<<i+1<<" "<<j+1<<endl;
                            return 1;
                        }
                    }
                }
                else
                {
                    for(j=2;j>=0;j--)
                    {
                        if(a[i][j]==0)
                        {
                            a[i][j]=y;
                            cout<<"Computer's turn: "<<i+1<<" "<<j+1<<endl;
                            return 1;
                        }
                    }
                }
            }
            if(a[0][i]+a[1][i]+a[2][i]==y && (a[0][i]==y||a[1][i]==y||a[2][i]==y))
            {
                if(i==1)
                {
                    for(j=0;j<3;j++)
                    {
                        if(a[j][i]==0)
                        {
                            a[j][i]=y;
                            cout<<"Computer's turn: "<<j+1<<" "<<i+1<<endl;
                            return 1;
                        }
                    }
                }
                else
                {
                    for(j=2;j>=0;j--)
                    {
                        if(a[j][i]==0)
                        {
                            a[j][i]=y;
                            cout<<"Computer's turn: "<<j+1<<" "<<i+1<<endl;
                            return 1;
                        }
                    }
                }

            }
        }

        if(a[0][0]+a[1][1]+a[2][2]==y && (a[0][0]==y||a[1][1]==y||a[2][2]==y))
        {
            for(i=2;i>=0;i--)
            {
                if((a[i][i]==0)&& ((a[i][0]+a[i][1]+a[i][2]==y&&(a[i][0]==y||a[i][1]==y||a[i][2]==y)) ||( (a[0][i]+a[1][i]+a[2][i]==y)&&(a[0][i]==y||a[1][i]==y||a[2][i]==y))))
                {
                    a[i][i]=y;
                    cout<<"Computer's turn: "<<i+1<<" "<<i+1<<endl;
                    return 1;
                }
            }
            for(i=2;i>=0;i--)
            {
                if(a[i][i]==0)
                {
                    if((a[i][0]+a[i][1]+a[i][2]==t&&(a[i][0]==t||a[i][1]==t||a[i][2]==t))&&(a[0][i]+a[1][i]+a[2][i]==t&&(a[0][i]==t||a[1][i]==t||a[2][i]==t)))
                    {
                        a[i][i]=y;
                        cout<<"Computer's turn: "<<i+1<<" "<<i+1<<endl;
                        return 1;
                    }
                }
            }
            for(i=2;i>=0;i--)
            {
                if(a[i][i]==0)
                {
                    a[i][i]=y;
                    cout<<"Computer's turn: "<<i+1<<" "<<i+1<<endl;
                    return 1;
                }
            }
        }
        else if( a[0][2]+a[1][1]+a[2][0]==y && (a[0][2]==y||a[1][1]==y||a[2][0]==y))
        {
            for(i=2;i>=0;i--)
            {
                if(a[i][2-i]==0&&((a[i][0]+a[i][1]+a[i][2]==y&&(a[i][0]==y||a[i][1]==y||a[i][2]==y))||( (a[0][2-i]+a[1][2-i]+a[2][2-i]==y)&&(a[0][2-i]==y||a[1][2-i]==y||a[2][2-i]==y))))
                {
                    a[i][2-i]=y;
                    cout<<"Computer's turn: "<<i+1<<" "<<3-i<<endl;
                    return 1;
                }
            }
            for(i=2;i>=0;i--)
            {
                if(a[i][2-i]==0)
                {
                    if((a[i][0]+a[i][1]+a[i][2]==t&&(a[i][0]==t||a[i][1]==t||a[i][2]==t))&&(a[0][2-i]+a[1][2-i]+a[2][2-i]==t&&(a[0][2-i]==t||a[1][2-i]==t||a[2][2-i]==t)))
                    {
                        a[i][2-i]=y;
                        cout<<"Computer's turn: "<<i+1<<" "<<3-i<<endl;
                        return 1;
                    }
                }
            }
            for(i=2;i>=0;i--)
            {
                if(a[i][2-i]==0)
                {
                    a[i][2-i]=y;
                    cout<<"Computer's turn: "<<i+1<<" "<<3-i<<endl;
                    return 1;
                }
            }
        }
    }
    else
    {
        if(a[0][0]+a[1][1]+a[2][2]==y && (a[0][0]==y||a[1][1]==y||a[2][2]==y))
        {
            for(i=2;i>=0;i--)
            {
                if((a[i][i]==0)&& ((a[i][0]+a[i][1]+a[i][2]==y&&(a[i][0]==y||a[i][1]==y||a[i][2]==y)) ||( (a[0][i]+a[1][i]+a[2][i]==y)&&(a[0][i]==y||a[1][i]==y||a[2][i]==y))))
                {
                    a[i][i]=y;
                    cout<<"Computer's turn: "<<i+1<<" "<<i+1<<endl;
                    return 1;
                }
            }
            for(i=2;i>=0;i--)
            {
                if(a[i][i]==0)
                {
                    if((a[i][0]+a[i][1]+a[i][2]==t&&(a[i][0]==t||a[i][1]==t||a[i][2]==t))&&(a[0][i]+a[1][i]+a[2][i]==t&&(a[0][i]==t||a[1][i]==t||a[2][i]==t)))
                    {
                        a[i][i]=y;
                        cout<<"Computer's turn: "<<i+1<<" "<<i+1<<endl;
                        return 1;
                    }
                }
            }
            for(i=2;i>=0;i--)
            {
                if(a[i][i]==0)
                {
                    a[i][i]=y;
                    cout<<"Computer's turn: "<<i+1<<" "<<i+1<<endl;
                    return 1;
                }
            }
        }

        else if( a[0][2]+a[1][1]+a[2][0]==y && (a[0][2]==y||a[1][1]==y||a[2][0]==y))
        {
            for(i=2;i>=0;i--)
            {
                if(a[i][2-i]==0&&((a[i][0]+a[i][1]+a[i][2]==y&&(a[i][0]==y||a[i][1]==y||a[i][2]==y))||( (a[0][2-i]+a[1][2-i]+a[2][2-i]==y)&&(a[0][2-i]==y||a[1][2-i]==y||a[2][2-i]==y))))
                {
                    a[i][2-i]=y;
                    cout<<"Computer's turn: "<<i+1<<" "<<3-i<<endl;
                    return 1;
                }
            }
            for(i=2;i>=0;i--)
            {
                if(a[i][2-i]==0)
                {
                    if((a[i][0]+a[i][1]+a[i][2]==t&&(a[i][0]==t||a[i][1]==t||a[i][2]==t))&&(a[0][2-i]+a[1][2-i]+a[2][2-i]==t&&(a[0][2-i]==t||a[1][2-i]==t||a[2][2-i]==t)))
                    {
                        a[i][2-i]=y;
                        cout<<"Computer's turn: "<<i+1<<" "<<3-i<<endl;
                        return 1;
                    }
                }
            }

            for(i=2;i>=0;i--)
            {
                if(a[i][2-i]==0)
                {
                    a[i][2-i]=y;
                    cout<<"Computer's turn: "<<i+1<<" "<<3-i<<endl;
                    return 1;
                }
            }
        }

        else
        {
            for(i=0;i<3;i++)
            {
                if( a[i][0]+a[i][1]+a[i][2]==y && (a[i][0]==y||a[i][1]==y||a[i][2]==y) )
                {
                    if(i==1)
                    {
                        for(int j=0;j<3;j++)
                        {
                            if(a[i][j]==0)
                            {
                                a[i][j]=y;
                                cout<<"Computer's turn: "<<i+1<<" "<<j+1<<endl;
                                return 1;
                            }
                        }
                    }
                    else{
                        for(j=2;j>=0;j--)
                        {
                            if(a[i][j]==0)
                            {
                                a[i][j]=y;
                                cout<<"Computer's turn: "<<i+1<<" "<<j+1<<endl;
                                return 1;
                            }
                        }
                    }
                }
                else if(a[0][i]+a[1][i]+a[2][i]==y && (a[0][i]==y||a[1][i]==y||a[2][i]==y))
                {
                    if(i==1)
                    {
                        for(j=0;j<3;j++)
                        {
                            if(a[j][i]==0)
                            {
                                a[j][i]=y;
                                cout<<"Computer's turn: "<<j+1<<" "<<i+1<<endl;
                                return 1;
                            }
                        }
                    }
                    else
                    {
                        for(j=2;j>=0;j--)
                        {
                            if(a[j][i]==0)
                            {
                                a[j][i]=y;
                                cout<<"Computer's turn: "<<j+1<<" "<<i+1<<endl;
                                return 1;
                            }
                        }
                    }
                }
            }
        }
    }
    return 0;
}

void ai(int b)//controls the compter's move
{
    if(!defend(y,t,b))
    {
        if(!defend(t,y,b))
        {
            if((a[0][0]+a[0][2]+a[2][0]+a[2][2]==t+y||a[0][0]+a[0][2]+a[2][0]+a[2][2]==t+2*y)&&a[1][1]==0)
            {
                for(int i=0;i<3;i+=2)
                {
                    for(int j=0;j<3;j+=2)
                        if(a[i][j]==0)
                        {
                            a[i][j]=y;
                            cout<<"Computer's turn: "<<i+1<<" "<<j+1<<endl;
                            goto end;
                        }
                }

            }
            else if(b==2&&a[1][1]==0)
            {
                a[1][1]=y;
                cout<<"Computer's turn: 2 2"<<endl;
                goto end;
            }
            if(!attack())
            {
                if(b==0)
                {
                    time_t seconds;
                    time(&seconds);
                    srand((unsigned int) seconds);
                    int i,j;
                    a[(rand()%2)*2][(rand()%2)*2]=y;
                    for(i=0;i<3;i+=2)
                    {
                        for(j=0;j<3;j+=2)
                            if(a[i][j]==y)
                                cout<<"Computer's turn: "<<i+1<<" "<<j+1<<endl;
                    }
                }
                else if(a[1][1]==0)
                {
                    a[1][1]=y;
                    cout<<"Computer's turn: 2 2"<<endl;
                }
                else
                {
                    int i,j;
                    for(i=0;i<3;i++)
                    {
                        for(j=0;j<3;j++)
                        {
                            if(a[i][j]==0)
                            {
                                a[i][j]=y;
                                cout<<"Computer's turn: "<<i+1<<" "<<j+1<<endl;
                                goto end;
                            }
                        }
                    }
                }
            }
        }
    }
end:
    cout<<endl;
}


int game_land()
{
  int i,j;
    for(i=0;i<3;i++)
        for(j=0;j<3;j++)
            a[i][j]=0;
    if(game==1)
    {
        cout<<endl<<endl<<"Hi, "<<name;
        cout<<endl<<"So you wanna challenge me in tic-tac-toe, right?"<<endl<<"Let's see who wins."<<endl;

        cout<<"The choice is yours."<<endl<<"Wanna go 1st or 2nd?"<<endl;
    }
    else
    {
        cout<<"So you think you can beat me this time?"<<endl;
        cout<<"The choice is yours."<<endl<<"Wanna go 1st or 2nd?"<<endl;
    }

input:
    cin>>t;
    switch(t)
    {
        case 1:
            y=2;
            cout<<endl<<"So your symbol is X."<<endl<<"And mine is O."<<endl<<endl<<"Let's start the game.";
            print();
            for(i=0;i<9;)
            {
                pin();
                print();
                i++;
                if(i>4)
                    if(check())
                    {
                        cout<<endl<<"Oh NOOOO, you won... I guess my algorithm didn't see that coming";
                        exit(0);
                        break;
                    }
                if(i>=8)
                    break;
                ai(i);
                print();
                i++;
                if(i>5)
                    if(check())
                    {
                        cout<<endl<<"It's impossible to beat me!"<<endl;
                        if(game>1)
                            cout<<endl<<"You couldn't beat me this time too.";
                        else
                            cout<<"I win!";
                        break;
                    }
            }
            break;

        case 2:
            y=1;
            cout<<endl<<"So your symbol is O."<<endl<<"And mine is X."<<endl<<endl<<"Let's start the game.";
            print();
            for(i=0;i<9;)
            {
                ai(i);
                print();
                i++;
                if(i>4)
                    if(check())
                    {
                        cout<<endl<<"It's impossible to beat me!"<<endl;
                        if(game>1)
                            cout<<endl<<"You couldn't beat me this time too."<<endl;
                        else
                            cout<<endl<<"I win!"<<endl;
                        break;
                    }
                if(i>=8)
                    break;
                pin();
                print();
                i++;
                if(i>5)
                    if(check())
                    {
                        cout<<endl<<"Oh NOOOO, you won... I guess my algorithm didn't see that coming"<<endl;
                        exit(0);
                        break;
                    }
            }
            break;
        default:
            cout<<endl<<"Enter 1 or 2 only. ";
            cout<<endl<<"Enter again: "<<endl;
            goto input;
            break;
    }
    if(!check())
    {
        if(game>1)
            cout<<"Well Played!"<<endl<<"But you couldn't beat me this time too."<<endl;
        else
            cout<<"Well Played!"<<endl<<"It is a tie."<<endl;

    }
    char c;
    cout<<"Wanna play again? y/n"<<endl;
    cin>>c;
    if(c=='y'||c=='Y')
    {
        game= game+1;
        game_land();
    }
    else
        school_menu();
    return 0;
}
void doze_land(){

set_text_color(5);
cout<<R"(

$$$$$$$$\                                     $$$$$$$$\
\____$$  |                                    \____$$  |
    $$  / $$$$$$$$\ $$$$$$$$\ $$$$$$$$\           $$  / $$$$$$$$\ $$$$$$$$\ $$$$$$$$\
   $$  /  \____$$  |\____$$  |\____$$  |         $$  /  \____$$  |\____$$  |\____$$  |
  $$  /     $$$$ _/   $$$$ _/   $$$$ _/         $$  /     $$$$ _/   $$$$ _/   $$$$ _/
 $$  /     $$  _/    $$  _/    $$  _/          $$  /     $$  _/    $$  _/    $$  _/
$$$$$$$$\ $$$$$$$$\ $$$$$$$$\ $$$$$$$$\       $$$$$$$$\ $$$$$$$$\ $$$$$$$$\ $$$$$$$$\
\________|\________|\________|\________|      \________|\________|\________|\________|




)"<<endl<<endl;

switch(random_number(6))
        {
                        case 1:cout<<"You were caught while sleeping"<<endl;
                                      schoolscore=schoolscore -500;
                                      break;
                        case 2:cout<<"You were caught while sleeping"<<endl;
                                      schoolscore=schoolscore-500;
                                      break;
                        case 3:cout<<"You were not caught while sleeping"<<endl;
                                      schoolscore=schoolscore + 700;
                                      break;
                        case 4:cout<<"You were caught while sleeping"<<endl;
                                      schoolscore=schoolscore-500;
                                      break;
                        case 5:cout<<"You were not caught while sleeping"<<endl;
                                      schoolscore=schoolscore + 700;
                                      break;
                        default:cout<<"You were caught while sleeping"<<endl;


        }
}

void lectureattend()
{
                     int g;
                     srand(time(0));
                     for(int x = 1; x < 2; x++)
                     {
                             g= 1+(rand()%5);
                     }
                     switch(g)
                     {
                        case 1: cout<<endl<<"It's a good choice attending this lecture.";
                                collegepoints= collegepoints+600;
                                break;
                        case 2: cout<<endl<<"You seem to be getting along well with your professors.";
                                collegepoints= collegepoints+500;
                                break;
                        case 3: cout<<endl<<"You'll pass your exams quite easily.";
                                collegepoints= collegepoints+400;
                                break;
                        case 4: cout<<endl<<"You attended a lecture. Good job.";
                                collegepoints= collegepoints+300;
                                break;
                        default: cout<<endl<<"You attended a lecture. Good job.";
                                 collegepoints= collegepoints+600;


                     }


}

string name2, gender2, location2;

void gender2_location2_name2()
{
  switch(random_number(8))
    {
    case 1:
        gender2= ("male") ;
        break;
    case 2:
        gender2=("female");
        break;
    case 3:
        gender2=("male");
    case 4:
        gender2=("female");
    case 5:
        gender2=("male");
    case 6:
        gender2=("female");
    case 7:
        gender2=("male");
    default: gender2=("female");
    }
    switch(random_number(8))
    {
        case 1:
             location2=("Australia");
             locationscore=300;
             break;

        case 2:
             location2=("Dubai");
             locationscore=500;
             break;
        case 3:
             location2=("Singapore");
             locationscore=600;
             break;
        case 4:
             location2=("Los Angeles");
             locationscore=400;
             break;
        case 5:
             location2=("Sweden");
             locationscore=400;
             break;
        case 6:
             location2=("Canada");
             locationscore=700;
             break;
        case 7:
             location2=("Tokyo");
             locationscore=800;
             break;
        default: location2=("India");
     }
if (gender2=="male")
{
        switch(random_number(8))
    {
        case 1:
             name2=("Jake Orlando");
             break;
        case 2:
             name2=("Josh Pyke");
             break;
        case 3:
             name2=("Felix Arvid Ulf Kjellberg");
             break;
        case 4:
             name2=("Ryan Gosling");
             break;
        case 5:
             name2=("Tom Hardy");
             break;
        case 6:
             name2=("Peter Parker");
             break;
        case 7:
             name2=("Yusuf Rashid");
             break;
        default: name2=("Tony Stark");
    }
}

if (gender2=="female")
{
        switch(random_number(8))
    {
        case 1:
             name2=("Anne Hall");
             break;

        case 2:
             name2=("Jennifer Kingston");
             break;
        case 3:
             name2=("Julia Baker");
             break;
        case 4:
             name2=("Hailey Baldwin");
             break;
        case 5:
             name2=("Ashley Kutcher");
             break;
        case 6:
             name2=("Scarlet Johansson");
             break;
        case 7:
             name2=("Kaitlyn Keller");
             break;
        default: name2=("Natlie Koffman");
    }
  }
}
string talk;
string talk2;
char stroll;
void introduction()
{
  cout<<"You met a "<<gender2<<" at the party... Introduce yourself."<<endl<<endl;
  cout<<gender2<<": Hey, ";Sleep(1500);cout<<"I'm ";Sleep(1500);cout<<name2;Sleep(1500);cout<<" and you are?"<<endl;Sleep(1500);
  cout<<name<<": ";
  Sleep(500);
  cin>>talk;
  if( !talk.compare(name) )
  {
     cout<<name2<<": Oh, ";Sleep(1500);cout<<"really..."<<endl;Sleep(1500);
  }
  else
  {
       cout<<name2<<": Nice ";Sleep(1500);cout<<"meeting you, ";Sleep(1500);cout<<name<<"!"<<endl;Sleep(1500);
  }
  cout<<name2<<": Is it "; Sleep(1500);cout<<"your first ";Sleep(1500);cout<<"year here?"<<endl;Sleep(1500);
  cout<<name<<": ";
  cin>>talk2;
  cout<<name2<<": Getting kind "; Sleep(1500);cout<<"loud in here, ";Sleep(1500);cout<<"ain't it?"<<endl;Sleep(1500);
  cout<<name2<<": Wanna take "; Sleep(1500);cout<<"a stroll ";Sleep(1500);cout<<"outside? (y/n)"<<endl;Sleep(1500);
  cin>>stroll;
  if(stroll=='y'|| stroll=='Y')
  {
    set_text_color(10);
cout<<R"(



              _{\ _{\{\/}/}/}__
             {/{/\}{/{/\}(\}{/\} _
            {/{/\}{/{/\}(_)\}{/{/\}  _
         {\{/(\}\}{/{/\}\}{/){/\}\} /\}
        {/{/(_)/}{\{/)\}{\(_){/}/}/}/}
       _{\{/{/{\{/{/(_)/}/}/}{\(/}/}/}
      {/{/{\{\{\(/}{\{\/}/}{\}(_){\/}\}
      _{\{/{\{/(_)\}/}{/{/{/\}\})\}{/\}
     {/{/{\{\(/}{/{\{\{\/})/}{\(_)/}/}\}
      {\{\/}(_){\{\{\/}/}(_){\/}{\/}/})/}
       {/{\{\/}{/{\{\{\/}/}{\{\/}/}\}(_)
      {/{\{\/}{/){\{\{\/}/}{\{\(/}/}\}/}
       {/{\{\/}(_){\{\{\(/}/}{\(_)/}/}\}
         {/({/{\{/{\{\/}(_){\/}/}\}/}(\}
          (_){/{\/}{\{\/}/}{\{\)/}/}(_)
            {/{/{\{\/}{/{\{\{\(_)/}
             {/{\{\{\/}/}{\{\\}/}
              {){/ {\/}{\/} \}\}    )";
           set_text_color(4);
           cout<<R"(
                   \.-'.-/
          __...--- |'-.-'| --...__
   _...--"   .-'   |'-.-'|  ' -.  ""--..__
 -"    ' .  . '    |.'-._| '  . .  '
 .  '-  '    .--'  | '-.'|    .  '  . '
          ' ..     |'-_.-|
  .  '  .       _.-|-._ -|-._  .  '  .
              .'   |'- .-|   '.
  ..-'   ' .  '.   `-._.-´   .'  '  - .
   .-' '        '-._______.-'     '  .
        .      ~,
           )"<<endl<<endl;
           set_text_color(14);
           cout<<"You take a calming stroll outside..."<<endl<<endl;
           lifescore= lifescore+1000;
  }
 else
 {
  cout<<name2<<": Bye... "; Sleep(1500);cout<<"I got ";Sleep(1500);cout<<"to go."<<endl;Sleep(1500);
 }
}
void dance()
{
    switch(random_number(5))
    {
    case 1: cout<<R"(
       .,,~~.                ,~"~.
      { /`,__\     ,Wk       > ::::     x%F
     { `}'~.~/   ,' /       <, ?::;   ,'"7
     {`}'\._/  ,' ,'         l_  f  ,'  /
      ,__/ l_.'`,'         ,__}--{_'  ,'
     {  `.__.' <          /          7
      \ \    )  )        /   +----+ /
       \-\`-'`-'        /  , | 42 |7
  ` `   \ \___l,-_,___.'  /1 +----/
   ) )   k____-~'-l_____.' |     f
 .'.'   /===#==\           l     j
      .'        `.         I===I=I
    ,' ,'       `.`.       f     }
  ,' ,'  /      \ `.`.     |     }
.'^.^.^.'`.'`.^.'`.'`.^.   l    Y;
           `.   \          }    |
            !`,  \         |    |
            l /   }       ,1    |
            l/   /        !l   ,l
            /  ,'         ! \    \
           /  /!          !  \    \
          / ,f l          l___j.   \
         (_ \l_ `_    ,.-'`--(  `.,'`.
          Y\__Y`--'   `-'~x__J    j'  >
                                ,/ ,^'
                               f__
                               )";
  Sleep(600);
    break;
    case 2: cout<<R"(
   _                             .-.
  / )  .-.    ___          __   (   )
 ( (  (   ) .'___)        (__'-._) (
  \ '._) (,'.'               '.     '-.
   '.      /  "\               '    -. '.
     )    /   \ \   .-.   ,'.   )  (  ',_)    _
   .'    (     \ \ (   \ . .' .'    )    .-. ( \
  (  .''. '.    \ \|  .' .' ,',--, /    (   ) ) )
   \ \   ', :    \    .-'  ( (  ( (     _) (,' /
    \ \   : :    )  / _     ' .  \ \  ,'      /
  ,' ,'   : ;   /  /,' '.   /.'  / / ( (\    (
  '.'      "   (    .-'. \       ''   \_)\    \
                \  |    \ \__             )    )
              ___\ |     \___;           /  , /
             /  ___)                    (  ( (
             '.'                         ) ;) ;
                                        (_/(_/)";
    Sleep(600);
    break;
    case 3: cout<<R"(
     .,,-~&,               ,~"~.
    { /`,__\`.             > ::::
   { `}'~.~/\ \           <, ?::;
   {`}'\._/  ) }           l_  f
    ,__/ l_,'`/          ,__}--{_.
   {  `.__.' (          /         }
    \ \    )  )        /          !
     \'\`-'`-'        /  ,    1  J;
      \ \___l,-_,___.'  /1    !  Y
       k____-~'-l_____.' |    l /
      /===#=l            l     f
     f      8            I===I=I
     t    ! 8            f     }
      Y    \l            |     }
       \    \            l    Y;
        `.   \           }    |
         !`,  \          |    |
         l /   }        ,1    |
         l/   /         !l   ,l
         /  ,'          ! \    \
        /  /!           !  \    \
       /_,f_l           l___j.   \
      (_ \l_ `_     ,.-'`--(  `.,'`.
       Y\__Y`--'    `-'~x__J    j'  >
                              ,/ ,^'
                             f__J   )";
            Sleep(600);
            break;
    default: cout<<R"(
                      |
                      |            .'
                  \   |   /
               `.  .d88b.   .'
                  d888888b
      --     --  (88888888)  --
                  Y888888Y
              .'   `Y88Y'   `.
                  /       \
           .'         !        `.


       .,,-~&,               ,~"~.
      { /___/\`.             > ::::
     { `}'~.~/\ \   ` `     <, ?::;
     {`}'\._/  ) }   ) )     l_  f
      ,__/ l_,'-/  .'.'    ,__}--{_.
     {  `.__.' (          /         }
      \ \    )  )        /          !
       \-\`-'`-'        /  ,    1  J;
  ` `   \ \___l,-_,___.'  /1    !  Y
   ) )   k____-~'-l_____.' |    l /
 .'.'   /===#==\           l     f
      .'        `.         I===I=I
    ,' ,'       `.`.       f     }
  ,' ,'  /      \ `.`.     |     }
.'^.^.^.'`.'`.^.'`.'`.^.   l    Y;
           `.   \          }    |
            !`,  \         |    |
            l /   }       ,1    |
            l/   /        !l   ,l
            /  ,'         ! \    \
           /  /!          !  \    \
    ' '   / ,f l          l___j.   \
   ( (   (_ \l_ `_    ,.-'`--(  `.,'`.
    `.`.  Y\__Y`--'   `-'~x__J    j'  >
                                ,/ ,^'
                               f__J   )";
       }
    Sleep(600);

    cout<<"You had a great time dancing"<<endl<<endl;
    lifescore= lifescore+ 600;
}


void college_project()
{
    switch(random_number(5))
    {
    case 1: 
    cout<<endl<<endl<<"You analyze the markets for a project...";
    cout<<R"(
       |
       |
       |
       |
       |
       |
       |                  *           *
       |              ***  *        *
       |             *       *     *
       |            *          ***
       |           *
       |          *
       |         *
       |    *   *
       |   *  *
       |  *
       | * 
       |*
       |
       |
       +---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---)";
       job=("Economist");
    Sleep(600);
    break;
    case 2: 
    cout<<endl<<endl<<"You are researching on polymers...";
    cout<<R"(

                               __              []
                               ||              []
                               ||              []
                               ||              []
                            __ ||              []
                            || ||              []
                          .-||-||-.            []  /\
                         _\_______/_===========[]=(-o)
                          )\_____/(            []  \/
                         /     ||  \           []
                        /      ||   \          []
                       /       ||    \         []
                      /~~~~~~~~~~~~~~~\        []
                     /         ::      \       []
                    (          ::       )      []
                     `-----------------'       []
                             )                 []
                           (   )               []
                             )( . (            []
                          .) @@)   )           []
                       ` ) @@(@@)@             []
                         (@@(@@)@              []
                          @(@.@)@@             []
                        ` (@{__}@)`            []
                            :__;               []
        ___                  {}+               []
       ( = )             .---'`---.            []
        | |_            /          \   ________[]____
    ____| |_|==========(____________)_/______________\)";
    Sleep(600);
    job=("Mad Scientist");
    break;
    case 3: 
    cout<<endl<<endl<<"You learnt to become an ethical hacker...";
    cout<<R"(
            ______________________________________________________
           /                                                      \
           |    _____________________________________________     |
           |   |                                             |    |
           |   |  C:\> _                                     |    |
           |   |                                             |    |
           |   |                                             |    |
           |   |                                             |    |
           |   |                                             |    |
           |   |                                             |    |
           |   |                                             |    |
           |   |                                             |    |
           |   |                                             |    |
           |   |                                             |    |
           |   |                                             |    |
           |   |                                             |    |
           |   |_____________________________________________|    |
           |                                                      |
            \_____________________________________________________/
                   \_______________________________________/
                _______________________________________________
             _-'    .-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.  --- `-_
          _-'.-.-. .---.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.--.  .-.-.`-_
       _-'.-.-.-. .---.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-`__`. .-.-.-.`-_
    _-'.-.-.-.-. .-----.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-----. .-.-.-.-.`-_
 _-'.-.-.-.-.-. .---.-. .-----------------------------. .-.---. .---.-.-.-.`-_
:-----------------------------------------------------------------------------:
`---._.-----------------------------------------------------------------._.---'
)";
Sleep(600);
job=("Software Engineer");
            break;
case 4: 
    cout<<endl<<endl<<"No one really understands the artwork you make...";
    cout<<R"(
           ._____. ._____. ._____. ._____. ._____. ._____. ._____. ._____.
| ._. | | ._. | | ._. | | ._. | | ._. | | ._. | | ._. | | ._. |
| !_| |_|_|_! | | !_| |_|_|_! | | !_| |_|_|_! | | !_| |_|_|_! |
!___| |_______! !___| |_______! !___| |_______! !___| |_______!
.___|_|_| |_________|_|_| |___. .___|_|_| |_________|_|_| |___.
| ._____| |_____________| |_. | | ._____| |_____________| |_. |
| !_! | | |         | | ! !_! | | !_! | | |         | | ! !_! |
!_____! | |         | | !_____! !_____! | |         | | !_____!
._____. | |     .___| |___.     ._______|_|___.     | | ._____.
| ._. | | |     | ._| |_. |     | ._________. |     | | | ._. |
| !_| |_|_|_____| |_|_|_| |_____|_|_____| |_|_|_____| |_|_|_! |
!___| |_________| |_____| |_____________| |_________| |_______!
.___|_|_| |___. | !_| |_|_|_____| |_____|_|_! | .___|_|_| |___.
| ._____| |_. | !___| |_________| |___________! | ._____| |_. |
| !_! | | !_! | .___|_|_| |___. | | .___| |___. | !_! | | !_! |
!_____! !_____! | ._____| |_. | | | | ._| |_. | !_____! !_____!
._____. ._____. | !_| |_! | | | | !_| |_|_|_! | ._____. ._____.
| ._. | | ._. | !___| |___! | | !___| |_______| | ._. | | ._. |
| !_| |_|_|_! | .___|_|_____| |_____|_|_| |___. | !_| |_|_|_! |
!___| |_______! | ._________| |_________| |_. | !___| |_______!
.___|_|_| |_____|_|_| |_____|_|_____| |_|_|_| |_____|_|_| |___.
| ._____| |_________| |_____________| |_____| |_________| |_. |
| !_! | | |     | !_|_|_____! |     | !_| |_! |     | | ! !_! |
!_____! | |     !_____________!     !___| |___!     | | !_____!
._____. | |         | | ._____. ._____. | |         | | ._____.
| ._. | | |         | | | ._. | | ._. | | |         | | | ._. |
| !_| |_|_|_________| |_|_|_! | | !_| |_|_|_________| |_|_|_! |
!___| |_____________| |_______! !___| |_____________| |_______!
.___|_|_| |___. .___|_|_| |___. .___|_|_| |___. .___|_|_| |___.
| ._____| |_. | | ._____| |_. | | ._____| |_. | | ._____| |_. | 
| !_! | | !_! | | !_! | | !_! | | !_! | | !_! | | !_! | | !_! |
!_____! !_____! !_____! !_____! !_____! !_____! !_____! !_____!
)";
Sleep(600);
job=("Artist");
            break;
    default: cout<<endl<<endl<<"You build a robot";
    cout<<R"(


|@|@|@|@|           |@|@|@|@|
|@|@|@|@|   _____   |@|@|@|@|
|@|@|@|@| /\_T_T_/\ |@|@|@|@|
|@|@|@|@||/\ T T /\||@|@|@|@|
 ~/T~~T~||~\/~T~\/~||~T~~T\~
  \|__|_| \(-(O)-)/ |_|__|/
  _| _|    \\8_8//    |_ |_
|(@)]   /~~[_____]~~\   [(@)|
  ~    (  |       |  )    ~
      [~` ]       [ '~]
      |~~|         |~~|
      |  |         |  |
     _<\/>_       _<\/>_
    /_====_\     /_====_\)";
       }
    Sleep(600);
job=("Mechanical Engineer");    
}
int death_console()
{
    SetConsoleTitle("Death of a Life");
    HWND ConsoleWindow;
    ConsoleWindow=GetForegroundWindow();

    //Getting the desktop hadle and rectangule
    HWND   hwndScreen;
    RECT   rectScreen;
    hwndScreen=GetDesktopWindow ();
    GetWindowRect(hwndScreen,&rectScreen);

    //Set windows size(see the width problem)
    SetWindowPos (ConsoleWindow,NULL,0,0,1000,500, SWP_SHOWWINDOW);

    // Get the current width and height of the console
    RECT rConsole;
    GetWindowRect (ConsoleWindow,&rConsole);
    int Width = rConsole.left = rConsole.right;
    int Height = rConsole.bottom - rConsole.top;

    //caculate the window console to center of the screen
    int ConsolePosX;
    int ConsolePosY;
    ConsolePosX = ((rectScreen.right-rectScreen.left)/2-Width/2 );
    ConsolePosY = ((rectScreen.bottom-rectScreen.top)/2- Height/2 );
    SetWindowPos(ConsoleWindow,NULL,ConsolePosX,ConsolePosY, Width, Height, SWP_SHOWWINDOW || SWP_NOSIZE);

      time_t now;
      time(&now);
      srand(now);
      for(int a=0;a<40;a++)
      {
          Sleep(100);
          SMALL_RECT WinRect = {0, 0, random_number(200), random_number(100)};
          SMALL_RECT* WinSize = &WinRect;
          SetConsoleWindowInfo(GetStdHandle(STD_OUTPUT_HANDLE), true, WinSize);
      }

}
void death_details()
{
  SetConsoleTitle("Death of a Life");
  system("mode con COLS=700");
      ShowWindow(GetConsoleWindow(),SW_MAXIMIZE);
      HWND hWnd;
        RECT WinRect;
        hWnd = FindWindow(NULL, "Death of a Life");

        GetWindowRect(hWnd, &WinRect);

        MoveWindow(hWnd, 0, 0, WinRect.right - WinRect.left, WinRect.bottom - WinRect.top, TRUE);
        char ch;
      //system("C:\\WINDOWS\\System32\\shutdown -s");


}
int Modulus(int iN, int iMod)
{
    int iQ = (iN/iMod);
    return iN - (iQ*iMod);
}

char GetChar(int iGenerator, char cBase, int iRange)
{
    return (cBase + Modulus(iGenerator, iRange));
}

int matrix_effect()
{

    HANDLE  hConsole;
    hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hConsole, 2);

    char caRow[80];
    int j = 7;
    int k = 2;
    int l = 5;
    int m = 1;
    for (int f=8;f<200;f++){
        // Output a random row of characters
        for ( int i = 0; i <80; ++i )
        {
            if (caRow[i] != ' ') {
                caRow[i] = GetChar(j + i*i, 33, 30);
                if (((i*i + k) % 71) == 0) {
                    SetConsoleTextAttribute(hConsole,  7);
                } else {
                    SetConsoleTextAttribute(hConsole,  2);
                }
            }
            std::cout << caRow[i];
            SetConsoleTextAttribute(hConsole,  2);
        }
        j = (j + 31);
        k = (k + 17);
        l = (l + 47);
        m = (m + 67);
        caRow[Modulus(j, 80)] = '-';
        caRow[Modulus(k, 80)] = ' ';
        caRow[Modulus(l, 80)] = '-';
        caRow[Modulus(m, 80)] = ' ';}
        // Delay
        Sleep(10);
}
const int width = 170;

// Defines the number of flips in Boolean Array 'switches'
const int flipsPerLine =10;


void matrix_effect_2()
{
    int i=0, x=0;

    // srand initialized with time function
    // to get distinct rand values at runtime
    srand(time(NULL));

    // Used to decide whether to print
    // the character in that particular iteration
    bool switches[width] = {0};

    // Set of characters to print from
    const string ch = "1234567890qwertyuiopasdfghjkl"
                      "zxcvbnm,./';[]!@#$%^&*()-=_+";
    const int l = ch.size();

   set_text_color(10);

    // Indefinite Loop
   for (int f=8;f<100;f++)
    {
        // Loop over the width
        // Increment by 2 gives better effect
        for (i=0;i<width;i+=2)
        {
            // Print character if switches[i] is 1
            // Else print a blank character
            if (switches[i])
                cout << ch[rand() % l] << " ";
            else
                cout<<"  ";
        }

        // Flip the defined amount of Boolean values
        // after each line
        for (i=0; i!=flipsPerLine; ++i)
        {
            x = rand() % width;
            switches[x] = !switches[x];
        }

         // New Line
        cout << endl;

        Sleep(100);
    }
}
void gotoxy(int x, int y)
{

 char essq[100];
 char xstr[100];
 char ystr[100];
 sprintf(xstr, "%d", x);
 sprintf(ystr, "%d", y);
 essq[0] = '\0';

 strcat(essq, "\033[");
 strcat(essq, ystr);
 strcat(essq, "d");
 strcat(essq, "\033[");

 strcat(essq, xstr);

 strcat(essq, "G");
 printf("%s", essq);

}
int death()
{
death_console();
death_details();
matrix_effect();
gotoxy(1,1);
matrix_effect_2();
system("cls");
death_console();
death_details();
SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 10);
    cout<<R"(
                                           .""--..__
                     _                     []       ``-.._
                  .'` `'.                  ||__           `-._
                 /    ,-.\                 ||_ ```---..__     `-.
                /    /:::\\               /|//}          ``--._  `.
                |    |:::||              |////}                `-. \
                |    |:::||             //'///                    `.\
                |    |:::||            //  ||'The grim             `|
                /    |:::|/        _,-//\  || reaper has come
               /`    |:::|`-,__,-'`  |/  \ || to collect your dead body.
             /`  |   |'' ||           \   |||
           /`    \   |   ||            |  /||
         |`       |  |   |)            \ | || It is quite unfortunate that
        |          \ |   /      ,.__    \| || life had to come to an end in this way.
        /           `         /`    `\   | ||
       |                     /        \  / ||
       |                     |        | /  || You have played a your role quite sufficiently
       /         /           |        `(   || and we can only hope for you to see another day
      /          .           /          )  || in this two dimensional world that recreates life.
     |            \          |     ________||
    /             |          /     `-------.|
   |\            /          |              ||
   \/`-._       |           /              ||
    //   `.    /`           |              ||
   //`.    `. |             \              ||
  ///\ `-._  )/             |              ||
 //// )   .(/               |              ||
 ||||   ,'` )               /              // This is the Game of Life, signing out.
 ||||  /                    /             ||
 `\\` /`                    |             //
     |`                     \            ||
    /                        |           //
  /`                          \         //
/`                            |        ||
`-.___,-.      .-.        ___,'        (/
         `---'`   `'----'`)";


         cout<<"God has signed you a cheque of a life-score of "<<lifescore<<". Maybe some of it shall return back to you as karma";
         char g;
         cin>>g;
}
HANDLE hStdout;

int ScrollByAbsoluteCoord(int iRows)
{
    CONSOLE_SCREEN_BUFFER_INFO csbiInfo;
    SMALL_RECT srctWindow;
    if (! GetConsoleScreenBufferInfo(hStdout, &csbiInfo))
    {
        printf("GetConsoleScreenBufferInfo (%d)\n", GetLastError());
        return 0;
    }

    srctWindow = csbiInfo.srWindow;
    if ( srctWindow.Top >= iRows )
    {
        srctWindow.Top -= (SHORT)iRows;
        srctWindow.Bottom -= (SHORT)iRows;
        if (! SetConsoleWindowInfo(
                   hStdout,
                   TRUE,
                   &srctWindow))
        {
            printf("SetConsoleWindowInfo (%d)\n", GetLastError());
            return 0;
        }
        return iRows;
    }
    else
    {
        printf("\nCannot scroll; the window is too close to the top.\n");
        return 0;
    }
}

int ScrollByRelativeCoord(int iRows)
{
    CONSOLE_SCREEN_BUFFER_INFO csbiInfo;
    SMALL_RECT srctWindow;

    if (! GetConsoleScreenBufferInfo(hStdout, &csbiInfo))
    {
        printf("GetConsoleScreenBufferInfo (%d)\n", GetLastError());
        return 0;
    }



    if (csbiInfo.srWindow.Top >= iRows)
    {
        srctWindow.Top =- (SHORT)iRows;
        srctWindow.Bottom =- (SHORT)iRows;
        srctWindow.Left = 0;
        srctWindow.Right = 0;
        if (! SetConsoleWindowInfo(
                   hStdout,
                   FALSE,
                   &srctWindow))
        {
            printf("SetConsoleWindowInfo (%d)\n", GetLastError());
            return 0;
        }
        return iRows;
    }
    else
    {
        printf("\nCannot scroll; the window is too close to the top.\n");
        return 0;
    }
}
  int main()
{
  death();
  console_details();
  console_music_gameplay();
  loadscreen();
  gender_location_name();
  set_text_color(14);
  cout<<"You are "<<name <<" of "<<location<<". You are currently 14 years old in the year 2001."<<endl;
  cout<<endl;
  Sleep(2000);
  //add nice font
  cout<<"W";
  Sleep(200);
  cout<<"e";
  Sleep(200);
  cout<<"l";
  Sleep(200);
  cout<<"c";
  Sleep(200);
  cout<<"o";
  Sleep(200);
  cout<<"m";
  Sleep(200);
  cout<<"e";
  Sleep(200);
  cout<<" ";
  Sleep(200);
  cout<<"t";
  Sleep(200);
  cout<<"o";
  Sleep(200);
  cout<<" ";
  Sleep(200);
  cout<<"t";
  Sleep(200);
  cout<<"h";
  Sleep(200);
  cout<<"e";
  Sleep(200);
  cout<<endl<<endl;
  Sleep(1500);
  set_text_color(10);
    printf("");

cout<<R"(

_____/\\\\\\\\\\\\______________________________________________________________________________/\\\\\________/\\\__________________________/\\\\\_____________
 ___/\\\//////////_____________________________________________________________________________/\\\///________\/\\\________________________/\\\///______________
  __/\\\_______________________________________________________________________________________/\\\____________\/\\\______________/\\\_____/\\\__________________
   _\/\\\____/\\\\\\\__/\\\\\\\\\_______/\\\\\__/\\\\\_______/\\\\\\\\____________/\\\\\_____/\\\\\\\\\_________\/\\\_____________\///___/\\\\\\\\\____/\\\\\\\\__
    _\/\\\___\/////\\\_\////////\\\____/\\\///\\\\\///\\\___/\\\/////\\\_________/\\\///\\\__\////\\\//__________\/\\\______________/\\\_\////\\\//___/\\\/////\\\_
     _\/\\\_______\/\\\___/\\\\\\\\\\__\/\\\_\//\\\__\/\\\__/\\\\\\\\\\\_________/\\\__\//\\\____\/\\\____________\/\\\_____________\/\\\____\/\\\____/\\\\\\\\\\\__
      _\/\\\_______\/\\\__/\\\/////\\\__\/\\\__\/\\\__\/\\\_\//\\///////_________\//\\\__/\\\_____\/\\\____________\/\\\_____________\/\\\____\/\\\___\//\\///////___
       _\//\\\\\\\\\\\\/__\//\\\\\\\\/\\_\/\\\__\/\\\__\/\\\__\//\\\\\\\\\\________\///\\\\\/______\/\\\____________\/\\\\\\\\\\\\\\\_\/\\\____\/\\\____\//\\\\\\\\\\_
        __\////////////_____\////////\//__\///___\///___\///____\//////////___________\/////________\///_____________\///////////////__\///_____\///______\//////////__

  )"<<endl<<endl;
//FOR PRINT
/*cout<<R"(

_____/\\\\\\\\\\\\_______________________________________________________________/\\\\\_/\\\_____________________/\\\\\________
 ___/\\\//////////______________________________________________________________/\\\///_\/\\\___________________/\\\///_________
  __/\\\________________________________________________________________________/\\\_____\/\\\__________/\\\____/\\\_____________
   _\/\\\____/\\\\\\\/\\\\\\\\\______/\\\\\__/\\\\\______/\\\\\\\\____/\\\\\__/\\\\\\\\\__\/\\\_________\///__/\\\\\\\\\/\\\\\\\\_
    _\/\\\___\/////\\\////////\\\___/\\\///\\\\\///\\\__/\\\/////\\\_/\\\///\\\\////\\\//__\/\\\__________/\\\\////\\\///\\\/////\\_
     _\/\\\_______\/\\\_/\\\\\\\\\\_\/\\\_\//\\\__\/\\\_/\\\\\\\\\\\_/\\\__\//\\\_\/\\\_____\/\\\_________\/\\\___\/\\\_/\\\\\\\\\\\_
      _\/\\\_______\/\\\/\\\/////\\\_\/\\\__\/\\\__\/\\\\//\\///////_\//\\\__/\\\__\/\\\_____\/\\\_________\/\\\___\/\\\\//\\///////__
       _\//\\\\\\\\\\\\/\//\\\\\\\\/\\\/\\\__\/\\\__\/\\\_\//\\\\\\\\\\\///\\\\\/___\/\\\_____\/\\\\\\\\\\\_\/\\\___\/\\\_\//\\\\\\\\\\
        __\////////////___\////////\//_\///___\///___\///___\//////////___\/////_____\///______\///////////__\///____\///___\//////////_

  )"<<endl<<endl;
*/
  Sleep(1000);
  set_text_color(14);
  cout<<"Every choice you take from this moment onwards shapes the being of your character."<<endl;
  cout<<"Smart moves combined with a bit of luck can take you up the ladder of success."<<endl;

cout<<endl<<endl<<endl;

//school

Sleep(5000);


cout<<"C";
Sleep(200);
cout<<"h";
Sleep(200);
cout<<"a";
Sleep(200);
cout<<"p";
Sleep(200);
cout<<"t";
Sleep(200);
cout<<"e";
Sleep(200);
cout<<"r";
Sleep(200);
cout<<" ";
Sleep(200);
cout<<"1";
Sleep(200);
cout<<":";
Sleep(200);
cout<<" ";
Sleep(200);
cout<<"S";
Sleep(200);
cout<<"c";
Sleep(200);
cout<<"h";
Sleep(200);
cout<<"o";
Sleep(200);
cout<<"o";
Sleep(200);
cout<<"l";
Sleep(200);

cout<<endl<<endl;
Sleep(1500);

cout<<"School is where your character develops. From the company you keep to the decisions you take."<<endl<<"In this chapter of life you have to take the most apt decisions even when distractions surround you."<<endl<<endl<<endl;
//edit
Sleep(2500);
school_menu();
cout<<"You have 4 choices to take before you leave school"<<endl;
int choice;

for(int e=1; e<=4; e++)
{
        cout<<"Enter choice number "<<e<<endl<<endl;
        cin>>choice;
        switch(choice)
        {
                case 1:    study_land();
                           Sleep(2000);
                           school_menu();
                           Sleep(2000);
                           break;

                case 2:    test_land();
                           Sleep(2000);
                           school_menu();
                           Sleep(2000);
                           break;

                case 3:    club_land();
                           Sleep(2000);
                           school_menu();
                           Sleep(2000);
                           break;

                case 4:    language_land();
                           Sleep(2000);
                           school_menu();
                           Sleep(2000);
                           break;
                case 5:    set_text_color(11);
                           game_land();
                           set_text_color(14);
                           Sleep(2000);
                           break;

                case 6:    doze_land();
                           Sleep(2000);
                           school_menu();
                           Sleep(2000);
                           break;


                default: cout<<"You should've chosen a valid option.";


        }



}

cout<<endl<<endl;

if (testrun=="yes")
{
    cout<<"You passed school. Well, this means your path to a successful life might be a little less rocky. We wish you luck.";
}
else
{
    cout<<"You seemingly made your way through school. Not taking any tests might act up as a bit of a sour apple in the later stages of life.";
}

//college
cout<<endl<<endl;
Sleep(3000);

cout<<"C";
Sleep(200);
cout<<"h";
Sleep(200);
cout<<"a";
Sleep(200);
cout<<"p";
Sleep(200);
cout<<"t";
Sleep(200);
cout<<"e";
Sleep(200);
cout<<"r";
Sleep(200);
cout<<" ";
Sleep(200);
cout<<"2";
Sleep(200);
cout<<":";
Sleep(200);
cout<<" ";
Sleep(200);
cout<<"C";
Sleep(200);
cout<<"o";
Sleep(200);
cout<<"l";
Sleep(200);
cout<<"l";
Sleep(200);
cout<<"e";
Sleep(200);
cout<<"g";
Sleep(200);
cout<<"e";
Sleep(200);

cout<<endl<<endl;
Sleep(1500);
cout<<"Freedom comes with a cost."<<endl<<"In this chapter of life you have to take the most apt decisions even when distractions surround you."<<endl<<endl<<endl;
//edit

college_menu();
cout<<"You have 7 choices to take before you leave college"<<endl;
int choice_2;

for(int f=1; f<=7; f++)
{
        cout<<"Enter choice number "<<f<<endl<<endl;
        cin>>choice_2;
        switch(choice_2)
        {
                case 1:    lectureattend();
                           Sleep(2000);
                           college_menu();
                           break;

                case 2:    college_party_menu();
                           cin>>party_choice;
                           switch(party_choice)
                           {
                            case 1: gender2_location2_name2();
                                    introduction();
                                    Sleep(2000);
                                    break;
                            case 2: dance();
                                    Sleep(2000);
                                    break;
                            case 3: //party trick
                                    Sleep(2000);
                                    break;
                            default: cout<<"You should have entered a valid option."<<endl<<endl;

                           }
                           Sleep(2000);
                           college_menu();
                           break;

                case 3:    //collge_project();
                           Sleep(2000);
                           college_menu();
                           break;

                case 4:    //lateclass();
                           Sleep(2000);
                           college_menu();
                           break;

                case 5:    //shop();
                           Sleep(2000);
                           college_menu();
                           break;

                case 6:    //collegework();
                           Sleep(2000);
                           college_menu();
                           break;


                default: cout<<"You should've chosen a valid option.";


        }



}


cout<<endl<<endl;
Sleep(3000);

cout<<"C";
Sleep(200);
cout<<"h";
Sleep(200);
cout<<"a";
Sleep(200);
cout<<"p";
Sleep(200);
cout<<"t";
Sleep(200);
cout<<"e";
Sleep(200);
cout<<"r";
Sleep(200);
cout<<" ";
Sleep(200);
cout<<"3";
Sleep(200);
cout<<":";
Sleep(200);
cout<<" ";
Sleep(200);
cout<<"W";
Sleep(200);
cout<<"o";
Sleep(200);
cout<<"r";
Sleep(200);
cout<<"k";
Sleep(200);

cout<<endl<<endl;
Sleep(1500);
cout<<"Don't frustrate and don't be frustrated."<<endl<<"In this chapter of life you have to work through your hardships."<<endl<<endl<<endl;

//work_menu();
cout<<"You have 4 choices to take before you settle down"<<endl;
int choice_3;

for(int f=1; f<=4; f++)
{
        cout<<"Enter choice number "<<f<<endl<<endl;
        cin>>choice_2;
        switch(choice_2)
        {
                case 1:    //work();
                           Sleep(2000);
                           //work_menu();
                           break;

                case 2:    //work_party_menu();
                           cin>>party_choice;
                           switch(party_choice)
                           {
                            case 1: gender2_location2_name2();
                                    introduction();
                                    Sleep(2000);
                                    break;
                            case 2: dance();
                                    Sleep(2000);
                                    break;
                            case 3: //party trick
                                    Sleep(2000);
                                    break;
                            default: cout<<"You should have entered a valid option."<<endl<<endl;

                           }
                           Sleep(2000);
                           //work_menu();
                           break;

                case 3:    //workproject();
                           Sleep(2000);
                           //work_menu();
                           break;

                case 4:    //latework();
                           Sleep(2000);
                           //work_menu();
                           break;

                case 5:    //shop();
                           Sleep(2000);
                           //work_menu();
                           break;




                default: cout<<"You should've chosen a valid option.";


        }



}

cout<<endl<<endl;
Sleep(3000);

cout<<"C";
Sleep(200);
cout<<"h";
Sleep(200);
cout<<"a";
Sleep(200);
cout<<"p";
Sleep(200);
cout<<"t";
Sleep(200);
cout<<"e";
Sleep(200);
cout<<"r";
Sleep(200);
cout<<" ";
Sleep(200);
cout<<"4";
Sleep(200);
cout<<":";
Sleep(200);
cout<<" ";
Sleep(200);
cout<<"L";
Sleep(200);
cout<<"o";
Sleep(200);
cout<<"v";
Sleep(200);
cout<<"e";
Sleep(200);

cout<<endl<<endl;
Sleep(1500);
cout<<"There is always some madness in love."<<endl<<"In this chapter of life make sure you aren't caught up in the madness of your heart and still think from you mind."<<endl<<endl<<endl;
//edit

//love_menu();

cout<<"You have 3 choices to take before you take your true love home."<<endl;
int choice_4;

for(int f=1; f<=7; f++)
{
        cout<<"Enter choice number "<<f<<endl<<endl;
        cin>>choice_2;
        switch(choice_2)
        {
                case 1:    //date();
                           Sleep(2000);
                           //love_menu();
                           break;

                case 2:    //date_party_menu();
                           cin>>party_choice;
                           switch(party_choice)
                           {
                            case 1: gender2_location2_name2();
                                    introduction();
                                    Sleep(2000);
                                    break;
                            case 2: dance();
                                    Sleep(2000);
                                    break;
                            case 3: //party trick
                                    Sleep(2000);
                                    break;
                            default: cout<<"You should have entered a valid option."<<endl<<endl;

                           }
                           Sleep(2000);
                           //love_menu();
                           break;

                case 3:    //collgeproject();
                           Sleep(2000);
                           //love_menu();
                           break;

                case 4:    //lateclass();
                           Sleep(2000);
                           //love_menu();
                           break;

                case 5:    //shop();
                           Sleep(2000);
                           //love_menu();
                           break;

                case 6:    //collegework();
                           Sleep(2000);
                           //love_menu();
                           break;


                default: cout<<"You should've chosen a valid option.";


        }



}


cout<<endl<<endl;
Sleep(3000);

cout<<"C";
Sleep(200);
cout<<"h";
Sleep(200);
cout<<"a";
Sleep(200);
cout<<"p";
Sleep(200);
cout<<"t";
Sleep(200);
cout<<"e";
Sleep(200);
cout<<"r";
Sleep(200);
cout<<" ";
Sleep(200);
cout<<"5";
Sleep(200);
cout<<":";
Sleep(200);
cout<<" ";
Sleep(200);
cout<<"F";
Sleep(200);
cout<<"a";
Sleep(200);
cout<<"m";
Sleep(200);
cout<<"i";
Sleep(200);
cout<<"l";
Sleep(200);
cout<<"y";
Sleep(200);


cout<<endl<<endl;
Sleep(1500);
cout<<"Family means putting your arms around each other and being there."<<endl<<"In this chapter of life you have to be there for the one's that love you most."<<endl<<endl<<endl;
//edit

//family_menu();

cout<<"You have 4 choices to take with your family."<<endl;
int choice_5;

for(int f=1; f<=4; f++)
{
        cout<<"Enter choice number "<<f<<endl<<endl;
        cin>>choice_2;
        switch(choice_2)
        {
                case 1:    //lectureattend();
                           Sleep(2000);
                           //family_menu();
                           break;

                case 2:    //family_party_menu();
                           cin>>party_choice;
                           switch(party_choice)
                           {
                            case 1: gender2_location2_name2();
                                    introduction();
                                    Sleep(2000);
                                    break;
                            case 2: dance();
                                    Sleep(2000);
                                    break;
                            case 3: //party trick
                                    Sleep(2000);
                                    break;
                            default: cout<<"You should have entered a valid option."<<endl<<endl;

                           }
                           Sleep(2000);
                           //family_menu();
                           break;

                case 3:    //collgeproject();
                           Sleep(2000);
                           //family_menu();
                           break;

                case 4:    //lateclass();
                           Sleep(2000);
                           //family_menu();
                           break;

                case 5:    //shop();
                           Sleep(2000);
                           //family_menu();
                           break;

                case 6:    //collegework();
                           Sleep(2000);
                           //family_menu();
                           break;


                default: cout<<"You should've chosen a valid option.";


        }



}



death();


    return 0;

  }
