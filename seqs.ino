/*

  Aparicion forzosa - Fantasmagorias v1 -05
  
  Art and concept by Ricardo Cardenas del Moral
  Tech and code by 220 / WKH
  (abedudek@gmail.com)

 */

const int min_portrait_seconds = 700;
const int max_portrait_seconds = 12000;

void seqA () {
// A
      relay (1, true);
      relay (13, true);
      randomDelay (min_portrait_seconds, max_portrait_seconds);
      
      relay (22, true);
      relay (10, true);
      randomDelay (min_portrait_seconds, max_portrait_seconds);
      
      relay (2, true);
      relay (12, true);
      randomDelay (min_portrait_seconds, max_portrait_seconds);
      
      relay (21, true);
      relay (11, true);
      randomDelay (min_portrait_seconds, max_portrait_seconds);
      
      relay (3, true);
      relay (14, true);
      randomDelay (min_portrait_seconds, max_portrait_seconds);
      
      relay (20, true);
      relay (9, true);
      randomDelay (min_portrait_seconds, max_portrait_seconds);
      
      relay (4, true);
      relay (15, true);
      randomDelay (min_portrait_seconds, max_portrait_seconds);
      
      relay (19, true);
      relay (8, true);
      randomDelay (min_portrait_seconds, max_portrait_seconds);
      
      relay (5, true);
      relay (16, true);
      randomDelay (min_portrait_seconds, max_portrait_seconds);
      
      relay (18, true);
      relay (7, true);
      randomDelay (min_portrait_seconds, max_portrait_seconds);
      
      relay (6, true);
      relay (17, true);

}

void seqB () {
  // B
  //ok
      relay (1, true);
      relay (10, true);
      relay (13, true);
      relay (22, true);
      randomDelay (min_portrait_seconds, max_portrait_seconds);
      
      relay (2, true);
      relay (11, true);
      relay (12, true);
      relay (21, true);
      randomDelay (min_portrait_seconds, max_portrait_seconds);
      
      relay (3, true);
      relay (8, true);
      relay (15, true);
      relay (20, true);
      randomDelay (min_portrait_seconds, max_portrait_seconds);
      
      relay (4, true);
      relay (9, true);
      relay (14, true);
      relay (19, true);
      randomDelay (min_portrait_seconds, max_portrait_seconds);
      
      relay (5, true);
      relay (6, true);
      relay (17, true);
      relay (18, true);
      randomDelay (min_portrait_seconds, max_portrait_seconds);
      
      relay (7, true);
      relay (16, true);

}

void seqC () {
  // C
      relay (10, true);
      relay (11, true);
      relay (12, true);
      relay (13, true);
      randomDelay (min_portrait_seconds, max_portrait_seconds);
      
      relay (9, true);
      relay (14, true);
      randomDelay (min_portrait_seconds, max_portrait_seconds);
      
      relay (8, true);
      relay (15, true);
      randomDelay (min_portrait_seconds, max_portrait_seconds);
      
      relay (7, true);
      relay (16, true);
      randomDelay (min_portrait_seconds, max_portrait_seconds);
      
      relay (6, true);
      relay (17, true);
      randomDelay (min_portrait_seconds, max_portrait_seconds);
      
      relay (5, true);
      relay (18, true);
      randomDelay (min_portrait_seconds, max_portrait_seconds);
      
      relay (4, true);
      relay (19, true);
      randomDelay (min_portrait_seconds, max_portrait_seconds);
      
      relay (3, true);
      relay (20, true);
      randomDelay (min_portrait_seconds, max_portrait_seconds);
      
      relay (2, true);
      relay (21, true);
      randomDelay (min_portrait_seconds, max_portrait_seconds);
      
      relay (1, true);
      relay (22, true);

}

void seqD () {
  relay (9, true);
      relay (14, true);
      randomDelay (min_portrait_seconds, max_portrait_seconds);
      
      relay (2, true);
      relay (21, true);
      randomDelay (min_portrait_seconds, max_portrait_seconds);
      
      relay (11, true);
      relay (12, true);
      randomDelay (min_portrait_seconds, max_portrait_seconds);
      
      relay (1, true);
      relay (22, true);
      randomDelay (min_portrait_seconds, max_portrait_seconds);
      
      relay (7, true);
      relay (16, true);
      randomDelay (min_portrait_seconds, max_portrait_seconds);
      
      relay (8, true);
      relay (15, true);
      randomDelay (min_portrait_seconds, max_portrait_seconds);
      
      relay (3, true);
      relay (20, true);
      randomDelay (min_portrait_seconds, max_portrait_seconds);
      
      relay (6, true);
      relay (17, true);
      randomDelay (min_portrait_seconds, max_portrait_seconds);
      
      relay (4, true);
      relay (19, true);
      randomDelay (min_portrait_seconds, max_portrait_seconds);
      
      relay (5, true);
      relay (18, true);
      randomDelay (min_portrait_seconds, max_portrait_seconds);
      
      relay (10, true);
      relay (13, true);

}

void seqE () {
  // E
      allOn ();
      randomDelay (min_portrait_seconds, max_portrait_seconds);
      
      relay (10, false);
      relay (13, false);
      randomDelay (min_portrait_seconds, max_portrait_seconds);
      
      relay (1, false);
      relay (22, false);
      randomDelay (min_portrait_seconds, max_portrait_seconds);
      
      relay (9, false);
      relay (14, false);
      randomDelay (min_portrait_seconds, max_portrait_seconds);
      
      relay (2, false);
      relay (21, false);
      randomDelay (min_portrait_seconds, max_portrait_seconds);
      
      relay (8, false);
      relay (15, false);
      randomDelay (min_portrait_seconds, max_portrait_seconds);
      
      relay (3, false);
      relay (20, false);
      randomDelay (min_portrait_seconds, max_portrait_seconds);
      
      relay (7, false);
      relay (16, false);
      randomDelay (min_portrait_seconds, max_portrait_seconds);
      
      relay (5, false);
      relay (18, false);
      randomDelay (min_portrait_seconds, max_portrait_seconds);
      
      relay (11, false);
      relay (12, false);
      randomDelay (min_portrait_seconds, max_portrait_seconds);
      
      relay (6, false);
      relay (17, false);
      randomDelay (min_portrait_seconds, max_portrait_seconds);
      
      relay (4, false);
      relay (19, false);


}

void seqF () {
  relay (11, true);
      relay (12, true);
      randomDelay (min_portrait_seconds, max_portrait_seconds);
      
      relay (1, true);
      relay (21, true);
      randomDelay (min_portrait_seconds, max_portrait_seconds);
      
      relay (3, true);
      relay (19, true);
      randomDelay (min_portrait_seconds, max_portrait_seconds);
      
      relay (5, true);
      relay (17, true);
      randomDelay (min_portrait_seconds, max_portrait_seconds);
      
      relay (7, true);
      relay (15, true);
      randomDelay (min_portrait_seconds, max_portrait_seconds);
      
      relay (9, true);
      relay (13, true);
      randomDelay (min_portrait_seconds, max_portrait_seconds);
      
      relay (10, true);
      relay (14, true);
      randomDelay (min_portrait_seconds, max_portrait_seconds);
      
      relay (8, true);
      relay (16, true);
      randomDelay (min_portrait_seconds, max_portrait_seconds);
      
      relay (6, true);
      relay (18, true);
      randomDelay (min_portrait_seconds, max_portrait_seconds);
      
      relay (4, true);
      relay (20, true);
      randomDelay (min_portrait_seconds, max_portrait_seconds);
      
      relay (2, true);
      relay (22, true);


}

void seqG () {
  for (i=1; i<=5; i++) {
        relay (i, true);
      }
      relay (14, true);
      relay (15, true);
      relay (17, true);
      relay (19, true);
      relay (21, true);
      randomDelay (min_portrait_seconds, max_portrait_seconds);
      
      for (i=6; i<=9; i++) {
        relay (i, true);
      }
      relay (16, true);
      for (i=18; i<=22; i++) {
        relay (i, true);
      }
      randomDelay (min_portrait_seconds, max_portrait_seconds);
      
      for (i=10; i<=13; i++) {
        relay (i, true);
      }

}

void seqH () {
  allOn ();
  randomDelay (min_portrait_seconds, max_portrait_seconds);
      
      for (i=2; i<=22; i+=2) {
        relay (i, false);
      }
      randomDelay (min_portrait_seconds, max_portrait_seconds);
      
      for (i=1; i<=21; i+=2) {
        relay (i, false);
      }
      randomDelay (min_portrait_seconds, max_portrait_seconds);
      
      for (i=2; i<=22; i+=2) {
        relay (i, true);
      }
      randomDelay (min_portrait_seconds, max_portrait_seconds);
      
      
      for (i=1; i<=21; i+=2) {
        relay (i, true);
      }

}

void seq0 () {
  for (i=1; i<23; i++) {
    relay (i, true);
    randomDelay (1500, 2500);
  }
  allOff ();
}
void seq1 () {
  for (i=1; i<23; i++) {
    relay (i, true);
    randomDelay (1500, 2500);
    relay (i, false);
  }
}
// Stop pleasing the demiurge... please yourself.
