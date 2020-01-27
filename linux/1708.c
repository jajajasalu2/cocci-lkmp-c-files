cocci_test_suite() {
	int *cocci_id/* drivers/iio/potentiometer/max5481.c 87 */;
	long cocci_id/* drivers/iio/potentiometer/max5481.c 87 */;
	const struct iio_chan_spec *cocci_id/* drivers/iio/potentiometer/max5481.c 86 */;
	u8 cocci_id/* drivers/iio/potentiometer/max5481.c 64 */;
	u16 cocci_id/* drivers/iio/potentiometer/max5481.c 64 */;
	const struct iio_chan_spec cocci_id/* drivers/iio/potentiometer/max5481.c 60 */[];
	struct max5481_data {
		struct spi_device *spi;
		const struct max5481_cfg *cfg;
		u8 msg[3]____cacheline_aligned;
	} cocci_id/* drivers/iio/potentiometer/max5481.c 45 */;
	const struct max5481_cfg cocci_id/* drivers/iio/potentiometer/max5481.c 38 */[];
	struct max5481_cfg {
		int kohms;
	} cocci_id/* drivers/iio/potentiometer/max5481.c 34 */;
	enum max5481_variant{max5481, max5482, max5483, max5484,} cocci_id/* drivers/iio/potentiometer/max5481.c 27 */;
	struct spi_driver cocci_id/* drivers/iio/potentiometer/max5481.c 199 */;
	const struct acpi_device_id cocci_id/* drivers/iio/potentiometer/max5481.c 189 */[];
	const struct spi_device_id cocci_id/* drivers/iio/potentiometer/max5481.c 179 */[];
	const struct spi_device_id *cocci_id/* drivers/iio/potentiometer/max5481.c 135 */;
	struct max5481_data *cocci_id/* drivers/iio/potentiometer/max5481.c 134 */;
	struct iio_dev *cocci_id/* drivers/iio/potentiometer/max5481.c 133 */;
	struct spi_device *cocci_id/* drivers/iio/potentiometer/max5481.c 131 */;
	int cocci_id/* drivers/iio/potentiometer/max5481.c 131 */;
	const struct of_device_id cocci_id/* drivers/iio/potentiometer/max5481.c 121 */[];
	const struct iio_info cocci_id/* drivers/iio/potentiometer/max5481.c 115 */;
}
