cocci_test_suite() {
	int *cocci_id/* drivers/iio/adc/aspeed_adc.c 92 */;
	long cocci_id/* drivers/iio/adc/aspeed_adc.c 92 */;
	const struct iio_chan_spec *cocci_id/* drivers/iio/adc/aspeed_adc.c 91 */;
	const struct iio_chan_spec cocci_id/* drivers/iio/adc/aspeed_adc.c 71 */[];
	struct aspeed_adc_data {
		struct device *dev;
		void __iomem *base;
		spinlock_t clk_lock;
		struct clk_hw *clk_prescaler;
		struct clk_hw *clk_scaler;
		struct reset_control *rst;
	} cocci_id/* drivers/iio/adc/aspeed_adc.c 52 */;
	struct aspeed_adc_model_data {
		const char *model_name;
		unsigned int min_sampling_rate;
		unsigned int max_sampling_rate;
		unsigned int vref_voltage;
		bool wait_init_sequence;
	} cocci_id/* drivers/iio/adc/aspeed_adc.c 44 */;
	struct platform_driver cocci_id/* drivers/iio/adc/aspeed_adc.c 319 */;
	const struct of_device_id cocci_id/* drivers/iio/adc/aspeed_adc.c 312 */[];
	const struct aspeed_adc_model_data cocci_id/* drivers/iio/adc/aspeed_adc.c 297 */;
	u32 cocci_id/* drivers/iio/adc/aspeed_adc.c 178 */;
	const char *cocci_id/* drivers/iio/adc/aspeed_adc.c 176 */;
	const struct aspeed_adc_model_data *cocci_id/* drivers/iio/adc/aspeed_adc.c 175 */;
	struct aspeed_adc_data *cocci_id/* drivers/iio/adc/aspeed_adc.c 174 */;
	struct iio_dev *cocci_id/* drivers/iio/adc/aspeed_adc.c 173 */;
	struct platform_device *cocci_id/* drivers/iio/adc/aspeed_adc.c 171 */;
	int cocci_id/* drivers/iio/adc/aspeed_adc.c 171 */;
	const struct iio_info cocci_id/* drivers/iio/adc/aspeed_adc.c 165 */;
	unsigned int *cocci_id/* drivers/iio/adc/aspeed_adc.c 153 */;
	unsigned int cocci_id/* drivers/iio/adc/aspeed_adc.c 152 */;
}
