// ==========================================
// WiFi 연결 정보
// ==========================================
#define SECRET_SSID "WiFi SSID"   // 와이파이 SSID
#define SECRET_PASS "WiFi Pass"   // 와이파이 비밀번호

// ==========================================
// MQTT 연결 정보
// ==========================================
#define MQTT_HOST "onem2m.iotcoss.ac.kr"  // MQTT 브로커 주소 
#define MQTT_PORT 11883                   // MQTT 브로커 포트번호

// ==========================================
// IoTcoss 개방형사물인터넷 팀 플랫폼 연결 정보
// ==========================================
#define API_HOST "onem2m.iotcoss.ac.kr"   // 플랫폼 주소

#define STUDENT_NUMBER "12341234"          // 개인학번  (예: 12341234)
#define ORIGIN "SOrigin_" STUDENT_NUMBER "_mqtt"  // oneM2M Origin(예: SOrigin_12341234_mqtt)

//  oneM2M Notification 수신을 위한 MQTT Subscription topic 
#define NOTY_SUB_TOPIC "/oneM2M/req/Mobius/" ORIGIN "/#"
//  oneM2M Notification을 발생시킨 <sub> 리소스의 경로
#define NOTY_SUB_RESOURCE "Mobius/ae_" STUDENT_NUMBER "_mqtt/temp/sub_temp"
