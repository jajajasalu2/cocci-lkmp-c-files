cocci_test_suite() {
	u8 cocci_id/* drivers/iio/adc/da9150-gpadc.c 95 */[2];
	struct da9150_gpadc *cocci_id/* drivers/iio/adc/da9150-gpadc.c 86 */;
	irqreturn_t cocci_id/* drivers/iio/adc/da9150-gpadc.c 83 */;
	void *cocci_id/* drivers/iio/adc/da9150-gpadc.c 83 */;
	struct da9150_gpadc {
		struct da9150 *da9150;
		struct device *dev;
		struct mutex lock;
		struct completion complete;
	} cocci_id/* drivers/iio/adc/da9150-gpadc.c 74 */;
	enum da9150_gpadc_channel{DA9150_GPADC_CHAN_GPIOA=0, DA9150_GPADC_CHAN_GPIOB, DA9150_GPADC_CHAN_GPIOC, DA9150_GPADC_CHAN_GPIOD, DA9150_GPADC_CHAN_IBUS, DA9150_GPADC_CHAN_VBUS, DA9150_GPADC_CHAN_VSYS, DA9150_GPADC_CHAN_VBAT, DA9150_GPADC_CHAN_TBAT, DA9150_GPADC_CHAN_TJUNC_CORE, DA9150_GPADC_CHAN_TJUNC_OVP,} cocci_id/* drivers/iio/adc/da9150-gpadc.c 59 */;
	struct platform_driver cocci_id/* drivers/iio/adc/da9150-gpadc.c 388 */;
	struct iio_dev *cocci_id/* drivers/iio/adc/da9150-gpadc.c 323 */;
	struct da9150 *cocci_id/* drivers/iio/adc/da9150-gpadc.c 321 */;
	struct device *cocci_id/* drivers/iio/adc/da9150-gpadc.c 320 */;
	struct platform_device *cocci_id/* drivers/iio/adc/da9150-gpadc.c 318 */;
	struct iio_map cocci_id/* drivers/iio/adc/da9150-gpadc.c 294 */[];
	const struct iio_chan_spec cocci_id/* drivers/iio/adc/da9150-gpadc.c 277 */[];
	const struct iio_info cocci_id/* drivers/iio/adc/da9150-gpadc.c 246 */;
	enum da9150_gpadc_hw_channel{DA9150_GPADC_HW_CHAN_GPIOA_2V=0, DA9150_GPADC_HW_CHAN_GPIOA_2V_, DA9150_GPADC_HW_CHAN_GPIOB_2V, DA9150_GPADC_HW_CHAN_GPIOB_2V_, DA9150_GPADC_HW_CHAN_GPIOC_2V, DA9150_GPADC_HW_CHAN_GPIOC_2V_, DA9150_GPADC_HW_CHAN_GPIOD_2V, DA9150_GPADC_HW_CHAN_GPIOD_2V_, DA9150_GPADC_HW_CHAN_IBUS_SENSE, DA9150_GPADC_HW_CHAN_IBUS_SENSE_, DA9150_GPADC_HW_CHAN_VBUS_DIV, DA9150_GPADC_HW_CHAN_VBUS_DIV_, DA9150_GPADC_HW_CHAN_ID, DA9150_GPADC_HW_CHAN_ID_, DA9150_GPADC_HW_CHAN_VSYS, DA9150_GPADC_HW_CHAN_VSYS_, DA9150_GPADC_HW_CHAN_GPIOA_6V, DA9150_GPADC_HW_CHAN_GPIOA_6V_, DA9150_GPADC_HW_CHAN_GPIOB_6V, DA9150_GPADC_HW_CHAN_GPIOB_6V_, DA9150_GPADC_HW_CHAN_GPIOC_6V, DA9150_GPADC_HW_CHAN_GPIOC_6V_, DA9150_GPADC_HW_CHAN_GPIOD_6V, DA9150_GPADC_HW_CHAN_GPIOD_6V_, DA9150_GPADC_HW_CHAN_VBAT, DA9150_GPADC_HW_CHAN_VBAT_, DA9150_GPADC_HW_CHAN_TBAT, DA9150_GPADC_HW_CHAN_TBAT_, DA9150_GPADC_HW_CHAN_TJUNC_CORE, DA9150_GPADC_HW_CHAN_TJUNC_CORE_, DA9150_GPADC_HW_CHAN_TJUNC_OVP, DA9150_GPADC_HW_CHAN_TJUNC_OVP_,} cocci_id/* drivers/iio/adc/da9150-gpadc.c 24 */;
	long cocci_id/* drivers/iio/adc/da9150-gpadc.c 224 */;
	const struct iio_chan_spec *cocci_id/* drivers/iio/adc/da9150-gpadc.c 223 */;
	int *cocci_id/* drivers/iio/adc/da9150-gpadc.c 207 */;
	int cocci_id/* drivers/iio/adc/da9150-gpadc.c 132 */;
}
