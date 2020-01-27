cocci_test_suite() {
	struct platform_driver cocci_id/* drivers/iio/adc/exynos_adc.c 988 */;
	struct exynos_adc cocci_id/* drivers/iio/adc/exynos_adc.c 776 */;
	bool cocci_id/* drivers/iio/adc/exynos_adc.c 772 */;
	struct iio_dev *cocci_id/* drivers/iio/adc/exynos_adc.c 771 */;
	struct s3c2410_ts_mach_info *cocci_id/* drivers/iio/adc/exynos_adc.c 770 */;
	struct device_node *cocci_id/* drivers/iio/adc/exynos_adc.c 769 */;
	struct input_dev *cocci_id/* drivers/iio/adc/exynos_adc.c 720 */;
	struct device *cocci_id/* drivers/iio/adc/exynos_adc.c 702 */;
	const struct iio_chan_spec cocci_id/* drivers/iio/adc/exynos_adc.c 689 */[];
	const struct iio_info cocci_id/* drivers/iio/adc/exynos_adc.c 675 */;
	unsigned *cocci_id/* drivers/iio/adc/exynos_adc.c 663 */;
	unsigned cocci_id/* drivers/iio/adc/exynos_adc.c 662 */;
	irqreturn_t cocci_id/* drivers/iio/adc/exynos_adc.c 598 */;
	void *cocci_id/* drivers/iio/adc/exynos_adc.c 598 */;
	long cocci_id/* drivers/iio/adc/exynos_adc.c 528 */;
	int *cocci_id/* drivers/iio/adc/exynos_adc.c 526 */;
	const struct iio_chan_spec *cocci_id/* drivers/iio/adc/exynos_adc.c 525 */;
	const struct of_device_id *cocci_id/* drivers/iio/adc/exynos_adc.c 518 */;
	struct platform_device *cocci_id/* drivers/iio/adc/exynos_adc.c 516 */;
	struct exynos_adc_data *cocci_id/* drivers/iio/adc/exynos_adc.c 516 */;
	const struct of_device_id cocci_id/* drivers/iio/adc/exynos_adc.c 477 */[];
	u32 cocci_id/* drivers/iio/adc/exynos_adc.c 450 */;
	const struct exynos_adc_data cocci_id/* drivers/iio/adc/exynos_adc.c 435 */;
	unsigned long cocci_id/* drivers/iio/adc/exynos_adc.c 298 */;
	int cocci_id/* drivers/iio/adc/exynos_adc.c 193 */;
	struct exynos_adc *cocci_id/* drivers/iio/adc/exynos_adc.c 186 */;
	void cocci_id/* drivers/iio/adc/exynos_adc.c 186 */;
	struct exynos_adc_data {
		int num_channels;
		bool needs_sclk;
		bool needs_adc_phy;
		int phy_offset;
		u32 mask;
		void (*init_hw)(struct exynos_adc *info);
		void (*exit_hw)(struct exynos_adc *info);
		void (*clear_irq)(struct exynos_adc *info);
		void (*start_conv)(struct exynos_adc *info,
				   unsigned long addr);
	} cocci_id/* drivers/iio/adc/exynos_adc.c 143 */;
	struct exynos_adc {
		struct exynos_adc_data *data;
		struct device *dev;
		struct input_dev *input;
		void __iomem *regs;
		struct regmap *pmu_map;
		struct clk *clk;
		struct clk *sclk;
		unsigned int irq;
		unsigned int tsirq;
		unsigned int delay;
		struct regulator *vdd;
		struct completion completion;
		u32 value;
		unsigned int version;
		bool read_ts;
		u32 ts_x;
		u32 ts_y;
	} cocci_id/* drivers/iio/adc/exynos_adc.c 120 */;
}