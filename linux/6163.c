cocci_test_suite() {
	struct pcf50633_adc_request *cocci_id/* drivers/mfd/pcf50633-adc.c 81 */;
	int cocci_id/* drivers/mfd/pcf50633-adc.c 80 */;
	void cocci_id/* drivers/mfd/pcf50633-adc.c 54 */;
	struct pcf50633_adc *cocci_id/* drivers/mfd/pcf50633-adc.c 49 */;
	struct pcf50633 *cocci_id/* drivers/mfd/pcf50633-adc.c 49 */;
	struct pcf50633_adc {
		struct pcf50633 *pcf;
		struct pcf50633_adc_request *queue[PCF50633_MAX_ADC_FIFO_DEPTH];
		int queue_head;
		int queue_tail;
		struct mutex queue_mutex;
	} cocci_id/* drivers/mfd/pcf50633-adc.c 39 */;
	struct pcf50633_adc_sync_request {
		int result;
		struct completion completion;
	} cocci_id/* drivers/mfd/pcf50633-adc.c 32 */;
	struct pcf50633_adc_request {
		int mux;
		int avg;
		void (*callback)(struct pcf50633 *, void *, int);
		void *callback_param;
	} cocci_id/* drivers/mfd/pcf50633-adc.c 25 */;
	struct platform_driver cocci_id/* drivers/mfd/pcf50633-adc.c 238 */;
	struct platform_device *cocci_id/* drivers/mfd/pcf50633-adc.c 197 */;
	u16 cocci_id/* drivers/mfd/pcf50633-adc.c 157 */;
	u8 cocci_id/* drivers/mfd/pcf50633-adc.c 156 */;
	void *cocci_id/* drivers/mfd/pcf50633-adc.c 136 */;
	void (*cocci_id/* drivers/mfd/pcf50633-adc.c 135 */)(struct pcf50633 *,
							     void *, int);
	struct pcf50633_adc_sync_request cocci_id/* drivers/mfd/pcf50633-adc.c 118 */;
	struct pcf50633_adc_sync_request *cocci_id/* drivers/mfd/pcf50633-adc.c 110 */;
}
