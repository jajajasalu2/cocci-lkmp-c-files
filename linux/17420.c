cocci_test_suite() {
	int __init cocci_id/* arch/powerpc/platforms/52xx/mpc52xx_gpt.c 781 */;
	struct platform_driver cocci_id/* arch/powerpc/platforms/52xx/mpc52xx_gpt.c 772 */;
	const struct of_device_id cocci_id/* arch/powerpc/platforms/52xx/mpc52xx_gpt.c 763 */[];
	struct platform_device *cocci_id/* arch/powerpc/platforms/52xx/mpc52xx_gpt.c 715 */;
	struct miscdevice cocci_id/* arch/powerpc/platforms/52xx/mpc52xx_gpt.c 658 */;
	const struct file_operations cocci_id/* arch/powerpc/platforms/52xx/mpc52xx_gpt.c 648 */;
	struct inode *cocci_id/* arch/powerpc/platforms/52xx/mpc52xx_gpt.c 606 */;
	int __user *cocci_id/* arch/powerpc/platforms/52xx/mpc52xx_gpt.c 554 */;
	struct file *cocci_id/* arch/powerpc/platforms/52xx/mpc52xx_gpt.c 550 */;
	long cocci_id/* arch/powerpc/platforms/52xx/mpc52xx_gpt.c 550 */;
	const struct watchdog_info cocci_id/* arch/powerpc/platforms/52xx/mpc52xx_gpt.c 545 */;
	loff_t *cocci_id/* arch/powerpc/platforms/52xx/mpc52xx_gpt.c 538 */;
	size_t cocci_id/* arch/powerpc/platforms/52xx/mpc52xx_gpt.c 538 */;
	const char __user *cocci_id/* arch/powerpc/platforms/52xx/mpc52xx_gpt.c 537 */;
	ssize_t cocci_id/* arch/powerpc/platforms/52xx/mpc52xx_gpt.c 537 */;
	u8 *cocci_id/* arch/powerpc/platforms/52xx/mpc52xx_gpt.c 532 */;
	unsigned long cocci_id/* arch/powerpc/platforms/52xx/mpc52xx_gpt.c 393 */;
	u32 cocci_id/* arch/powerpc/platforms/52xx/mpc52xx_gpt.c 390 */;
	u64 cocci_id/* arch/powerpc/platforms/52xx/mpc52xx_gpt.c 387 */;
	struct mpc52xx_gpt_priv *cocci_id/* arch/powerpc/platforms/52xx/mpc52xx_gpt.c 387 */;
	int cocci_id/* arch/powerpc/platforms/52xx/mpc52xx_gpt.c 387 */;
	struct mpc52xx_gpt_priv cocci_id/* arch/powerpc/platforms/52xx/mpc52xx_gpt.c 375 */;
	struct list_head *cocci_id/* arch/powerpc/platforms/52xx/mpc52xx_gpt.c 370 */;
	struct device_node *cocci_id/* arch/powerpc/platforms/52xx/mpc52xx_gpt.c 321 */;
	struct gpio_chip *cocci_id/* arch/powerpc/platforms/52xx/mpc52xx_gpt.c 299 */;
	unsigned int cocci_id/* arch/powerpc/platforms/52xx/mpc52xx_gpt.c 299 */;
	void cocci_id/* arch/powerpc/platforms/52xx/mpc52xx_gpt.c 284 */;
	const struct irq_domain_ops cocci_id/* arch/powerpc/platforms/52xx/mpc52xx_gpt.c 235 */;
	unsigned int *cocci_id/* arch/powerpc/platforms/52xx/mpc52xx_gpt.c 218 */;
	irq_hw_number_t *cocci_id/* arch/powerpc/platforms/52xx/mpc52xx_gpt.c 217 */;
	const u32 *cocci_id/* arch/powerpc/platforms/52xx/mpc52xx_gpt.c 216 */;
	irq_hw_number_t cocci_id/* arch/powerpc/platforms/52xx/mpc52xx_gpt.c 204 */;
	struct irq_domain *cocci_id/* arch/powerpc/platforms/52xx/mpc52xx_gpt.c 203 */;
	struct irq_desc *cocci_id/* arch/powerpc/platforms/52xx/mpc52xx_gpt.c 190 */;
	struct irq_chip cocci_id/* arch/powerpc/platforms/52xx/mpc52xx_gpt.c 182 */;
	struct irq_data *cocci_id/* arch/powerpc/platforms/52xx/mpc52xx_gpt.c 155 */;
	struct mpc52xx_gpt_priv {
		struct list_head list;
		struct device *dev;
		struct mpc52xx_gpt __iomem *regs;
		raw_spinlock_t lock;
		struct irq_domain *irqhost;
		u32 ipb_freq;
		u8 wdt_mode;
#if defined(CONFIG_GPIOLIB)
		struct gpio_chip gc;
#endif
	} cocci_id/*  1 */;
}
