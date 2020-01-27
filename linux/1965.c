cocci_test_suite() {
	const struct iio_chan_spec_ext_info cocci_id/* drivers/iio/dac/vf610_dac.c 97 */[];
	const struct iio_enum cocci_id/* drivers/iio/dac/vf610_dac.c 90 */;
	const char *constcocci_id/* drivers/iio/dac/vf610_dac.c 88 */[];
	const struct iio_chan_spec *cocci_id/* drivers/iio/dac/vf610_dac.c 81 */;
	unsigned int cocci_id/* drivers/iio/dac/vf610_dac.c 62 */;
	int cocci_id/* drivers/iio/dac/vf610_dac.c 53 */;
	struct vf610_dac *cocci_id/* drivers/iio/dac/vf610_dac.c 51 */;
	void cocci_id/* drivers/iio/dac/vf610_dac.c 51 */;
	struct vf610_dac {
		struct clk *clk;
		struct device *dev;
		enum vf610_conversion_mode_sel conv_mode;
		void __iomem *regs;
	} cocci_id/* drivers/iio/dac/vf610_dac.c 34 */;
	enum vf610_conversion_mode_sel{VF610_DAC_CONV_HIGH_POWER, VF610_DAC_CONV_LOW_POWER,} cocci_id/* drivers/iio/dac/vf610_dac.c 29 */;
	struct platform_driver cocci_id/* drivers/iio/dac/vf610_dac.c 273 */;
	struct device *cocci_id/* drivers/iio/dac/vf610_dac.c 255 */;
	struct vf610_dac cocci_id/* drivers/iio/dac/vf610_dac.c 178 */;
	struct iio_dev *cocci_id/* drivers/iio/dac/vf610_dac.c 173 */;
	struct platform_device *cocci_id/* drivers/iio/dac/vf610_dac.c 171 */;
	const struct of_device_id cocci_id/* drivers/iio/dac/vf610_dac.c 165 */[];
	const struct iio_info cocci_id/* drivers/iio/dac/vf610_dac.c 160 */;
	long cocci_id/* drivers/iio/dac/vf610_dac.c 118 */;
	int *cocci_id/* drivers/iio/dac/vf610_dac.c 117 */;
	const struct iio_chan_spec cocci_id/* drivers/iio/dac/vf610_dac.c 111 */[];
}
