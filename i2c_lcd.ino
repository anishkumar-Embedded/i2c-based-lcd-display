#include <Wire.h>
    #include <LiquidCrystal_I2C.h>
    LiquidCrystal_I2C lcd(0x27,20,4);
   // LiquidCrystal_I2C lcd(0x20 ,2,1,0,4,5,6,7,3);  //I2C address for PCF8574 in proteus
    void setup()
    {
     lcd.begin(20, 4);                    
     lcd.backlight();
   
    }
    void loop()
    {
      {
      delay(1000);
      lcd.clear();
      delay(1000);
      lcd.setCursor(1,0);
      lcd.print("Line 1");
      delay(500);
      lcd.setCursor(1,1);
      lcd.print("Line 2");
      delay(500);
      lcd.setCursor(1,2);
      lcd.print("Line 3");
      delay(500);
      lcd.setCursor(1,3);
      lcd.print("Line 4");
      delay(1000);
      }
    }
