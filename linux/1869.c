cocci_test_suite() {
	struct platform_driver cocci_id/* drivers/iio/adc/twl4030-madc.c 926 */;
	const struct of_device_id cocci_id/* drivers/iio/adc/twl4030-madc.c 919 */[];
	struct iio_dev *cocci_id/* drivers/iio/adc/twl4030-madc.c 758 */;
	struct device_node *cocci_id/* drivers/iio/adc/twl4030-madc.c 755 */;
	struct twl4030_madc_platform_data *cocci_id/* drivers/iio/adc/twl4030-madc.c 754 */;
	struct platform_device *cocci_id/* drivers/iio/adc/twl4030-madc.c 751 */;
	const struct twl4030_madc_conversion_method *cocci_id/* drivers/iio/adc/twl4030-madc.c 612 */;
	struct twl4030_madc_request *cocci_id/* drivers/iio/adc/twl4030-madc.c 610 */;
	unsigned int cocci_id/* drivers/iio/adc/twl4030-madc.c 576 */;
	irqreturn_t cocci_id/* drivers/iio/adc/twl4030-madc.c 470 */;
	void *cocci_id/* drivers/iio/adc/twl4030-madc.c 470 */;
	bool cocci_id/* drivers/iio/adc/twl4030-madc.c 382 */;
	unsigned long cocci_id/* drivers/iio/adc/twl4030-madc.c 380 */;
	u16 cocci_id/* drivers/iio/adc/twl4030-madc.c 310 */;
	u8 cocci_id/* drivers/iio/adc/twl4030-madc.c 308 */;
	int cocci_id/* drivers/iio/adc/twl4030-madc.c 308 */;
	const struct twl4030_madc_conversion_method cocci_id/* drivers/iio/adc/twl4030-madc.c 281 */[];
	int cocci_id/* drivers/iio/adc/twl4030-madc.c 261 */[];
	const struct twl4030_prescale_divider_ratios cocci_id/* drivers/iio/adc/twl4030-madc.c 239 */[16];
	struct twl4030_prescale_divider_ratios {
		s16 numerator;
		s16 denominator;
	} cocci_id/* drivers/iio/adc/twl4030-madc.c 234 */;
	struct twl4030_madc_data *cocci_id/* drivers/iio/adc/twl4030-madc.c 232 */;
	const struct iio_chan_spec cocci_id/* drivers/iio/adc/twl4030-madc.c 213 */[];
	const struct iio_info cocci_id/* drivers/iio/adc/twl4030-madc.c 199 */;
	struct twl4030_madc_request cocci_id/* drivers/iio/adc/twl4030-madc.c 179 */;
	int *cocci_id/* drivers/iio/adc/twl4030-madc.c 176 */;
	long cocci_id/* drivers/iio/adc/twl4030-madc.c 176 */;
	const struct iio_chan_spec *cocci_id/* drivers/iio/adc/twl4030-madc.c 175 */;
	int cocci_id/* drivers/iio/adc/twl4030-madc.c 172 */(struct twl4030_madc_request *req);
	struct twl4030_madc_data {
		struct device *dev;
		struct mutex lock;
		struct regulator *usb3v1;
		struct twl4030_madc_request requests[TWL4030_MADC_NUM_METHODS];
		bool use_second_irq;
		u8 imr;
		u8 isr;
	} cocci_id/* drivers/iio/adc/twl4030-madc.c 162 */;
	enum sample_type{TWL4030_MADC_WAIT, TWL4030_MADC_IRQ_ONESHOT, TWL4030_MADC_IRQ_REARM,} cocci_id/* drivers/iio/adc/twl4030-madc.c 146 */;
	enum conversion_methods{TWL4030_MADC_RT, TWL4030_MADC_SW1, TWL4030_MADC_SW2, TWL4030_MADC_NUM_METHODS,} cocci_id/* drivers/iio/adc/twl4030-madc.c 139 */;
	struct twl4030_madc_request {
		unsigned long channels;
		bool do_avg;
		u16 method;
		u16 type;
		bool active;
		bool result_pending;
		bool raw;
		int rbuf[TWL4030_MADC_MAX_CHANNELS];
	} cocci_id/* drivers/iio/adc/twl4030-madc.c 128 */;
	struct twl4030_madc_conversion_method {
		u8 sel;
		u8 avg;
		u8 rbase;
		u8 ctrl;
	} cocci_id/* drivers/iio/adc/twl4030-madc.c 110 */;
}
