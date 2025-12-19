🔥 IoT Tabanlı Yangın Tespit ve Uyarı Sistemi

2025 Yaz Dönemi Orman Yangınlarına Yönelik Akıllı Güvenlik Uygulaması

📌 Proje Amacı

Bu proje, 2025 yılı yaz aylarında ülkemizde yaşanan yoğun orman yangınları göz önünde bulundurularak tasarlanmıştır.
Amaç; yangınları erken aşamada tespit ederek, hem yerel (sesli) hem de uzaktan (mobil bildirim) uyarı mekanizmalarıyla can ve mal kaybını en aza indirmektir.

IoT (Nesnelerin İnterneti) teknolojileri kullanılarak geliştirilen sistem, yangın belirtisini algıladığı anda kullanıcıyı gerçek zamanlı olarak bilgilendirir ve hızlı müdahale imkânı sunar.

🎯 Projenin Hedefleri

Yangınları erken aşamada tespit etmek

Sesli (buzzer) ve mobil (Blynk) uyarı sağlamak

İnternet üzerinden uzaktan izleme ve bildirim

Düşük maliyetli, ölçeklenebilir ve genişletilebilir bir sistem geliştirmek

Orman yangınları gibi kritik afet durumlarında hızlı farkındalık oluşturmak

🧠 Sistem Genel Yapısı

Sistem, NodeMCU ESP8266 mikrodenetleyicisi ile alev sensörü verilerini işler.
Yangın algılandığında:

Buzzer aktif hale gelir (yerel uyarı)

Blynk platformu üzerinden mobil cihaza bildirim gönderilir

Kullanıcı uzaktan durumu takip edebilir

🔧 Kullanılan Donanımlar

NodeMCU ESP8266 – Wi-Fi destekli IoT mikrodenetleyici

Alev Sensörü (IR Flame Sensor) – Yangın algılama

Buzzer – Sesli uyarı

Breadboard & Jumper Kablolar

Micro USB Kablo

💻 Kullanılan Yazılımlar ve Teknolojiler

Arduino IDE – ESP8266 programlama

Blynk Platformu – Mobil uygulama ve gerçek zamanlı bildirim

ESP8266WiFi & Blynk Kütüphaneleri

🔄 Proje Çalışma Mantığı

NodeMCU, Wi-Fi ağına bağlanır

Alev sensörü ortamı sürekli kontrol eder

Yangın algılandığında:

Buzzer çalışır

Blynk üzerinden mobil bildirim gönderilir

Bildirimler belirli aralıklarla tekrar edilir (spam önleme)

🧪 Test Süreci

Sistem laboratuvar ortamında test edilmiştir

Alev sensörü kontrollü ışık ve ateş kaynaklarıyla denenmiştir

Mobil bildirimlerin gecikme süresi gözlemlenmiştir

Sistem stabil çalıştığı doğrulanmıştır

🚀 Genişletilebilirlik

Bu proje aşağıdaki şekilde geliştirilebilir:

📩 SMS / Telefon Araması ile Uyarı

🌡️ Sıcaklık & Duman Sensörleri

🚿 Otomatik Su Püskürtme Sistemi

☁️ Bulut tabanlı veri kaydı ve analiz

🧠 Makine öğrenmesi ile yangın risk tahmini

🌍 Büyük Veri ve Akıllı Analiz Vizyonu

Toplanan sensör verileri kullanılarak:

Yangın risk haritaları

Yanlış alarm oranı analizi

Cihaz bakım zamanlarının tahmini

Kullanıcı müdahale sürelerinin iyileştirilmesi
gibi akıllı karar destek sistemleri geliştirilebilir.

📁 Proje Dosya Yapısı
📂 IoT-Fire-Detection-System
 ├── fire_alarm.ino
 ├── README.md

 Proje Devre Şeması

 <img width="876" height="490" alt="resim" src="https://github.com/user-attachments/assets/b031beab-dc45-42e3-a6cd-d16efac6f7bf" />
