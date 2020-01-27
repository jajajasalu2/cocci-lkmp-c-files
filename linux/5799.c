cocci_test_suite() {
	enum rockchip_pin_drv_type{DRV_TYPE_IO_DEFAULT=0, DRV_TYPE_IO_1V8_OR_3V0, DRV_TYPE_IO_1V8_ONLY, DRV_TYPE_IO_1V8_3V0_AUTO, DRV_TYPE_IO_3V3_ONLY, DRV_TYPE_MAX,} cocci_id/* drivers/pinctrl/pinctrl-rockchip.c 90 */;
	struct rockchip_iomux {
		int type;
		int offset;
	} cocci_id/* drivers/pinctrl/pinctrl-rockchip.c 82 */;
	struct rockchip_mux_route_data cocci_id/* drivers/pinctrl/pinctrl-rockchip.c 800 */[];
	struct rockchip_mux_recalced_data *cocci_id/* drivers/pinctrl/pinctrl-rockchip.c 782 */;
	struct rockchip_mux_recalced_data cocci_id/* drivers/pinctrl/pinctrl-rockchip.c 627 */[];
	const struct pinctrl_ops cocci_id/* drivers/pinctrl/pinctrl-rockchip.c 551 */;
	struct pinctrl_map *cocci_id/* drivers/pinctrl/pinctrl-rockchip.c 547 */;
	struct pinctrl_dev *cocci_id/* drivers/pinctrl/pinctrl-rockchip.c 546 */;
	enum rockchip_pinctrl_type{PX30, RV1108, RK2928, RK3066B, RK3128, RK3188, RK3288, RK3308, RK3368, RK3399,} cocci_id/* drivers/pinctrl/pinctrl-rockchip.c 53 */;
	struct pinctrl_map **cocci_id/* drivers/pinctrl/pinctrl-rockchip.c 490 */;
	unsigned *cocci_id/* drivers/pinctrl/pinctrl-rockchip.c 490 */;
	struct device_node *cocci_id/* drivers/pinctrl/pinctrl-rockchip.c 489 */;
	const unsigned **cocci_id/* drivers/pinctrl/pinctrl-rockchip.c 474 */;
	unsigned cocci_id/* drivers/pinctrl/pinctrl-rockchip.c 441 */;
	struct rockchip_pinctrl *cocci_id/* drivers/pinctrl/pinctrl-rockchip.c 440 */;
	int __init cocci_id/* drivers/pinctrl/pinctrl-rockchip.c 4250 */;
	struct platform_driver cocci_id/* drivers/pinctrl/pinctrl-rockchip.c 4241 */;
	void *cocci_id/* drivers/pinctrl/pinctrl-rockchip.c 4223 */;
	const char *cocci_id/* drivers/pinctrl/pinctrl-rockchip.c 412 */;
	const struct rockchip_pinctrl *cocci_id/* drivers/pinctrl/pinctrl-rockchip.c 411 */;
	const struct rockchip_pin_group *cocci_id/* drivers/pinctrl/pinctrl-rockchip.c 410 */;
	struct regmap_config cocci_id/* drivers/pinctrl/pinctrl-rockchip.c 404 */;
	struct rockchip_pinctrl {
		struct regmap *regmap_base;
		int reg_size;
		struct regmap *regmap_pull;
		struct regmap *regmap_pmu;
		struct device *dev;
		struct rockchip_pin_ctrl *ctrl;
		struct pinctrl_desc pctl;
		struct pinctrl_dev *pctl_dev;
		struct rockchip_pin_group *groups;
		unsigned int ngroups;
		struct rockchip_pmx_func *functions;
		unsigned int nfunctions;
	} cocci_id/* drivers/pinctrl/pinctrl-rockchip.c 389 */;
	struct rockchip_pin_ctrl cocci_id/* drivers/pinctrl/pinctrl-rockchip.c 3848 */;
	struct rockchip_pmx_func {
		const char *name;
		const char **groups;
		u8 ngroups;
	} cocci_id/* drivers/pinctrl/pinctrl-rockchip.c 383 */;
	struct rockchip_pin_bank cocci_id/* drivers/pinctrl/pinctrl-rockchip.c 3825 */[];
	struct resource *cocci_id/* drivers/pinctrl/pinctrl-rockchip.c 3745 */;
	int __maybe_unused cocci_id/* drivers/pinctrl/pinctrl-rockchip.c 3723 */;
	struct rockchip_pin_group {
		const char *name;
		unsigned int npins;
		unsigned int *pins;
		struct rockchip_pin_config *data;
	} cocci_id/* drivers/pinctrl/pinctrl-rockchip.c 370 */;
	struct rockchip_drv *cocci_id/* drivers/pinctrl/pinctrl-rockchip.c 3609 */;
	struct rockchip_iomux *cocci_id/* drivers/pinctrl/pinctrl-rockchip.c 3608 */;
	const struct of_device_id *cocci_id/* drivers/pinctrl/pinctrl-rockchip.c 3566 */;
	struct rockchip_pin_config {
		unsigned int func;
		unsigned long *configs;
		unsigned int nconfigs;
	} cocci_id/* drivers/pinctrl/pinctrl-rockchip.c 355 */;
	void __iomem *cocci_id/* drivers/pinctrl/pinctrl-rockchip.c 3509 */;
	struct resource cocci_id/* drivers/pinctrl/pinctrl-rockchip.c 3508 */;
	struct platform_device *cocci_id/* drivers/pinctrl/pinctrl-rockchip.c 3443 */;
	struct irq_chip_generic *cocci_id/* drivers/pinctrl/pinctrl-rockchip.c 3368 */;
	struct irq_data *cocci_id/* drivers/pinctrl/pinctrl-rockchip.c 3353 */;
	struct rockchip_pin_ctrl {
		struct rockchip_pin_bank *pin_banks;
		u32 nr_banks;
		u32 nr_pins;
		char *label;
		enum rockchip_pinctrl_type type;
		int grf_mux_offset;
		int pmu_mux_offset;
		int grf_drv_offset;
		int pmu_drv_offset;
		struct rockchip_mux_recalced_data *iomux_recalced;
		u32 niomux_recalced;
		struct rockchip_mux_route_data *iomux_routes;
		u32 niomux_routes;
		void (*pull_calc_reg)(struct rockchip_pin_bank *bank,
				      int pin_num, struct regmap **regmap,
				      int *reg, u8 *bit);
		void (*drv_calc_reg)(struct rockchip_pin_bank *bank,
				     int pin_num, struct regmap **regmap,
				     int *reg, u8 *bit);
		int (*schmitt_calc_reg)(struct rockchip_pin_bank *bank,
					int pin_num, struct regmap **regmap,
					int *reg, u8 *bit);
	} cocci_id/* drivers/pinctrl/pinctrl-rockchip.c 329 */;
	struct rockchip_mux_route_data {
		u8 bank_num;
		u8 pin;
		u8 func;
		enum rockchip_mux_route_location route_location;
		u32 route_offset;
		u32 route_val;
	} cocci_id/* drivers/pinctrl/pinctrl-rockchip.c 318 */;
	struct irq_chip *cocci_id/* drivers/pinctrl/pinctrl-rockchip.c 3176 */;
	struct irq_desc *cocci_id/* drivers/pinctrl/pinctrl-rockchip.c 3174 */;
	const struct gpio_chip cocci_id/* drivers/pinctrl/pinctrl-rockchip.c 3157 */;
	enum pin_config_param cocci_id/* drivers/pinctrl/pinctrl-rockchip.c 3118 */;
	enum rockchip_mux_route_location{ROCKCHIP_ROUTE_SAME=0, ROCKCHIP_ROUTE_PMU, ROCKCHIP_ROUTE_GRF,} cocci_id/* drivers/pinctrl/pinctrl-rockchip.c 304 */;
	struct pinctrl_pin_desc *cocci_id/* drivers/pinctrl/pinctrl-rockchip.c 2970 */;
	struct pinctrl_desc *cocci_id/* drivers/pinctrl/pinctrl-rockchip.c 2969 */;
	struct rockchip_mux_recalced_data {
		u8 num;
		u8 pin;
		u32 reg;
		u8 bit;
		u8 mask;
	} cocci_id/* drivers/pinctrl/pinctrl-rockchip.c 296 */;
	struct rockchip_pin_group cocci_id/* drivers/pinctrl/pinctrl-rockchip.c 2944 */;
	struct rockchip_pmx_func cocci_id/* drivers/pinctrl/pinctrl-rockchip.c 2937 */;
	struct device *cocci_id/* drivers/pinctrl/pinctrl-rockchip.c 2924 */;
	char *cocci_id/* drivers/pinctrl/pinctrl-rockchip.c 2904 */;
	struct rockchip_pin_group *cocci_id/* drivers/pinctrl/pinctrl-rockchip.c 2888 */;
	struct rockchip_pmx_func *cocci_id/* drivers/pinctrl/pinctrl-rockchip.c 2887 */;
	struct rockchip_pin_config cocci_id/* drivers/pinctrl/pinctrl-rockchip.c 2851 */;
	const __be32 *cocci_id/* drivers/pinctrl/pinctrl-rockchip.c 2823 */;
	const struct of_device_id cocci_id/* drivers/pinctrl/pinctrl-rockchip.c 2796 */[];
	const struct pinconf_ops cocci_id/* drivers/pinctrl/pinctrl-rockchip.c 2790 */;
	u16 cocci_id/* drivers/pinctrl/pinctrl-rockchip.c 2726 */;
	unsigned long *cocci_id/* drivers/pinctrl/pinctrl-rockchip.c 2721 */;
	int cocci_id/* drivers/pinctrl/pinctrl-rockchip.c 2644 */(struct gpio_chip *gc,
								  unsigned offset);
	void cocci_id/* drivers/pinctrl/pinctrl-rockchip.c 2643 */(struct gpio_chip *gc,
								   unsigned offset,
								   int value);
	const struct pinmux_ops cocci_id/* drivers/pinctrl/pinctrl-rockchip.c 2608 */;
	struct pinctrl_gpio_range *cocci_id/* drivers/pinctrl/pinctrl-rockchip.c 2592 */;
	u32 cocci_id/* drivers/pinctrl/pinctrl-rockchip.c 2566 */;
	unsigned long cocci_id/* drivers/pinctrl/pinctrl-rockchip.c 2565 */;
	struct rockchip_pin_bank *cocci_id/* drivers/pinctrl/pinctrl-rockchip.c 2563 */;
	bool cocci_id/* drivers/pinctrl/pinctrl-rockchip.c 2561 */;
	struct gpio_chip *cocci_id/* drivers/pinctrl/pinctrl-rockchip.c 2560 */;
	int cocci_id/* drivers/pinctrl/pinctrl-rockchip.c 2560 */;
	const struct rockchip_pin_config *cocci_id/* drivers/pinctrl/pinctrl-rockchip.c 2507 */;
	const unsigned int *cocci_id/* drivers/pinctrl/pinctrl-rockchip.c 2506 */;
	unsigned *constcocci_id/* drivers/pinctrl/pinctrl-rockchip.c 2492 */;
	const char *const**cocci_id/* drivers/pinctrl/pinctrl-rockchip.c 2491 */;
	int cocci_id/* drivers/pinctrl/pinctrl-rockchip.c 2281 */[PULL_TYPE_MAX][4];
	u8 cocci_id/* drivers/pinctrl/pinctrl-rockchip.c 2118 */;
	struct regmap *cocci_id/* drivers/pinctrl/pinctrl-rockchip.c 2115 */;
	struct rockchip_pin_ctrl *cocci_id/* drivers/pinctrl/pinctrl-rockchip.c 2114 */;
	int cocci_id/* drivers/pinctrl/pinctrl-rockchip.c 2102 */[DRV_TYPE_MAX][8];
	u8 *cocci_id/* drivers/pinctrl/pinctrl-rockchip.c 1618 */;
	int *cocci_id/* drivers/pinctrl/pinctrl-rockchip.c 1618 */;
	struct regmap **cocci_id/* drivers/pinctrl/pinctrl-rockchip.c 1617 */;
	void cocci_id/* drivers/pinctrl/pinctrl-rockchip.c 1616 */;
	struct rockchip_pin_bank {
		void __iomem *reg_base;
		struct regmap *regmap_pull;
		struct clk *clk;
		int irq;
		u32 saved_masks;
		u32 pin_base;
		u8 nr_pins;
		char *name;
		u8 bank_num;
		struct rockchip_iomux iomux[4];
		struct rockchip_drv drv[4];
		enum rockchip_pin_pull_type pull_type[4];
		bool valid;
		struct device_node *of_node;
		struct rockchip_pinctrl *drvdata;
		struct irq_domain *domain;
		struct gpio_chip gpio_chip;
		struct pinctrl_gpio_range grange;
		raw_spinlock_t slock;
		u32 toggle_edge_mode;
		u32 recalced_mask;
		u32 route_mask;
	} cocci_id/* drivers/pinctrl/pinctrl-rockchip.c 143 */;
	unsigned int cocci_id/* drivers/pinctrl/pinctrl-rockchip.c 1424 */;
	struct rockchip_mux_route_data *cocci_id/* drivers/pinctrl/pinctrl-rockchip.c 1399 */;
	u32 *cocci_id/* drivers/pinctrl/pinctrl-rockchip.c 1395 */;
	struct rockchip_drv {
		enum rockchip_pin_drv_type drv_type;
		int offset;
	} cocci_id/* drivers/pinctrl/pinctrl-rockchip.c 116 */;
	enum rockchip_pin_pull_type{PULL_TYPE_IO_DEFAULT=0, PULL_TYPE_IO_1V8_ONLY, PULL_TYPE_MAX,} cocci_id/* drivers/pinctrl/pinctrl-rockchip.c 102 */;
}
