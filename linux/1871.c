cocci_test_suite() {
	bool cocci_id/* drivers/iio/adc/ingenic-adc.c 89 */;
	uint32_t cocci_id/* drivers/iio/adc/ingenic-adc.c 71 */;
	struct ingenic_adc {
		void __iomem *base;
		struct clk *clk;
		struct mutex lock;
		struct mutex aux_lock;
		const struct ingenic_adc_soc_data *soc_data;
		bool low_vref_mode;
	} cocci_id/* drivers/iio/adc/ingenic-adc.c 61 */;
	struct platform_driver cocci_id/* drivers/iio/adc/ingenic-adc.c 511 */;
	const struct of_device_id cocci_id/* drivers/iio/adc/ingenic-adc.c 502 */[];
	struct ingenic_adc_soc_data {
		unsigned int battery_high_vref;
		unsigned int battery_high_vref_bits;
		const int *battery_raw_avail;
		size_t battery_raw_avail_size;
		const int *battery_scale_avail;
		size_t battery_scale_avail_size;
		unsigned int battery_vref_mode:1;
		unsigned int has_aux2:1;
		int (*init_clk_div)(struct device *dev,
				    struct ingenic_adc *adc);
	} cocci_id/* drivers/iio/adc/ingenic-adc.c 49 */;
	struct ingenic_adc cocci_id/* drivers/iio/adc/ingenic-adc.c 47 */;
	const struct ingenic_adc_soc_data *cocci_id/* drivers/iio/adc/ingenic-adc.c 431 */;
	struct iio_dev *cocci_id/* drivers/iio/adc/ingenic-adc.c 429 */;
	struct device *cocci_id/* drivers/iio/adc/ingenic-adc.c 428 */;
	struct platform_device *cocci_id/* drivers/iio/adc/ingenic-adc.c 426 */;
	const struct iio_chan_spec cocci_id/* drivers/iio/adc/ingenic-adc.c 397 */[];
	const struct iio_info cocci_id/* drivers/iio/adc/ingenic-adc.c 391 */;
	void *cocci_id/* drivers/iio/adc/ingenic-adc.c 386 */;
	void cocci_id/* drivers/iio/adc/ingenic-adc.c 386 */;
	long cocci_id/* drivers/iio/adc/ingenic-adc.c 295 */;
	int *cocci_id/* drivers/iio/adc/ingenic-adc.c 293 */;
	const int **cocci_id/* drivers/iio/adc/ingenic-adc.c 292 */;
	const struct iio_chan_spec *cocci_id/* drivers/iio/adc/ingenic-adc.c 291 */;
	const struct ingenic_adc_soc_data cocci_id/* drivers/iio/adc/ingenic-adc.c 254 */;
	unsigned int cocci_id/* drivers/iio/adc/ingenic-adc.c 184 */;
	unsigned long cocci_id/* drivers/iio/adc/ingenic-adc.c 183 */;
	struct clk *cocci_id/* drivers/iio/adc/ingenic-adc.c 182 */;
	const int cocci_id/* drivers/iio/adc/ingenic-adc.c 154 */[];
	u8 cocci_id/* drivers/iio/adc/ingenic-adc.c 108 */;
	struct ingenic_adc *cocci_id/* drivers/iio/adc/ingenic-adc.c 105 */;
	int cocci_id/* drivers/iio/adc/ingenic-adc.c 105 */;
}
