cocci_test_suite() {
	struct platform_driver cocci_id/* drivers/iio/light/lm3533-als.c 912 */;
	u8 cocci_id/* drivers/iio/light/lm3533-als.c 89 */;
	struct lm3533_als *cocci_id/* drivers/iio/light/lm3533-als.c 88 */;
	u8 *cocci_id/* drivers/iio/light/lm3533-als.c 86 */;
	struct iio_dev *cocci_id/* drivers/iio/light/lm3533-als.c 86 */;
	int cocci_id/* drivers/iio/light/lm3533-als.c 86 */;
	struct lm3533_als_platform_data *cocci_id/* drivers/iio/light/lm3533-als.c 832 */;
	struct lm3533 *cocci_id/* drivers/iio/light/lm3533-als.c 831 */;
	struct platform_device *cocci_id/* drivers/iio/light/lm3533-als.c 829 */;
	const struct iio_info cocci_id/* drivers/iio/light/lm3533-als.c 823 */;
	const struct attribute_group cocci_id/* drivers/iio/light/lm3533-als.c 713 */;
	struct attribute *cocci_id/* drivers/iio/light/lm3533-als.c 693 */[];
	int *cocci_id/* drivers/iio/light/lm3533-als.c 63 */;
	bool cocci_id/* drivers/iio/light/lm3533-als.c 62 */;
	const char *cocci_id/* drivers/iio/light/lm3533-als.c 538 */;
	size_t cocci_id/* drivers/iio/light/lm3533-als.c 538 */;
	struct lm3533_als_attribute *cocci_id/* drivers/iio/light/lm3533-als.c 505 */;
	char *cocci_id/* drivers/iio/light/lm3533-als.c 502 */;
	struct device_attribute *cocci_id/* drivers/iio/light/lm3533-als.c 501 */;
	struct device *cocci_id/* drivers/iio/light/lm3533-als.c 500 */;
	ssize_t cocci_id/* drivers/iio/light/lm3533-als.c 500 */;
	struct lm3533_als {
		struct lm3533 *lm3533;
		struct platform_device *pdev;
		unsigned long flags;
		int irq;
		atomic_t zone;
		struct mutex thresh_mutex;
	} cocci_id/* drivers/iio/light/lm3533-als.c 50 */;
	struct lm3533_als_attribute cocci_id/* drivers/iio/light/lm3533-als.c 497 */;
	struct lm3533_als_attribute {
		struct device_attribute dev_attr;
		enum lm3533_als_attribute_type type;
		u8 val1;
		u8 val2;
	} cocci_id/* drivers/iio/light/lm3533-als.c 487 */;
	enum lm3533_als_attribute_type{LM3533_ATTR_TYPE_HYSTERESIS, LM3533_ATTR_TYPE_TARGET, LM3533_ATTR_TYPE_THRESH_FALLING, LM3533_ATTR_TYPE_THRESH_RAISING,} cocci_id/* drivers/iio/light/lm3533-als.c 480 */;
	unsigned long cocci_id/* drivers/iio/light/lm3533-als.c 429 */;
	irqreturn_t cocci_id/* drivers/iio/light/lm3533-als.c 246 */;
	void *cocci_id/* drivers/iio/light/lm3533-als.c 246 */;
	const struct iio_chan_spec cocci_id/* drivers/iio/light/lm3533-als.c 233 */[];
	long cocci_id/* drivers/iio/light/lm3533-als.c 193 */;
	const struct iio_chan_spec *cocci_id/* drivers/iio/light/lm3533-als.c 192 */;
	unsigned cocci_id/* drivers/iio/light/lm3533-als.c 171 */;
}
