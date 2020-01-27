cocci_test_suite() {
	uintptr_t cocci_id/* drivers/iio/afe/iio-rescale.c 99 */;
	ssize_t cocci_id/* drivers/iio/afe/iio-rescale.c 98 */;
	const struct iio_info cocci_id/* drivers/iio/afe/iio-rescale.c 93 */;
	long cocci_id/* drivers/iio/afe/iio-rescale.c 79 */;
	const int **cocci_id/* drivers/iio/afe/iio-rescale.c 78 */;
	int *cocci_id/* drivers/iio/afe/iio-rescale.c 78 */;
	unsigned long long cocci_id/* drivers/iio/afe/iio-rescale.c 41 */;
	struct platform_driver cocci_id/* drivers/iio/afe/iio-rescale.c 348 */;
	struct iio_chan_spec_ext_info *cocci_id/* drivers/iio/afe/iio-rescale.c 330 */;
	struct iio_channel *cocci_id/* drivers/iio/afe/iio-rescale.c 271 */;
	struct iio_dev *cocci_id/* drivers/iio/afe/iio-rescale.c 270 */;
	struct rescale {
		const struct rescale_cfg *cfg;
		struct iio_channel *source;
		struct iio_chan_spec chan;
		struct iio_chan_spec_ext_info *ext_info;
		s32 numerator;
		s32 denominator;
	} cocci_id/* drivers/iio/afe/iio-rescale.c 27 */;
	struct platform_device *cocci_id/* drivers/iio/afe/iio-rescale.c 267 */;
	const struct of_device_id cocci_id/* drivers/iio/afe/iio-rescale.c 256 */[];
	const struct rescale_cfg cocci_id/* drivers/iio/afe/iio-rescale.c 241 */[];
	enum rescale_variant{CURRENT_SENSE_AMPLIFIER, CURRENT_SENSE_SHUNT, VOLTAGE_DIVIDER,} cocci_id/* drivers/iio/afe/iio-rescale.c 235 */;
	struct rescale_cfg {
		enum iio_chan_type type;
		int (*props)(struct device *dev, struct rescale *rescale);
	} cocci_id/* drivers/iio/afe/iio-rescale.c 22 */;
	struct rescale cocci_id/* drivers/iio/afe/iio-rescale.c 20 */;
	u32 cocci_id/* drivers/iio/afe/iio-rescale.c 151 */;
	const struct iio_chan_spec *cocci_id/* drivers/iio/afe/iio-rescale.c 126 */;
	struct iio_chan_spec *cocci_id/* drivers/iio/afe/iio-rescale.c 125 */;
	struct rescale *cocci_id/* drivers/iio/afe/iio-rescale.c 123 */;
	struct device *cocci_id/* drivers/iio/afe/iio-rescale.c 122 */;
	int cocci_id/* drivers/iio/afe/iio-rescale.c 122 */;
	const char *cocci_id/* drivers/iio/afe/iio-rescale.c 113 */;
	size_t cocci_id/* drivers/iio/afe/iio-rescale.c 113 */;
	char *cocci_id/* drivers/iio/afe/iio-rescale.c 101 */;
}
