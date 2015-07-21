/*

  Aparicion forzosa - Fantasmagorias v1 -05
  
  Art and concept by Ricardo Cardenas del Moral
  Tech and code by 220 / WKH
  (abedudek@gmail.com)

 */

void allOff () {
  for (int i=0; i<=24; i++) {
    relay (i, false);
    delay (safety_delay);
  }
  //Serial.print ("C!000000000000000000000000");
}
void allOn () {
  for (int i=1; i<=22; i++) {
    relay (i, true);
    delay (safety_delay);
  }
  //Serial.print ("C!111111111111111111111111");
}

// The only one who's really judging you is yourself
void slide (int source, int target, int dtime) {
  for (int i=source; i<=target; i++) {
    relay (i, true);
    delay (dtime);
    relay (i, false);
    delay (dtime);
  }
}
void slideTurnOn (int source, int target, int dtime) {
  for (int i=source; i<=target; i++) {
    relay (i, true);
    delay (dtime);
  }
}
void slideTurnOff (int source, int target, int dtime) {
  for (int i=source; i<=target; i++) {
    relay (i, false);
    delay (dtime);
  }
}

void blinkLamp () {
  relay (1, true);
  delay (5000);
  relay (1, false);
  delay (2500);
}

void relay (int id, boolean active) {
  String s;
  String t;
  
  // prepare command to send
  s = "CR";
  if (id<10) {
    s+= "0";
    s+= id;
  } else {
    s+= id;
  }
  s+= active;
  
  // send command
  Serial.print (s);
  
  // safety standard purposes
  delay (safety_delay);
  
  //Serial.println ();
}
// Can you do better than you are doing right now? do it!
