cocci_test_suite() {
	unsigned int *cocci_id/* drivers/iio/adc/ti-ads1015.c 965 */;
	const unsigned int cocci_id/* drivers/iio/adc/ti-ads1015.c 96 */[];
	enum chip_ids cocci_id/* drivers/iio/adc/ti-ads1015.c 939 */;
	const struct i2c_device_id *cocci_id/* drivers/iio/adc/ti-ads1015.c 934 */;
	struct ads1015_platform_data *cocci_id/* drivers/iio/adc/ti-ads1015.c 906 */;
	struct i2c_client *cocci_id/* drivers/iio/adc/ti-ads1015.c 900 */;
	u32 cocci_id/* drivers/iio/adc/ti-ads1015.c 852 */;
	struct device_node *cocci_id/* drivers/iio/adc/ti-ads1015.c 845 */;
	enum ads1015_channels{ADS1015_AIN0_AIN1=0, ADS1015_AIN0_AIN3, ADS1015_AIN1_AIN3, ADS1015_AIN2_AIN3, ADS1015_AIN0, ADS1015_AIN1, ADS1015_AIN2, ADS1015_AIN3, ADS1015_TIMESTAMP,} cocci_id/* drivers/iio/adc/ti-ads1015.c 84 */;
	const struct iio_info cocci_id/* drivers/iio/adc/ti-ads1015.c 820 */;
	const struct attribute_group cocci_id/* drivers/iio/adc/ti-ads1015.c 806 */;
	struct attribute *cocci_id/* drivers/iio/adc/ti-ads1015.c 800 */[];
	enum chip_ids{ADS1015, ADS1115,} cocci_id/* drivers/iio/adc/ti-ads1015.c 79 */;
	const struct iio_buffer_setup_ops cocci_id/* drivers/iio/adc/ti-ads1015.c 782 */;
	struct iio_dev *cocci_id/* drivers/iio/adc/ti-ads1015.c 777 */;
	int cocci_id/* drivers/iio/adc/ti-ads1015.c 777 */;
	struct ads1015_data *cocci_id/* drivers/iio/adc/ti-ads1015.c 768 */;
	u64 cocci_id/* drivers/iio/adc/ti-ads1015.c 754 */;
	enum iio_event_direction cocci_id/* drivers/iio/adc/ti-ads1015.c 753 */;
	irqreturn_t cocci_id/* drivers/iio/adc/ti-ads1015.c 740 */;
	void *cocci_id/* drivers/iio/adc/ti-ads1015.c 740 */;
	const struct iio_chan_spec *cocci_id/* drivers/iio/adc/ti-ads1015.c 685 */;
	unsigned int cocci_id/* drivers/iio/adc/ti-ads1015.c 644 */;
	long long cocci_id/* drivers/iio/adc/ti-ads1015.c 574 */;
	enum iio_event_info cocci_id/* drivers/iio/adc/ti-ads1015.c 528 */;
	enum iio_event_type cocci_id/* drivers/iio/adc/ti-ads1015.c 527 */;
	long cocci_id/* drivers/iio/adc/ti-ads1015.c 441 */;
	s16 cocci_id/* drivers/iio/adc/ti-ads1015.c 381 */[8];
	struct iio_poll_func *cocci_id/* drivers/iio/adc/ti-ads1015.c 378 */;
	int *cocci_id/* drivers/iio/adc/ti-ads1015.c 330 */;
	const struct iio_chan_spec cocci_id/* drivers/iio/adc/ti-ads1015.c 288 */[];
	const struct regmap_config cocci_id/* drivers/iio/adc/ti-ads1015.c 281 */;
	struct device *cocci_id/* drivers/iio/adc/ti-ads1015.c 269 */;
	void cocci_id/* drivers/iio/adc/ti-ads1015.c 264 */;
	bool cocci_id/* drivers/iio/adc/ti-ads1015.c 250 */;
	struct ads1015_data {
		struct regmap *regmap;
		struct mutex lock;
		struct ads1015_channel_data channel_data[ADS1015_CHANNELS];
		unsigned int event_channel;
		unsigned int comp_mode;
		struct ads1015_thresh_data thresh_data[ADS1015_CHANNELS];
		unsigned int *data_rate;
		bool conv_invalid;
	} cocci_id/* drivers/iio/adc/ti-ads1015.c 228 */;
	struct ads1015_thresh_data {
		unsigned int comp_queue;
		int high_thresh;
		int low_thresh;
	} cocci_id/* drivers/iio/adc/ti-ads1015.c 222 */;
	const struct iio_event_spec cocci_id/* drivers/iio/adc/ti-ads1015.c 118 */[];
	const int cocci_id/* drivers/iio/adc/ti-ads1015.c 116 */[];
	struct i2c_driver cocci_id/* drivers/iio/adc/ti-ads1015.c 1124 */;
	const struct of_device_id cocci_id/* drivers/iio/adc/ti-ads1015.c 1111 */[];
	const struct i2c_device_id cocci_id/* drivers/iio/adc/ti-ads1015.c 1104 */[];
	const struct dev_pm_ops cocci_id/* drivers/iio/adc/ti-ads1015.c 1099 */;
	int cocci_id/* drivers/iio/adc/ti-ads1015.c 108 */[];
	unsigned long cocci_id/* drivers/iio/adc/ti-ads1015.c 1005 */;
}