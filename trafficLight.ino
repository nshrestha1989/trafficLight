int red = D6;
int yellow = D3;
int green = D1;


int toggle(String led)

{
    if (led == "red")
    {
        digitalWrite(red, HIGH);
    }
    else if(led=="redOff"){
             digitalWrite(red, LOW);
    }
    }
    else if (led == "yellow")
    {
        digitalWrite(yellow, HIGH);
        delay(500);
        digitalWrite(yellow, LOW);
    }
    else if (led == "green")
    {
        digitalWrite(green, HIGH);
        delay(500);
        digitalWrite(green, LOW);
    }
    return 0;
}


void setup() 
{
    pinMode(red, OUTPUT);
    pinMode(yellow, OUTPUT);
    pinMode(green, OUTPUT);
    
    Particle.function("toggle", toggle);
    
     digitalWrite(green, LOW);
      digitalWrite(yellow, LOW);
       digitalWrite(red, LOW);
}

void loop() 
{

}