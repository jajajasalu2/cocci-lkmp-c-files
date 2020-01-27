cocci_test_suite() {
	struct dwapb_gpio {
		struct device *dev;
		void __iomem *regs;
		struct dwapb_gpio_port *ports;
		unsigned int nr_ports;
		struct irq_domain *domain;
		unsigned int flags;
		struct reset_control *rst;
		struct clk *clk;
	} cocci_id/* drivers/gpio/gpio-dwapb.c 92 */;
	struct platform_driver cocci_id/* drivers/gpio/gpio-dwapb.c 837 */;
	struct dwapb_gpio_port {
		struct gpio_chip gc;
		bool is_registered;
		struct dwapb_gpio *gpio;
#ifdef CONFIG_PM_SLEEP
		struct dwapb_context *ctx;
#endif
		unsigned int idx;
	} cocci_id/* drivers/gpio/gpio-dwapb.c 82 */;
	struct dwapb_context *cocci_id/* drivers/gpio/gpio-dwapb.c 803 */;
	unsigned long cocci_id/* drivers/gpio/gpio-dwapb.c 793 */;
	const struct acpi_device_id *cocci_id/* drivers/gpio/gpio-dwapb.c 706 */;
	uintptr_t cocci_id/* drivers/gpio/gpio-dwapb.c 704 */;
	struct dwapb_context {
		u32 data;
		u32 dir;
		u32 ext;
		u32 int_en;
		u32 int_mask;
		u32 int_type;
		u32 int_pol;
		u32 int_deb;
		u32 wake_en;
	} cocci_id/* drivers/gpio/gpio-dwapb.c 69 */;
	struct platform_device *cocci_id/* drivers/gpio/gpio-dwapb.c 653 */;
	struct dwapb_gpio cocci_id/* drivers/gpio/gpio-dwapb.c 65 */;
	const struct acpi_device_id cocci_id/* drivers/gpio/gpio-dwapb.c 645 */[];
	const struct of_device_id cocci_id/* drivers/gpio/gpio-dwapb.c 638 */[];
	struct device_node *cocci_id/* drivers/gpio/gpio-dwapb.c 583 */;
	struct device *cocci_id/* drivers/gpio/gpio-dwapb.c 559 */;
	struct dwapb_platform_data *cocci_id/* drivers/gpio/gpio-dwapb.c 558 */;
	void __iomem *cocci_id/* drivers/gpio/gpio-dwapb.c 495 */;
	irq_hw_number_t cocci_id/* drivers/gpio/gpio-dwapb.c 478 */;
	int cocci_id/* drivers/gpio/gpio-dwapb.c 393 */;
	struct irq_chip_type *cocci_id/* drivers/gpio/gpio-dwapb.c 392 */;
	unsigned int cocci_id/* drivers/gpio/gpio-dwapb.c 391 */;
	struct irq_chip_generic *cocci_id/* drivers/gpio/gpio-dwapb.c 390 */;
	struct fwnode_handle *cocci_id/* drivers/gpio/gpio-dwapb.c 389 */;
	struct gpio_chip *cocci_id/* drivers/gpio/gpio-dwapb.c 388 */;
	struct dwapb_port_property *cocci_id/* drivers/gpio/gpio-dwapb.c 386 */;
	struct dwapb_gpio_port *cocci_id/* drivers/gpio/gpio-dwapb.c 385 */;
	struct dwapb_gpio *cocci_id/* drivers/gpio/gpio-dwapb.c 384 */;
	void cocci_id/* drivers/gpio/gpio-dwapb.c 384 */;
	irqreturn_t cocci_id/* drivers/gpio/gpio-dwapb.c 374 */;
	void *cocci_id/* drivers/gpio/gpio-dwapb.c 374 */;
	unsigned cocci_id/* drivers/gpio/gpio-dwapb.c 362 */;
	struct irq_data *cocci_id/* drivers/gpio/gpio-dwapb.c 236 */;
	struct irq_chip *cocci_id/* drivers/gpio/gpio-dwapb.c 213 */;
	struct irq_desc *cocci_id/* drivers/gpio/gpio-dwapb.c 210 */;
	u32 cocci_id/* drivers/gpio/gpio-dwapb.c 190 */;
}
