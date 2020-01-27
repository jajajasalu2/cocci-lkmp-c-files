cocci_test_suite() {
	struct stx104_iio *const cocci_id/* drivers/iio/adc/stx104.c 74 */;
	const struct iio_chan_spec *cocci_id/* drivers/iio/adc/stx104.c 72 */;
	int *cocci_id/* drivers/iio/adc/stx104.c 72 */;
	long cocci_id/* drivers/iio/adc/stx104.c 72 */;
	struct stx104_gpio {
		struct gpio_chip chip;
		spinlock_t lock;
		unsigned int base;
		unsigned int out_state;
	} cocci_id/* drivers/iio/adc/stx104.c 64 */;
	struct stx104_iio {
		unsigned int chan_out_states[STX104_NUM_OUT_CHAN];
		unsigned int base;
	} cocci_id/* drivers/iio/adc/stx104.c 52 */;
	unsigned int cocci_id/* drivers/iio/adc/stx104.c 43 */;
	unsigned int cocci_id/* drivers/iio/adc/stx104.c 42 */[max_num_isa_dev(STX104_EXTENT)];
	struct isa_driver cocci_id/* drivers/iio/adc/stx104.c 364 */;
	struct stx104_gpio *cocci_id/* drivers/iio/adc/stx104.c 291 */;
	struct stx104_iio *cocci_id/* drivers/iio/adc/stx104.c 290 */;
	struct iio_dev *cocci_id/* drivers/iio/adc/stx104.c 289 */;
	struct device *cocci_id/* drivers/iio/adc/stx104.c 287 */;
	const char *cocci_id/* drivers/iio/adc/stx104.c 261 */[STX104_NGPIO];
	unsigned long cocci_id/* drivers/iio/adc/stx104.c 243 */;
	const unsigned int cocci_id/* drivers/iio/adc/stx104.c 242 */;
	void cocci_id/* drivers/iio/adc/stx104.c 238 */;
	unsigned long *cocci_id/* drivers/iio/adc/stx104.c 228 */;
	struct stx104_gpio *const cocci_id/* drivers/iio/adc/stx104.c 220 */;
	struct gpio_chip *cocci_id/* drivers/iio/adc/stx104.c 199 */;
	int cocci_id/* drivers/iio/adc/stx104.c 199 */;
	const struct iio_chan_spec cocci_id/* drivers/iio/adc/stx104.c 182 */[];
	const struct iio_info cocci_id/* drivers/iio/adc/stx104.c 166 */;
}
