cocci_test_suite() {
	void __iomem *cocci_id/* drivers/mfd/sta2x11-mfd.c 98 */;
	unsigned long cocci_id/* drivers/mfd/sta2x11-mfd.c 97 */;
	struct sta2x11_mfd *cocci_id/* drivers/mfd/sta2x11-mfd.c 95 */;
	enum sta2x11_mfd_plat_dev cocci_id/* drivers/mfd/sta2x11-mfd.c 93 */;
	u32 cocci_id/* drivers/mfd/sta2x11-mfd.c 92 */;
	struct pci_dev *cocci_id/* drivers/mfd/sta2x11-mfd.c 92 */;
	struct sta2x11_instance *cocci_id/* drivers/mfd/sta2x11-mfd.c 73 */;
	gfp_t cocci_id/* drivers/mfd/sta2x11-mfd.c 69 */;
	struct pci_driver cocci_id/* drivers/mfd/sta2x11-mfd.c 624 */;
	const struct pci_device_id cocci_id/* drivers/mfd/sta2x11-mfd.c 618 */[];
	struct sta2x11_mfd_setup_data *cocci_id/* drivers/mfd/sta2x11-mfd.c 570 */;
	const struct pci_device_id *cocci_id/* drivers/mfd/sta2x11-mfd.c 567 */;
	struct sta2x11_mfd cocci_id/* drivers/mfd/sta2x11-mfd.c 56 */;
	struct sta2x11_mfd_setup_data cocci_id/* drivers/mfd/sta2x11-mfd.c 526 */[];
	struct sta2x11_mfd_setup_data {
		struct sta2x11_mfd_bar_setup_data bars[2];
	} cocci_id/* drivers/mfd/sta2x11-mfd.c 519 */;
	struct sta2x11_mfd_bar_setup_data {
		struct mfd_cell *cells;
		int ncells;
	} cocci_id/* drivers/mfd/sta2x11-mfd.c 514 */;
	pm_message_t cocci_id/* drivers/mfd/sta2x11-mfd.c 492 */;
	const struct resource cocci_id/* drivers/mfd/sta2x11-mfd.c 479 */[];
	enum mfd1_bar1_cells{STA2X11_APB_SOC_REGS=0,} cocci_id/* drivers/mfd/sta2x11-mfd.c 471 */;
	enum mfd1_bar0_cells{STA2X11_VIC=0,} cocci_id/* drivers/mfd/sta2x11-mfd.c 466 */;
	struct mfd_cell cocci_id/* drivers/mfd/sta2x11-mfd.c 451 */[];
	enum mfd0_bar1_cells{STA2X11_APBREG=0,} cocci_id/* drivers/mfd/sta2x11-mfd.c 416 */;
	enum mfd0_bar0_cells{STA2X11_GPIO_0=0, STA2X11_GPIO_1, STA2X11_GPIO_2, STA2X11_GPIO_3, STA2X11_SCTL, STA2X11_SCR, STA2X11_TIME,} cocci_id/* drivers/mfd/sta2x11-mfd.c 406 */;
	int __init cocci_id/* drivers/mfd/sta2x11-mfd.c 393 */;
	void cocci_id/* drivers/mfd/sta2x11-mfd.c 393 */;
	struct platform_driver *constcocci_id/* drivers/mfd/sta2x11-mfd.c 386 */[];
	struct platform_driver cocci_id/* drivers/mfd/sta2x11-mfd.c 372 */;
	struct sta2x11_mfd {
		struct sta2x11_instance *instance;
		struct regmap *regmap[sta2x11_n_mfd_plat_devs];
		spinlock_t lock[sta2x11_n_mfd_plat_devs];
		struct list_head list;
		void __iomem *regs[sta2x11_n_mfd_plat_devs];
	} cocci_id/* drivers/mfd/sta2x11-mfd.c 36 */;
	struct platform_device *cocci_id/* drivers/mfd/sta2x11-mfd.c 347 */;
	struct regmap_config *cocci_id/* drivers/mfd/sta2x11-mfd.c 303 */;
	const char *cocci_id/* drivers/mfd/sta2x11-mfd.c 302 */;
	struct resource *cocci_id/* drivers/mfd/sta2x11-mfd.c 301 */;
	struct regmap_config *cocci_id/* drivers/mfd/sta2x11-mfd.c 286 */[sta2x11_n_mfd_plat_devs];
	unsigned int cocci_id/* drivers/mfd/sta2x11-mfd.c 28 */;
	int cocci_id/* drivers/mfd/sta2x11-mfd.c 28 */;
	struct regmap_config cocci_id/* drivers/mfd/sta2x11-mfd.c 275 */;
	bool cocci_id/* drivers/mfd/sta2x11-mfd.c 247 */;
	struct device *cocci_id/* drivers/mfd/sta2x11-mfd.c 247 */;
	const char *cocci_id/* drivers/mfd/sta2x11-mfd.c 164 */[sta2x11_n_mfd_plat_devs];
	spinlock_t *cocci_id/* drivers/mfd/sta2x11-mfd.c 149 */;
	void *cocci_id/* drivers/mfd/sta2x11-mfd.c 147 */;
	struct pci_dev **cocci_id/* drivers/mfd/sta2x11-mfd.c 126 */;
	spinlock_t **cocci_id/* drivers/mfd/sta2x11-mfd.c 124 */;
	void __iomem **cocci_id/* drivers/mfd/sta2x11-mfd.c 123 */;
}
