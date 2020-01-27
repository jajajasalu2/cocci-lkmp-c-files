cocci_test_suite() {
	enum axp22x_adc_channel_i{AXP22X_BATT_CHRG_I=1, AXP22X_BATT_DISCHRG_I,} cocci_id/* drivers/iio/adc/axp20x_adc.c 95 */;
	enum axp22x_adc_channel_v{AXP22X_TS_IN=0, AXP22X_BATT_V,} cocci_id/* drivers/iio/adc/axp20x_adc.c 90 */;
	enum axp20x_adc_channel_i{AXP20X_ACIN_I=0, AXP20X_VBUS_I, AXP20X_BATT_CHRG_I, AXP20X_BATT_DISCHRG_I,} cocci_id/* drivers/iio/adc/axp20x_adc.c 83 */;
	struct platform_driver cocci_id/* drivers/iio/adc/axp20x_adc.c 744 */;
	enum axp20x_adc_channel_v{AXP20X_ACIN_V=0, AXP20X_VBUS_V, AXP20X_TS_IN, AXP20X_GPIO0_V, AXP20X_GPIO1_V, AXP20X_IPSOUT_V, AXP20X_BATT_V,} cocci_id/* drivers/iio/adc/axp20x_adc.c 73 */;
	struct device *cocci_id/* drivers/iio/adc/axp20x_adc.c 681 */;
	struct axp20x_adc_iio {
		struct regmap *regmap;
		struct axp_data *data;
	} cocci_id/* drivers/iio/adc/axp20x_adc.c 68 */;
	struct axp_data *cocci_id/* drivers/iio/adc/axp20x_adc.c 679 */;
	const struct platform_device_id *cocci_id/* drivers/iio/adc/axp20x_adc.c 676 */;
	struct axp_data cocci_id/* drivers/iio/adc/axp20x_adc.c 66 */;
	struct axp20x_dev *cocci_id/* drivers/iio/adc/axp20x_adc.c 658 */;
	struct platform_device *cocci_id/* drivers/iio/adc/axp20x_adc.c 654 */;
	const struct platform_device_id cocci_id/* drivers/iio/adc/axp20x_adc.c 646 */[];
	void *cocci_id/* drivers/iio/adc/axp20x_adc.c 639 */;
	const struct of_device_id cocci_id/* drivers/iio/adc/axp20x_adc.c 638 */[];
	const struct axp_data cocci_id/* drivers/iio/adc/axp20x_adc.c 608 */;
	struct axp_data {
		const struct iio_info *iio_info;
		int num_channels;
		const struct iio_chan_spec *channels;
		unsigned long adc_en1_mask;
		int (*adc_rate)(struct axp20x_adc_iio *info, int rate);
		bool adc_en2;
		struct iio_map *maps;
	} cocci_id/* drivers/iio/adc/axp20x_adc.c 597 */;
	const struct iio_info cocci_id/* drivers/iio/adc/axp20x_adc.c 563 */;
	unsigned int cocci_id/* drivers/iio/adc/axp20x_adc.c 530 */;
	long cocci_id/* drivers/iio/adc/axp20x_adc.c 468 */;
	const struct iio_chan_spec *cocci_id/* drivers/iio/adc/axp20x_adc.c 451 */;
	int *cocci_id/* drivers/iio/adc/axp20x_adc.c 451 */;
	struct iio_dev *cocci_id/* drivers/iio/adc/axp20x_adc.c 450 */;
	int cocci_id/* drivers/iio/adc/axp20x_adc.c 450 */;
	struct axp20x_adc_iio *cocci_id/* drivers/iio/adc/axp20x_adc.c 425 */;
	const struct iio_chan_spec cocci_id/* drivers/iio/adc/axp20x_adc.c 160 */[];
	struct iio_map cocci_id/* drivers/iio/adc/axp20x_adc.c 106 */[];
	enum axp813_adc_channel_v{AXP813_TS_IN=0, AXP813_GPIO0_V, AXP813_BATT_V,} cocci_id/* drivers/iio/adc/axp20x_adc.c 100 */;
}
