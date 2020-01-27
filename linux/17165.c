cocci_test_suite() {
	struct work_struct *cocci_id/* arch/powerpc/sysdev/pmi.c 99 */;
	void cocci_id/* arch/powerpc/sysdev/pmi.c 99 */;
	const struct of_device_id cocci_id/* arch/powerpc/sysdev/pmi.c 91 */[];
	u8 cocci_id/* arch/powerpc/sysdev/pmi.c 44 */;
	irqreturn_t cocci_id/* arch/powerpc/sysdev/pmi.c 42 */;
	void *cocci_id/* arch/powerpc/sysdev/pmi.c 42 */;
	int cocci_id/* arch/powerpc/sysdev/pmi.c 42 */;
	struct pmi_data *cocci_id/* arch/powerpc/sysdev/pmi.c 40 */;
	struct pmi_data {
		struct list_head handler;
		spinlock_t handler_spinlock;
		spinlock_t pmi_spinlock;
		struct mutex msg_mutex;
		pmi_message_t msg;
		struct completion *completion;
		struct platform_device *dev;
		int irq;
		u8 __iomem *pmi_reg;
		struct work_struct work;
	} cocci_id/* arch/powerpc/sysdev/pmi.c 27 */;
	u32 *cocci_id/* arch/powerpc/sysdev/pmi.c 216 */;
	unsigned long cocci_id/* arch/powerpc/sysdev/pmi.c 207 */;
	pmi_message_t cocci_id/* arch/powerpc/sysdev/pmi.c 205 */;
	struct platform_driver cocci_id/* arch/powerpc/sysdev/pmi.c 195 */;
	struct pmi_data cocci_id/* arch/powerpc/sysdev/pmi.c 123 */;
	struct device_node *cocci_id/* arch/powerpc/sysdev/pmi.c 114 */;
	struct platform_device *cocci_id/* arch/powerpc/sysdev/pmi.c 112 */;
	struct pmi_handler *cocci_id/* arch/powerpc/sysdev/pmi.c 101 */;
}
