float Vin; // Input voltage
float Vout; // Output voltage
float R1 = 3300; // Resistance of R1 in ohms
float R2 = 33000; // Resistance of R2 in ohms
int rawValue; // Raw analog input value

void setup() {
  Serial.begin(9600); // Initialize serial communication
}

void loop() {
  rawValue = analogRead(A0); // Read the raw analog input value
  Vout = (rawValue / 1023.0) * 3.3; // Convert the raw value to voltage
  Vin = Vout * (R1 + R2) / R2; // Calculate the input voltage using the voltage divider equation
  Serial.print("Input voltage: ");
  Serial.print(Vin, 2); // Print the input voltage with 2 decimal places
  Serial.print("V, Output voltage: ");
  Serial.print(Vout, 2); // Print the output voltage with 2 decimal places
  Serial.println("V");
  delay(1000); // Wait for 1 second
}
