cocci_test_suite() {
	bool cocci_id/* drivers/firmware/tegra/ivc.c 89 */;
	dma_addr_t cocci_id/* drivers/firmware/tegra/ivc.c 80 */;
	void (*cocci_id/* drivers/firmware/tegra/ivc.c 615 */)(struct tegra_ivc *ivc,
							       void *data);
	struct device *cocci_id/* drivers/firmware/tegra/ivc.c 612 */;
	uint64_t cocci_id/* drivers/firmware/tegra/ivc.c 571 */;
	struct tegra_ivc_header cocci_id/* drivers/firmware/tegra/ivc.c 564 */;
	unsigned int cocci_id/* drivers/firmware/tegra/ivc.c 562 */;
	unsigned long cocci_id/* drivers/firmware/tegra/ivc.c 561 */;
	int cocci_id/* drivers/firmware/tegra/ivc.c 561 */;
	unsigned cocci_id/* drivers/firmware/tegra/ivc.c 549 */;
	size_t cocci_id/* drivers/firmware/tegra/ivc.c 543 */;
	struct tegra_ivc_header {
		union {
			struct {
				u32 count;
				u32 state;
			};
			u8 pad[TEGRA_IVC_ALIGN];
		} tx;
		union {
			u32 count;
			u8 pad[TEGRA_IVC_ALIGN];
		} rx;
	} cocci_id/* drivers/firmware/tegra/ivc.c 53 */;
	enum tegra_ivc_state cocci_id/* drivers/firmware/tegra/ivc.c 419 */;
	void *cocci_id/* drivers/firmware/tegra/ivc.c 217 */;
	struct tegra_ivc *cocci_id/* drivers/firmware/tegra/ivc.c 155 */;
	void cocci_id/* drivers/firmware/tegra/ivc.c 155 */;
	enum tegra_ivc_state{TEGRA_IVC_STATE_ESTABLISHED=0, TEGRA_IVC_STATE_SYNC, TEGRA_IVC_STATE_ACK,} cocci_id/* drivers/firmware/tegra/ivc.c 15 */;
	struct tegra_ivc_header *cocci_id/* drivers/firmware/tegra/ivc.c 130 */;
	u32 cocci_id/* drivers/firmware/tegra/ivc.c 129 */;
}
