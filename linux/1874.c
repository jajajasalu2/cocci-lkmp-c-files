cocci_test_suite() {
	struct imx7d_adc_feature {
		enum imx7d_adc_clk_pre_div clk_pre_div;
		enum imx7d_adc_average_num avg_num;
		u32 core_time_unit;
	} cocci_id/* drivers/iio/adc/imx7d_adc.c 99 */;
	enum imx7d_adc_average_num{IMX7D_ADC_AVERAGE_NUM_4, IMX7D_ADC_AVERAGE_NUM_8, IMX7D_ADC_AVERAGE_NUM_16, IMX7D_ADC_AVERAGE_NUM_32,} cocci_id/* drivers/iio/adc/imx7d_adc.c 92 */;
	enum imx7d_adc_clk_pre_div{IMX7D_ADC_ANALOG_CLK_PRE_DIV_4, IMX7D_ADC_ANALOG_CLK_PRE_DIV_8, IMX7D_ADC_ANALOG_CLK_PRE_DIV_16, IMX7D_ADC_ANALOG_CLK_PRE_DIV_32, IMX7D_ADC_ANALOG_CLK_PRE_DIV_64, IMX7D_ADC_ANALOG_CLK_PRE_DIV_128,} cocci_id/* drivers/iio/adc/imx7d_adc.c 83 */;
	struct platform_driver cocci_id/* drivers/iio/adc/imx7d_adc.c 552 */;
	struct platform_device *cocci_id/* drivers/iio/adc/imx7d_adc.c 473 */;
	void *cocci_id/* drivers/iio/adc/imx7d_adc.c 468 */;
	void cocci_id/* drivers/iio/adc/imx7d_adc.c 468 */;
	struct iio_dev *cocci_id/* drivers/iio/adc/imx7d_adc.c 457 */;
	struct device *cocci_id/* drivers/iio/adc/imx7d_adc.c 455 */;
	int cocci_id/* drivers/iio/adc/imx7d_adc.c 455 */;
	const struct of_device_id cocci_id/* drivers/iio/adc/imx7d_adc.c 411 */[];
	const struct iio_info cocci_id/* drivers/iio/adc/imx7d_adc.c 406 */;
	unsigned *cocci_id/* drivers/iio/adc/imx7d_adc.c 394 */;
	unsigned cocci_id/* drivers/iio/adc/imx7d_adc.c 393 */;
	irqreturn_t cocci_id/* drivers/iio/adc/imx7d_adc.c 357 */;
	long cocci_id/* drivers/iio/adc/imx7d_adc.c 286 */;
	int *cocci_id/* drivers/iio/adc/imx7d_adc.c 284 */;
	const struct iio_chan_spec *cocci_id/* drivers/iio/adc/imx7d_adc.c 283 */;
	u32 cocci_id/* drivers/iio/adc/imx7d_adc.c 233 */;
	struct imx7d_adc *cocci_id/* drivers/iio/adc/imx7d_adc.c 231 */;
	struct imx7d_adc_analogue_core_clk cocci_id/* drivers/iio/adc/imx7d_adc.c 186 */;
	struct imx7d_adc_feature *cocci_id/* drivers/iio/adc/imx7d_adc.c 185 */;
	const u32 cocci_id/* drivers/iio/adc/imx7d_adc.c 169 */[];
	const struct iio_chan_spec cocci_id/* drivers/iio/adc/imx7d_adc.c 150 */[];
	const struct imx7d_adc_analogue_core_clk cocci_id/* drivers/iio/adc/imx7d_adc.c 132 */[];
	struct imx7d_adc_analogue_core_clk {
		u32 pre_div;
		u32 reg_config;
	} cocci_id/* drivers/iio/adc/imx7d_adc.c 122 */;
	struct imx7d_adc {
		struct device *dev;
		void __iomem *regs;
		struct clk *clk;
		u32 vref_uv;
		u32 value;
		u32 channel;
		u32 pre_div_num;
		struct regulator *vref;
		struct imx7d_adc_feature adc_feature;
		struct completion completion;
	} cocci_id/* drivers/iio/adc/imx7d_adc.c 106 */;
}
