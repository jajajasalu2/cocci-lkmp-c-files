cocci_test_suite() {
	struct omap_reset_data cocci_id/* drivers/soc/ti/omap_prm.c 50 */;
	struct omap_reset_data {
		struct reset_controller_dev rcdev;
		struct omap_prm *prm;
		u32 mask;
		spinlock_t lock;
		struct clockdomain *clkdm;
		struct device *dev;
	} cocci_id/* drivers/soc/ti/omap_prm.c 41 */;
	struct platform_driver cocci_id/* drivers/soc/ti/omap_prm.c 384 */;
	struct omap_prm {
		const struct omap_prm_data *data;
		void __iomem *base;
	} cocci_id/* drivers/soc/ti/omap_prm.c 36 */;
	const struct of_device_id *cocci_id/* drivers/soc/ti/omap_prm.c 353 */;
	struct omap_prm *cocci_id/* drivers/soc/ti/omap_prm.c 352 */;
	const struct omap_prm_data *cocci_id/* drivers/soc/ti/omap_prm.c 351 */;
	struct resource *cocci_id/* drivers/soc/ti/omap_prm.c 350 */;
	struct platform_device *cocci_id/* drivers/soc/ti/omap_prm.c 348 */;
	int cocci_id/* drivers/soc/ti/omap_prm.c 348 */;
	char cocci_id/* drivers/soc/ti/omap_prm.c 297 */[32];
	struct ti_prm_platform_data *cocci_id/* drivers/soc/ti/omap_prm.c 296 */;
	const struct omap_rst_map *cocci_id/* drivers/soc/ti/omap_prm.c 295 */;
	const struct of_phandle_args *cocci_id/* drivers/soc/ti/omap_prm.c 281 */;
	struct reset_controller_dev *cocci_id/* drivers/soc/ti/omap_prm.c 280 */;
	const struct reset_control_ops cocci_id/* drivers/soc/ti/omap_prm.c 274 */;
	struct omap_prm_data {
		u32 base;
		const char *name;
		const char *clkdm_name;
		u16 rstctrl;
		u16 rstst;
		const struct omap_rst_map *rstmap;
		u8 flags;
	} cocci_id/* drivers/soc/ti/omap_prm.c 26 */;
	u32 cocci_id/* drivers/soc/ti/omap_prm.c 210 */;
	struct omap_rst_map {
		s8 rst;
		s8 st;
	} cocci_id/* drivers/soc/ti/omap_prm.c 21 */;
	bool cocci_id/* drivers/soc/ti/omap_prm.c 154 */;
	struct omap_reset_data *cocci_id/* drivers/soc/ti/omap_prm.c 154 */;
	unsigned long cocci_id/* drivers/soc/ti/omap_prm.c 154 */;
	const struct of_device_id cocci_id/* drivers/soc/ti/omap_prm.c 145 */[];
	const struct omap_prm_data cocci_id/* drivers/soc/ti/omap_prm.c 118 */[];
	const struct omap_rst_map cocci_id/* drivers/soc/ti/omap_prm.c 108 */[];
}
