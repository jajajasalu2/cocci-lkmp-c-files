cocci_test_suite() {
	struct stmpe_adc {
		struct stmpe *stmpe;
		struct clk *clk;
		struct device *dev;
		struct mutex lock;
		struct iio_chan_spec stmpe_adc_iio_channels[STMPE_ADC_LAST_NR + 2];
		struct completion completion;
		u8 channel;
		u32 value;
	} cocci_id/* drivers/iio/adc/stmpe-adc.c 46 */;
	const struct of_device_id cocci_id/* drivers/iio/adc/stmpe-adc.c 357 */[];
	struct platform_driver cocci_id/* drivers/iio/adc/stmpe-adc.c 348 */;
	struct device *cocci_id/* drivers/iio/adc/stmpe-adc.c 336 */;
	int __maybe_unused cocci_id/* drivers/iio/adc/stmpe-adc.c 336 */;
	unsigned long *cocci_id/* drivers/iio/adc/stmpe-adc.c 313 */;
	struct stmpe_adc cocci_id/* drivers/iio/adc/stmpe-adc.c 268 */;
	struct device_node *cocci_id/* drivers/iio/adc/stmpe-adc.c 257 */;
	struct iio_dev *cocci_id/* drivers/iio/adc/stmpe-adc.c 255 */;
	struct platform_device *cocci_id/* drivers/iio/adc/stmpe-adc.c 253 */;
	struct stmpe *cocci_id/* drivers/iio/adc/stmpe-adc.c 232 */;
	struct stmpe_adc *cocci_id/* drivers/iio/adc/stmpe-adc.c 229 */;
	int cocci_id/* drivers/iio/adc/stmpe-adc.c 229 */;
	struct iio_chan_spec *cocci_id/* drivers/iio/adc/stmpe-adc.c 221 */;
	void cocci_id/* drivers/iio/adc/stmpe-adc.c 221 */;
	const struct iio_info cocci_id/* drivers/iio/adc/stmpe-adc.c 208 */;
	u32 cocci_id/* drivers/iio/adc/stmpe-adc.c 202 */;
	u8 *cocci_id/* drivers/iio/adc/stmpe-adc.c 191 */;
	__be16 cocci_id/* drivers/iio/adc/stmpe-adc.c 178 */;
	irqreturn_t cocci_id/* drivers/iio/adc/stmpe-adc.c 175 */;
	void *cocci_id/* drivers/iio/adc/stmpe-adc.c 175 */;
	long cocci_id/* drivers/iio/adc/stmpe-adc.c 137 */;
	int *cocci_id/* drivers/iio/adc/stmpe-adc.c 135 */;
	const struct iio_chan_spec *cocci_id/* drivers/iio/adc/stmpe-adc.c 134 */;
	u8 cocci_id/* drivers/iio/adc/stmpe-adc.c 105 */;
}
