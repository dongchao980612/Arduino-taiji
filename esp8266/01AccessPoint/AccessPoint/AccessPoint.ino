#include <ESP8266WiFi.h>        // 本程序使用ESP8266WiFi库
 
const char *ssid = "NodeMCU-WIFI"; // 这里定义将要建立的WiFi名称。此处以"NodeMCU-WIFI"为示例

const char *password = "123456";  // 这里定义将要建立的WiFi密码。此处以12345678为示例

                                    
void setup() {
  Serial.begin(9600);              // 启动串口通讯
 
  WiFi.softAP(ssid, password);     // WiFi.softAP用于启动NodeMCU的AP模式。
                         
  Serial.print("Access Point: ");    // 通过串口监视器输出信息
  Serial.println(ssid);              // 告知用户NodeMCU所建立的WiFi名
  Serial.print("IP address: ");      // 以及NodeMCU的IP地址
  Serial.println(WiFi.softAPIP());   // 通过调用WiFi.softAPIP()可以得到NodeMCU的IP地址
}

void loop() {
  // put your main code here, to run repeatedly:

}
