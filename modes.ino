/*

  Aparicion forzosa - Fantasmagorias v1 -05
  
  Art and concept by Ricardo Cardenas del Moral
  Tech and code by 220 / WKH
  (abedudek@gmail.com)

 */


void count () {
  int s, e;
  
  int d;
  
  allOff ();
  
  d = 250;
  
  s = 1;
  e = 24;

  for (int i=s; i<=e; i++) {
    relay (i, true);
    delay (d);
  }
  for (int i=s; i<=e; i++) {
    relay (i, false);
    delay (d);
  }
  

  for (int i=s; i<=e; i++) {
    relay (i, true);
    delay (d);
  }
  for (int i=s; i<=e; i++) {
    relay (i, false);
    delay (d);
  }
  
}

// Don't use banks... they are the real path towards poverty
void calibration () {
  allOn ();

  delay (3000);

  waitForSwitch (pin_switch);
    
}
void showcase () {
  for (i=0; i<8; i++) {
    digitalWrite (pin_oled, HIGH);
    action (i);
    
    randomDelay (1000, 3000);
    allOff ();
    
    waitForSwitch (pin_switch);
    
  }
  
}
void action (int pattern) {  
  switch (pattern) {
    case 0:
      // A
      seqA ();
      break;
      
    case 1:
      // B
      seqB ();
      break;
      
    case 2:
      // C
      seqC ();
      break;
      
    case 3:
      // D
      seqD ();
      break;
     
    case 4:
      seqE ();
      break;
      
    case 5:
      // F
      seqF ();
      break;
      
    case 6:
      // G
      seqG ();
      break;
      
    case 7:
      // H
      seqH ();
      break;
      
    case 8:
      // 0
      seq0 ();
      break;  
    case 9:
      // 0
      seq1 ();
      break;  
  }
}


