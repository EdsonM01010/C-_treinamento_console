#include<iostream>
#include<string>

using namespace std;

int main()
{

 //______VARIAVEIS__________________________________________
 //========================================================
  
  string VOCE;
  string BOT;


 //_________________________________________________________
 //=========================================================
 



  cout << "____________chat bot___________" << endl;   /// LOOP DE ALINHACAO
  for(int L = 2; L <= 3; L += 1)
  {
    if(L == 3)
    {
     for(int v = 1; v <= 1; v +=1)
     {
       if(v==1)
       {
         L = 1;
       }
     }
    }
    if(L == 2)
    {
      for(int b = 1; b <= 1; b +=1)
      {
        if(b==1)
        {
          L = 2;
        }
      }
    }
    if(L == 2)
    {
      cout << "VOCE:  ";
      getline(cin, VOCE);
      if(VOCE == "oi")
      {
        BOT = "ola bot funcionando como previsto  "; 
      }
      if(VOCE == "bom dia")
      {
        BOT = "bom dia bot ao seu dispor  ";
      }
      if(VOCE == "boa tarde")
      {
        BOT = "boenas tardes amigo  ";
      }
      if(VOCE == "boa noite")
      {
        BOT = "boa noite estou com sono ja  ";
      }
      if(VOCE == "ok")
      {
        BOT = "sim tudo indo como previsto  ";
      }
      if(VOCE == "bot")
      {
        BOT = "fala comigo bebe  ";
      }
      if(VOCE == "hoje e que dia")
      {
        BOT = "provavelmente sabado,segunda,terca,qaarta,quinta,sexta, ou domingo  ";
      } 
      cout << "BOT:  " << BOT << endl;

    }

  }
  system("pause");
  return 0;
}

///esse codigo tem a funcao de mostrar siclo alinhado ou seja uma conversa infinita.
