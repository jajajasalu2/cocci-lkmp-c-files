cocci_test_suite() {
	struct sa1111 {
		struct device *dev;
		struct clk *clk;
		unsigned long phys;
		int irq;
		int irq_base;
		spinlock_t lock;
		void __iomem *base;
		struct sa1111_platform_data *pdata;
		struct irq_domain *irqdomain;
		struct gpio_chip gc;
#ifdef CONFIG_PM
		void *saved_state;
#endif
	} cocci_id/* arch/arm/common/sa1111.c 99 */;
	struct sa1111_save_data cocci_id/* arch/arm/common/sa1111.c 983 */;
	struct sa1111_save_data {
		unsigned int skcr;
		unsigned int skpcr;
		unsigned int skcdr;
		unsigned char skaud;
		unsigned char skpwm0;
		unsigned char skpwm1;
		unsigned int intpol0;
		unsigned int intpol1;
		unsigned int inten0;
		unsigned int inten1;
		unsigned int wakepol0;
		unsigned int wakepol1;
		unsigned int wakeen0;
		unsigned int wakeen1;
	} cocci_id/* arch/arm/common/sa1111.c 952 */;
	void cocci_id/* arch/arm/common/sa1111.c 940 */;
	void cocci_id/* arch/arm/common/sa1111.c 90 */(void);
	struct sa1111 cocci_id/* arch/arm/common/sa1111.c 814 */;
	unsigned long cocci_id/* arch/arm/common/sa1111.c 807 */;
	struct sa1111_platform_data *cocci_id/* arch/arm/common/sa1111.c 805 */;
	struct resource *cocci_id/* arch/arm/common/sa1111.c 803 */;
	struct device *cocci_id/* arch/arm/common/sa1111.c 803 */;
	int cocci_id/* arch/arm/common/sa1111.c 803 */;
	struct sa1111_dev cocci_id/* arch/arm/common/sa1111.c 738 */;
	struct sa1111_dev_info *cocci_id/* arch/arm/common/sa1111.c 732 */;
	u32 cocci_id/* arch/arm/common/sa1111.c 686 */[];
	unsigned long *cocci_id/* arch/arm/common/sa1111.c 581 */;
	u32 cocci_id/* arch/arm/common/sa1111.c 531 */;
	void __iomem *cocci_id/* arch/arm/common/sa1111.c 530 */;
	struct gpio_chip *cocci_id/* arch/arm/common/sa1111.c 478 */;
	enum{SA1111_GPIO_PXDDR=(SA1111_GPIO_PADDR - SA1111_GPIO_PADDR), SA1111_GPIO_PXDRR=(SA1111_GPIO_PADRR - SA1111_GPIO_PADDR), SA1111_GPIO_PXDWR=(SA1111_GPIO_PADWR - SA1111_GPIO_PADDR), SA1111_GPIO_PXSDR=(SA1111_GPIO_PASDR - SA1111_GPIO_PADDR), SA1111_GPIO_PXSSR=(SA1111_GPIO_PASSR - SA1111_GPIO_PADDR),} cocci_id/* arch/arm/common/sa1111.c 470 */;
	const struct irq_domain_ops cocci_id/* arch/arm/common/sa1111.c 376 */;
	irq_hw_number_t cocci_id/* arch/arm/common/sa1111.c 361 */;
	struct irq_chip cocci_id/* arch/arm/common/sa1111.c 350 */;
	struct irq_data *cocci_id/* arch/arm/common/sa1111.c 257 */;
	struct irq_desc *cocci_id/* arch/arm/common/sa1111.c 201 */;
	struct irq_domain *cocci_id/* arch/arm/common/sa1111.c 199 */;
	void __exit cocci_id/* arch/arm/common/sa1111.c 1465 */;
	int __init cocci_id/* arch/arm/common/sa1111.c 1453 */;
	struct notifier_block cocci_id/* arch/arm/common/sa1111.c 1448 */;
	void *cocci_id/* arch/arm/common/sa1111.c 1426 */;
	struct notifier_block *cocci_id/* arch/arm/common/sa1111.c 1425 */;
	dma_addr_t cocci_id/* arch/arm/common/sa1111.c 1412 */;
	size_t cocci_id/* arch/arm/common/sa1111.c 1412 */;
	struct bus_type cocci_id/* arch/arm/common/sa1111.c 1375 */;
	struct sa1111_driver *cocci_id/* arch/arm/common/sa1111.c 1356 */;
	struct sa1111_dev *cocci_id/* arch/arm/common/sa1111.c 1355 */;
	struct device_driver *cocci_id/* arch/arm/common/sa1111.c 1345 */;
	unsigned cocci_id/* arch/arm/common/sa1111.c 1330 */;
	struct sa1111_dev_info cocci_id/* arch/arm/common/sa1111.c 129 */[];
	struct sa1111_dev_info {
		unsigned long offset;
		unsigned long skpcr_mask;
		bool dma;
		unsigned int devid;
		unsigned int hwirq[6];
	} cocci_id/* arch/arm/common/sa1111.c 121 */;
	struct sa1111 *cocci_id/* arch/arm/common/sa1111.c 1181 */;
	unsigned int cocci_id/* arch/arm/common/sa1111.c 1181 */;
	unsigned char cocci_id/* arch/arm/common/sa1111.c 1179 */[];
	struct platform_driver cocci_id/* arch/arm/common/sa1111.c 1158 */;
	struct dev_pm_ops cocci_id/* arch/arm/common/sa1111.c 1144 */;
	struct platform_device *cocci_id/* arch/arm/common/sa1111.c 1113 */;
	struct sa1111_save_data *cocci_id/* arch/arm/common/sa1111.c 1043 */;
}
