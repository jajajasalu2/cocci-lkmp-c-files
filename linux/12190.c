cocci_test_suite() {
	const u8 *cocci_id/* drivers/gpu/drm/tegra/dpaux.c 94 */;
	u32 cocci_id/* drivers/gpu/drm/tegra/dpaux.c 799 */;
	enum drm_connector_status cocci_id/* drivers/gpu/drm/tegra/dpaux.c 732 */;
	unsigned long cocci_id/* drivers/gpu/drm/tegra/dpaux.c 725 */;
	struct tegra_dpaux *cocci_id/* drivers/gpu/drm/tegra/dpaux.c 724 */;
	struct tegra_output *cocci_id/* drivers/gpu/drm/tegra/dpaux.c 722 */;
	struct drm_dp_aux *cocci_id/* drivers/gpu/drm/tegra/dpaux.c 722 */;
	int cocci_id/* drivers/gpu/drm/tegra/dpaux.c 722 */;
	struct device_node *cocci_id/* drivers/gpu/drm/tegra/dpaux.c 705 */;
	struct platform_driver cocci_id/* drivers/gpu/drm/tegra/dpaux.c 695 */;
	struct tegra_dpaux cocci_id/* drivers/gpu/drm/tegra/dpaux.c 69 */;
	const struct of_device_id cocci_id/* drivers/gpu/drm/tegra/dpaux.c 686 */[];
	const struct tegra_dpaux_soc cocci_id/* drivers/gpu/drm/tegra/dpaux.c 668 */;
	const struct dev_pm_ops cocci_id/* drivers/gpu/drm/tegra/dpaux.c 664 */;
	struct device *cocci_id/* drivers/gpu/drm/tegra/dpaux.c 625 */;
	struct resource *cocci_id/* drivers/gpu/drm/tegra/dpaux.c 452 */;
	struct platform_device *cocci_id/* drivers/gpu/drm/tegra/dpaux.c 449 */;
	const struct pinmux_ops cocci_id/* drivers/gpu/drm/tegra/dpaux.c 441 */;
	unsigned *constcocci_id/* drivers/gpu/drm/tegra/dpaux.c 425 */;
	const char *const**cocci_id/* drivers/gpu/drm/tegra/dpaux.c 424 */;
	unsigned int cocci_id/* drivers/gpu/drm/tegra/dpaux.c 423 */;
	struct pinctrl_dev *cocci_id/* drivers/gpu/drm/tegra/dpaux.c 422 */;
	const char *cocci_id/* drivers/gpu/drm/tegra/dpaux.c 416 */;
	const struct pinctrl_ops cocci_id/* drivers/gpu/drm/tegra/dpaux.c 403 */;
	struct tegra_dpaux {
		struct drm_dp_aux aux;
		struct device *dev;
		const struct tegra_dpaux_soc *soc;
		void __iomem *regs;
		int irq;
		struct tegra_output *output;
		struct reset_control *rst;
		struct clk *clk_parent;
		struct clk *clk;
		struct regulator *vdd;
		struct completion complete;
		struct work_struct work;
		struct list_head list;
#ifdef CONFIG_GENERIC_PINCONF
		struct pinctrl_dev *pinctrl;
		struct pinctrl_desc desc;
#endif
	} cocci_id/* drivers/gpu/drm/tegra/dpaux.c 40 */;
	unsigned *cocci_id/* drivers/gpu/drm/tegra/dpaux.c 395 */;
	const unsigned **cocci_id/* drivers/gpu/drm/tegra/dpaux.c 394 */;
	unsigned cocci_id/* drivers/gpu/drm/tegra/dpaux.c 394 */;
	const char *constcocci_id/* drivers/gpu/drm/tegra/dpaux.c 376 */[];
	const unsigned cocci_id/* drivers/gpu/drm/tegra/dpaux.c 370 */[];
	const struct pinctrl_pin_desc cocci_id/* drivers/gpu/drm/tegra/dpaux.c 365 */[];
	struct tegra_dpaux_soc {
		unsigned int cmh;
		unsigned int drvz;
		unsigned int drvi;
	} cocci_id/* drivers/gpu/drm/tegra/dpaux.c 34 */;
	enum tegra_dpaux_functions{DPAUX_PADCTL_FUNC_AUX, DPAUX_PADCTL_FUNC_I2C, DPAUX_PADCTL_FUNC_OFF,} cocci_id/* drivers/gpu/drm/tegra/dpaux.c 304 */;
	irqreturn_t cocci_id/* drivers/gpu/drm/tegra/dpaux.c 281 */;
	void *cocci_id/* drivers/gpu/drm/tegra/dpaux.c 281 */;
	struct work_struct *cocci_id/* drivers/gpu/drm/tegra/dpaux.c 273 */;
	void cocci_id/* drivers/gpu/drm/tegra/dpaux.c 273 */;
	u8 cocci_id/* drivers/gpu/drm/tegra/dpaux.c 133 */;
	struct drm_dp_aux_msg *cocci_id/* drivers/gpu/drm/tegra/dpaux.c 127 */;
	ssize_t cocci_id/* drivers/gpu/drm/tegra/dpaux.c 126 */;
	size_t cocci_id/* drivers/gpu/drm/tegra/dpaux.c 111 */;
	u8 *cocci_id/* drivers/gpu/drm/tegra/dpaux.c 110 */;
}
