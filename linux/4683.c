cocci_test_suite() {
	long cocci_id/* drivers/misc/vexpress-syscfg.c 55 */;
	u32 cocci_id/* drivers/misc/vexpress-syscfg.c 53 */;
	struct vexpress_syscfg *cocci_id/* drivers/misc/vexpress-syscfg.c 52 */;
	bool cocci_id/* drivers/misc/vexpress-syscfg.c 50 */;
	u32 *cocci_id/* drivers/misc/vexpress-syscfg.c 50 */;
	struct vexpress_syscfg_func *cocci_id/* drivers/misc/vexpress-syscfg.c 49 */;
	int cocci_id/* drivers/misc/vexpress-syscfg.c 49 */;
	struct vexpress_syscfg_func {
		struct list_head list;
		struct vexpress_syscfg *syscfg;
		struct regmap *regmap;
		int num_templates;
		u32 template[0];
	} cocci_id/* drivers/misc/vexpress-syscfg.c 40 */;
	struct vexpress_syscfg {
		struct device *dev;
		void __iomem *base;
		struct list_head funcs;
	} cocci_id/* drivers/misc/vexpress-syscfg.c 34 */;
	int __init cocci_id/* drivers/misc/vexpress-syscfg.c 276 */;
	void cocci_id/* drivers/misc/vexpress-syscfg.c 276 */;
	struct platform_driver cocci_id/* drivers/misc/vexpress-syscfg.c 270 */;
	const struct platform_device_id cocci_id/* drivers/misc/vexpress-syscfg.c 265 */[];
	struct device *cocci_id/* drivers/misc/vexpress-syscfg.c 245 */;
	struct resource *cocci_id/* drivers/misc/vexpress-syscfg.c 244 */;
	struct platform_device *cocci_id/* drivers/misc/vexpress-syscfg.c 241 */;
	struct vexpress_config_bridge_ops cocci_id/* drivers/misc/vexpress-syscfg.c 235 */;
	struct regmap *cocci_id/* drivers/misc/vexpress-syscfg.c 219 */;
	__be32 cocci_id/* drivers/misc/vexpress-syscfg.c 146 */[4];
	const __be32 *cocci_id/* drivers/misc/vexpress-syscfg.c 145 */;
	struct property *cocci_id/* drivers/misc/vexpress-syscfg.c 144 */;
	struct regmap_config cocci_id/* drivers/misc/vexpress-syscfg.c 126 */;
	unsigned int *cocci_id/* drivers/misc/vexpress-syscfg.c 111 */;
	void *cocci_id/* drivers/misc/vexpress-syscfg.c 110 */;
	unsigned int cocci_id/* drivers/misc/vexpress-syscfg.c 110 */;
}
