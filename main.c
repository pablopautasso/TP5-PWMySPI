#include <stdint.h>

#include "bsp/bsp.h"

/**
 * @brief Se encarga de prender un led y apagarlo luego de un tiempo
 *
 * @param led    Numero de led a pulsar
 * @param tiempo Numero de ciclos del delay entre prendido y apagado
 */
void ledPulso(uint8_t led, uint32_t tiempo);

float porcentaje = 0;
int i=0;

uint8_t leds[8];
/**
 * @brief Aplicacion principal
 */
int main(void) {
	bsp_init();

	while (1) {
		porcentaje = calculoPote(readADC1());

		/*if (porcentaje <= 12.5) {
		 led_on(0);
		 }else
		 led_off(0);*/
		for ( i = 0; i < 8; i++){
			if (porcentaje <= 12.5*(i+1)) {
				led_on(i);
			}else
			{
				led_off(i);
			}
	}
}
}

/**
 * @brief Se preciono el pulsador
 *
 */

/**
 * @brief Interrupcion cada 1ms
 *
 */

