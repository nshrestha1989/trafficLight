int red = D4;
int yellow = D3;
int green = D2;


int LED(String led)
{
    ///RED
    if (led == "red" && digitalRead(red)==LOW )
    {
        digitalWrite(red, HIGH);
      
    }
    else if(led == "red" &&  digitalRead(red)==HIGH){
        digitalWrite(red, LOW);
    }
    
    
    ///YELLOW
      if (led == "yellow" && digitalRead(yellow)==LOW )
    {
        digitalWrite(yellow, HIGH);
      
    }
    else if(led == "yellow" &&  digitalRead(yellow)==HIGH){
        digitalWrite(yellow, LOW);
    }
    
    
    ////GREEN
     if (led == "green" && digitalRead(green)==LOW )
    {
        digitalWrite(green, HIGH);
      
    }
    else if(led == "green" &&  digitalRead(green)==HIGH){
        digitalWrite(green, LOW);
    }
    
    // }
    return 0;
}


void setup() 
{
    pinMode(red, OUTPUT);
    pinMode(yellow, OUTPUT);
    pinMode(green, OUTPUT);
    
    
    Particle.function("LED", LED);
}

void loop() 
{

}