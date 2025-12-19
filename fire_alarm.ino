// Gerekli Kütüphaneler
#include <ESP8266WiFi.h>
#include <BlynkSimpleEsp8266.h>

// Alev Sensörü ve Buzzer için Pin Tanımlamaları
#define flamePin D2    // Alev sensörünün bağlı olduğu pin
#define buzzerPin D1   // Buzzer'ın bağlı olduğu pin

// Wi-Fi ve Blynk Bağlantı Bilgileri
char auth[] = "BLYNK_AUTH_TOKEN";   // Blynk Auth Token
char ssid[] = "YOUR_SSID";          // Wi-Fi ağ adı
char pass[] = "YOUR_PASSWORD";      // Wi-Fi şifresi

// Zamanlama için Değişkenler
unsigned long currentMillis = 0;
unsigned long previousMillis = 0;
const long notificationInterval = 30000; // 30 saniye (bildirimler arasında bekleme süresi)

// Alev Sensör Değeri
int flameValue = 0;

void setup() {
  // Seri Haberleşme Başlat
  Serial.begin(115200);

  // Pin Modlarını Ayarla
  pinMode(flamePin, INPUT);   // Alev sensörü giriş pini
  pinMode(buzzerPin, OUTPUT); // Buzzer çıkış pini

  // Wi-Fi ve Blynk Bağlantısını Başlat
  Blynk.begin(auth, ssid, pass);

  Serial.println("Sistem Başlatıldı...");
}

void loop() {
  // Blynk İşlemlerini Çalıştır
  Blynk.run();

  // Alev Sensöründen Değeri Oku
  flameValue = digitalRead(flamePin);  // LOW = Yangın Algılandı, HIGH = Yangın Yok

  // Yangın Durumunu Kontrol Et
  if (flameValue == LOW) { // Yangın algılandıysa
    digitalWrite(buzzerPin, HIGH); // Buzzer'ı aktif et

    // Belirli aralıklarla bildirim gönder
    currentMillis = millis();
    if (currentMillis - previousMillis >= notificationInterval) {
      Serial.println("Yangın Algılandı! Bildirim Gönderiliyor...");
     
      // Blynk Üzerinden Bildirim Gönder
      Blynk.logEvent("Notification", "Yangın Algılandı! Lütfen hemen kontrol edin.");
     
      // Zamanlayıcıyı Güncelle
      previousMillis = currentMillis;
    }
  } else {
    digitalWrite(buzzerPin, LOW); // Yangın yoksa buzzer'ı kapat
  }

  delay(100); // Sensör stabilitesi için kısa bir gecikme
} 
