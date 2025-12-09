// declare the pins or however u say it

const int trigPin = 9;
const int echoPin = 10;

void setup() {
  // Make the trigPin able to send sound waves and the echoPin receive echos (sound waves)
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);

  // Make sure the trigPin doesnt do random unwanted shit
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
}

void loop() {
  // Send a 10 microsecond pulse
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);

  // Read the echoPin, which returns the duration of the pulse in microseconds
  long duration = pulseIn(echoPin, HIGH);

  // Calculate distance in centimeters
  int distance = duration * 0.034 /2;

  // Send radio stuff to turn on LED
}
