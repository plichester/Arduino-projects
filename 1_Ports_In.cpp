
const int buttonPins[] = {2, 3, 4, 5};
const int num = 4;void setup() 
{
    Serial.begin(9600);

    for (int i = 0; i < num; i++) 
    {
        pinMode(buttonPins[i], INPUT_PULLUP);
// Activate internal pull-up resistors}}void loop() {int bin = 0;for (int i = 0; i < numButtons; i++) {// Reading button stateint buttonState = digitalRead(buttonPins[i]);// Update the binary number based on the button statebin = bin | (buttonState << i);

}

Serial.println(bin, BIN);
delay(1000); // small delay to debouncethebuttons