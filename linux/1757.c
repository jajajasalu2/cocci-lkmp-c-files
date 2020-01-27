cocci_test_suite() {
	bool cocci_id/* drivers/iio/trigger/iio-trig-hrtimer.c 97 */;
	struct iio_hrtimer_info cocci_id/* drivers/iio/trigger/iio-trig-hrtimer.c 89 */;
	enum hrtimer_restart cocci_id/* drivers/iio/trigger/iio-trig-hrtimer.c 85 */;
	struct hrtimer *cocci_id/* drivers/iio/trigger/iio-trig-hrtimer.c 85 */;
	const struct attribute_group *cocci_id/* drivers/iio/trigger/iio-trig-hrtimer.c 80 */[];
	const struct attribute_group cocci_id/* drivers/iio/trigger/iio-trig-hrtimer.c 76 */;
	struct attribute *cocci_id/* drivers/iio/trigger/iio-trig-hrtimer.c 71 */[];
	int cocci_id/* drivers/iio/trigger/iio-trig-hrtimer.c 52 */;
	unsigned long cocci_id/* drivers/iio/trigger/iio-trig-hrtimer.c 51 */;
	const char *cocci_id/* drivers/iio/trigger/iio-trig-hrtimer.c 47 */;
	size_t cocci_id/* drivers/iio/trigger/iio-trig-hrtimer.c 47 */;
	struct iio_hrtimer_info *cocci_id/* drivers/iio/trigger/iio-trig-hrtimer.c 39 */;
	struct iio_trigger *cocci_id/* drivers/iio/trigger/iio-trig-hrtimer.c 38 */;
	char *cocci_id/* drivers/iio/trigger/iio-trig-hrtimer.c 36 */;
	struct device_attribute *cocci_id/* drivers/iio/trigger/iio-trig-hrtimer.c 35 */;
	struct device *cocci_id/* drivers/iio/trigger/iio-trig-hrtimer.c 34 */;
	ssize_t cocci_id/* drivers/iio/trigger/iio-trig-hrtimer.c 34 */;
	const struct config_item_type cocci_id/* drivers/iio/trigger/iio-trig-hrtimer.c 29 */;
	struct iio_hrtimer_info {
		struct iio_sw_trigger swt;
		struct hrtimer timer;
		unsigned long sampling_frequency;
		ktime_t period;
	} cocci_id/* drivers/iio/trigger/iio-trig-hrtimer.c 22 */;
	struct iio_sw_trigger_type cocci_id/* drivers/iio/trigger/iio-trig-hrtimer.c 176 */;
	const struct iio_sw_trigger_ops cocci_id/* drivers/iio/trigger/iio-trig-hrtimer.c 171 */;
	struct iio_sw_trigger *cocci_id/* drivers/iio/trigger/iio-trig-hrtimer.c 116 */;
	const struct iio_trigger_ops cocci_id/* drivers/iio/trigger/iio-trig-hrtimer.c 112 */;
}
