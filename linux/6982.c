cocci_test_suite() {
	struct tegra_hsp {
		struct device *dev;
		const struct tegra_hsp_soc *soc;
		struct mbox_controller mbox_db;
		struct mbox_controller mbox_sm;
		void __iomem *regs;
		unsigned int doorbell_irq;
		unsigned int *shared_irqs;
		unsigned int shared_irq;
		unsigned int num_sm;
		unsigned int num_as;
		unsigned int num_ss;
		unsigned int num_db;
		unsigned int num_si;
		spinlock_t lock;
		struct list_head doorbells;
		struct tegra_hsp_mailbox *mailboxes;
		unsigned long mask;
	} cocci_id/* drivers/mailbox/tegra-hsp.c 85 */;
	int __init cocci_id/* drivers/mailbox/tegra-hsp.c 832 */;
	struct platform_driver cocci_id/* drivers/mailbox/tegra-hsp.c 823 */;
	const struct of_device_id cocci_id/* drivers/mailbox/tegra-hsp.c 817 */[];
	const struct tegra_hsp_soc cocci_id/* drivers/mailbox/tegra-hsp.c 807 */;
	const struct tegra_hsp_db_map cocci_id/* drivers/mailbox/tegra-hsp.c 801 */[];
	struct tegra_hsp_soc {
		const struct tegra_hsp_db_map *map;
		bool has_per_mb_ie;
	} cocci_id/* drivers/mailbox/tegra-hsp.c 80 */;
	const struct dev_pm_ops cocci_id/* drivers/mailbox/tegra-hsp.c 797 */;
	int __maybe_unused cocci_id/* drivers/mailbox/tegra-hsp.c 774 */;
	struct tegra_hsp_db_map {
		const char *name;
		unsigned int master;
		unsigned int index;
	} cocci_id/* drivers/mailbox/tegra-hsp.c 74 */;
	struct tegra_hsp_mailbox {
		struct tegra_hsp_channel channel;
		unsigned int index;
		bool producer;
	} cocci_id/* drivers/mailbox/tegra-hsp.c 68 */;
	char *cocci_id/* drivers/mailbox/tegra-hsp.c 674 */;
	struct resource *cocci_id/* drivers/mailbox/tegra-hsp.c 634 */;
	struct platform_device *cocci_id/* drivers/mailbox/tegra-hsp.c 631 */;
	struct tegra_hsp_doorbell {
		struct tegra_hsp_channel channel;
		struct list_head list;
		const char *name;
		unsigned int master;
		unsigned int index;
	} cocci_id/* drivers/mailbox/tegra-hsp.c 60 */;
	struct tegra_hsp_mailbox *cocci_id/* drivers/mailbox/tegra-hsp.c 582 */;
	struct device *cocci_id/* drivers/mailbox/tegra-hsp.c 572 */;
	struct tegra_hsp_channel *cocci_id/* drivers/mailbox/tegra-hsp.c 558 */;
	const struct tegra_hsp_db_map *cocci_id/* drivers/mailbox/tegra-hsp.c 557 */;
	int cocci_id/* drivers/mailbox/tegra-hsp.c 555 */;
	struct tegra_hsp_channel {
		struct tegra_hsp *hsp;
		struct mbox_chan *chan;
		void __iomem *regs;
	} cocci_id/* drivers/mailbox/tegra-hsp.c 54 */;
	struct tegra_hsp cocci_id/* drivers/mailbox/tegra-hsp.c 52 */;
	struct tegra_hsp_channel cocci_id/* drivers/mailbox/tegra-hsp.c 51 */;
	unsigned long cocci_id/* drivers/mailbox/tegra-hsp.c 501 */;
	const struct of_phandle_args *cocci_id/* drivers/mailbox/tegra-hsp.c 494 */;
	struct mbox_controller *cocci_id/* drivers/mailbox/tegra-hsp.c 493 */;
	struct mbox_chan *cocci_id/* drivers/mailbox/tegra-hsp.c 493 */;
	const struct mbox_chan_ops cocci_id/* drivers/mailbox/tegra-hsp.c 360 */;
	const char *cocci_id/* drivers/mailbox/tegra-hsp.c 269 */;
	irqreturn_t cocci_id/* drivers/mailbox/tegra-hsp.c 164 */;
	void *cocci_id/* drivers/mailbox/tegra-hsp.c 164 */;
	struct tegra_hsp *cocci_id/* drivers/mailbox/tegra-hsp.c 140 */;
	unsigned int cocci_id/* drivers/mailbox/tegra-hsp.c 140 */;
	struct tegra_hsp_doorbell *cocci_id/* drivers/mailbox/tegra-hsp.c 139 */;
	bool cocci_id/* drivers/mailbox/tegra-hsp.c 130 */;
	void cocci_id/* drivers/mailbox/tegra-hsp.c 124 */;
	u32 cocci_id/* drivers/mailbox/tegra-hsp.c 118 */;
}
