/**
 * Logan Mayfield
 */

 #include <iostream>

 int main(int argc, char* argv){

   if( argc == 1 ){
      std::cout << "Hello World!\n";
   }
   else{
     std:: cout << argv[1] << std::endl;
   }
   
  return 0;
 }
