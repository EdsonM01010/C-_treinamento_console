#include <iostream>
int main() 
{
	//minhas strings 
	char text1[25] = {'d','i','g','i','t','e',' ','o',' ','p','r','i','m','e','i','r','o',' ','n','u','m','e','r','o','\0'};
	int n1digited= 0;
	int n2digited= 0;
	char text2[24] = {'d','i','g','i','t','e',' ','o',' ','s','e','g','u','n','d','o',' ','n','u','m','e','r','o','\0'};
	char text3[20] = {'e','s','c','o','l','h','a',' ','u','m',' ','o','p','e','r','a','d','o','r','\0'};
	char operador = 0;
	char text4[17] = {'p','o','g','r','a','m',' ','f','i','n','a','l','i','z','e','d','\0'};
	std::cout << text1 <<std::endl<<std::endl;
	std::cin >> n1digited;
	std::cout << text2 << std::endl<<std::endl;
	std::cin >> n2digited;
	std::cout << text3 << std::endl<<std::endl;
	std::cin >> operador;
	if(operador == '+'){
		std::cout<<n1digited+n2digited<<std::endl<<std::endl;}
	if(operador == '-'){
		std::cout<<n1digited-n2digited<<std::endl<<std::endl;	}
	if(operador == '/')	{
		std::cout<<n1digited/n2digited<<std::endl<<std::endl;	}
	if(operador == '*'){
		std::cout<<n1digited*n2digited<<std::endl<<std::endl;}else{
		std::cout<<text4<<std::endl<<std::endl<<std::endl;}
	system("pause");
	return 0;
}
