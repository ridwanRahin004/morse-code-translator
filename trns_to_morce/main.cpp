#include<iostream>
#include<cmath>
using namespace std;
//functions
string to_morse();
string morse_to();
void ext();
int main(){
	char first_choice;
	int go_or_exit;
	cout<<"\t\t Morse Code Translator"<<endl;
	cout<<"\n"<<endl;
	cout<<"[1] to Morse"<<endl;
	cout<<"[0] Morse to"<<endl;
	cout<<"[e] Exit"<<endl;
	cout<<" Enter Action: ";
	cin>>first_choice;
	if(first_choice=='1'){
		to_morse();
	}
	else if(first_choice=='0'){
		morse_to();
	}
	else if(first_choice=='e'){
		ext();
	}
	else{
		cout<<"#"<<endl;
		cout<<"[1] go back"<<endl;
		cout<<"[0] exit"<<endl;
		cout<<" Enter Action: ";
		cin>>go_or_exit;
		if(go_or_exit==1){
			main();
		}
		else if(go_or_exit==0){
			ext();
		}
		else{
			cout<<"Go Fuck Yourself"<<endl;
			cout<<"\n\n\n"<<endl;
			main();
		}
	}
	return 0;
}
string to_morse(){
	char letter_char;
	int go_back;
	string a_m=".-";
	string b_m="-...";
	string c_m="-.-.";
	string d_m="-..";
	string e_m=".";
	string f_m="..-.";
	string g_m="--.";
	string h_m="....";
	string i_m="..";
	string j_m=".---";
	string k_m="-.-";
	string l_m=".-..";
	string m_m="--";
	string n_m="-.";
	string o_m="---";
	string p_m=".--.";
	string q_m="--.-";
	string r_m=".-.";
	string s_m="...";
	string t_m="-";
	string w_m=".--";
	string x_m="-..-";
	string y_m="-.--";
	string z_m="--..";
	//numbers
	string one_m=".----";
	string two_m="..---";
	string three_m="...--";
	string four_m="....-";
	string five_m=".....";
	string six_m="-....";
	string seven_m="--...";
	string eight_m="---..";
	string nine_m="----.";
	cout<<"\n"<<endl;
	cout<<"Enter Letter: ";
	cin>>letter_char;
	cout<<"\n"<<endl;
	if(letter_char=='a'||letter_char=='A'){
		cout<<letter_char<<": \t"<<a_m<<endl;
		cout<<"\n"<<endl;
		cout<<"[1] go back: \t(type [0] exit)"<<endl;
		cout<<" Enter Action: ";
		cin>>go_back;
		if(go_back==1){
			to_morse();
		}else if(go_back==0){
			main();
		}
	}
	else if(letter_char=='b'||letter_char=='B'){
		cout<<letter_char<<": \t"<<b_m<<endl;
		cout<<"\n"<<endl;
		cout<<"[1] go back: \t(type [0] exit)"<<endl;
		cout<<" Enter Action: ";
		cin>>go_back;
		if(go_back==1){
			to_morse();
		}else if(go_back==0){
			main();
		}
	}
	else if(letter_char=='c'||letter_char=='C'){
		cout<<letter_char<<": \t"<<c_m<<endl;
		cout<<"\n"<<endl;
		cout<<"[1] go back: \t(type [0] exit)"<<endl;
		cin>>go_back;
		if(go_back==1){
			to_morse();
		}else if(go_back==0){
			main();
		}
	}
	else if(letter_char=='d'||letter_char=='D'){
		cout<<letter_char<<": \t"<<d_m<<endl;
		cout<<"\n"<<endl;
		cout<<"[1] go back: \t(type [0] exit)"<<endl;
		cout<<" Enter Action: ";
		cin>>go_back;
		if(go_back==1){
			to_morse();
		}else if(go_back==0){
			main();
		}
	}
	else if(letter_char=='e'||letter_char=='E'){
		cout<<letter_char<<": \t"<<e_m<<endl;
		cout<<"\n"<<endl;
		cout<<"[1] go back: \t(type [0] exit)"<<endl;
		cout<<" Enter Action: ";
		cin>>go_back;
		if(go_back==1){
			to_morse();
		}else if(go_back==0){
			main();
		}
	}
	else if(letter_char=='f'||letter_char=='F'){
		cout<<letter_char<<": \t"<<f_m<<endl;
		cout<<"\n"<<endl;
		cout<<"[1] go back: \t(type [0] exit)"<<endl;
		cout<<" Enter Action: ";
		cin>>go_back;
		if(go_back==1){
			to_morse();
		}else if(go_back==0){
			main();
		}
	}
	else if(letter_char=='g'||letter_char=='G'){
		cout<<letter_char<<": \t"<<g_m<<endl;
		cout<<"\n"<<endl;
		cout<<"[1] go back: \t(type [0] exit)"<<endl;
		cout<<" Enter Action: ";
		cin>>go_back;
		if(go_back==1){
			to_morse();
		}else if(go_back==0){
			main();
		}
	}
	else if(letter_char=='h'||letter_char=='H'){
		cout<<letter_char<<": \t"<<h_m<<endl;
		cout<<"\n"<<endl;
		cout<<"[1] go back: \t(type [0] exit)"<<endl;
		cout<<" Enter Action: ";
		cin>>go_back;
		if(go_back==1){
			to_morse();
		}else if(go_back==0){
			main();
		}
	}
	else if(letter_char=='i'||letter_char=='I'){
		cout<<letter_char<<": \t"<<i_m<<endl;
		cout<<"\n"<<endl;
		cout<<"[1] go back: \t(type [0] exit)"<<endl;
		cout<<" Enter Action: ";
		cin>>go_back;
		if(go_back==1){
			to_morse();
		}else if(go_back==0){
			main();
		}
	}
	else if(letter_char=='j'||letter_char=='J'){
		cout<<letter_char<<": \t"<<j_m<<endl;
		cout<<"\n"<<endl;
		cout<<"[1] go back: \t(type [0] exit)"<<endl;
		cout<<" Enter Action: ";
		cin>>go_back;
		if(go_back==1){
			to_morse();
		}else if(go_back==0){
			main();
		}
	}
	else if(letter_char=='k'||letter_char=='K'){
		cout<<letter_char<<": \t"<<k_m<<endl;
		cout<<"\n"<<endl;
		cout<<"[1] go back: \t(type [0] exit)"<<endl;
		cout<<" Enter Action: ";
		cin>>go_back;
		if(go_back==1){
			to_morse();
		}else if(go_back==0){
			main();
		}
	}
	else if(letter_char=='l'||letter_char=='L'){
		cout<<letter_char<<": \t"<<l_m<<endl;
		cout<<"\n"<<endl;
		cout<<"[1] go back: \t(type [0] exit)"<<endl;
		cout<<" Enter Action: ";
		cin>>go_back;
		if(go_back==1){
			to_morse();
		}else if(go_back==0){
			main();
		}
	}
	else if(letter_char=='m'||letter_char=='M'){
		cout<<letter_char<<": \t"<<m_m<<endl;
		cout<<"\n"<<endl;
		cout<<"[1] go back: \t(type [0] exit)"<<endl;
		cout<<" Enter Action: ";
		cin>>go_back;
		if(go_back==1){
			to_morse();
		}else if(go_back==0){
			main();
		}
	}
	else if(letter_char=='n'||letter_char=='N'){
		cout<<letter_char<<": \t"<<n_m<<endl;
		cout<<"\n"<<endl;
		cout<<"[1] go back: \t(type [0] exit)"<<endl;
		cout<<" Enter Action: ";
		cin>>go_back;
		if(go_back==1){
			to_morse();
		}else if(go_back==0){
			main();
		}
	}
	else if(letter_char=='o'||letter_char=='O'){
		cout<<letter_char<<": \t"<<o_m<<endl;
		cout<<"\n"<<endl;
		cout<<"[1] go back: \t(type [0] exit)"<<endl;
		cout<<" Enter Action: ";
		cin>>go_back;
		if(go_back==1){
			to_morse();
		}else if(go_back==0){
			main();
		}
	}
	else if(letter_char=='p'||letter_char=='P'){
		cout<<letter_char<<": \t"<<p_m<<endl;
		cout<<"\n"<<endl;
		cout<<"[1] go back: \t(type [0] exit)"<<endl;
		cout<<" Enter Action: ";
		cin>>go_back;
		if(go_back==1){
			to_morse();
		}else if(go_back==0){
			main();
		}
	}
	else if(letter_char=='q'||letter_char=='Q'){
		cout<<letter_char<<": \t"<<q_m<<endl;
		cout<<"\n"<<endl;
		cout<<"[1] go back: \t(type [0] exit)"<<endl;
		cout<<" Enter Action: ";
		cin>>go_back;
		if(go_back==1){
			to_morse();
		}else if(go_back==0){
			main();
		}
	}
	else if(letter_char=='r'||letter_char=='R'){
		cout<<letter_char<<": \t"<<r_m<<endl;
		cout<<"\n"<<endl;
		cout<<"[1] go back: \t(type [0] exit)"<<endl;
		cout<<" Enter Action: ";
		cin>>go_back;
		if(go_back==1){
			to_morse();
		}else if(go_back==0){
			main();
		}
	}
	else if(letter_char=='s'||letter_char=='S'){
		cout<<letter_char<<": \t"<<s_m<<endl;
		cout<<"\n"<<endl;
		cout<<"[1] go back: \t(type [0] exit)"<<endl;
		cout<<" Enter Action: ";
		cin>>go_back;
		if(go_back==1){
			to_morse();
		}else if(go_back==0){
			main();
		}
	}
	else if(letter_char=='t'||letter_char=='T'){
		cout<<letter_char<<": \t"<<t_m<<endl;
		cout<<"\n"<<endl;
		cout<<"[1] go back: \t(type [0] exit)"<<endl;
		cout<<" Enter Action: ";
		cin>>go_back;
		if(go_back==1){
			to_morse();
		}else if(go_back==0){
			main();
		}
	}
	else if(letter_char=='w'||letter_char=='W'){
		cout<<letter_char<<": \t"<<w_m<<endl;
		cout<<"\n"<<endl;
		cout<<"[1] go back: \t(type [0] exit)"<<endl;
		cout<<" Enter Action: ";
		cin>>go_back;
		if(go_back==1){
			to_morse();
		}else if(go_back==0){
			main();
		}
	}
	else if(letter_char=='x'||letter_char=='X'){
		cout<<letter_char<<": \t"<<x_m<<endl;
		cout<<"\n"<<endl;
		cout<<"[1] go back: \t(type [0] exit)"<<endl;
		cout<<" Enter Action: ";
		cin>>go_back;
		if(go_back==1){
			to_morse();
		}else if(go_back==0){
			main();
		}
	}
	else if(letter_char=='y'||letter_char=='Y'){
		cout<<letter_char<<": \t"<<y_m<<endl;
		cout<<"\n"<<endl;
		cout<<"[1] go back: \t(type [0] exit)"<<endl;
		cout<<" Enter Action: ";
		cin>>go_back;
		if(go_back==1){
			to_morse();
		}else if(go_back==0){
			main();
		}
	}
	else if(letter_char=='z'||letter_char=='Z'){
		cout<<letter_char<<": \t"<<z_m<<endl;
		cout<<"\n"<<endl;
		cout<<"[1] go back: \t(type [0] exit)"<<endl;
		cout<<" Enter Action: ";
		cin>>go_back;
		if(go_back==1){
			to_morse();
		}else if(go_back==0){
			main();
		}
	}
	//numbers
	else if(letter_char=='1'){
		cout<<letter_char<<": \t"<<one_m<<endl;
		cout<<"\n"<<endl;
		cout<<"[1] go back: \t(type [0] exit)"<<endl;
		cout<<" Enter Action: ";
		cin>>go_back;
		if(go_back==1){
			to_morse();
		}else if(go_back==0){
			main();
		}
	}
	else if(letter_char=='2'){
		cout<<letter_char<<": \t"<<two_m<<endl;
		cout<<"\n"<<endl;
		cout<<"[1] go back: \t(type [0] exit)"<<endl;
		cout<<" Enter Action: ";
		cin>>go_back;
		if(go_back==1){
			to_morse();
		}else if(go_back==0){
			main();
		}
	}
	else if(letter_char=='3'){
		cout<<letter_char<<": \t"<<three_m<<endl;
		cout<<"\n"<<endl;
		cout<<"[1] go back: \t(type [0] exit)"<<endl;
		cout<<" Enter Action: ";
		cin>>go_back;
		if(go_back==1){
			to_morse();
		}else if(go_back==0){
			main();
		}
	}
	else if(letter_char=='4'){
		cout<<letter_char<<": \t"<<four_m<<endl;
		cout<<"\n"<<endl;
		cout<<"[1] go back: \t(type [0] exit)"<<endl;
		cout<<" Enter Action: ";
		cin>>go_back;
		if(go_back==1){
			to_morse();
		}else if(go_back==0){
			main();
		}
	}
	else if(letter_char=='5'){
		cout<<letter_char<<": \t"<<five_m<<endl;
		cout<<"\n"<<endl;
		cout<<"[1] go back: \t(type [0] exit)"<<endl;
		cout<<" Enter Action: ";
		cin>>go_back;
		if(go_back==1){
			to_morse();
		}else if(go_back==0){
			main();
		}
	}
	else if(letter_char=='6'){
		cout<<letter_char<<": \t"<<six_m<<endl;
		cout<<"\n"<<endl;
		cout<<"[1] go back: \t(type [0] exit)"<<endl;
		cout<<" Enter Action: ";
		cin>>go_back;
		if(go_back==1){
			to_morse();
		}else if(go_back==0){
			main();
		}
	}
	else if(letter_char=='7'){
		cout<<letter_char<<": \t"<<seven_m<<endl;
		cout<<"\n"<<endl;
		cout<<"[1] go back: \t(type [0] exit)"<<endl;
		cout<<" Enter Action: ";
		cin>>go_back;
		if(go_back==1){
			to_morse();
		}else if(go_back==0){
			main();
		}
	}
	else if(letter_char=='8'){
		cout<<letter_char<<": \t"<<eight_m<<endl;
		cout<<"\n"<<endl;
		cout<<"[1] go back: \t(type [0] exit)"<<endl;
		cout<<" Enter Action: ";
		cin>>go_back;
		if(go_back==1){
			to_morse();
		}else if(go_back==0){
			main();
		}
	}
	else if(letter_char=='9'){
		cout<<letter_char<<": \t"<<nine_m<<endl;
		cout<<"\n"<<endl;
		cout<<"[1] go back: \t(type [0] exit)"<<endl;
		cout<<" Enter Action: ";
		cin>>go_back;
		if(go_back==1){
			to_morse();
		}else if(go_back==0){
			main();
		}
	}
	else{
		cout<<"\n"<<endl;
		cout<<"You ignored Fuck"<<endl;
		cout<<"\n\n"<<endl;
		main();
	}
}
string morse_to(){
	string m_code;
	int go_back;
	char a='a';
	char b='b';
	char c='c';
	char d='d';
	char e='e';
	char f='f';
	char g='g';
	char h='h';
	char i='i';
	char j='j';
	char k='k';
	char l='l';
	char m='m';
	char n='n';
	char o='o';
	char p='p';
	char q='q';
	char r='r';
	char s='s';
	char t='t';
	char w='w';
	char x='x';
	char y='y';
	char z='z';
	//numbers
	char one='1';
	char two='2';
	char three='3';
	char four='4';
	char five='5';
	char six='6';
	char seven='7';
	char eight='8';
	char nine='9';
	cout<<"\n"<<endl;
	cout<<"Enter code: "<<endl;
	cin>>m_code;
	if(m_code==".-"){
		cout<<m_code<<": "<<a<<endl;
		cout<<"\n"<<endl;
		cout<<"[1] go back \t type [0] exit"<<endl;
		cout<<" Enter Action: ";
		cin>>go_back;
		if(go_back==1){
			morse_to();
		}
		else if(go_back==0){
			main();
		}
	}
	else if(m_code=="-..."){
		cout<<m_code<<": "<<b<<endl;
		cout<<"\n"<<endl;
		cout<<"[1] go back \t type [0] exit"<<endl;
		cout<<" Enter Action: ";
		cin>>go_back;
		if(go_back==1){
			morse_to();
		}
		else if(go_back==0){
			main();
		}
	}
	else if(m_code=="-.-."){
	cout<<m_code<<": "<<c<<endl;
		cout<<"\n"<<endl;
		cout<<"[1] go back \t type [0] exit"<<endl;
		cout<<" Enter Action: ";
		cin>>go_back;
		if(go_back==1){
			morse_to();
		}
		else if(go_back==0){
			main();
		}
	}
	else if(m_code=="-.."){
		cout<<m_code<<": "<<d<<endl;
		cout<<"\n"<<endl;
		cout<<"[1] go back \t type [0] exit"<<endl;
		cout<<" Enter Action: ";
		cin>>go_back;
		if(go_back==1){
			morse_to();
		}
		else if(go_back==0){
			main();
		}
	}
	else if(m_code=="."){
		cout<<m_code<<": "<<e<<endl;
		cout<<"\n"<<endl;
		cout<<"[1] go back \t type [0] exit"<<endl;
		cout<<" Enter Action: ";
		cin>>go_back;
		if(go_back==1){
			morse_to();
		}
		else if(go_back==0){
			main();
		}
	}
	else if(m_code=="..-."){
		cout<<m_code<<": "<<f<<endl;
		cout<<"\n"<<endl;
		cout<<"[1] go back \t type [0] exit"<<endl;
		cout<<" Enter Action: ";
		cin>>go_back;
		if(go_back==1){
			morse_to();
		}
		else if(go_back==0){
			main();
		}
	}
	else if(m_code=="--."){
		cout<<m_code<<": "<<g<<endl;
		cout<<"\n"<<endl;
		cout<<"[1] go back \t type [0] exit"<<endl;
		cout<<" Enter Action: ";
		cin>>go_back;
		if(go_back==1){
			morse_to();
		}
		else if(go_back==0){
			main();
		}
	}
	else if(m_code=="...."){
		cout<<m_code<<": "<<h<<endl;
		cout<<"\n"<<endl;
		cout<<"[1] go back \t type [0] exit"<<endl;
		cout<<" Enter Action: ";
		cin>>go_back;
		if(go_back==1){
			morse_to();
		}
		else if(go_back==0){
			main();
		}
	}
	else if(m_code==".."){
		cout<<m_code<<": "<<i<<endl;
		cout<<"\n"<<endl;
		cout<<"[1] go back \t type [0] exit"<<endl;
		cout<<" Enter Action: ";
		cin>>go_back;
		if(go_back==1){
			morse_to();
		}
		else if(go_back==0){
			main();
		}
	}
	else if(m_code==".---"){
		cout<<m_code<<": "<<j<<endl;
		cout<<"\n"<<endl;
		cout<<"[1] go back \t type [0] exit"<<endl;
		cout<<" Enter Action: ";
		cin>>go_back;
		if(go_back==1){
			morse_to();
		}
		else if(go_back==0){
			main();
		}
	}
	else if(m_code=="-.-"){
		cout<<m_code<<": "<<k<<endl;
		cout<<"\n"<<endl;
		cout<<"[1] go back \t type [0] exit"<<endl;
		cout<<" Enter Action: ";
		cin>>go_back;
		if(go_back==1){
			morse_to();
		}
		else if(go_back==0){
			main();
		}
	}
	else if(m_code==".-.."){
		cout<<m_code<<": "<<l<<endl;
		cout<<"\n"<<endl;
		cout<<"[1] go back \t type [0] exit"<<endl;
		cout<<" Enter Action: ";
		cin>>go_back;
		if(go_back==1){
			morse_to();
		}
		else if(go_back==0){
			main();
		}
	}
	else if(m_code=="--"){
		cout<<m_code<<": "<<m<<endl;
		cout<<"\n"<<endl;
		cout<<"[1] go back \t type [0] exit"<<endl;
		cout<<" Enter Action: ";
		cin>>go_back;
		if(go_back==1){
			morse_to();
		}
		else if(go_back==0){
			main();
		}
	}
	else if(m_code=="-."){
		cout<<m_code<<": "<<n<<endl;
		cout<<"\n"<<endl;
		cout<<"[1] go back \t type [0] exit"<<endl;
		cout<<" Enter Action: ";
		cin>>go_back;
		if(go_back==1){
			morse_to();
		}
		else if(go_back==0){
			main();
		}
	}
	else if(m_code=="---"){
		cout<<m_code<<": "<<o<<endl;
		cout<<"\n"<<endl;
		cout<<"[1] go back \t type [0] exit"<<endl;
		cout<<" Enter Action: ";
		cin>>go_back;
		if(go_back==1){
			morse_to();
		}
		else if(go_back==0){
			main();
		}
	}
	else if(m_code==".--."){
		cout<<m_code<<": "<<p<<endl;
		cout<<"\n"<<endl;
		cout<<"[1] go back \t type [0] exit"<<endl;
		cout<<" Enter Action: ";
		cin>>go_back;
		if(go_back==1){
			morse_to();
		}
		else if(go_back==0){
			main();
		}
	}
	else if(m_code=="--.-"){
		cout<<m_code<<": "<<q<<endl;
		cout<<"\n"<<endl;
		cout<<"[1] go back \t type [0] exit"<<endl;
		cout<<" Enter Action: ";
		cin>>go_back;
		if(go_back==1){
			morse_to();
		}
		else if(go_back==0){
			main();
		}
	}
	else if(m_code==".-."){
		cout<<m_code<<": "<<r<<endl;
		cout<<"\n"<<endl;
		cout<<"[1] go back \t type [0] exit"<<endl;
		cout<<" Enter Action: ";
		cin>>go_back;
		if(go_back==1){
			morse_to();
		}
		else if(go_back==0){
			main();
		}
	}
	else if(m_code=="..."){
		cout<<m_code<<": "<<s<<endl;
		cout<<"\n"<<endl;
		cout<<"[1] go back \t type [0] exit"<<endl;
		cout<<" Enter Action: ";
		cin>>go_back;
		if(go_back==1){
			morse_to();
		}
		else if(go_back==0){
			main();
		}
	}
	else if(m_code=="-"){
		cout<<m_code<<": "<<t<<endl;
		cout<<"\n"<<endl;
		cout<<"[1] go back \t type [0] exit"<<endl;
		cout<<" Enter Action: ";
		cin>>go_back;
		if(go_back==1){
			morse_to();
		}
		else if(go_back==0){
			main();
		}
	}
	else if(m_code==".--"){
		cout<<m_code<<": "<<w<<endl;
		cout<<"\n"<<endl;
		cout<<"[1] go back \t type [0] exit"<<endl;
		cout<<" Enter Action: ";
		cin>>go_back;
		if(go_back==1){
			morse_to();
		}
		else if(go_back==0){
			main();
		}
	}
	else if(m_code=="-..-"){
		cout<<m_code<<": "<<x<<endl;
		cout<<"\n"<<endl;
		cout<<"[1] go back \t type [0] exit"<<endl;
		cout<<" Enter Action: ";
		cin>>go_back;
		if(go_back==1){
			morse_to();
		}
		else if(go_back==0){
			main();
		}
	}
	else if(m_code=="-.--"){
		cout<<m_code<<": "<<y<<endl;
		cout<<"\n"<<endl;
		cout<<"[1] go back \t type [0] exit"<<endl;
		cout<<" Enter Action: ";
		cin>>go_back;
		if(go_back==1){
			morse_to();
		}
		else if(go_back==0){
			main();
		}
	}
	else if(m_code=="--.."){
		cout<<m_code<<": "<<z<<endl;
		cout<<"\n"<<endl;
		cout<<"[1] go back \t type [0] exit"<<endl;
		cout<<" Enter Action: ";
		cin>>go_back;
		if(go_back==1){
			morse_to();
		}
		else if(go_back==0){
			main();
		}
	}
	//numbers
	else if(m_code==".----"){
		cout<<m_code<<": "<<one<<endl;
		cout<<"\n"<<endl;
		cout<<"[1] go back \t type [0] exit"<<endl;
		cout<<" Enter Action: ";
		cin>>go_back;
		if(go_back==1){
			morse_to();
		}
		else if(go_back==0){
			main();
		}
	}
	else if(m_code=="..---"){
		cout<<m_code<<": "<<two<<endl;
		cout<<"\n"<<endl;
		cout<<"[1] go back \t type [0] exit"<<endl;
		cout<<" Enter Action: ";
		cin>>go_back;
		if(go_back==1){
			morse_to();
		}
		else if(go_back==0){
			main();
		}
	}
	else if(m_code=="...--"){
		cout<<m_code<<": "<<three<<endl;
		cout<<"\n"<<endl;
		cout<<"[1] go back \t type [0] exit"<<endl;
		cout<<" Enter Action: ";
		cin>>go_back;
		if(go_back==1){
			morse_to();
		}
		else if(go_back==0){
			main();
		}
	}
	else if(m_code=="....-"){
		cout<<m_code<<": "<<four<<endl;
		cout<<"\n"<<endl;
		cout<<"[1] go back \t type [0] exit"<<endl;
		cout<<" Enter Action: ";
		cin>>go_back;
		if(go_back==1){
			morse_to();
		}
		else if(go_back==0){
			main();
		}
	}
	else if(m_code=="....."){
		cout<<m_code<<": "<<five<<endl;
		cout<<"\n"<<endl;
		cout<<"[1] go back \t type [0] exit"<<endl;
		cout<<" Enter Action: ";
		cin>>go_back;
		if(go_back==1){
			morse_to();
		}
		else if(go_back==0){
			main();
		}
	}
	else if(m_code=="-...."){
		cout<<m_code<<": "<<six<<endl;
		cout<<"\n"<<endl;
		cout<<"[1] go back \t type [0] exit"<<endl;
		cout<<" Enter Action: ";
		cin>>go_back;
		if(go_back==1){
			morse_to();
		}
		else if(go_back==0){
			main();
		}
	}
	else if(m_code=="--..."){
		cout<<m_code<<": "<<seven<<endl;
		cout<<"\n"<<endl;
		cout<<"[1] go back \t type [0] exit"<<endl;
		cout<<" Enter Action: ";
		cin>>go_back;
		if(go_back==1){
			morse_to();
		}
		else if(go_back==0){
			main();
		}
	}
	else if(m_code=="---.."){
		cout<<m_code<<": "<<eight<<endl;
		cout<<"\n"<<endl;
		cout<<"[1] go back \t type [0] exit"<<endl;
		cout<<" Enter Action: ";
		cin>>go_back;
		if(go_back==1){
			morse_to();
		}
		else if(go_back==0){
			main();
		}
	}
	else if(m_code=="----."){
		cout<<m_code<<": "<<nine<<endl;
		cout<<"\n"<<endl;
		cout<<"[1] go back \t type [0] exit"<<endl;
		cout<<" Enter Action: ";
		cin>>go_back;
		if(go_back==1){
			morse_to();
		}
		else if(go_back==0){
			main();
		}
	}
	else{
		cout<<"\n"<<endl;
		cout<<"You ignored Fuck"<<endl;
		cout<<"\n\n"<<endl;
		main();
	}
}
void ext(){
	cout<<"\n\n"<<endl;
	cout<<"#BYE!"<<endl;
	cout<<"\n\n"<<endl;
}
