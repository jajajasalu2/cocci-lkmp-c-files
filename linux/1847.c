cocci_test_suite() {
	void cocci_id/* drivers/iio/adc/cc10001_adc.c 85 */;
	u32 cocci_id/* drivers/iio/adc/cc10001_adc.c 73 */;
	struct cc10001_adc_device {
		void __iomem *reg_base;
		struct clk *adc_clk;
		struct regulator *reg;
		u16 *buf;
		bool shared;
		struct mutex lock;
		unsigned int start_delay_ns;
		unsigned int eoc_delay_ns;
	} cocci_id/* drivers/iio/adc/cc10001_adc.c 55 */;
	struct platform_driver cocci_id/* drivers/iio/adc/cc10001_adc.c 428 */;
	const struct of_device_id cocci_id/* drivers/iio/adc/cc10001_adc.c 422 */[];
	struct device_node *cocci_id/* drivers/iio/adc/cc10001_adc.c 310 */;
	struct platform_device *cocci_id/* drivers/iio/adc/cc10001_adc.c 308 */;
	struct iio_chan_spec cocci_id/* drivers/iio/adc/cc10001_adc.c 275 */;
	unsigned int cocci_id/* drivers/iio/adc/cc10001_adc.c 269 */;
	struct iio_chan_spec *cocci_id/* drivers/iio/adc/cc10001_adc.c 268 */;
	unsigned long cocci_id/* drivers/iio/adc/cc10001_adc.c 266 */;
	struct iio_dev *cocci_id/* drivers/iio/adc/cc10001_adc.c 265 */;
	int cocci_id/* drivers/iio/adc/cc10001_adc.c 265 */;
	const struct iio_info cocci_id/* drivers/iio/adc/cc10001_adc.c 260 */;
	const unsigned long *cocci_id/* drivers/iio/adc/cc10001_adc.c 248 */;
	int *cocci_id/* drivers/iio/adc/cc10001_adc.c 216 */;
	long cocci_id/* drivers/iio/adc/cc10001_adc.c 216 */;
	const struct iio_chan_spec *cocci_id/* drivers/iio/adc/cc10001_adc.c 215 */;
	u16 *cocci_id/* drivers/iio/adc/cc10001_adc.c 144 */;
	bool cocci_id/* drivers/iio/adc/cc10001_adc.c 143 */;
	struct iio_poll_func *cocci_id/* drivers/iio/adc/cc10001_adc.c 138 */;
	irqreturn_t cocci_id/* drivers/iio/adc/cc10001_adc.c 135 */;
	void *cocci_id/* drivers/iio/adc/cc10001_adc.c 135 */;
	struct cc10001_adc_device *cocci_id/* drivers/iio/adc/cc10001_adc.c 110 */;
	u16 cocci_id/* drivers/iio/adc/cc10001_adc.c 106 */;
}
