cocci_test_suite() {
	struct iTCO_wdt_private {
		struct watchdog_device wddev;
		unsigned int iTCO_version;
		struct resource *tco_res;
		struct resource *smi_res;
		struct resource *gcs_pmc_res;
		unsigned long __iomem *gcs_pmc;
		spinlock_t io_lock;
		struct pci_dev *pci_dev;
		bool suspended;
		void *no_reboot_priv;
		int (*update_no_reboot_bit)(void *p, bool set);
	} cocci_id/* drivers/watchdog/iTCO_wdt.c 87 */;
	void __exit cocci_id/* drivers/watchdog/iTCO_wdt.c 644 */;
	void cocci_id/* drivers/watchdog/iTCO_wdt.c 644 */;
	int __init cocci_id/* drivers/watchdog/iTCO_wdt.c 637 */;
	struct platform_driver cocci_id/* drivers/watchdog/iTCO_wdt.c 629 */;
	const struct dev_pm_ops cocci_id/* drivers/watchdog/iTCO_wdt.c 619 */;
	bool cocci_id/* drivers/watchdog/iTCO_wdt.c 587 */;
	u64 cocci_id/* drivers/watchdog/iTCO_wdt.c 500 */;
	unsigned long cocci_id/* drivers/watchdog/iTCO_wdt.c 446 */;
	struct device *cocci_id/* drivers/watchdog/iTCO_wdt.c 443 */;
	struct platform_device *cocci_id/* drivers/watchdog/iTCO_wdt.c 441 */;
	const struct watchdog_ops cocci_id/* drivers/watchdog/iTCO_wdt.c 428 */;
	const struct watchdog_info cocci_id/* drivers/watchdog/iTCO_wdt.c 420 */;
	unsigned char cocci_id/* drivers/watchdog/iTCO_wdt.c 392 */;
	struct iTCO_wdt_private *cocci_id/* drivers/watchdog/iTCO_wdt.c 390 */;
	struct watchdog_device *cocci_id/* drivers/watchdog/iTCO_wdt.c 388 */;
	unsigned int cocci_id/* drivers/watchdog/iTCO_wdt.c 388 */;
	struct itco_wdt_platform_data *cocci_id/* drivers/watchdog/iTCO_wdt.c 237 */;
	u16 cocci_id/* drivers/watchdog/iTCO_wdt.c 222 */;
	void *cocci_id/* drivers/watchdog/iTCO_wdt.c 219 */;
	u32 cocci_id/* drivers/watchdog/iTCO_wdt.c 152 */;
	int cocci_id/* drivers/watchdog/iTCO_wdt.c 114 */;
}
