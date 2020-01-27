cocci_test_suite() {
	struct mid_pwr {
		struct device *dev;
		void __iomem *regs;
		int irq;
		bool available;
		struct mutex lock;
		struct mid_pwr_dev lss[LSS_MAX_DEVS][LSS_MAX_SHARED_DEVS];
	} cocci_id/* arch/x86/platform/intel-mid/pwr.c 94 */;
	struct mid_pwr_dev {
		struct pci_dev *pdev;
		pci_power_t state;
	} cocci_id/* arch/x86/platform/intel-mid/pwr.c 89 */;
	struct pci_driver cocci_id/* arch/x86/platform/intel-mid/pwr.c 479 */;
	const struct pci_device_id cocci_id/* arch/x86/platform/intel-mid/pwr.c 473 */[];
	const struct mid_pwr_device_info cocci_id/* arch/x86/platform/intel-mid/pwr.c 464 */;
	const u32 cocci_id/* arch/x86/platform/intel-mid/pwr.c 444 */[];
	const u32 *cocci_id/* arch/x86/platform/intel-mid/pwr.c 398 */;
	struct device *cocci_id/* arch/x86/platform/intel-mid/pwr.c 351 */;
	struct mid_pwr_device_info *cocci_id/* arch/x86/platform/intel-mid/pwr.c 350 */;
	const struct pci_device_id *cocci_id/* arch/x86/platform/intel-mid/pwr.c 348 */;
	struct mid_pwr_device_info {
		int (*set_initial_state)(struct mid_pwr *pwr);
	} cocci_id/* arch/x86/platform/intel-mid/pwr.c 344 */;
	irqreturn_t cocci_id/* arch/x86/platform/intel-mid/pwr.c 329 */;
	void *cocci_id/* arch/x86/platform/intel-mid/pwr.c 329 */;
	u8 cocci_id/* arch/x86/platform/intel-mid/pwr.c 307 */;
	void cocci_id/* arch/x86/platform/intel-mid/pwr.c 290 */;
	const char *cocci_id/* arch/x86/platform/intel-mid/pwr.c 216 */;
	struct mid_pwr *cocci_id/* arch/x86/platform/intel-mid/pwr.c 213 */;
	int cocci_id/* arch/x86/platform/intel-mid/pwr.c 213 */;
	unsigned int cocci_id/* arch/x86/platform/intel-mid/pwr.c 187 */;
	struct pci_dev *cocci_id/* arch/x86/platform/intel-mid/pwr.c 183 */;
	pci_power_t cocci_id/* arch/x86/platform/intel-mid/pwr.c 182 */;
	struct mid_pwr_dev *cocci_id/* arch/x86/platform/intel-mid/pwr.c 182 */;
	u32 cocci_id/* arch/x86/platform/intel-mid/pwr.c 156 */;
	bool cocci_id/* arch/x86/platform/intel-mid/pwr.c 126 */;
}
