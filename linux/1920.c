cocci_test_suite() {
	struct platform_driver cocci_id/* drivers/iio/adc/qcom-spmi-iadc.c 574 */;
	const struct of_device_id cocci_id/* drivers/iio/adc/qcom-spmi-iadc.c 567 */[];
	u32 cocci_id/* drivers/iio/adc/qcom-spmi-iadc.c 492 */;
	struct iio_dev *cocci_id/* drivers/iio/adc/qcom-spmi-iadc.c 489 */;
	struct device *cocci_id/* drivers/iio/adc/qcom-spmi-iadc.c 488 */;
	struct device_node *cocci_id/* drivers/iio/adc/qcom-spmi-iadc.c 487 */;
	struct platform_device *cocci_id/* drivers/iio/adc/qcom-spmi-iadc.c 485 */;
	const struct iio_chan_spec cocci_id/* drivers/iio/adc/qcom-spmi-iadc.c 466 */[];
	irqreturn_t cocci_id/* drivers/iio/adc/qcom-spmi-iadc.c 353 */;
	void *cocci_id/* drivers/iio/adc/qcom-spmi-iadc.c 353 */;
	const struct iio_info cocci_id/* drivers/iio/adc/qcom-spmi-iadc.c 349 */;
	s32 cocci_id/* drivers/iio/adc/qcom-spmi-iadc.c 315 */;
	int *cocci_id/* drivers/iio/adc/qcom-spmi-iadc.c 312 */;
	long cocci_id/* drivers/iio/adc/qcom-spmi-iadc.c 312 */;
	const struct iio_chan_spec *cocci_id/* drivers/iio/adc/qcom-spmi-iadc.c 311 */;
	unsigned int cocci_id/* drivers/iio/adc/qcom-spmi-iadc.c 279 */;
	u16 *cocci_id/* drivers/iio/adc/qcom-spmi-iadc.c 277 */;
	u8 cocci_id/* drivers/iio/adc/qcom-spmi-iadc.c 199 */;
	struct iadc_chip *cocci_id/* drivers/iio/adc/qcom-spmi-iadc.c 197 */;
	int cocci_id/* drivers/iio/adc/qcom-spmi-iadc.c 197 */;
	void cocci_id/* drivers/iio/adc/qcom-spmi-iadc.c 163 */;
	bool cocci_id/* drivers/iio/adc/qcom-spmi-iadc.c 158 */;
	u16 cocci_id/* drivers/iio/adc/qcom-spmi-iadc.c 118 */;
	u8 *cocci_id/* drivers/iio/adc/qcom-spmi-iadc.c 118 */;
	struct iadc_chip {
		struct regmap *regmap;
		struct device *dev;
		u16 base;
		bool poll_eoc;
		u32 rsense[2];
		u16 offset[2];
		u16 gain;
		struct mutex lock;
		struct completion complete;
	} cocci_id/* drivers/iio/adc/qcom-spmi-iadc.c 106 */;
}
