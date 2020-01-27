cocci_test_suite() {
	struct dfsdm_priv cocci_id/* drivers/iio/adc/stm32-dfsdm-core.c 97 */;
	struct dfsdm_priv {
		struct platform_device *pdev;
		struct stm32_dfsdm dfsdm;
		unsigned int spi_clk_out_div;
		atomic_t n_active_ch;
		struct clk *clk;
		struct clk *aclk;
	} cocci_id/* drivers/iio/adc/stm32-dfsdm-core.c 83 */;
	const struct stm32_dfsdm_dev_data cocci_id/* drivers/iio/adc/stm32-dfsdm-core.c 62 */;
	const struct regmap_config cocci_id/* drivers/iio/adc/stm32-dfsdm-core.c 53 */;
	struct platform_driver cocci_id/* drivers/iio/adc/stm32-dfsdm-core.c 450 */;
	struct device *cocci_id/* drivers/iio/adc/stm32-dfsdm-core.c 409 */;
	int __maybe_unused cocci_id/* drivers/iio/adc/stm32-dfsdm-core.c 409 */;
	struct platform_device *cocci_id/* drivers/iio/adc/stm32-dfsdm-core.c 379 */;
	bool cocci_id/* drivers/iio/adc/stm32-dfsdm-core.c 33 */;
	const struct stm32_dfsdm_dev_data *cocci_id/* drivers/iio/adc/stm32-dfsdm-core.c 310 */;
	const struct of_device_id cocci_id/* drivers/iio/adc/stm32-dfsdm-core.c 294 */[];
	unsigned int cocci_id/* drivers/iio/adc/stm32-dfsdm-core.c 223 */;
	unsigned long cocci_id/* drivers/iio/adc/stm32-dfsdm-core.c 222 */;
	struct resource *cocci_id/* drivers/iio/adc/stm32-dfsdm-core.c 221 */;
	struct device_node *cocci_id/* drivers/iio/adc/stm32-dfsdm-core.c 220 */;
	struct stm32_dfsdm_dev_data {
		unsigned int num_filters;
		unsigned int num_channels;
		const struct regmap_config *regmap_cfg;
	} cocci_id/* drivers/iio/adc/stm32-dfsdm-core.c 22 */;
	struct dfsdm_priv *cocci_id/* drivers/iio/adc/stm32-dfsdm-core.c 118 */;
	struct stm32_dfsdm *cocci_id/* drivers/iio/adc/stm32-dfsdm-core.c 116 */;
	void cocci_id/* drivers/iio/adc/stm32-dfsdm-core.c 116 */;
	int cocci_id/* drivers/iio/adc/stm32-dfsdm-core.c 100 */;
}
