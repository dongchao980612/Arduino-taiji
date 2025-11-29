#include <ESP8266WiFi.h>
#include <FS.h>

String file_name = "/test_text.txt";              //被读取的文件位置和名称

void setup() {
  Serial.begin(9600);
  
  SPIFFS.begin();                             //启动SPIFFS
  Serial.println("SPIFFS Started.");
  
  if (SPIFFS.exists(file_name)){
    Serial.print(file_name);
    Serial.println(" FOUND.");
  } else {
    Serial.print(file_name);
    Serial.print(" NOT FOUND.");
  }

  //建立File对象用于从SPIFFS中读取文件
  File dataFile = SPIFFS.open(file_name, "r"); 

  //读取文件内容并且通过串口监视器输出文件信息
  for(int i=0; i<dataFile.size(); i++){
    Serial.print((char)dataFile.read());       
  }

  //完成文件读取后关闭文件
  dataFile.close();                           
}

void loop() {
}
