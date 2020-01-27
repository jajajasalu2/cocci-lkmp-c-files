cocci_test_suite() {
	struct ioat_dca_priv {
		void __iomem *iobase;
		void __iomem *dca_base;
		int max_requesters;
		int requester_count;
		u8 tag_map[IOAT_TAG_MAP_LEN];
		struct ioat_dca_slot req_slots[0];
	} cocci_id/* drivers/dma/ioat/dca.c 99 */;
	struct ioat_dca_slot {
		struct pci_dev *pdev;
		u16 rid;
	} cocci_id/* drivers/dma/ioat/dca.c 91 */;
	unsigned long cocci_id/* drivers/dma/ioat/dca.c 71 */;
	struct pci_dev *cocci_id/* drivers/dma/ioat/dca.c 67 */;
	u16 cocci_id/* drivers/dma/ioat/dca.c 62 */;
	u8 *cocci_id/* drivers/dma/ioat/dca.c 44 */;
	int cocci_id/* drivers/dma/ioat/dca.c 44 */;
	union {
		u64 full;
		struct {
			u32 low;
			u32 high;
		};
	} cocci_id/* drivers/dma/ioat/dca.c 269 */;
	void __iomem *cocci_id/* drivers/dma/ioat/dca.c 257 */;
	u32 cocci_id/* drivers/dma/ioat/dca.c 225 */;
	void *cocci_id/* drivers/dma/ioat/dca.c 222 */;
	const struct dca_ops cocci_id/* drivers/dma/ioat/dca.c 215 */;
	u8 cocci_id/* drivers/dma/ioat/dca.c 184 */;
	struct ioat_dca_priv *cocci_id/* drivers/dma/ioat/dca.c 125 */;
	struct device *cocci_id/* drivers/dma/ioat/dca.c 123 */;
	struct dca_provider *cocci_id/* drivers/dma/ioat/dca.c 123 */;
}
