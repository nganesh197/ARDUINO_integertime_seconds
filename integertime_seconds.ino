/*Overall Purpose: To maximize efficiency when writing larger programs, I have resorted to making simple code files that fulfill a single goal. 
 * Specific Purpose: Code will print out 1 second increments of the millis function (allows for cleaner operation when creating programs 
 * such as a timer program)
 * Credits: Venkat Venkatasubramanian 
 */
int time_val;

void setup() {
  Serial.begin(9600);
  Serial.println("Setup has begun");

}

void loop() {
  unsigned long time_full = millis();
  time_val = (int(floor(time_full/1000))%30);
  Serial.println(time_val);

}
