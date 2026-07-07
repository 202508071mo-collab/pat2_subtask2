#include <iostream>
#include <string>
#include <cctype>
using namespace std;

string morse(string text);
string get_morse(char c);

int main() {
	string text;
	cout << "Enter a message in english (A - Z characters only):";
	getline(cin, text);
	
	string morse_code = morse(text);
	cout << morse_code << endl;
	
	return 0;
}

string get_morse(char c) {
	
	if ( c == 'A' ) return ".-" ;
	else if ( c == 'B' ) return "-...";
	else if ( c == 'C' ) return "-.-.";
	else if ( c == 'D' ) return "-..";
	else if ( c == 'E' ) return ".";
	else if ( c == 'F' ) return "..-.";
	else if ( c == 'G' ) return "--.";
	else if ( c == 'H' ) return "....";
	else if ( c == 'I' ) return "..";
	else if ( c == 'j' ) return ".---";
	else if ( c == 'K' ) return "-.-";
	else if ( c == 'L' ) return ".-..";
	else if ( c == 'M' ) return "--";
	else if ( c == 'N' ) return "-.";
	else if ( c == 'O' ) return "---";
	else if ( c == 'P' ) return ".--.";
	else if ( c == 'Q' ) return "--.-";
	else if ( c == 'R' ) return ".-.";
	else if ( c == 'S' ) return "...";
	else if ( c == 'T' ) return "-";
	else if ( c == 'U' ) return "..-";
	else if ( c == 'V' ) return "...-";
	else if ( c == 'W' ) return ".--";
	else if ( c == 'X' ) return "-..-";
	else if ( c == 'Y' ) return "-.--";
	else if ( c == 'Z' ) return "--..";
	else if (c == '0' ) return "-----";
	else if (c == '1' ) return ".----";
	else if (c == '2' ) return "..---";
	else if (c == '3' ) return "...--";
	else if (c == '4' ) return "....-";
	else if (c == '5' ) return ".....";
	else if (c == '6' ) return "-.....";
	else if (c == '7' ) return "--.....";
	else if (c == '8' ) return "-----...";
	else if (c == '9' ) return "--------.";
	else if ( c == ' ' ) return "/";
	else return " ";
	}
	
	string morse(string text){
	string morse_code = " ";
	
	for (char &c : text)	
	{
		c = toupper(c);
		string code = get_morse(c);
		
		if (code != " ")
		{
			morse_code += code + "";
		}
		else	
		{
			morse_code += c;
			morse_code += " ";
			
		}
		
	} 
	
	return morse_code;			

}
