cocci_test_suite() {
	struct rzn1_pin_group {
		const char *name;
		const char *func;
		unsigned int npins;
		unsigned int *pins;
		u8 *pin_ids;
	} cocci_id/* drivers/pinctrl/pinctrl-rzn1.c 99 */;
	int __init cocci_id/* drivers/pinctrl/pinctrl-rzn1.c 945 */;
	void cocci_id/* drivers/pinctrl/pinctrl-rzn1.c 945 */;
	struct platform_driver cocci_id/* drivers/pinctrl/pinctrl-rzn1.c 936 */;
	const struct of_device_id cocci_id/* drivers/pinctrl/pinctrl-rzn1.c 930 */[];
	struct resource *cocci_id/* drivers/pinctrl/pinctrl-rzn1.c 857 */;
	struct platform_device *cocci_id/* drivers/pinctrl/pinctrl-rzn1.c 854 */;
	struct rzn1_pmx_func {
		const char *name;
		const char **groups;
		unsigned int num_groups;
	} cocci_id/* drivers/pinctrl/pinctrl-rzn1.c 84 */;
	char *cocci_id/* drivers/pinctrl/pinctrl-rzn1.c 776 */;
	struct rzn1_pmx_func *cocci_id/* drivers/pinctrl/pinctrl-rzn1.c 757 */;
	struct rzn1_pinctrl_regs {
		u32 conf[170];
		u32 pad0[86];
		u32 status_protect;
		u32 l2_mdio[2];
	} cocci_id/* drivers/pinctrl/pinctrl-rzn1.c 70 */;
	const __be32 *cocci_id/* drivers/pinctrl/pinctrl-rzn1.c 688 */;
	struct pinctrl_desc cocci_id/* drivers/pinctrl/pinctrl-rzn1.c 677 */;
	const struct pinconf_ops cocci_id/* drivers/pinctrl/pinctrl-rzn1.c 668 */;
	unsigned long cocci_id/* drivers/pinctrl/pinctrl-rzn1.c 625 */;
	struct rzn1_pin_group *cocci_id/* drivers/pinctrl/pinctrl-rzn1.c 624 */;
	const u32 cocci_id/* drivers/pinctrl/pinctrl-rzn1.c 490 */[4];
	enum pin_config_param cocci_id/* drivers/pinctrl/pinctrl-rzn1.c 489 */;
	const struct pinmux_ops cocci_id/* drivers/pinctrl/pinctrl-rzn1.c 478 */;
	unsigned int *constcocci_id/* drivers/pinctrl/pinctrl-rzn1.c 450 */;
	const char *const**cocci_id/* drivers/pinctrl/pinctrl-rzn1.c 449 */;
	const struct pinctrl_ops cocci_id/* drivers/pinctrl/pinctrl-rzn1.c 424 */;
	unsigned int *cocci_id/* drivers/pinctrl/pinctrl-rzn1.c 401 */;
	struct pinctrl_map **cocci_id/* drivers/pinctrl/pinctrl-rzn1.c 400 */;
	struct device_node *cocci_id/* drivers/pinctrl/pinctrl-rzn1.c 399 */;
	struct pinctrl_dev *cocci_id/* drivers/pinctrl/pinctrl-rzn1.c 398 */;
	int cocci_id/* drivers/pinctrl/pinctrl-rzn1.c 398 */;
	unsigned int cocci_id/* drivers/pinctrl/pinctrl-rzn1.c 341 */;
	unsigned long *cocci_id/* drivers/pinctrl/pinctrl-rzn1.c 340 */;
	const struct rzn1_pin_group *cocci_id/* drivers/pinctrl/pinctrl-rzn1.c 339 */;
	struct rzn1_pinctrl *cocci_id/* drivers/pinctrl/pinctrl-rzn1.c 338 */;
	const unsigned int **cocci_id/* drivers/pinctrl/pinctrl-rzn1.c 311 */;
	const char *cocci_id/* drivers/pinctrl/pinctrl-rzn1.c 302 */;
	const struct rzn1_pinctrl *cocci_id/* drivers/pinctrl/pinctrl-rzn1.c 283 */;
	u32 cocci_id/* drivers/pinctrl/pinctrl-rzn1.c 183 */;
	u8 cocci_id/* drivers/pinctrl/pinctrl-rzn1.c 175 */;
	enum{LOCK_LEVEL1=0x1, LOCK_LEVEL2=0x2, LOCK_ALL=LOCK_LEVEL1 | LOCK_LEVEL2,} cocci_id/* drivers/pinctrl/pinctrl-rzn1.c 169 */;
	const struct pinctrl_pin_desc cocci_id/* drivers/pinctrl/pinctrl-rzn1.c 128 */[];
	struct rzn1_pinctrl {
		struct device *dev;
		struct clk *clk;
		struct pinctrl_dev *pctl;
		struct rzn1_pinctrl_regs __iomem *lev1;
		struct rzn1_pinctrl_regs __iomem *lev2;
		u32 lev1_protect_phys;
		u32 lev2_protect_phys;
		int mdio_func[2];
		struct rzn1_pin_group *groups;
		unsigned int ngroups;
		struct rzn1_pmx_func *functions;
		unsigned int nfunctions;
	} cocci_id/* drivers/pinctrl/pinctrl-rzn1.c 107 */;
}
