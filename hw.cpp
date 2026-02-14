#include <iostream>
#include <string>


void getHelp()
{
std::cout <<"Help pls" << ;
}
 int main(int argc, char*argv[]){
    std::string helpstring;
    bool neehelp = false;
    helpstring = "--help";


    for (int i=0; i < argc; i++){
        std::cout << "argv [" << i <<"] = " <<argv[ i ] << "\n";
        if(helpstring == argv[i]) {
            needhelp = true;
        }



    }
    if (needhelp){

    }
 
 //int main(int argc, char*argv[]){
 //    int nail[9];
  //   for (int i=0;i<9;i++){
  //      nail[i]=i;
    
  ////  }
  //  for(int i=0;i<9;i++){
  //      std::cout<<"nail[" << i << "]="<<nail[i]<<"\n";

 //   }
// }
//    for (int i=0;i<argc; i++){
 //       std::cout<< "argv[" << i << "]" <<argv[i] << "\n";
 //   }

 //int main (){
// int a;
 //    std::cin >> a;
 //    std::cout <<"Hello, World"<<std::endl;
 //    std::cerr <<"ERROR!"<<std::endl;
  return 0;
 }
 //std::string string;
 //   std::cin >> string;
 //   if(string=="--help"){
 //       getHelp();
 //   };
 //
 //