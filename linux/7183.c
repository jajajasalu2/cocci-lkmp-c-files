cocci_test_suite() {
	struct axp288_extcon_info {
		struct device *dev;
		struct regmap *regmap;
		struct regmap_irq_chip_data *regmap_irqc;
		struct usb_role_switch *role_sw;
		struct work_struct role_work;
		int irq[EXTCON_IRQ_END];
		struct extcon_dev *edev;
		struct extcon_dev *id_extcon;
		struct notifier_block id_nb;
		unsigned int previous_cable;
		bool vbus_attach;
	} cocci_id/* drivers/extcon/extcon-axp288.c 95 */;
	const unsigned int cocci_id/* drivers/extcon/extcon-axp288.c 87 */[];
	enum axp288_extcon_irq{VBUS_FALLING_IRQ=0, VBUS_RISING_IRQ, MV_CHNG_IRQ, BC_USB_CHNG_IRQ, EXTCON_IRQ_END,} cocci_id/* drivers/extcon/extcon-axp288.c 79 */;
	enum axp288_extcon_reg{AXP288_PS_STAT_REG=0x00, AXP288_PS_BOOT_REASON_REG=0x02, AXP288_BC_GLOBAL_REG=0x2c, AXP288_BC_VBUS_CNTL_REG=0x2d, AXP288_BC_USB_STAT_REG=0x2e, AXP288_BC_DET_STAT_REG=0x2f,} cocci_id/* drivers/extcon/extcon-axp288.c 70 */;
	void __exit cocci_id/* drivers/extcon/extcon-axp288.c 469 */;
	int __init cocci_id/* drivers/extcon/extcon-axp288.c 463 */;
	struct platform_driver cocci_id/* drivers/extcon/extcon-axp288.c 455 */;
	const struct platform_device_id cocci_id/* drivers/extcon/extcon-axp288.c 449 */[];
	struct acpi_device *cocci_id/* drivers/extcon/extcon-axp288.c 349 */;
	struct device *cocci_id/* drivers/extcon/extcon-axp288.c 348 */;
	struct axp20x_dev *cocci_id/* drivers/extcon/extcon-axp288.c 347 */;
	struct platform_device *cocci_id/* drivers/extcon/extcon-axp288.c 344 */;
	struct fwnode_handle *cocci_id/* drivers/extcon/extcon-axp288.c 328 */;
	const struct software_node *cocci_id/* drivers/extcon/extcon-axp288.c 327 */;
	int cocci_id/* drivers/extcon/extcon-axp288.c 325 */;
	struct axp288_extcon_info *cocci_id/* drivers/extcon/extcon-axp288.c 308 */;
	void cocci_id/* drivers/extcon/extcon-axp288.c 308 */;
	irqreturn_t cocci_id/* drivers/extcon/extcon-axp288.c 296 */;
	struct axp288_extcon_info cocci_id/* drivers/extcon/extcon-axp288.c 288 */;
	void *cocci_id/* drivers/extcon/extcon-axp288.c 285 */;
	unsigned long cocci_id/* drivers/extcon/extcon-axp288.c 285 */;
	struct notifier_block *cocci_id/* drivers/extcon/extcon-axp288.c 284 */;
	u8 cocci_id/* drivers/extcon/extcon-axp288.c 214 */;
	struct work_struct *cocci_id/* drivers/extcon/extcon-axp288.c 177 */;
	enum usb_role cocci_id/* drivers/extcon/extcon-axp288.c 167 */;
	bool cocci_id/* drivers/extcon/extcon-axp288.c 165 */;
	unsigned int cocci_id/* drivers/extcon/extcon-axp288.c 132 */;
	const char *const cocci_id/* drivers/extcon/extcon-axp288.c 115 */[];
	const struct x86_cpu_id cocci_id/* drivers/extcon/extcon-axp288.c 109 */[];
}
