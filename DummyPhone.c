#include<iostream>
#include<stdio.h>
#include<cstdlib>
#include<string.h>
#include<fstream>
#include<math.h>

using namespace std;

class game
{
	string option;
		public:
			void rockpaperscissors()
			{
			    srand(time(0));
				string r = "rock";
				string p = "paper";
				string s = "scissor";

				int com_option;
				int user_option;
				
				com_option = rand() % 3 + 1;
				
				cout<<"Rock, Paper or Scissors ?"<<endl;
				cout<<"Choose wisely:"<<endl;
				cout<<"(1)Rock \n(2)Scissors \n(3)Paper"<<endl;
				cin>>user_option;
				switch(user_option)
				{
					case 1:
						if(com_option == 1)
							{
							cout<<"Computer threw rock!!"<<endl;
							cout<<"Its a draw!"<<endl;
							}
						else if(com_option == 2)
							{
							cout<<"Computer threw scissors!!"<<endl;
							cout<<"Rock beats scissors!!"<<endl;
							cout<<"You won! :)"<<endl;
							}
						else if(com_option == 3)
						{
							cout<<"Computer threw paper!!"<<endl;
							cout<<"Paper beats rock!!"<<endl;
							cout<<"You lost :("<<endl;
						}
						break;
					case 2:
						if(com_option == 1)
							{
							cout<<"Computer threw rock!!"<<endl;
							cout<<"Rock beats scissors!!"<<endl;
							cout<<"You lose :("<<endl;
							}
						else if(com_option == 2)
							{
							cout<<"Computer threw scissors!!"<<endl;
							cout<<"Its a draw!"<<endl;
							}
						else if(com_option == 3)
						{
							cout<<"Computer threw paper!!"<<endl;
							cout<<"Scissors beats paper!!"<<endl;
							cout<<"You won!! :)"<<endl;
						}
						break;
					case 3:
						if(com_option == 1)
							{
							cout<<"Computer threw rock!!"<<endl;
							cout<<"Paper beats rock!!"<<endl;
							cout<<"You won !! :)"<<endl;
							}
						else if(com_option == 2)
							{
							cout<<"Computer threw scissors!!"<<endl;
							cout<<"Scissors beats paper"<<endl;
							cout<<"You lost :("<<endl;
							}
						else if(com_option == 3)
						{
							cout<<"Computer threw paper!!"<<endl;
							cout<<"Its a draw!"<<endl;
						}
						break;
					default:
						cout<<"Invalid option!";
				}
			}
			void race()
			{
                srand(time(0));
			    int player_pos = 0;
			    int com_pos = 0;
			    int player_turn;
			    int track_length;
			    int die;
			    char rolldie;
			    int difficulty;
			    cout<<"Choose difficulty: "<<endl;
			    cout<<"(1)Easy \n(2)Medium \n(3)Hard"<<endl;
			    cin>>difficulty;
			    switch(difficulty)
			    {
			        case 1:
			        cout<<"Easy mode \nReach 10m before the computer to win";
			        track_length = 10;
			        break;
			        case 2:
			        cout<<"Medium mode \nReach 30m before the computer to win";
			        track_length = 30;
			        break;
			        case 3:
			        cout<<"Hard mode \nReach 50m before the computer to win";
			        track_length = 50;
			        break;
			    }
			    while(player_pos < track_length && com_pos < track_length)
			    {
			    player_turn = 1;
			    if(player_turn ==  1)
			    {
			        cout<<"\nPlayers turn"<<endl;
			        cout<<"Roll die (y/n): ";
			        cin>>rolldie;
			        switch(rolldie)
			        {
			            case 'y':
			            cout<<"Rolling the die"<<endl;
			            die = rand() % 6 + 1;
			            player_pos += die;
			            cout<<"Player has reached "<<player_pos<<"m"<<endl;
			            player_turn = 0;
			            break;
			            case 'n':
                        cout<<"Thanks for playing!!"<<endl;
                        cout<<"Exiting game....";
                        exit(0);
                        break;
                        default:
                        cout<<"Exiting game....";
                    }
			    }
			    if(player_turn == 0)
			    {
			        cout<<"CPU's turn"<<endl;
			        cout<<"Rolling the die"<<endl;
			        die = rand() % 6 + 1;
			        com_pos += die;
			        cout<<"Computer has reached "<<com_pos<<"m"<<endl;
			        player_turn = 1;
			    }
			    }
			    if(player_pos >= track_length)
			    {
			        cout<<"You won!! :)"<<endl;
			    }
			    else if(com_pos >= track_length)
			    {
			        cout<<"You lost :(<<"<<endl;
			    }
			}
};
class calculator
{
    float a;
    float b;
    public:
        void initialize()
        {
        cout<<"Enter two numbers: ";
        cin>>a>>b;
        }
		float add()
		{
			return a+b;
		}
		float subtract()
		{
			return a-b;
		}
		float multiply()
		{
			return a*b;
		}
		float divide()
		{
			return a/b;
		}
		float percentage()
		{
		    float res;
		    res = float(a/100*b);
		    return res;
		}
		float power()
		{
		    return pow(a,b);
		}
};
class system_details
{
    public:
    void getdetails()
    {
        cout<<"System Info: "<<endl;
        cout<<"Processor\n3.05Gh\nDimensity9000\nOcta-Core"<<endl;
        cout<<"RAM\n8.00+4.00 GB"<<endl;
        cout<<"Android version: \n12"<<endl;
        cout<<"Phone Storage \n128GB"<<endl;
    }
};
class phone: public game, public calculator , public system_details
{
	public:
	phone()
	{
		cout<<"Switch on"<<endl;
	}
	virtual void getdetails()
	{
	    cout<<"User details: "<<endl;
	    cout<<"Name: \nShravan Serel"<<endl;
	    cout<<"Email: \nshravan.serel@gmail.com"<<endl;
	}
};

int main()
{
	string line;
	phone p;
	system_details *r;
	r = &p;
	int option, games;
	char operation, book;
	do{
	    cout<<"1.System details"<<endl;
	    cout<<"2.User details"<<endl;
		cout<<"3.Calculator"<<endl;
		cout<<"4.Gamespace"<<endl;
		cout<<"5.Library"<<endl;
		cout<<"6.Switch off"<<endl;
		cout<<"What app would you like to use?"<<endl;
		cin>>option;
		switch(option)
		{
		    case 1:
		        r->getdetails();
		        break;
		        
		    case 2:
		        p.getdetails();
		        break;
		        
			case 3:
				cout<<"Welcome to Calculator"<<endl;
				p.initialize();
				cout<<"Enter operation: ";
				cin>>operation;
				if(operation == '+')
				cout<<p.add()<<endl;
				else if(operation == '-')
				cout<<p.subtract()<<endl;
				else if(operation == '*')
				cout<<p.multiply()<<endl;
				else if(operation == '/')
				cout<<p.divide()<<endl;
				else if(operation == '%')
				cout<<p.percentage()<<endl;
				else if(operation == '^')
				cout<<p.power()<<endl;				
				break;
				
			case 4:
					cout<<"Welcome to gamespace!"<<endl;
					cout<<"What game would you like to play"<<endl;
					cout<<"1.Rock Paper Scissors"<<endl;
					cout<<"2.Race"<<endl;
						cin>>games;
						switch(games)
					{
						case 1:
							p.rockpaperscissors();
							break;
							
						case 2:
							p.race()	;
							break;
							
						default:
							cout<<"Game is not installed";
					}
					break;
				
			case 5:
				cout<<"Welcome to Library"<<endl;
				ifstream ifile;
				cout<<"What short story would you like to read?"<<endl;
				cout<<"a.Silence"<<endl;
				cout<<"b.Fini Flight"<<endl;
				cin>>book;
				switch(book)
				{
				case 'a':
					ifile.open("story1.txt");
					while(!ifile.eof())
					{
						getline(ifile, line);
						cout<<line<<endl;
					}
					ifile.close();
					break;
				
				case 'b':
					ifile.open("story2.txt");
					while(!ifile.eof())
					{
						getline(ifile, line);
						cout<<line<<endl;
					}
					ifile.close();
					break;
				
				default:
					cout<<"The book is not found";
					break;
				}
				break;
			}
		}while(option != 6);
	
		cout<<"Switching off.....";
}
