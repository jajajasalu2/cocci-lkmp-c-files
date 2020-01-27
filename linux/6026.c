cocci_test_suite() {
	struct irq_data *cocci_id/* drivers/pinctrl/qcom/pinctrl-msm.c 831 */;
	const struct gpio_chip cocci_id/* drivers/pinctrl/qcom/pinctrl-msm.c 651 */;
	u16 *cocci_id/* drivers/pinctrl/qcom/pinctrl-msm.c 608 */;
	const int *cocci_id/* drivers/pinctrl/qcom/pinctrl-msm.c 607 */;
	struct seq_file *cocci_id/* drivers/pinctrl/qcom/pinctrl-msm.c 587 */;
	struct gpio_chip *cocci_id/* drivers/pinctrl/qcom/pinctrl-msm.c 587 */;
	void cocci_id/* drivers/pinctrl/qcom/pinctrl-msm.c 587 */;
	const char *constcocci_id/* drivers/pinctrl/qcom/pinctrl-msm.c 547 */[];
	struct msm_pinctrl {
		struct device *dev;
		struct pinctrl_dev *pctrl;
		struct gpio_chip chip;
		struct pinctrl_desc desc;
		struct notifier_block restart_nb;
		struct irq_chip irq_chip;
		int irq;
		raw_spinlock_t lock;
	DECLARE_BITMAP(dual_edge_irqs,MAX_NR_GPIO)
		;
	DECLARE_BITMAP(enabled_irqs,MAX_NR_GPIO)
		;
	DECLARE_BITMAP(skip_wake_irqs,MAX_NR_GPIO)
		;
		const struct msm_pinctrl_soc_data *soc;
		void __iomem *regs[MAX_NR_TILES];
	} cocci_id/* drivers/pinctrl/qcom/pinctrl-msm.c 53 */;
	const struct pinconf_ops cocci_id/* drivers/pinctrl/qcom/pinctrl-msm.c 429 */;
	unsigned long cocci_id/* drivers/pinctrl/qcom/pinctrl-msm.c 342 */;
	u32 cocci_id/* drivers/pinctrl/qcom/pinctrl-msm.c 270 */;
	unsigned cocci_id/* drivers/pinctrl/qcom/pinctrl-msm.c 265 */;
	struct msm_pinctrl *cocci_id/* drivers/pinctrl/qcom/pinctrl-msm.c 264 */;
	const struct msm_pingroup *cocci_id/* drivers/pinctrl/qcom/pinctrl-msm.c 263 */;
	unsigned long *cocci_id/* drivers/pinctrl/qcom/pinctrl-msm.c 261 */;
	unsigned int cocci_id/* drivers/pinctrl/qcom/pinctrl-msm.c 260 */;
	struct pinctrl_dev *cocci_id/* drivers/pinctrl/qcom/pinctrl-msm.c 259 */;
	int cocci_id/* drivers/pinctrl/qcom/pinctrl-msm.c 259 */;
	unsigned *cocci_id/* drivers/pinctrl/qcom/pinctrl-msm.c 221 */;
	const struct pinmux_ops cocci_id/* drivers/pinctrl/qcom/pinctrl-msm.c 209 */;
	struct pinctrl_gpio_range *cocci_id/* drivers/pinctrl/qcom/pinctrl-msm.c 195 */;
	unsigned *constcocci_id/* drivers/pinctrl/qcom/pinctrl-msm.c 152 */;
	const char *const**cocci_id/* drivers/pinctrl/qcom/pinctrl-msm.c 151 */;
	const char *cocci_id/* drivers/pinctrl/qcom/pinctrl-msm.c 141 */;
	struct resource *cocci_id/* drivers/pinctrl/qcom/pinctrl-msm.c 1238 */;
	const struct msm_pinctrl_soc_data *cocci_id/* drivers/pinctrl/qcom/pinctrl-msm.c 1235 */;
	struct platform_device *cocci_id/* drivers/pinctrl/qcom/pinctrl-msm.c 1234 */;
	struct device *cocci_id/* drivers/pinctrl/qcom/pinctrl-msm.c 1222 */;
	const struct msm_function *cocci_id/* drivers/pinctrl/qcom/pinctrl-msm.c 1200 */;
	struct msm_pinctrl cocci_id/* drivers/pinctrl/qcom/pinctrl-msm.c 1183 */;
	void *cocci_id/* drivers/pinctrl/qcom/pinctrl-msm.c 1181 */;
	struct notifier_block *cocci_id/* drivers/pinctrl/qcom/pinctrl-msm.c 1180 */;
	const struct pinctrl_ops cocci_id/* drivers/pinctrl/qcom/pinctrl-msm.c 118 */;
	bool cocci_id/* drivers/pinctrl/qcom/pinctrl-msm.c 1091 */;
	struct device_node *cocci_id/* drivers/pinctrl/qcom/pinctrl-msm.c 1090 */;
	struct gpio_irq_chip *cocci_id/* drivers/pinctrl/qcom/pinctrl-msm.c 1087 */;
	const unsigned **cocci_id/* drivers/pinctrl/qcom/pinctrl-msm.c 108 */;
	const struct msm_gpio_wakeirq_map *cocci_id/* drivers/pinctrl/qcom/pinctrl-msm.c 1059 */;
	unsigned int *cocci_id/* drivers/pinctrl/qcom/pinctrl-msm.c 1055 */;
	struct irq_chip *cocci_id/* drivers/pinctrl/qcom/pinctrl-msm.c 1023 */;
	struct irq_desc *cocci_id/* drivers/pinctrl/qcom/pinctrl-msm.c 1018 */;
}
