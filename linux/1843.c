cocci_test_suite() {
	int *cocci_id/* drivers/iio/adc/rockchip_saradc.c 56 */;
	long cocci_id/* drivers/iio/adc/rockchip_saradc.c 56 */;
	const struct iio_chan_spec *cocci_id/* drivers/iio/adc/rockchip_saradc.c 55 */;
	struct rockchip_saradc {
		void __iomem *regs;
		struct clk *pclk;
		struct clk *clk;
		struct completion completion;
		struct regulator *vref;
		struct reset_control *reset;
		const struct rockchip_saradc_data *data;
		u16 last_val;
	} cocci_id/* drivers/iio/adc/rockchip_saradc.c 43 */;
	struct platform_driver cocci_id/* drivers/iio/adc/rockchip_saradc.c 384 */;
	struct rockchip_saradc_data {
		int num_bits;
		const struct iio_chan_spec *channels;
		int num_channels;
		unsigned long clk_rate;
	} cocci_id/* drivers/iio/adc/rockchip_saradc.c 36 */;
	struct device *cocci_id/* drivers/iio/adc/rockchip_saradc.c 359 */;
	const struct of_device_id *cocci_id/* drivers/iio/adc/rockchip_saradc.c 202 */;
	struct resource *cocci_id/* drivers/iio/adc/rockchip_saradc.c 201 */;
	struct iio_dev *cocci_id/* drivers/iio/adc/rockchip_saradc.c 200 */;
	struct device_node *cocci_id/* drivers/iio/adc/rockchip_saradc.c 199 */;
	struct platform_device *cocci_id/* drivers/iio/adc/rockchip_saradc.c 196 */;
	struct reset_control *cocci_id/* drivers/iio/adc/rockchip_saradc.c 189 */;
	void cocci_id/* drivers/iio/adc/rockchip_saradc.c 189 */;
	const struct of_device_id cocci_id/* drivers/iio/adc/rockchip_saradc.c 171 */[];
	const struct rockchip_saradc_data cocci_id/* drivers/iio/adc/rockchip_saradc.c 148 */;
	const struct iio_chan_spec cocci_id/* drivers/iio/adc/rockchip_saradc.c 143 */[];
	const struct iio_info cocci_id/* drivers/iio/adc/rockchip_saradc.c 117 */;
	struct rockchip_saradc *cocci_id/* drivers/iio/adc/rockchip_saradc.c 103 */;
	irqreturn_t cocci_id/* drivers/iio/adc/rockchip_saradc.c 101 */;
	void *cocci_id/* drivers/iio/adc/rockchip_saradc.c 101 */;
	int cocci_id/* drivers/iio/adc/rockchip_saradc.c 101 */;
}
