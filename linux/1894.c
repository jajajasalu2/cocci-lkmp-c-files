cocci_test_suite() {
	void cocci_id/* drivers/iio/adc/spear_adc.c 95 */;
	struct spear_adc_state {
		struct device_node *np;
		struct adc_regs_spear3xx __iomem *adc_base_spear3xx;
		struct adc_regs_spear6xx __iomem *adc_base_spear6xx;
		struct clk *clk;
		struct completion completion;
		u32 current_clk;
		u32 sampling_freq;
		u32 avg_samples;
		u32 vref_external;
		u32 value;
	} cocci_id/* drivers/iio/adc/spear_adc.c 72 */;
	struct adc_regs_spear6xx {
		u32 status;
		u32 pad[2];
		u32 clk;
		u32 ch_ctrl[SPEAR_ADC_CHANNEL_NUM];
		struct chan_data ch_data[SPEAR_ADC_CHANNEL_NUM];
		u32 scan_rate_lo;
		u32 scan_rate_hi;
		struct chan_data average;
	} cocci_id/* drivers/iio/adc/spear_adc.c 61 */;
	struct chan_data {
		u32 lsb;
		u32 msb;
	} cocci_id/* drivers/iio/adc/spear_adc.c 56 */;
	struct adc_regs_spear3xx {
		u32 status;
		u32 average;
		u32 scan_rate;
		u32 clk;
		u32 ch_ctrl[SPEAR_ADC_CHANNEL_NUM];
		u32 ch_data[SPEAR_ADC_CHANNEL_NUM];
	} cocci_id/* drivers/iio/adc/spear_adc.c 47 */;
	struct platform_driver cocci_id/* drivers/iio/adc/spear_adc.c 377 */;
	const struct of_device_id cocci_id/* drivers/iio/adc/spear_adc.c 370 */[];
	struct adc_regs_spear3xx __iomem *cocci_id/* drivers/iio/adc/spear_adc.c 286 */;
	struct spear_adc_state cocci_id/* drivers/iio/adc/spear_adc.c 267 */;
	struct iio_dev *cocci_id/* drivers/iio/adc/spear_adc.c 263 */;
	struct device *cocci_id/* drivers/iio/adc/spear_adc.c 261 */;
	struct device_node *cocci_id/* drivers/iio/adc/spear_adc.c 260 */;
	struct platform_device *cocci_id/* drivers/iio/adc/spear_adc.c 258 */;
	const struct iio_info cocci_id/* drivers/iio/adc/spear_adc.c 253 */;
	struct spear_adc_state *cocci_id/* drivers/iio/adc/spear_adc.c 237 */;
	int cocci_id/* drivers/iio/adc/spear_adc.c 237 */;
	irqreturn_t cocci_id/* drivers/iio/adc/spear_adc.c 226 */;
	void *cocci_id/* drivers/iio/adc/spear_adc.c 226 */;
	const struct iio_chan_spec cocci_id/* drivers/iio/adc/spear_adc.c 215 */[];
	long cocci_id/* drivers/iio/adc/spear_adc.c 142 */;
	int *cocci_id/* drivers/iio/adc/spear_adc.c 140 */;
	const struct iio_chan_spec *cocci_id/* drivers/iio/adc/spear_adc.c 139 */;
	u32 cocci_id/* drivers/iio/adc/spear_adc.c 115 */;
}
