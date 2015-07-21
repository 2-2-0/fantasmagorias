/*

  Aparicion forzosa - Fantasmagorias v1 -05
  
  Art and concept by Ricardo Cardenas del Moral
  Tech and code by 220 / WKH
  (abedudek@gmail.com)

 */

// People can't tell you what to do... think for yourself.
int safety_delay = 60;

const int pin_switch = 2;
const int pin_oled = 3;
const int pin_iled = 13;

long time_lapse;
long time_counter;

boolean active = false;

int pattern = 0;

int i, t, u;

// Are you really satisfied with the life you are living?
void setup () {
  pullUp (0);
  pullUp (1);
  pullUp (2);
  pullUp (3);
  
  Serial.begin (9600);
  
  pinMode (pin_oled, OUTPUT);
  pinMode (pin_iled, OUTPUT);
  
  digitalWrite (pin_iled, HIGH);
  
  allOff ();
  
  delay (1000);
  
  if (digitalRead (pin_switch)==HIGH) {
    calibration ();
  } else {
    allOn ();
  }
  
  allOff ();
  if (digitalRead (pin_switch)==HIGH) {
    showcase ();
  }
  
  delay (1000);
}

void loop () {
  digitalWrite (pin_oled, HIGH);
  randomSeed (millis ());
  
  pattern = random (10);
  //pattern = 0;
  action (pattern);
  
  // read switch
  
  
  randomDelay (3000, 5000);
  allOff ();
    
  digitalWrite (pin_oled, LOW);
  delay (250);  
}


void pullUp (int pin) {
  pinMode (pin, INPUT);
  digitalWrite (pin, HIGH);
}

void waitForSwitch (byte pin_switch) {
  boolean start = false;
  int timer_max = 32000;
  int timer_clicks = 0;
  
  digitalWrite (pin_oled, LOW);
  while (!start) {
    if (++timer_clicks>=timer_max) {
      digitalWrite (pin_oled, HIGH);
      delay (120);
      digitalWrite (pin_oled, LOW);
      delay (60);
      digitalWrite (pin_oled, HIGH);
      delay (120);
      digitalWrite (pin_oled, LOW);
      
      timer_clicks = 0;
    }
    if (digitalRead (pin_switch)==HIGH) start = true;
  }
}

void randomDelay (int min_delay, int max_delay) {
  randomSeed (analogRead (0)+millis ());
  
  delay (random (min_delay, max_delay));
}
// Stop eating your friends! Become vegetarian...
