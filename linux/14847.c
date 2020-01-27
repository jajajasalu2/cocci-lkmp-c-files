cocci_test_suite() {
	u32 cocci_id/* drivers/clk/versatile/clk-icst.c 76 */;
	struct icst_vco *cocci_id/* drivers/clk/versatile/clk-icst.c 74 */;
	struct clk_icst cocci_id/* drivers/clk/versatile/clk-icst.c 67 */;
	struct clk_icst {
		struct clk_hw hw;
		struct regmap *map;
		u32 vcoreg_off;
		u32 lockreg_off;
		struct icst_params *params;
		unsigned long rate;
		enum icst_control_type ctype;
	} cocci_id/* drivers/clk/versatile/clk-icst.c 57 */;
	struct clk_icst_desc cocci_id/* drivers/clk/versatile/clk-icst.c 496 */;
	struct device_node *cocci_id/* drivers/clk/versatile/clk-icst.c 492 */;
	void __init cocci_id/* drivers/clk/versatile/clk-icst.c 492 */;
	const struct icst_params cocci_id/* drivers/clk/versatile/clk-icst.c 431 */;
	struct regmap *cocci_id/* drivers/clk/versatile/clk-icst.c 401 */;
	struct regmap_config cocci_id/* drivers/clk/versatile/clk-icst.c 396 */;
	void __iomem *cocci_id/* drivers/clk/versatile/clk-icst.c 394 */;
	const char *cocci_id/* drivers/clk/versatile/clk-icst.c 392 */;
	const struct clk_icst_desc *cocci_id/* drivers/clk/versatile/clk-icst.c 391 */;
	struct device *cocci_id/* drivers/clk/versatile/clk-icst.c 390 */;
	struct clk *cocci_id/* drivers/clk/versatile/clk-icst.c 390 */;
	enum icst_control_type{ICST_VERSATILE, ICST_INTEGRATOR_AP_CM, ICST_INTEGRATOR_AP_SYS, ICST_INTEGRATOR_AP_PCI, ICST_INTEGRATOR_CP_CM_CORE, ICST_INTEGRATOR_CP_CM_MEM,} cocci_id/* drivers/clk/versatile/clk-icst.c 39 */;
	struct icst_params *cocci_id/* drivers/clk/versatile/clk-icst.c 357 */;
	struct clk_init_data cocci_id/* drivers/clk/versatile/clk-icst.c 356 */;
	struct clk_icst *cocci_id/* drivers/clk/versatile/clk-icst.c 355 */;
	enum icst_control_type cocci_id/* drivers/clk/versatile/clk-icst.c 352 */;
	const struct clk_ops cocci_id/* drivers/clk/versatile/clk-icst.c 341 */;
	unsigned int cocci_id/* drivers/clk/versatile/clk-icst.c 306 */;
	unsigned long *cocci_id/* drivers/clk/versatile/clk-icst.c 249 */;
	long cocci_id/* drivers/clk/versatile/clk-icst.c 248 */;
	int cocci_id/* drivers/clk/versatile/clk-icst.c 235 */;
	struct icst_vco cocci_id/* drivers/clk/versatile/clk-icst.c 234 */;
	struct clk_hw *cocci_id/* drivers/clk/versatile/clk-icst.c 230 */;
	unsigned long cocci_id/* drivers/clk/versatile/clk-icst.c 230 */;
	bool cocci_id/* drivers/clk/versatile/clk-icst.c 122 */;
}
