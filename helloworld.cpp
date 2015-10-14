/**
 * Logan Mayfield
 */

 #include <iostream>

int main(int argc, char* argv){

  for(int i = 0; i < 10; i++){
    if( argc == 1 ){
        std::cout << "Hello World!\n";
    }
    else{
     std:: cout << argv[1] << std::endl;
    }
  }

  return 0;
}
