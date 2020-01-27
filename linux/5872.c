cocci_test_suite() {
	unsigned long cocci_id/* drivers/pinctrl/samsung/pinctrl-exynos.c 73 */;
	struct irq_chip *cocci_id/* drivers/pinctrl/samsung/pinctrl-exynos.c 70 */;
	const struct samsung_retention_data *cocci_id/* drivers/pinctrl/samsung/pinctrl-exynos.c 696 */;
	struct samsung_retention_ctrl *cocci_id/* drivers/pinctrl/samsung/pinctrl-exynos.c 683 */;
	struct irq_data *cocci_id/* drivers/pinctrl/samsung/pinctrl-exynos.c 68 */;
	void cocci_id/* drivers/pinctrl/samsung/pinctrl-exynos.c 68 */;
	void __iomem *cocci_id/* drivers/pinctrl/samsung/pinctrl-exynos.c 645 */;
	struct exynos_eint_gpio_save *cocci_id/* drivers/pinctrl/samsung/pinctrl-exynos.c 644 */;
	struct regmap *cocci_id/* drivers/pinctrl/samsung/pinctrl-exynos.c 581 */;
	const struct of_device_id *cocci_id/* drivers/pinctrl/samsung/pinctrl-exynos.c 483 */;
	struct exynos_irq_chip *cocci_id/* drivers/pinctrl/samsung/pinctrl-exynos.c 477 */;
	struct exynos_muxed_weint_data *cocci_id/* drivers/pinctrl/samsung/pinctrl-exynos.c 476 */;
	struct exynos_weint_data *cocci_id/* drivers/pinctrl/samsung/pinctrl-exynos.c 475 */;
	struct device_node *cocci_id/* drivers/pinctrl/samsung/pinctrl-exynos.c 472 */;
	struct irq_desc *cocci_id/* drivers/pinctrl/samsung/pinctrl-exynos.c 443 */;
	const struct of_device_id cocci_id/* drivers/pinctrl/samsung/pinctrl-exynos.c 404 */[];
	const struct exynos_irq_chip cocci_id/* drivers/pinctrl/samsung/pinctrl-exynos.c 367 */;
	struct exynos_irq_chip {
		struct irq_chip chip;
		u32 eint_con;
		u32 eint_mask;
		u32 eint_pend;
		u32 eint_wake_mask_value;
		u32 eint_wake_mask_reg;
	} cocci_id/* drivers/pinctrl/samsung/pinctrl-exynos.c 35 */;
	struct exynos_eint_gpio_save cocci_id/* drivers/pinctrl/samsung/pinctrl-exynos.c 306 */;
	struct device *cocci_id/* drivers/pinctrl/samsung/pinctrl-exynos.c 277 */;
	struct samsung_pin_bank *cocci_id/* drivers/pinctrl/samsung/pinctrl-exynos.c 276 */;
	struct samsung_pinctrl_drv_data *cocci_id/* drivers/pinctrl/samsung/pinctrl-exynos.c 274 */;
	int cocci_id/* drivers/pinctrl/samsung/pinctrl-exynos.c 274 */;
	struct exynos_eint_gpio_save {
		u32 eint_con;
		u32 eint_fltcon0;
		u32 eint_fltcon1;
	} cocci_id/* drivers/pinctrl/samsung/pinctrl-exynos.c 264 */;
	unsigned int cocci_id/* drivers/pinctrl/samsung/pinctrl-exynos.c 247 */;
	irqreturn_t cocci_id/* drivers/pinctrl/samsung/pinctrl-exynos.c 243 */;
	void *cocci_id/* drivers/pinctrl/samsung/pinctrl-exynos.c 243 */;
	const struct irq_domain_ops cocci_id/* drivers/pinctrl/samsung/pinctrl-exynos.c 238 */;
	irq_hw_number_t cocci_id/* drivers/pinctrl/samsung/pinctrl-exynos.c 225 */;
	struct irq_domain *cocci_id/* drivers/pinctrl/samsung/pinctrl-exynos.c 224 */;
	struct exynos_irq_chip cocci_id/* drivers/pinctrl/samsung/pinctrl-exynos.c 208 */;
	const struct samsung_pin_bank_type *cocci_id/* drivers/pinctrl/samsung/pinctrl-exynos.c 185 */;
}
