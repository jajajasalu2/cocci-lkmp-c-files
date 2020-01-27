cocci_test_suite() {
	struct tegra_ivc *cocci_id/* drivers/firmware/tegra/bpmp-tegra186.c 95 */;
	struct tegra_bpmp_channel *cocci_id/* drivers/firmware/tegra/bpmp-tegra186.c 71 */;
	int cocci_id/* drivers/firmware/tegra/bpmp-tegra186.c 71 */;
	bool cocci_id/* drivers/firmware/tegra/bpmp-tegra186.c 56 */;
	struct tegra186_bpmp cocci_id/* drivers/firmware/tegra/bpmp-tegra186.c 36 */;
	struct tegra186_bpmp *cocci_id/* drivers/firmware/tegra/bpmp-tegra186.c 34 */;
	struct mbox_client *cocci_id/* drivers/firmware/tegra/bpmp-tegra186.c 32 */;
	struct tegra_bpmp *cocci_id/* drivers/firmware/tegra/bpmp-tegra186.c 31 */;
	const struct tegra_bpmp_ops cocci_id/* drivers/firmware/tegra/bpmp-tegra186.c 292 */;
	unsigned long cocci_id/* drivers/firmware/tegra/bpmp-tegra186.c 274 */;
	struct tegra186_bpmp {
		struct tegra_bpmp *parent;
		struct {
			struct gen_pool *pool;
			dma_addr_t phys;
			void *virt;
		} tx,rx;
		struct {
			struct mbox_client client;
			struct mbox_chan *channel;
		} mbox;
	} cocci_id/* drivers/firmware/tegra/bpmp-tegra186.c 16 */;
	void *cocci_id/* drivers/firmware/tegra/bpmp-tegra186.c 156 */;
	void cocci_id/* drivers/firmware/tegra/bpmp-tegra186.c 156 */;
	size_t cocci_id/* drivers/firmware/tegra/bpmp-tegra186.c 111 */;
	unsigned int cocci_id/* drivers/firmware/tegra/bpmp-tegra186.c 108 */;
}
