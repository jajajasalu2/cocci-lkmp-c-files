cocci_test_suite() {
	u32 cocci_id/* drivers/input/touchscreen/fsl-imx25-tcq.c 95 */;
	unsigned int cocci_id/* drivers/input/touchscreen/fsl-imx25-tcq.c 93 */;
	void cocci_id/* drivers/input/touchscreen/fsl-imx25-tcq.c 92 */;
	enum mx25_adc_configurations{MX25_CFG_PRECHARGE=0, MX25_CFG_TOUCH_DETECT, MX25_CFG_X_MEASUREMENT, MX25_CFG_Y_MEASUREMENT,} cocci_id/* drivers/input/touchscreen/fsl-imx25-tcq.c 66 */;
	struct platform_driver cocci_id/* drivers/input/touchscreen/fsl-imx25-tcq.c 577 */;
	void __iomem *cocci_id/* drivers/input/touchscreen/fsl-imx25-tcq.c 506 */;
	struct mx25_tsadc *cocci_id/* drivers/input/touchscreen/fsl-imx25-tcq.c 505 */;
	struct input_dev *cocci_id/* drivers/input/touchscreen/fsl-imx25-tcq.c 490 */;
	const struct of_device_id cocci_id/* drivers/input/touchscreen/fsl-imx25-tcq.c 49 */[];
	struct device *cocci_id/* drivers/input/touchscreen/fsl-imx25-tcq.c 468 */;
	struct device_node *cocci_id/* drivers/input/touchscreen/fsl-imx25-tcq.c 435 */;
	struct platform_device *cocci_id/* drivers/input/touchscreen/fsl-imx25-tcq.c 432 */;
	struct regmap_config cocci_id/* drivers/input/touchscreen/fsl-imx25-tcq.c 41 */;
	irqreturn_t cocci_id/* drivers/input/touchscreen/fsl-imx25-tcq.c 336 */;
	void *cocci_id/* drivers/input/touchscreen/fsl-imx25-tcq.c 336 */;
	u32 cocci_id/* drivers/input/touchscreen/fsl-imx25-tcq.c 311 */[TSC_MAX_SAMPLES];
	struct mx25_tcq_priv {
		struct regmap *regs;
		struct regmap *core_regs;
		struct input_dev *idev;
		enum mx25_tcq_mode mode;
		unsigned int pen_threshold;
		unsigned int sample_count;
		unsigned int expected_samples;
		unsigned int pen_debounce;
		unsigned int settling_time;
		struct clk *clk;
		int irq;
		struct device *dev;
	} cocci_id/* drivers/input/touchscreen/fsl-imx25-tcq.c 26 */;
	u32 *cocci_id/* drivers/input/touchscreen/fsl-imx25-tcq.c 237 */;
	enum mx25_tcq_mode{MX25_TS_4WIRE,} cocci_id/* drivers/input/touchscreen/fsl-imx25-tcq.c 22 */;
	const char cocci_id/* drivers/input/touchscreen/fsl-imx25-tcq.c 20 */[];
	int *cocci_id/* drivers/input/touchscreen/fsl-imx25-tcq.c 142 */;
	unsigned cocci_id/* drivers/input/touchscreen/fsl-imx25-tcq.c 142 */;
	struct mx25_tcq_priv *cocci_id/* drivers/input/touchscreen/fsl-imx25-tcq.c 141 */;
	int cocci_id/* drivers/input/touchscreen/fsl-imx25-tcq.c 141 */;
}
