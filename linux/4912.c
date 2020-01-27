cocci_test_suite() {
	phys_addr_t cocci_id/* drivers/infiniband/hw/mthca/mthca_mr.c 829 */;
	u8 *cocci_id/* drivers/infiniband/hw/mthca/mthca_mr.c 824 */;
	struct mthca_fmr *cocci_id/* drivers/infiniband/hw/mthca/mthca_mr.c 817 */;
	void cocci_id/* drivers/infiniband/hw/mthca/mthca_mr.c 817 */;
	u64 cocci_id/* drivers/infiniband/hw/mthca/mthca_mr.c 759 */;
	struct ib_fmr *cocci_id/* drivers/infiniband/hw/mthca/mthca_mr.c 758 */;
	__be64 cocci_id/* drivers/infiniband/hw/mthca/mthca_mr.c 739 */;
	__be32 *cocci_id/* drivers/infiniband/hw/mthca/mthca_mr.c 648 */;
	struct mthca_mpt_entry cocci_id/* drivers/infiniband/hw/mthca/mthca_mr.c 640 */;
	struct mthca_mpt_entry *cocci_id/* drivers/infiniband/hw/mthca/mthca_mr.c 570 */;
	struct mthca_mr *cocci_id/* drivers/infiniband/hw/mthca/mthca_mr.c 553 */;
	struct mthca_mpt_entry {
		__be32 flags;
		__be32 page_size;
		__be32 key;
		__be32 pd;
		__be64 start;
		__be64 length;
		__be32 lkey;
		__be32 window_count;
		__be32 window_count_limit;
		__be64 mtt_seg;
		__be32 mtt_sz;
		u32 reserved[2];
	}__packed cocci_id/* drivers/infiniband/hw/mthca/mthca_mr.c 50 */;
	u32 cocci_id/* drivers/infiniband/hw/mthca/mthca_mr.c 421 */;
	struct mthca_mtt {
		struct mthca_buddy *buddy;
		int order;
		u32 first_seg;
	} cocci_id/* drivers/infiniband/hw/mthca/mthca_mr.c 41 */;
	dma_addr_t cocci_id/* drivers/infiniband/hw/mthca/mthca_mr.c 334 */;
	u64 __iomem *cocci_id/* drivers/infiniband/hw/mthca/mthca_mr.c 319 */;
	__be64 *cocci_id/* drivers/infiniband/hw/mthca/mthca_mr.c 258 */;
	struct mthca_mailbox *cocci_id/* drivers/infiniband/hw/mthca/mthca_mr.c 257 */;
	u64 *cocci_id/* drivers/infiniband/hw/mthca/mthca_mr.c 255 */;
	struct mthca_buddy *cocci_id/* drivers/infiniband/hw/mthca/mthca_mr.c 209 */;
	struct mthca_mtt *cocci_id/* drivers/infiniband/hw/mthca/mthca_mr.c 208 */;
	struct mthca_dev *cocci_id/* drivers/infiniband/hw/mthca/mthca_mr.c 208 */;
	int cocci_id/* drivers/infiniband/hw/mthca/mthca_mr.c 208 */;
	long cocci_id/* drivers/infiniband/hw/mthca/mthca_mr.c 156 */;
	long *cocci_id/* drivers/infiniband/hw/mthca/mthca_mr.c 147 */;
}
