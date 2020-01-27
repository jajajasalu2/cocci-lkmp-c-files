cocci_test_suite() {
	unsigned int cocci_id/* drivers/reset/reset-imx7.c 95 */;
	const unsigned int cocci_id/* drivers/reset/reset-imx7.c 94 */;
	bool cocci_id/* drivers/reset/reset-imx7.c 91 */;
	struct imx7_src cocci_id/* drivers/reset/reset-imx7.c 87 */;
	const struct imx7_src_signal cocci_id/* drivers/reset/reset-imx7.c 56 */[IMX7_RESET_NUM];
	const struct imx7_src_signal *cocci_id/* drivers/reset/reset-imx7.c 50 */;
	enum imx7_src_registers{SRC_A7RCR0=0x0004, SRC_M4RCR=0x000c, SRC_ERCR=0x0014, SRC_HSICPHY_RCR=0x001c, SRC_USBOPHY1_RCR=0x0020, SRC_USBOPHY2_RCR=0x0024, SRC_MIPIPHY_RCR=0x0028, SRC_PCIEPHY_RCR=0x002c, SRC_DDRC_RCR=0x1000,} cocci_id/* drivers/reset/reset-imx7.c 35 */;
	struct imx7_src {
		struct reset_controller_dev rcdev;
		struct regmap *regmap;
		const struct imx7_src_signal *signals;
	} cocci_id/* drivers/reset/reset-imx7.c 29 */;
	struct platform_driver cocci_id/* drivers/reset/reset-imx7.c 289 */;
	const struct of_device_id cocci_id/* drivers/reset/reset-imx7.c 283 */[];
	const struct imx7_src_variant *cocci_id/* drivers/reset/reset-imx7.c 261 */;
	struct regmap_config cocci_id/* drivers/reset/reset-imx7.c 260 */;
	struct device *cocci_id/* drivers/reset/reset-imx7.c 259 */;
	struct imx7_src *cocci_id/* drivers/reset/reset-imx7.c 258 */;
	struct platform_device *cocci_id/* drivers/reset/reset-imx7.c 256 */;
	struct imx7_src_variant {
		const struct imx7_src_signal *signals;
		unsigned int signals_num;
		struct reset_control_ops ops;
	} cocci_id/* drivers/reset/reset-imx7.c 23 */;
	struct imx7_src_signal {
		unsigned int offset,bit;
	} cocci_id/* drivers/reset/reset-imx7.c 19 */;
	const struct imx7_src_signal cocci_id/* drivers/reset/reset-imx7.c 148 */[IMX8MQ_RESET_NUM];
	enum imx8mq_src_registers{SRC_A53RCR0=0x0004, SRC_HDMI_RCR=0x0030, SRC_DISP_RCR=0x0034, SRC_GPU_RCR=0x0040, SRC_VPU_RCR=0x0044, SRC_PCIE2_RCR=0x0048, SRC_MIPIPHY1_RCR=0x004c, SRC_MIPIPHY2_RCR=0x0050, SRC_DDRC2_RCR=0x1004,} cocci_id/* drivers/reset/reset-imx7.c 136 */;
	const struct imx7_src_variant cocci_id/* drivers/reset/reset-imx7.c 127 */;
	unsigned long cocci_id/* drivers/reset/reset-imx7.c 116 */;
	struct reset_controller_dev *cocci_id/* drivers/reset/reset-imx7.c 115 */;
	int cocci_id/* drivers/reset/reset-imx7.c 115 */;
}
