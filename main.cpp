// Program to print BFS traversal from a given
// source vertex. BFS(int s) traverses vertices
// reachable from s.
#include<iostream>
#include <list>
#include<bits/stdc++.h>
#include<conio.h>
#include<fstream>
#include<winsock.h>
#include<mysql.h>
#include<windows.h>
#include<sstream>
#include<stdio.h>
using namespace std;

// This class represents a directed graph using
// adjacency list representation
class genre
{
    public:
	int V; // No. of vertices
	string movie;

	// Pointer to an array containing adjacency
	// lists

	list<string> *adj;
    public:
	genre(int V); // Constructor

	// function to add an edge to graph
	void addEdge(int v, string w);

	// prints BFS traversal from a given source s
	void BFS(int s);

	//give the genre number
	int givenNumber( string s);


};

genre::genre(int V)
{
	this->V = V;
	adj = new list<string>[V];
}
void genre::addEdge(int v, string w)
{
	adj[v].push_back(w); // Add w to v’s list.
}

void genre::BFS(int s)
{

			list<string>::iterator i;

		for (i = adj[s].begin(); i != adj[s].end(); ++i)
		{

				cout<<*i;


		}

}
int genre::givenNumber(string s)
{
	    if(s.compare("action")==0){
	                return 0;
	    }
        if(s.compare("adventure") == 0){
                    return 1;
	    }
	     if(s.compare("comic")==0){
                    return 2;
	    }
	     if(s.compare("tragedy")==0){
                    return 3;
	     }
         if(s.compare("philosophy")==0){
                    return 4;
         }
         if(s.compare("drama")==0){
                    return 5;
         }

         if(s.compare("suspense")==0){
                    return 6;
         }
         if(s.compare("mystery")==0){
                    return 7;
         }



	}

//class for language
class language
{
    public:
	int V; // No. of vertices
	string movie;

	// Pointer to an array containing adjacency
	// lists
	list<string> *adj;
    public:
	language(int V); // Constructor

	// function to add an edge to graph
	void addEdge(int v, string w);

	// prints BFS traversal from a given source s
	void BFS(int s);

	//give the genre number
	int givenNumber( string s);


};

language::language(int V)
{
	this->V = V;
	adj = new list<string>[V];
}
void language::addEdge(int v, string w)
{
    adj[v].push_back(w); // Add w to v’s list.
}

void language::BFS(int s)
{



			list<string>::iterator i;

		for (i = adj[s].begin(); i != adj[s].end(); ++i)
		{

				cout<<*i;


		}

}
int language::givenNumber(string s)
{
	    if(s.compare("english")==0){
	                return 0;
	    }
        if(s.compare("hindi") == 0){
                    return 1;
	    }
	     if(s.compare("japanese")==0){
                    return 2;
	    }
	     if(s.compare("spanish")==0){
                    return 3;
	     }
         if(s.compare("chinese")==0){
                    return 4;
         }



	}


//class for country

class country
{   public:
	int V; // No. of vertices
	string movie;

	// Pointer to an array containing adjacency
	// lists
	list<string> *adj;
    public:
	country(int V); // Constructor

	// function to add an edge to graph
	void addEdge(int v, string w);

	// prints BFS traversal from a given source s
	void BFS(int s);

	//give the genre number
	int givenNumber( string s);


};

country::country(int V)
{
	this->V = V;
	adj = new list<string>[V];
}
void country::addEdge(int v, string w)
{
	adj[v].push_back(w); // Add w to v’s list.
}

void country::BFS(int s)
{



			list<string>::iterator i;

		for (i = adj[s].begin(); i != adj[s].end(); ++i)
		{

				cout<<*i;


		}

}
int country::givenNumber(string s)
{
	    if(s.compare("america")==0){
	                return 0;
	    }
        if(s.compare("japan") == 0){
                    return 1;
	    }
	     if(s.compare("india")==0){
                    return 2;
	    }
	     if(s.compare("spain")==0){
                    return 3;
	     }
         if(s.compare("china")==0){
                    return 4;
         }



}




class movie
{   public:
    string title;
    string genre;
    string language;
    string country;
    int genreNo;
    int languageNo;
    int countryNo;
public:
    void enterLanguage();
    void enterTitle();
    void enterGenre();
    void enterCountry();
    void showDetails();
    void enterAllDetails(string ,string, string ,string);
    void setGenreNo();
    void setLanguageNo();
    void setCountryNo();

};

void movie::enterTitle()
{
    cout<<"\n--------------ENTER THE MOVIE TITLE-----------\n";
    fflush(stdin);
    getline(cin,title);
}
void movie::enterGenre()
{
    int ch;
    cout<<"\n-------------CHOOSE THE TITLE----------------\n";
    cout<<"\n1.Action";
    cout<<"\n2.Adventure";
    cout<<"\n3.Comic";
    cout<<"\n4.tragedy";
    cout<<"\n5.Philoshophy";
    cout<<"\n6.Dream";
    cout<<"\n7.Suspense";
    cout<<"\n8.mystery";
    cout<<"\n9.Romance";
    cout<<"\n10drama";
    cout<<"\n11.children";

    cin>>ch;
    switch(ch)
    {
    case 1 : genre="action";
    break;
    case 2 : genre="adventure";
    break;
    case 3 : genre="comic";
    break;
    case 4 : genre="tragedy";
    break;
    case 5 : genre="philosophy";
    break;
    case 6 : genre="dream";
    break;
    case 7 : genre="suspense";
    break;
    case 8 : genre="mystery";
    break;
    case 9 : genre="romance";
    break;
    case 10 : genre="drama";
    break;
    case 11 : genre="children";
    break;
    default: cout<<"Wrong choice";

    }
    setGenreNo();
}

void movie::enterLanguage()
{

    int ch;
    cout<<"-------------CHOOSE THE LANGUAGE----------------";
    cout<<"\n1.English";
    cout<<"\n2.Hindi";
    cout<<"\n3.Japanese";
    cout<<"\n4.Spanish";
    cout<<"\n5.Chinese\n";

    cin>>ch;
    switch(ch)
    {
    case 1 : language="english";
    break;
    case 2 : language="hindi";
    break;
    case 3 : language="japanese";
    break;
    case 4 : language="spanish";
    break;
    case 5 : language="chinese";
    break;

    default: cout<<"Wrong choice";

    }
    setLanguageNo();
}

void movie::enterCountry()
{
    int ch;
    cout<<"-------------CHOOSE THE COUNTRY----------------";
    cout<<"\n1.America";
    cout<<"\n2.India";
    cout<<"\n3.Japan";
    cout<<"\n4.Spain";
    cout<<"\n5.China\n";

    cin>>ch;
    switch(ch)
    {
    case 1 : country="america";
    break;
    case 2 : country="india";
    break;
    case 3 : country="japan";
    break;
    case 4 : country="spain";
    break;
    case 5 : country="china";
    break;

    default: cout<<"Wrong choice";

    }

   setCountryNo();
}

void movie::showDetails()
{
    cout<<"\n MOVIE title:- ";
    cout<<title;
    cout<<"\n MOVIE genre:- ";
    cout<<genre;
    cout<<"\n MOVIE language:- ";
    cout<<language;
    cout<<"\n MOVIE country:- ";
    cout<<country;
    cout<<"\n genre code:- ";
    cout<<genreNo;
    cout<<"\n language code:- ";
    cout<<languageNo;
    cout<<"\n country code:- ";
    cout<<countryNo;
    cout<<"\n------------------------------------";
}

void movie::enterAllDetails(string title,string genre,string language , string country)
{
    this->title=title;
    this->genre=genre;
    this->language=language;
    this->country=country;
    setCountryNo();
    setGenreNo();
    setLanguageNo();
}
void movie::setCountryNo()
{
        if(country.compare("america") == 0)
        {
                    countryNo=0;
	    }
        if(country.compare("india") == 0){
                    countryNo=1;
	    }
	     if(country.compare("japan")==0){
                       countryNo=2;
	    }
	     if(country.compare("spain")==0){
                        countryNo=3;
	     }
         if(country.compare("china")==0){
                 countryNo=4;
         }

}

void movie::setGenreNo()
{
        if(genre.compare("action")==0){
	                 genreNo= 0;
	    }
        if(genre.compare("adventure") == 0){
                     genreNo= 1;
	    }
        if(genre.compare("comic")==0){
                     genreNo= 2;
	    }
        if(genre.compare("tragedy")==0){
                     genreNo= 3;
	     }
        if(genre.compare("philosophy")==0){
                     genreNo= 4;
         }
        if(genre.compare("dream")==0){
                     genreNo= 5;
         }

        if(genre.compare("suspense")==0){
                     genreNo= 6;
         }
        if(genre.compare("mystery")==0){
                     genreNo=  7;
         }
         if(genre.compare("romance")==0){
                     genreNo=  8;
         }
         if(genre.compare("drama")==0){
                     genreNo=  9;
         }
         if(genre.compare("children")==0){
                     genreNo=  10;
         }


}

void movie::setLanguageNo()
{
        if(language.compare("english")==0){
	                languageNo = 0;
	    }
        if(language.compare("hindi") == 0){
                    languageNo = 1;
	    }
	     if(language.compare("japanese")==0){
                    languageNo = 2;
	    }
	     if(language.compare("spanish")==0){
                    languageNo = 3;
	     }
         if(language.compare("chinese")==0){
                    languageNo = 4;
         }


}


    genre g(20);
    language h(10);
    country i(10);

    movie m[50];
    int movieNo=0;
    map<string,int> mymap;
    movie p[30];



void make_recommend(int choice)
{
  list<string>::iterator lt;
  std::map<string,int>::iterator it;
  int genreNo=0;
  int languageNo=0;
  int countryNo=0;
  genreNo=m[choice].genreNo;
  languageNo=m[choice].languageNo;
  countryNo=m[choice].countryNo;

  mymap.clear();
cout<<"\n\n\n\n -------------------------now executing genre graph\n";
_getch();
for(lt = g.adj[genreNo].begin(); lt != g.adj[genreNo].end(); ++lt)
    {
                it = mymap.find(*lt);
                if(it!=mymap.end())
                {
                 cout<<"\n at genre code "<<genreNo<<"  "<<"traversing "<<*lt<<" incrementing it..\n";
                 mymap[*lt]++;
                }
                else{
                 cout<<"\n at genre code "<<genreNo<<"  "<<"traversing "<<*lt<<" inserting  it..\n";

                        mymap[*lt]=1;
                }

    }
cout<<"\n\n\n\n -------------------------now executing language graph\n";
_getch();
for (lt = h.adj[languageNo].begin(); lt != h.adj[languageNo].end(); ++lt)
        {
                it=mymap.find(*lt);
                if( it != mymap.end() ){
                 cout<<"\n at genre code "<<languageNo<<"  "<<"traversing "<<*lt<<" incrementing it..\n";

                 mymap[*lt]+=3;
                }
                else{
                 cout<<"\n at genre code "<<languageNo<<"  "<<"traversing "<<*lt<<" inserting it..\n";

                        mymap[*lt]=3;
                }

        }
cout<<"\n\n\n\n -------------------------now executing country graph\n";
_getch();

for (lt = i.adj[countryNo].begin(); lt != i.adj[countryNo].end(); ++lt)
        {
                it=mymap.find(*lt);
                if( it != mymap.end() )
                {
                 cout<<"\n at genre code "<<countryNo<<"  "<<"traversing "<<*lt<<" incrementing it..\n";

                 mymap[*lt]+=2;
                }
                else{
                 cout<<"\n at genre code "<<countryNo<<"  "<<"traversing "<<*lt<<" inserting it..\n";

                        mymap[*lt]=2;
                }

        }





   std::map<string, int>::iterator itr;

   for (itr = mymap.begin(); itr != mymap.end(); itr++) {
       std::cout << '\t' << itr->first
             << '\t' << itr->second << '\n';
    }

cout<<"---------------------------\n";
/*
	// Declaring the type of Predicate that accepts 2 pairs and return a bool
	typedef std::function<bool(std::pair<std::string, int>, std::pair<std::string, int>)> Comparator;

	// Defining a lambda function to compare two pairs. It will compare two pairs using second field
	Comparator compFunctor =
			[](std::pair<std::string, int> elem1 ,std::pair<std::string, int> elem2)
			{
				return elem1.second > elem2.second;
			};

	// Declaring a set that will store the pairs using above comparision logic
	std::set<std::pair<std::string, int>, Comparator> setOfWords(mymap.begin(), mymap.end(), compFunctor);

	// Iterate over a set using range base for loop
	// It will display the items in sorted order of values
	for (std::pair<std::string, int> element : setOfWords)
		std::cout << element.first << " :: " << element.second << std::endl;
*/

cout<<"----------------------------------------\n";
	// Creating & Initializing a map of String & Ints
	std::map<std::string, int> mapOfWordCount = mymap;

	// Declaring the type of Predicate that accepts 2 pairs and return a bool
	typedef std::function<bool(std::pair<std::string, int>, std::pair<std::string, int>)> Comparator;

	// Defining a lambda function to compare two pairs. It will compare two pairs using second field
	Comparator compFunctor =
			[](std::pair<std::string, int> elem1 ,std::pair<std::string, int> elem2)
			{
				return elem1.second > elem2.second;
			};

	// Declaring a set that will store the pairs using above comparision logic
	std::set<std::pair<std::string, int>, Comparator> setOfWords(
			mapOfWordCount.begin(), mapOfWordCount.end(), compFunctor);

	// Iterate over a set using range base for loop
	// It will display the items in sorted order of values
	for (std::pair<std::string, int> element : setOfWords)
		std::cout<<element.first << " :: " << element.second << std::endl;
		_getch();

}



void output_init()
{
	// Object to write in file
	ofstream fout;

	// Opening file in append mode
	fout.open("movies.txt",ios::out);


	// Writing the object's data in file
	int i=0;

    while(i<19)
   {



	// Writing the object's data in file
	fout.write((char*)&m[i], sizeof(m[0]));
	i++;
    }


    fout.close();


}


// func to write in a sql database
void addrec(){
    string dummy;
    MYSQL* conn;
    conn = mysql_init(0);
    conn = mysql_real_connect(conn, "127.0.0.1", "root", "", "movies", 0, NULL, 0);
    if(conn){
        int qstate = 0, quantity;
        string title, genre,language,country;
        title=m[movieNo].title;
        genre=m[movieNo].genre;
        country=m[movieNo].country;
        language=m[movieNo].language;


        stringstream ss;
        ss << "INSERT INTO movies_table(title,genre,language,country) VALUES('" << title << "','" << genre << "','" << language <<"','"<<country<< "')";

        string query = ss.str();
        const char* q = query.c_str();
        qstate = mysql_query(conn, q);
        if(qstate == 0){
            cout << "Record Inserted..." << endl;

                system("cls");

        }else{
            cout << "Insert Error" << mysql_error(conn) << endl;

        }
    }else{
        cout << "Connection Error" << endl;

    }

    system("pause");
    system("cls");

}

// func to get input from sql table
void getrec(){
    movieNo=0;
    string dummy;
    MYSQL* conn;
    MYSQL_ROW row;
    MYSQL_RES* res;
    conn = mysql_init(0);
    conn = mysql_real_connect(conn, "127.0.0.1", "root", "", "movies", 0, NULL, 0);
    if(conn){
        int qstate = mysql_query(conn, "SELECT * FROM movies_table");

        if(!qstate){
            res = mysql_store_result(conn);

            while(row = mysql_fetch_row(res)){
                //cout << row[0] <<"\t | \t" << row[1] <<"\t | \t" << row[2] <<"\t | \t" << row[3] << "   " <<row[4]<< endl << endl;
                m[movieNo].title=row[1];
                m[movieNo].genre=row[2];
                m[movieNo].language=row[3];
                m[movieNo].country=row[4];

               // cout<<"\n showing copied details...\n";
               // m[movieNo].showDetails();
                m[movieNo].setGenreNo();
                m[movieNo].setCountryNo();
                m[movieNo].setLanguageNo();

                movieNo++;

             }
        }
    }



   // system("pause");
    system("cls");
}
void output_to_file()
{


	// Object to write in file
	ofstream fout;

	// Opening file in append mode
	fout.open("movies.txt",ios::app|ios::binary);


	// Writing the object's data in file






	// Writing the object's data in file
	fout.write((char*)&m[movieNo], sizeof(m[0]));


    fout.close();


}



void input_from_file()
{
	// Object to read from file
	ifstream fin;

	// Opening file in input mode
	fin.open("movies.txt", ios::binary);
    if(!fin){
     cout<<"exitting from file";
     return;
    }
	movie n;
	// Reading from file into object "obj"
    fin.read((char*)&n, sizeof(n));
    int i=0;
    movieNo=0;
	while(!fin.eof())
    {
    cout<<"\n printing first record\n";
	n.showDetails();
	m[i]=n;
    cout<<"\n showing copied record record\n";
    m[0].showDetails();
	_getch();
		fin.read((char*)&n, sizeof(n));
     i++;
     movieNo++;
    }

	fin.close();
}

// Driver program
int admin_panel()
{
    system("CLS");
    cout<<"\n -----------enter the details of new movie--------\n";
    m[movieNo].enterTitle();
    m[movieNo].enterGenre();
    m[movieNo].enterLanguage();
    m[movieNo].enterCountry();

    //output_to_file();
    addrec();
    g.addEdge(m[movieNo].genreNo,m[movieNo].title);
	h.addEdge(m[movieNo].languageNo,  m[movieNo].title);
	i.addEdge(m[movieNo].countryNo,  m[movieNo].title);

	movieNo++;

    // h.BFS(m[movieNo-1].languageNo);
    _getch();
	return 0;
}
int user_panel()
{   system("CLS");
    cout<<"\n -------------Movies we have------------\n";
    //input_from_file();
     getrec();
    for(int j=0;j<movieNo;j++)
    {
      cout<<(j+1)<<". ";
      cout<<m[j].title<<endl;



    }
int choice;
cin>>choice;
choice--;
m[choice].showDetails();
_getch();
make_recommend(choice);
}

//input functions to write in file

// Function definition of input() to input info


// Function definition of output_highest_rated() to
// extract info from file Data Base


// Driver program to test methods of graph class
int main()
{
	// Create a graph given in the above diagram


	/*
	g.addEdge(g.givenNumber("action"), "spiderman");
	g.addEdge(g.givenNumber("action"), "captain");
	g.addEdge(g.givenNumber("action"), "avengers");
	g.addEdge(g.givenNumber("action"), "america");
	g.addEdge(g.givenNumber("action"), "kill");
	g.addEdge(g.givenNumber("adventure"), "romeo");

	h.addEdge(h.givenNumber("english"), "spiderman");
	h.addEdge(h.givenNumber("english"), "captain");
	h.addEdge(h.givenNumber("english"), "avengers");
	h.addEdge(h.givenNumber("hindi"), "america");
	h.addEdge(h.givenNumber("hindi"), "kill");
	h.addEdge(h.givenNumber("japanese"), "romeo");

	i.addEdge(i.givenNumber("america"), "spiderman");
	i.addEdge(i.givenNumber("japan"), "captain");
	i.addEdge(i.givenNumber("india"), "avengers");
	i.addEdge(i.givenNumber("india"), "america");
	i.addEdge(i.givenNumber("india"), "kill");
	i.addEdge(i.givenNumber("america"), "romeo");

	*/


	//on basis of language




	//on basis of country




	/////////////////
/*
	m[0].enterTitle();
	m[0].enterGenre();
	m[0].enterLanguage();
	m[0].enterCountry();

	m[0].showDetails();
*/
  /*
    m[0].enterAllDetails("spiderman-1","action","english","america");
    m[1].enterAllDetails("spiderman-2","action","english","america");
    m[2].enterAllDetails("spiderman-3","action","english","america");
    m[3].enterAllDetails("avengers-1","action","english","america");
    m[4].enterAllDetails("avengers-2","action","english","america");
    m[5].enterAllDetails("avengers-3","action","english","america");
    m[6].enterAllDetails("Tintin","adventure","english","america");
    m[7].enterAllDetails("Bad_Boys","adventure","english","america");
    m[8].enterAllDetails("Enter_theDragon","adventure","english","america");
    m[9].enterAllDetails("Star_Wars","drama","english","america");
    m[10].enterAllDetails("ranghana","action","hindi","india");
    m[11].enterAllDetails("fight_club","action","english","america");
    m[12].enterAllDetails("the_pianist","tragedy","english","america");
    m[13].enterAllDetails("bat_man","comic","english","america");
    m[14].enterAllDetails("october","tragedy","hindi","india");
    m[15].enterAllDetails("Akira","comic","english","japan");
    m[16].enterAllDetails("The_prestige","mystery","hindi","india");
    m[17].enterAllDetails("The_fountain","philosophy","chinese","china");
    m[18].enterAllDetails("dream_girl","drama","hindi","india");

        //m[0].enterAllDetails("spiderman-1","action","english","america");
   movieNo=19;
   */
   fflush(stdin);
   cout<<"testing";
   _getch();
  // output_init();
   //input_from_file();
   getrec();
   fflush(stdin);

   _getch();

   for(int j=0;j<movieNo;j++)
   {
    m[j].showDetails();
    g.addEdge(m[j].genreNo, m[j].title);
	h.addEdge(m[j].languageNo,  m[j].title);
	i.addEdge(m[j].countryNo,  m[j].title);
   }

   int bla;
    //i.BFS(0);
     _getch();
     system("CLS");
     cout<<"---------------WELCOME SPECTATOR---------\n";
     int choice =1;
     while(choice)
     {
        system("CLS");
        cout<<"\n0. exit";
        cout<<"\n1. admin panel";
        cout<<"\n2. user account";
        cin>>choice;

        if(choice ==1){
          bla=  admin_panel();
        }
        else if(choice==2){
                user_panel();
        }
        else{
                cout<<"\n exiting.....";
        }

     }
	return 0;
}
