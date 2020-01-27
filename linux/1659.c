cocci_test_suite() {
	int cocci_id/* drivers/iio/dummy/iio_dummy_evgen.c 47 */;
	void cocci_id/* drivers/iio/dummy/iio_dummy_evgen.c 47 */;
	struct iio_dummy_eventgen *cocci_id/* drivers/iio/dummy/iio_dummy_evgen.c 45 */;
	struct iio_dummy_eventgen {
		struct iio_dummy_regs regs[IIO_EVENTGEN_NO];
		struct mutex lock;
		bool inuse[IIO_EVENTGEN_NO];
		struct irq_sim irq_sim;
		int base;
	} cocci_id/* drivers/iio/dummy/iio_dummy_evgen.c 36 */;
	struct device cocci_id/* drivers/iio/dummy/iio_dummy_evgen.c 182 */;
	const struct attribute_group *cocci_id/* drivers/iio/dummy/iio_dummy_evgen.c 177 */[];
	const struct attribute_group cocci_id/* drivers/iio/dummy/iio_dummy_evgen.c 173 */;
	struct attribute *cocci_id/* drivers/iio/dummy/iio_dummy_evgen.c 159 */[];
	unsigned long cocci_id/* drivers/iio/dummy/iio_dummy_evgen.c 133 */;
	struct iio_dev_attr *cocci_id/* drivers/iio/dummy/iio_dummy_evgen.c 132 */;
	size_t cocci_id/* drivers/iio/dummy/iio_dummy_evgen.c 130 */;
	const char *cocci_id/* drivers/iio/dummy/iio_dummy_evgen.c 129 */;
	struct device_attribute *cocci_id/* drivers/iio/dummy/iio_dummy_evgen.c 128 */;
	struct device *cocci_id/* drivers/iio/dummy/iio_dummy_evgen.c 127 */;
	ssize_t cocci_id/* drivers/iio/dummy/iio_dummy_evgen.c 127 */;
	struct iio_dummy_regs *cocci_id/* drivers/iio/dummy/iio_dummy_evgen.c 110 */;
}
