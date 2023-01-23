#include <stdio.h>
#include<string.h>;
#include<esp_now.h>;
#include<esp_wifi.h>;

char board1MacAddress[] = "40:22:D8:04:47:00";
char board2MacAddress[] = "E0:5A:1B:6C:2F:8C";

void main() {
    setup();
}

typedef struct struct_message {
    char a[32];
    int b;
    float c;
    bool d;
} struct_message;

// Create a structured object
struct_message myData;
 
// Peer info
esp_now_peer_info_t peerInfo;
 
// Callback function called when data is sent
void OnDataSent(const uint8_t *mac_addr, esp_now_send_status_t status) {
  printf("\r\nLast Packet Send Status:\t");
  printf(status == ESP_NOW_SEND_SUCCESS ? "Delivery Success" : "Delivery Fail");
}

void setup() {
    #define wifi_init_config_t config = WIFI_INIT_CONFIG_DEFAULT();
    esp_wifi_init(wifi_init_config_t *config);
}