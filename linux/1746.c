cocci_test_suite() {
	u32 cocci_id/* drivers/iio/proximity/srf04.c 98 */;
	u64 cocci_id/* drivers/iio/proximity/srf04.c 97 */;
	ktime_t cocci_id/* drivers/iio/proximity/srf04.c 80 */;
	struct srf04_data *cocci_id/* drivers/iio/proximity/srf04.c 79 */;
	struct iio_dev *cocci_id/* drivers/iio/proximity/srf04.c 78 */;
	irqreturn_t cocci_id/* drivers/iio/proximity/srf04.c 76 */;
	void *cocci_id/* drivers/iio/proximity/srf04.c 76 */;
	int cocci_id/* drivers/iio/proximity/srf04.c 76 */;
	const struct srf04_cfg cocci_id/* drivers/iio/proximity/srf04.c 72 */;
	struct srf04_data {
		struct device *dev;
		struct gpio_desc *gpiod_trig;
		struct gpio_desc *gpiod_echo;
		struct mutex lock;
		int irqnr;
		ktime_t ts_rising;
		ktime_t ts_falling;
		struct completion rising;
		struct completion falling;
		const struct srf04_cfg *cfg;
	} cocci_id/* drivers/iio/proximity/srf04.c 55 */;
	struct srf04_cfg {
		unsigned long trigger_pulse_us;
	} cocci_id/* drivers/iio/proximity/srf04.c 51 */;
	struct platform_driver cocci_id/* drivers/iio/proximity/srf04.c 302 */;
	struct srf04_data cocci_id/* drivers/iio/proximity/srf04.c 243 */;
	struct device *cocci_id/* drivers/iio/proximity/srf04.c 238 */;
	struct platform_device *cocci_id/* drivers/iio/proximity/srf04.c 236 */;
	const struct of_device_id cocci_id/* drivers/iio/proximity/srf04.c 224 */[];
	const struct iio_chan_spec cocci_id/* drivers/iio/proximity/srf04.c 215 */[];
	const struct iio_info cocci_id/* drivers/iio/proximity/srf04.c 211 */;
	long cocci_id/* drivers/iio/proximity/srf04.c 183 */;
	const struct iio_chan_spec *cocci_id/* drivers/iio/proximity/srf04.c 182 */;
	int *cocci_id/* drivers/iio/proximity/srf04.c 182 */;
}
