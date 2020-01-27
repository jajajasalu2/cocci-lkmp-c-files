cocci_test_suite() {
	const struct samsung_pin_bank_type cocci_id/* drivers/pinctrl/samsung/pinctrl-s3c64xx.c 91 */;
	const struct samsung_pinctrl_of_match_data cocci_id/* drivers/pinctrl/samsung/pinctrl-s3c64xx.c 806 */;
	const struct samsung_pin_ctrl cocci_id/* drivers/pinctrl/samsung/pinctrl-s3c64xx.c 796 */[]__initconst;
	const struct samsung_pin_bank_data cocci_id/* drivers/pinctrl/samsung/pinctrl-s3c64xx.c 772 */[]__initconst;
	struct s3c64xx_eint0_data *cocci_id/* drivers/pinctrl/samsung/pinctrl-s3c64xx.c 694 */;
	struct device_node *cocci_id/* drivers/pinctrl/samsung/pinctrl-s3c64xx.c 691 */;
	struct device *cocci_id/* drivers/pinctrl/samsung/pinctrl-s3c64xx.c 690 */;
	const struct of_device_id cocci_id/* drivers/pinctrl/samsung/pinctrl-s3c64xx.c 679 */[];
	const struct irq_domain_ops cocci_id/* drivers/pinctrl/samsung/pinctrl-s3c64xx.c 673 */;
	struct samsung_pin_bank *cocci_id/* drivers/pinctrl/samsung/pinctrl-s3c64xx.c 658 */;
	irq_hw_number_t cocci_id/* drivers/pinctrl/samsung/pinctrl-s3c64xx.c 655 */;
	struct irq_domain *cocci_id/* drivers/pinctrl/samsung/pinctrl-s3c64xx.c 654 */;
	unsigned int cocci_id/* drivers/pinctrl/samsung/pinctrl-s3c64xx.c 654 */;
	int cocci_id/* drivers/pinctrl/samsung/pinctrl-s3c64xx.c 654 */;
	irq_flow_handler_t cocci_id/* drivers/pinctrl/samsung/pinctrl-s3c64xx.c 647 */[NUM_EINT0_IRQ];
	struct irq_desc *cocci_id/* drivers/pinctrl/samsung/pinctrl-s3c64xx.c 627 */;
	void cocci_id/* drivers/pinctrl/samsung/pinctrl-s3c64xx.c 627 */;
	struct irq_chip cocci_id/* drivers/pinctrl/samsung/pinctrl-s3c64xx.c 586 */;
	u8 cocci_id/* drivers/pinctrl/samsung/pinctrl-s3c64xx.c 553 */;
	void __iomem *cocci_id/* drivers/pinctrl/samsung/pinctrl-s3c64xx.c 551 */;
	struct samsung_pinctrl_drv_data *cocci_id/* drivers/pinctrl/samsung/pinctrl-s3c64xx.c 539 */;
	struct s3c64xx_eint0_domain_data *cocci_id/* drivers/pinctrl/samsung/pinctrl-s3c64xx.c 537 */;
	struct irq_data *cocci_id/* drivers/pinctrl/samsung/pinctrl-s3c64xx.c 535 */;
	u32 cocci_id/* drivers/pinctrl/samsung/pinctrl-s3c64xx.c 515 */;
	bool cocci_id/* drivers/pinctrl/samsung/pinctrl-s3c64xx.c 510 */;
	struct s3c64xx_eint_gpio_data *cocci_id/* drivers/pinctrl/samsung/pinctrl-s3c64xx.c 453 */;
	struct irq_chip *cocci_id/* drivers/pinctrl/samsung/pinctrl-s3c64xx.c 407 */;
	unsigned char cocci_id/* drivers/pinctrl/samsung/pinctrl-s3c64xx.c 333 */;
	unsigned long cocci_id/* drivers/pinctrl/samsung/pinctrl-s3c64xx.c 271 */;
	const struct samsung_pin_bank_type *cocci_id/* drivers/pinctrl/samsung/pinctrl-s3c64xx.c 270 */;
	struct s3c64xx_eint_gpio_data {
		struct samsung_pinctrl_drv_data *drvdata;
		struct irq_domain *domains[];
	} cocci_id/* drivers/pinctrl/samsung/pinctrl-s3c64xx.c 222 */;
	struct s3c64xx_eint0_domain_data {
		struct samsung_pin_bank *bank;
		u8 eints[];
	} cocci_id/* drivers/pinctrl/samsung/pinctrl-s3c64xx.c 212 */;
	struct s3c64xx_eint0_data {
		struct samsung_pinctrl_drv_data *drvdata;
		struct irq_domain *domains[NUM_EINT0];
		u8 pins[NUM_EINT0];
	} cocci_id/* drivers/pinctrl/samsung/pinctrl-s3c64xx.c 201 */;
}
