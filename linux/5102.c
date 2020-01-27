cocci_test_suite() {
	const int cocci_id/* drivers/gpio/gpio-ml-ioh.c 90 */[];
	struct ioh_gpio {
		void __iomem *base;
		struct ioh_regs __iomem *reg;
		struct device *dev;
		struct gpio_chip gpio;
		struct ioh_gpio_reg_data ioh_gpio_reg;
		u32 gpio_use_sel;
		int ch;
		int irq_base;
		spinlock_t spinlock;
	} cocci_id/* drivers/gpio/gpio-ml-ioh.c 78 */;
	struct pci_driver cocci_id/* drivers/gpio/gpio-ml-ioh.c 585 */;
	const struct pci_device_id cocci_id/* drivers/gpio/gpio-ml-ioh.c 579 */[];
	s32 cocci_id/* drivers/gpio/gpio-ml-ioh.c 552 */;
	struct ioh_gpio_reg_data {
		u32 ien_reg;
		u32 imask_reg;
		u32 po_reg;
		u32 pm_reg;
		u32 im0_reg;
		u32 im1_reg;
		u32 use_sel_reg;
	} cocci_id/* drivers/gpio/gpio-ml-ioh.c 55 */;
	pm_message_t cocci_id/* drivers/gpio/gpio-ml-ioh.c 526 */;
	void cocci_id/* drivers/gpio/gpio-ml-ioh.c 507 */;
	void __iomem *cocci_id/* drivers/gpio/gpio-ml-ioh.c 409 */;
	const struct pci_device_id *cocci_id/* drivers/gpio/gpio-ml-ioh.c 404 */;
	struct pci_dev *cocci_id/* drivers/gpio/gpio-ml-ioh.c 403 */;
	struct irq_chip_type *cocci_id/* drivers/gpio/gpio-ml-ioh.c 379 */;
	struct irq_chip_generic *cocci_id/* drivers/gpio/gpio-ml-ioh.c 378 */;
	unsigned int cocci_id/* drivers/gpio/gpio-ml-ioh.c 375 */;
	struct ioh_gpio *cocci_id/* drivers/gpio/gpio-ml-ioh.c 374 */;
	int cocci_id/* drivers/gpio/gpio-ml-ioh.c 374 */;
	struct ioh_regs {
		struct ioh_reg_comn regs[8];
		u32 reserve1[16];
		u32 ioh_sel_reg[4];
		u32 reserve2[11];
		u32 srst;
	} cocci_id/* drivers/gpio/gpio-ml-ioh.c 37 */;
	irqreturn_t cocci_id/* drivers/gpio/gpio-ml-ioh.c 350 */;
	void *cocci_id/* drivers/gpio/gpio-ml-ioh.c 350 */;
	struct irq_data *cocci_id/* drivers/gpio/gpio-ml-ioh.c 322 */;
	struct ioh_reg_comn {
		u32 ien;
		u32 istatus;
		u32 idisp;
		u32 iclr;
		u32 imask;
		u32 imaskclr;
		u32 po;
		u32 pi;
		u32 pm;
		u32 im_0;
		u32 im_1;
		u32 reserved;
	} cocci_id/* drivers/gpio/gpio-ml-ioh.c 22 */;
	unsigned long cocci_id/* drivers/gpio/gpio-ml-ioh.c 146 */;
	u32 cocci_id/* drivers/gpio/gpio-ml-ioh.c 145 */;
	struct gpio_chip *cocci_id/* drivers/gpio/gpio-ml-ioh.c 142 */;
	unsigned cocci_id/* drivers/gpio/gpio-ml-ioh.c 142 */;
}
