void VTaskLedAmarelo(void * parameter){

    pinMode(led_amarelo, OUTPUT);

  while(true){
    digitalWrite(led_amarelo, 1);
    vTaskDelay(3000 / portTICK_PERIOD_MS);
    digitalWrite(led_amarelo, 0);
    vTaskDelay(3000 / portTICK_PERIOD_MS);
  }
  
}
