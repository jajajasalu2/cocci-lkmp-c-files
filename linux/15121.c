cocci_test_suite() {
	struct clk_init_data cocci_id/* drivers/clk/davinci/da8xx-cfgchip.c 94 */;
	const char *cocci_id/* drivers/clk/davinci/da8xx-cfgchip.c 92 */;
	struct clk *cocci_id/* drivers/clk/davinci/da8xx-cfgchip.c 91 */;
	const struct da8xx_cfgchip_gate_clk_info *cocci_id/* drivers/clk/davinci/da8xx-cfgchip.c 88 */;
	struct da8xx_cfgchip_gate_clk *__init cocci_id/* drivers/clk/davinci/da8xx-cfgchip.c 86 */;
	const struct clk_ops cocci_id/* drivers/clk/davinci/da8xx-cfgchip.c 79 */;
	void cocci_id/* drivers/clk/davinci/da8xx-cfgchip.c 782 */;
	struct platform_driver cocci_id/* drivers/clk/davinci/da8xx-cfgchip.c 773 */;
	void *cocci_id/* drivers/clk/davinci/da8xx-cfgchip.c 756 */;
	struct device_node *cocci_id/* drivers/clk/davinci/da8xx-cfgchip.c 749 */;
	da8xx_cfgchip_init cocci_id/* drivers/clk/davinci/da8xx-cfgchip.c 744 */;
	const struct of_device_id *cocci_id/* drivers/clk/davinci/da8xx-cfgchip.c 743 */;
	struct da8xx_cfgchip_clk_platform_data *cocci_id/* drivers/clk/davinci/da8xx-cfgchip.c 742 */;
	struct platform_device *cocci_id/* drivers/clk/davinci/da8xx-cfgchip.c 739 */;
	int (*cocci_id/* drivers/clk/davinci/da8xx-cfgchip.c 737 */)(struct device *dev,
								     struct regmap *regmap);
	kernel_ulong_t cocci_id/* drivers/clk/davinci/da8xx-cfgchip.c 716 */;
	const struct platform_device_id cocci_id/* drivers/clk/davinci/da8xx-cfgchip.c 713 */[];
	const struct of_device_id cocci_id/* drivers/clk/davinci/da8xx-cfgchip.c 689 */[];
	unsigned long cocci_id/* drivers/clk/davinci/da8xx-cfgchip.c 66 */;
	struct clk_hw_onecell_data *cocci_id/* drivers/clk/davinci/da8xx-cfgchip.c 647 */;
	unsigned int cocci_id/* drivers/clk/davinci/da8xx-cfgchip.c 59 */;
	struct da8xx_usb1_clk48 *cocci_id/* drivers/clk/davinci/da8xx-cfgchip.c 576 */;
	struct da8xx_usb1_clk48 cocci_id/* drivers/clk/davinci/da8xx-cfgchip.c 546 */;
	struct da8xx_usb1_clk48 {
		struct clk_hw hw;
		struct regmap *regmap;
	} cocci_id/* drivers/clk/davinci/da8xx-cfgchip.c 540 */;
	struct da8xx_cfgchip_gate_clk *cocci_id/* drivers/clk/davinci/da8xx-cfgchip.c 51 */;
	struct da8xx_usb0_clk48 *cocci_id/* drivers/clk/davinci/da8xx-cfgchip.c 501 */;
	unsigned long *cocci_id/* drivers/clk/davinci/da8xx-cfgchip.c 465 */;
	long cocci_id/* drivers/clk/davinci/da8xx-cfgchip.c 464 */;
	int cocci_id/* drivers/clk/davinci/da8xx-cfgchip.c 42 */;
	struct da8xx_cfgchip_gate_clk cocci_id/* drivers/clk/davinci/da8xx-cfgchip.c 40 */;
	struct da8xx_usb0_clk48 cocci_id/* drivers/clk/davinci/da8xx-cfgchip.c 353 */;
	struct da8xx_usb0_clk48 {
		struct clk_hw hw;
		struct clk *fck;
		struct regmap *regmap;
	} cocci_id/* drivers/clk/davinci/da8xx-cfgchip.c 346 */;
	struct da8xx_cfgchip_gate_clk {
		struct clk_hw hw;
		struct regmap *regmap;
		u32 reg;
		u32 mask;
	} cocci_id/* drivers/clk/davinci/da8xx-cfgchip.c 32 */;
	struct clk_hw *cocci_id/* drivers/clk/davinci/da8xx-cfgchip.c 302 */;
	struct da8xx_cfgchip_mux_clk *cocci_id/* drivers/clk/davinci/da8xx-cfgchip.c 301 */;
	struct regmap *cocci_id/* drivers/clk/davinci/da8xx-cfgchip.c 299 */;
	struct device *cocci_id/* drivers/clk/davinci/da8xx-cfgchip.c 298 */;
	int __init cocci_id/* drivers/clk/davinci/da8xx-cfgchip.c 298 */;
	const struct da8xx_cfgchip_mux_clk_info cocci_id/* drivers/clk/davinci/da8xx-cfgchip.c 268 */;
	struct da8xx_cfgchip_gate_clk_info {
		const char *name;
		u32 cfgchip;
		u32 bit;
		u32 flags;
	} cocci_id/* drivers/clk/davinci/da8xx-cfgchip.c 25 */;
	const char *const cocci_id/* drivers/clk/davinci/da8xx-cfgchip.c 241 */[];
	const struct da8xx_cfgchip_mux_clk_info *cocci_id/* drivers/clk/davinci/da8xx-cfgchip.c 238 */;
	struct da8xx_cfgchip_mux_clk *__init cocci_id/* drivers/clk/davinci/da8xx-cfgchip.c 236 */;
	u8 cocci_id/* drivers/clk/davinci/da8xx-cfgchip.c 221 */;
	struct da8xx_cfgchip_mux_clk cocci_id/* drivers/clk/davinci/da8xx-cfgchip.c 211 */;
	struct da8xx_cfgchip_mux_clk {
		struct clk_hw hw;
		struct regmap *regmap;
		u32 reg;
		u32 mask;
	} cocci_id/* drivers/clk/davinci/da8xx-cfgchip.c 203 */;
	struct da8xx_cfgchip_mux_clk_info {
		const char *name;
		const char *parent0;
		const char *parent1;
		u32 cfgchip;
		u32 bit;
	} cocci_id/* drivers/clk/davinci/da8xx-cfgchip.c 195 */;
	int __init cocci_id/* drivers/clk/davinci/da8xx-cfgchip.c 167 */;
	const struct da8xx_cfgchip_gate_clk_info cocci_id/* drivers/clk/davinci/da8xx-cfgchip.c 150 */;
}
