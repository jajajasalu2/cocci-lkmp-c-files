cocci_test_suite() {
	void __exit cocci_id/* arch/arm/common/locomo.c 876 */;
	int __init cocci_id/* arch/arm/common/locomo.c 868 */;
	struct locomo_dev_info cocci_id/* arch/arm/common/locomo.c 85 */[];
	struct bus_type cocci_id/* arch/arm/common/locomo.c 848 */;
	struct locomo_driver *cocci_id/* arch/arm/common/locomo.c 829 */;
	struct locomo_dev *cocci_id/* arch/arm/common/locomo.c 828 */;
	struct device_driver *cocci_id/* arch/arm/common/locomo.c 818 */;
	struct locomo_dev_info {
		unsigned long offset;
		unsigned long length;
		unsigned int devid;
		unsigned int irq[1];
		const char *name;
	} cocci_id/* arch/arm/common/locomo.c 72 */;
	unsigned char cocci_id/* arch/arm/common/locomo.c 663 */;
	void *cocci_id/* arch/arm/common/locomo.c 624 */;
	struct locomo {
		struct device *dev;
		unsigned long phys;
		unsigned int irq;
		int irq_base;
		spinlock_t lock;
		void __iomem *base;
#ifdef CONFIG_PM
		void *saved_state;
#endif
	} cocci_id/* arch/arm/common/locomo.c 60 */;
	unsigned int cocci_id/* arch/arm/common/locomo.c 566 */;
	struct platform_driver cocci_id/* arch/arm/common/locomo.c 516 */;
	struct platform_device *cocci_id/* arch/arm/common/locomo.c 483 */;
	void cocci_id/* arch/arm/common/locomo.c 471 */;
	struct locomo cocci_id/* arch/arm/common/locomo.c 375 */;
	unsigned long cocci_id/* arch/arm/common/locomo.c 372 */;
	struct locomo *cocci_id/* arch/arm/common/locomo.c 371 */;
	struct locomo_platform_data *cocci_id/* arch/arm/common/locomo.c 370 */;
	struct resource *cocci_id/* arch/arm/common/locomo.c 368 */;
	struct device *cocci_id/* arch/arm/common/locomo.c 368 */;
	int cocci_id/* arch/arm/common/locomo.c 367 */;
	struct locomo_save_data *cocci_id/* arch/arm/common/locomo.c 320 */;
	struct locomo_save_data cocci_id/* arch/arm/common/locomo.c 279 */;
	pm_message_t cocci_id/* arch/arm/common/locomo.c 273 */;
	struct locomo_save_data {
		u16 LCM_GPO;
		u16 LCM_SPICT;
		u16 LCM_GPE;
		u16 LCM_ASD;
		u16 LCM_SPIMD;
	} cocci_id/* arch/arm/common/locomo.c 265 */;
	struct locomo_dev cocci_id/* arch/arm/common/locomo.c 224 */;
	struct locomo_dev_info *cocci_id/* arch/arm/common/locomo.c 219 */;
	struct irq_chip cocci_id/* arch/arm/common/locomo.c 185 */;
	struct irq_data *cocci_id/* arch/arm/common/locomo.c 163 */;
	struct irq_desc *cocci_id/* arch/arm/common/locomo.c 138 */;
}
