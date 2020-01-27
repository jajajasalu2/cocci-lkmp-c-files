cocci_test_suite() {
	struct s3c24xx_eint_data {
		struct samsung_pinctrl_drv_data *drvdata;
		struct irq_domain *domains[NUM_EINT];
		int parents[NUM_EINT_IRQ];
	} cocci_id/* drivers/pinctrl/samsung/pinctrl-s3c24xx.c 88 */;
	const struct samsung_pinctrl_of_match_data cocci_id/* drivers/pinctrl/samsung/pinctrl-s3c24xx.c 580 */;
	const struct samsung_pin_ctrl cocci_id/* drivers/pinctrl/samsung/pinctrl-s3c24xx.c 572 */[]__initconst;
	const struct samsung_pin_bank_data cocci_id/* drivers/pinctrl/samsung/pinctrl-s3c24xx.c 560 */[]__initconst;
	irq_flow_handler_t *cocci_id/* drivers/pinctrl/samsung/pinctrl-s3c24xx.c 479 */;
	bool cocci_id/* drivers/pinctrl/samsung/pinctrl-s3c24xx.c 478 */;
	const struct irq_domain_ops *cocci_id/* drivers/pinctrl/samsung/pinctrl-s3c24xx.c 476 */;
	struct device_node *cocci_id/* drivers/pinctrl/samsung/pinctrl-s3c24xx.c 472 */;
	const struct of_device_id *cocci_id/* drivers/pinctrl/samsung/pinctrl-s3c24xx.c 471 */;
	struct device *cocci_id/* drivers/pinctrl/samsung/pinctrl-s3c24xx.c 470 */;
	void *cocci_id/* drivers/pinctrl/samsung/pinctrl-s3c24xx.c 463 */;
	const struct of_device_id cocci_id/* drivers/pinctrl/samsung/pinctrl-s3c24xx.c 462 */[];
	const struct irq_domain_ops cocci_id/* drivers/pinctrl/samsung/pinctrl-s3c24xx.c 438 */;
	const struct samsung_pin_bank_type cocci_id/* drivers/pinctrl/samsung/pinctrl-s3c24xx.c 42 */;
	irq_hw_number_t cocci_id/* drivers/pinctrl/samsung/pinctrl-s3c24xx.c 415 */;
	struct irq_domain *cocci_id/* drivers/pinctrl/samsung/pinctrl-s3c24xx.c 414 */;
	irq_flow_handler_t cocci_id/* drivers/pinctrl/samsung/pinctrl-s3c24xx.c 396 */[NUM_EINT_IRQ];
	u32 cocci_id/* drivers/pinctrl/samsung/pinctrl-s3c24xx.c 356 */;
	unsigned char cocci_id/* drivers/pinctrl/samsung/pinctrl-s3c24xx.c 318 */;
	unsigned long cocci_id/* drivers/pinctrl/samsung/pinctrl-s3c24xx.c 259 */;
	struct samsung_pinctrl_drv_data *cocci_id/* drivers/pinctrl/samsung/pinctrl-s3c24xx.c 257 */;
	unsigned int cocci_id/* drivers/pinctrl/samsung/pinctrl-s3c24xx.c 242 */;
	struct s3c24xx_eint_data *cocci_id/* drivers/pinctrl/samsung/pinctrl-s3c24xx.c 241 */;
	struct irq_data *cocci_id/* drivers/pinctrl/samsung/pinctrl-s3c24xx.c 240 */;
	struct irq_desc *cocci_id/* drivers/pinctrl/samsung/pinctrl-s3c24xx.c 238 */;
	void cocci_id/* drivers/pinctrl/samsung/pinctrl-s3c24xx.c 238 */;
	struct irq_chip cocci_id/* drivers/pinctrl/samsung/pinctrl-s3c24xx.c 230 */;
	struct irq_chip *cocci_id/* drivers/pinctrl/samsung/pinctrl-s3c24xx.c 203 */;
	int cocci_id/* drivers/pinctrl/samsung/pinctrl-s3c24xx.c 202 */;
	struct s3c24xx_eint_domain_data *cocci_id/* drivers/pinctrl/samsung/pinctrl-s3c24xx.c 200 */;
	struct samsung_pin_bank *cocci_id/* drivers/pinctrl/samsung/pinctrl-s3c24xx.c 199 */;
	u8 cocci_id/* drivers/pinctrl/samsung/pinctrl-s3c24xx.c 144 */;
	void __iomem *cocci_id/* drivers/pinctrl/samsung/pinctrl-s3c24xx.c 143 */;
	const struct samsung_pin_bank_type *cocci_id/* drivers/pinctrl/samsung/pinctrl-s3c24xx.c 141 */;
	struct s3c24xx_eint_domain_data {
		struct samsung_pin_bank *bank;
		struct s3c24xx_eint_data *eint_data;
		bool eint0_3_parent_only;
	} cocci_id/* drivers/pinctrl/samsung/pinctrl-s3c24xx.c 100 */;
}
