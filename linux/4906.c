cocci_test_suite() {
	enum ib_rate cocci_id/* drivers/infiniband/hw/mthca/mthca_av.c 69 */;
	struct mthca_av {
		__be32 port_pd;
		u8 reserved1;
		u8 g_slid;
		__be16 dlid;
		u8 reserved2;
		u8 gid_index;
		u8 msg_sr;
		u8 hop_limit;
		__be32 sl_tclass_flowlabel;
		__be32 dgid[4];
	} cocci_id/* drivers/infiniband/hw/mthca/mthca_av.c 56 */;
	enum{MTHCA_RATE_MEMFREE_FULL=0, MTHCA_RATE_MEMFREE_QUARTER=1, MTHCA_RATE_MEMFREE_EIGHTH=2, MTHCA_RATE_MEMFREE_HALF=3,} cocci_id/* drivers/infiniband/hw/mthca/mthca_av.c 49 */;
	enum{MTHCA_RATE_TAVOR_FULL=0, MTHCA_RATE_TAVOR_1X=1, MTHCA_RATE_TAVOR_4X=2, MTHCA_RATE_TAVOR_1X_DDR=3,} cocci_id/* drivers/infiniband/hw/mthca/mthca_av.c 42 */;
	void cocci_id/* drivers/infiniband/hw/mthca/mthca_av.c 367 */;
	u32 cocci_id/* drivers/infiniband/hw/mthca/mthca_av.c 312 */;
	struct mthca_dev *cocci_id/* drivers/infiniband/hw/mthca/mthca_av.c 295 */;
	struct rdma_ah_attr *cocci_id/* drivers/infiniband/hw/mthca/mthca_av.c 292 */;
	struct ib_ah *cocci_id/* drivers/infiniband/hw/mthca/mthca_av.c 292 */;
	struct ib_ud_header *cocci_id/* drivers/infiniband/hw/mthca/mthca_av.c 270 */;
	struct mthca_ah *cocci_id/* drivers/infiniband/hw/mthca/mthca_av.c 264 */;
	int cocci_id/* drivers/infiniband/hw/mthca/mthca_av.c 264 */;
	__be32 *cocci_id/* drivers/infiniband/hw/mthca/mthca_av.c 231 */;
	unsigned long cocci_id/* drivers/infiniband/hw/mthca/mthca_av.c 228 */;
	const struct ib_global_route *cocci_id/* drivers/infiniband/hw/mthca/mthca_av.c 208 */;
	struct mthca_av *cocci_id/* drivers/infiniband/hw/mthca/mthca_av.c 159 */;
	struct mthca_pd *cocci_id/* drivers/infiniband/hw/mthca/mthca_av.c 154 */;
	u8 cocci_id/* drivers/infiniband/hw/mthca/mthca_av.c 106 */;
}
