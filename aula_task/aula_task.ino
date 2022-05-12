#include "freertos/FreeRTOS.h"
#include "freertos/task.h"

#define led_vermlho 5
#define led_amarelo 18

#define CORE_0 0
#define CORE_1 1

void setup() {

  xTaskCreatePinnedToCore( VTaskLedVermlha, "TaskLedVermlha", configMINIMAL_STACK_SIZE + 2000, NULL, 1, NULL, CORE_1 );
  xTaskCreatePinnedToCore( VTaskLedAmarelo, "TaskLedAmarelo", configMINIMAL_STACK_SIZE + 2000, NULL, 1, NULL, CORE_1 );
  xTaskCreatePinnedToCore( VTaskPrint, "TaskPrint", configMINIMAL_STACK_SIZE + 2000, NULL, 1, NULL, CORE_0 );
  
}

void loop() {

  
}
