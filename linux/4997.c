cocci_test_suite() {
	u32 cocci_id/* drivers/infiniband/hw/hfi1/user_sdma.c 99 */(struct hfi1_pkt_header,
								    u32 len);
	u32 cocci_id/* drivers/infiniband/hw/hfi1/user_sdma.c 98 */(__be32 bthpsn,
								    u8 expct,
								    u32 frags);
	struct page **cocci_id/* drivers/infiniband/hw/hfi1/user_sdma.c 951 */;
	struct sdma_mmu_node *cocci_id/* drivers/infiniband/hw/hfi1/user_sdma.c 947 */;
	struct user_sdma_iovec *cocci_id/* drivers/infiniband/hw/hfi1/user_sdma.c 946 */;
	void cocci_id/* drivers/infiniband/hw/hfi1/user_sdma.c 94 */(struct hfi1_user_sdma_pkt_q *pq,
								     struct hfi1_user_sdma_comp_q *cq,
								     u16 idx,
								     enum hfi1_sdma_comp_state state,
								     int ret);
	struct evict_data cocci_id/* drivers/infiniband/hw/hfi1/user_sdma.c 937 */;
	int cocci_id/* drivers/infiniband/hw/hfi1/user_sdma.c 92 */(struct user_sdma_request *req,
								    struct user_sdma_txreq *tx,
								    u32 len);
	int cocci_id/* drivers/infiniband/hw/hfi1/user_sdma.c 90 */(struct user_sdma_request *req,
								    struct user_sdma_txreq *tx,
								    u32 datalen);
	int cocci_id/* drivers/infiniband/hw/hfi1/user_sdma.c 87 */(struct user_sdma_request *req,
								    struct hfi1_pkt_header *hdr,
								    u32 lrhlen,
								    u32 datalen);
	void cocci_id/* drivers/infiniband/hw/hfi1/user_sdma.c 85 */(struct mm_struct *mm,
								     struct page **pages,
								     unsigned start,
								     unsigned npages);
	int cocci_id/* drivers/infiniband/hw/hfi1/user_sdma.c 83 */(struct user_sdma_request *req,
								    struct user_sdma_iovec *iovec);
	void cocci_id/* drivers/infiniband/hw/hfi1/user_sdma.c 82 */(struct user_sdma_request *req,
								     bool unpin);
	void cocci_id/* drivers/infiniband/hw/hfi1/user_sdma.c 81 */(struct hfi1_user_sdma_pkt_q *pq);
	void cocci_id/* drivers/infiniband/hw/hfi1/user_sdma.c 80 */(struct sdma_txreq *txreq,
								     int status);
	int cocci_id/* drivers/infiniband/hw/hfi1/user_sdma.c 79 */(struct user_sdma_request *req,
								    u16 maxpkts);
	u64 cocci_id/* drivers/infiniband/hw/hfi1/user_sdma.c 788 */;
	unsigned cocci_id/* drivers/infiniband/hw/hfi1/user_sdma.c 77 */;
	unsigned int cocci_id/* drivers/infiniband/hw/hfi1/user_sdma.c 721 */;
	u64 *cocci_id/* drivers/infiniband/hw/hfi1/user_sdma.c 718 */;
	struct hfi1_pkt_header cocci_id/* drivers/infiniband/hw/hfi1/user_sdma.c 672 */;
	struct user_sdma_txreq *cocci_id/* drivers/infiniband/hw/hfi1/user_sdma.c 610 */;
	u32 *cocci_id/* drivers/infiniband/hw/hfi1/user_sdma.c 524 */;
	u16 *cocci_id/* drivers/infiniband/hw/hfi1/user_sdma.c 353 */;
	struct sdma_req_info cocci_id/* drivers/infiniband/hw/hfi1/user_sdma.c 329 */;
	unsigned long *cocci_id/* drivers/infiniband/hw/hfi1/user_sdma.c 320 */;
	struct iovec *cocci_id/* drivers/infiniband/hw/hfi1/user_sdma.c 319 */;
	unsigned long cocci_id/* drivers/infiniband/hw/hfi1/user_sdma.c 319 */;
	u8 cocci_id/* drivers/infiniband/hw/hfi1/user_sdma.c 292 */[256];
	u8 cocci_id/* drivers/infiniband/hw/hfi1/user_sdma.c 290 */;
	u16 cocci_id/* drivers/infiniband/hw/hfi1/user_sdma.c 290 */;
	struct user_sdma_txreq cocci_id/* drivers/infiniband/hw/hfi1/user_sdma.c 211 */;
	struct hfi1_user_sdma_comp_q *cocci_id/* drivers/infiniband/hw/hfi1/user_sdma.c 168 */;
	struct hfi1_devdata *cocci_id/* drivers/infiniband/hw/hfi1/user_sdma.c 167 */;
	char cocci_id/* drivers/infiniband/hw/hfi1/user_sdma.c 166 */[64];
	struct hfi1_filedata *cocci_id/* drivers/infiniband/hw/hfi1/user_sdma.c 163 */;
	struct hfi1_ctxtdata *cocci_id/* drivers/infiniband/hw/hfi1/user_sdma.c 162 */;
	struct hfi1_user_sdma_pkt_q cocci_id/* drivers/infiniband/hw/hfi1/user_sdma.c 157 */;
	struct hfi1_user_sdma_pkt_q *cocci_id/* drivers/infiniband/hw/hfi1/user_sdma.c 156 */;
	struct iowait *cocci_id/* drivers/infiniband/hw/hfi1/user_sdma.c 154 */;
	int cocci_id/* drivers/infiniband/hw/hfi1/user_sdma.c 154 */;
	void cocci_id/* drivers/infiniband/hw/hfi1/user_sdma.c 154 */;
	struct evict_data *cocci_id/* drivers/infiniband/hw/hfi1/user_sdma.c 1489 */;
	bool *cocci_id/* drivers/infiniband/hw/hfi1/user_sdma.c 1485 */;
	void *cocci_id/* drivers/infiniband/hw/hfi1/user_sdma.c 1484 */;
	enum hfi1_sdma_comp_state cocci_id/* drivers/infiniband/hw/hfi1/user_sdma.c 1453 */;
	__le16 cocci_id/* drivers/infiniband/hw/hfi1/user_sdma.c 1299 */;
	bool cocci_id/* drivers/infiniband/hw/hfi1/user_sdma.c 129 */;
	uint cocci_id/* drivers/infiniband/hw/hfi1/user_sdma.c 128 */;
	struct sdma_txreq *cocci_id/* drivers/infiniband/hw/hfi1/user_sdma.c 127 */;
	struct iowait_work *cocci_id/* drivers/infiniband/hw/hfi1/user_sdma.c 126 */;
	size_t cocci_id/* drivers/infiniband/hw/hfi1/user_sdma.c 1258 */;
	u32 cocci_id/* drivers/infiniband/hw/hfi1/user_sdma.c 1251 */[AHG_KDETH_ARRAY_SIZE];
	struct sdma_engine *cocci_id/* drivers/infiniband/hw/hfi1/user_sdma.c 125 */;
	struct mmu_rb_ops cocci_id/* drivers/infiniband/hw/hfi1/user_sdma.c 116 */;
	void cocci_id/* drivers/infiniband/hw/hfi1/user_sdma.c 113 */(void *arg,
								      struct mmu_rb_node *mnode);
	__be32 cocci_id/* drivers/infiniband/hw/hfi1/user_sdma.c 1120 */;
	int cocci_id/* drivers/infiniband/hw/hfi1/user_sdma.c 111 */(void *arg,
								     struct mmu_rb_node *mnode,
								     void *arg2,
								     bool *stop);
	int cocci_id/* drivers/infiniband/hw/hfi1/user_sdma.c 110 */(void *arg,
								     struct mmu_rb_node *mnode);
	__le32 cocci_id/* drivers/infiniband/hw/hfi1/user_sdma.c 1094 */;
	bool cocci_id/* drivers/infiniband/hw/hfi1/user_sdma.c 108 */(struct mmu_rb_node *node,
								      unsigned long addr,
								      unsigned long len);
	void cocci_id/* drivers/infiniband/hw/hfi1/user_sdma.c 107 */(struct iowait *wait,
								      int reason);
	u32 cocci_id/* drivers/infiniband/hw/hfi1/user_sdma.c 1065 */;
	struct hfi1_pkt_header *cocci_id/* drivers/infiniband/hw/hfi1/user_sdma.c 1065 */;
	struct user_sdma_request *cocci_id/* drivers/infiniband/hw/hfi1/user_sdma.c 1064 */;
	struct mm_struct *cocci_id/* drivers/infiniband/hw/hfi1/user_sdma.c 1057 */;
	struct sdma_mmu_node cocci_id/* drivers/infiniband/hw/hfi1/user_sdma.c 1010 */;
	int cocci_id/* drivers/infiniband/hw/hfi1/user_sdma.c 101 */(struct sdma_engine *sde,
								     struct iowait_work *wait,
								     struct sdma_txreq *txreq,
								     uint seq,
								     bool pkts_sent);
	struct mmu_rb_node *cocci_id/* drivers/infiniband/hw/hfi1/user_sdma.c 1000 */;
}
