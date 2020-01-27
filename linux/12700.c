cocci_test_suite() {
	u32 cocci_id/* drivers/bus/imx-weim.c 91 */;
	u32 cocci_id/* drivers/bus/imx-weim.c 85 */[4];
	struct regmap *cocci_id/* drivers/bus/imx-weim.c 84 */;
	const __be32 *cocci_id/* drivers/bus/imx-weim.c 83 */;
	struct property *cocci_id/* drivers/bus/imx-weim.c 82 */;
	struct device_node *cocci_id/* drivers/bus/imx-weim.c 81 */;
	struct platform_device *cocci_id/* drivers/bus/imx-weim.c 79 */;
	int cocci_id/* drivers/bus/imx-weim.c 79 */;
	const struct of_device_id cocci_id/* drivers/bus/imx-weim.c 65 */[];
	struct cs_timing_state {
		struct cs_timing cs[MAX_CS_COUNT];
	} cocci_id/* drivers/bus/imx-weim.c 61 */;
	struct cs_timing {
		bool is_applied;
		u32 regs[MAX_CS_REGS_COUNT];
	} cocci_id/* drivers/bus/imx-weim.c 56 */;
	struct platform_driver cocci_id/* drivers/bus/imx-weim.c 267 */;
	const struct imx_weim_devtype cocci_id/* drivers/bus/imx-weim.c 26 */;
	struct clk *cocci_id/* drivers/bus/imx-weim.c 238 */;
	struct resource *cocci_id/* drivers/bus/imx-weim.c 237 */;
	struct cs_timing_state cocci_id/* drivers/bus/imx-weim.c 197 */;
	const struct imx_weim_devtype *cocci_id/* drivers/bus/imx-weim.c 194 */;
	const struct of_device_id *cocci_id/* drivers/bus/imx-weim.c 192 */;
	void __iomem *cocci_id/* drivers/bus/imx-weim.c 190 */;
	struct imx_weim_devtype {
		unsigned int cs_count;
		unsigned int cs_regs_count;
		unsigned int cs_stride;
		unsigned int wcr_offset;
		unsigned int wcr_bcm;
	} cocci_id/* drivers/bus/imx-weim.c 18 */;
	struct cs_timing *cocci_id/* drivers/bus/imx-weim.c 137 */;
	struct cs_timing_state *cocci_id/* drivers/bus/imx-weim.c 132 */;
	struct device *cocci_id/* drivers/bus/imx-weim.c 129 */;
}
