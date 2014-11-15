void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
 Serial.println("Should be 6:");
 Serial.println(add(4,2));
 delay(2000);
 Serial.println("Should be 49");
 Serial.println(multiply(7,7));
 delay(2000);
 Serial.println("Should be 10");
 Serial.println(divide(100,10)); 
 delay(2000);
 Serial.println("If you favorite number is not 7, should be not my favorite");
 Serial.println(bestNumber(7));
 delay(2000);
 Serial.println(cutepup("LALALALALA I can sing"));
 delay(10000);
  
}

//write a function that adds two numbers and returns the sum
int add(int x, int y){
  int sum = x + y;
  return sum;
  
}

//write a function that multiplies two integers and returns the total
int multiply(int b, int y){
  int product = b * y;
  return product;
  
}

//write a function that divides the first parameter by the second
int divide(int r, int e){
  int quotient;
  quotient = r / e;
  return quotient;
  
}

//write a funtion that returns the string "Best number" if
// the number from the parameter matches your favorite number
String bestNumber(int myFavorite){
  
  String response;
  //complete the if statement
  if(myFavorite == 13){
    response = "Best Number";
    
  }
  else{
    response = "Not my favorite";
  }
  return response;
}
//chatbot
String cutepup(String message){
  String response;
 if(message == "Singing rocks"){
   response = "Sing to me or get out";
 } 
 else if(message == "Do you want to go shopping?"){
 response = "Yes yes yes!!!";
}
else if(message == "Do you want to watch a movie?"){
response = "Sure I want poporn too";
}
else if(message == "I want to jump up and down"){
  response = "NO!!! actually, it does not matter";
}
else{
  response = "You and I are so alike!!! YAY!!!";
} 
}





