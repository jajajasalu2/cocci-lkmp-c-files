cocci_test_suite() {
	s64 cocci_id/* drivers/iio/light/cm3605.c 76 */;
	struct cm3605 *cocci_id/* drivers/iio/light/cm3605.c 73 */;
	int cocci_id/* drivers/iio/light/cm3605.c 73 */;
	u64 cocci_id/* drivers/iio/light/cm3605.c 58 */;
	irqreturn_t cocci_id/* drivers/iio/light/cm3605.c 54 */;
	void *cocci_id/* drivers/iio/light/cm3605.c 54 */;
	struct cm3605 {
		struct device *dev;
		struct regulator *vdd;
		struct gpio_desc *aset;
		struct iio_channel *aout;
		s32 als_max;
		enum iio_event_direction dir;
		struct led_trigger *led;
	} cocci_id/* drivers/iio/light/cm3605.c 44 */;
	struct platform_driver cocci_id/* drivers/iio/light/cm3605.c 317 */;
	const struct of_device_id cocci_id/* drivers/iio/light/cm3605.c 311 */[];
	const struct dev_pm_ops cocci_id/* drivers/iio/light/cm3605.c 306 */;
	struct iio_dev *cocci_id/* drivers/iio/light/cm3605.c 294 */;
	struct device *cocci_id/* drivers/iio/light/cm3605.c 292 */;
	int __maybe_unused cocci_id/* drivers/iio/light/cm3605.c 292 */;
	u32 cocci_id/* drivers/iio/light/cm3605.c 161 */;
	enum iio_chan_type cocci_id/* drivers/iio/light/cm3605.c 160 */;
	struct device_node *cocci_id/* drivers/iio/light/cm3605.c 159 */;
	struct platform_device *cocci_id/* drivers/iio/light/cm3605.c 154 */;
	const struct iio_chan_spec cocci_id/* drivers/iio/light/cm3605.c 141 */[];
	const struct iio_event_spec cocci_id/* drivers/iio/light/cm3605.c 133 */[];
	const struct iio_info cocci_id/* drivers/iio/light/cm3605.c 129 */;
	int *cocci_id/* drivers/iio/light/cm3605.c 107 */;
	long cocci_id/* drivers/iio/light/cm3605.c 107 */;
	const struct iio_chan_spec *cocci_id/* drivers/iio/light/cm3605.c 106 */;
}
