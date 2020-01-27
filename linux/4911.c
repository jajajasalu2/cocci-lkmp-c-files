cocci_test_suite() {
	const char *cocci_id/* drivers/infiniband/hw/mthca/mthca_eq.c 816 */[];
	enum{MTHCA_EVENT_TYPE_COMP=0x00, MTHCA_EVENT_TYPE_PATH_MIG=0x01, MTHCA_EVENT_TYPE_COMM_EST=0x02, MTHCA_EVENT_TYPE_SQ_DRAINED=0x03, MTHCA_EVENT_TYPE_SRQ_QP_LAST_WQE=0x13, MTHCA_EVENT_TYPE_SRQ_LIMIT=0x14, MTHCA_EVENT_TYPE_CQ_ERROR=0x04, MTHCA_EVENT_TYPE_WQ_CATAS_ERROR=0x05, MTHCA_EVENT_TYPE_EEC_CATAS_ERROR=0x06, MTHCA_EVENT_TYPE_PATH_MIG_FAILED=0x07, MTHCA_EVENT_TYPE_WQ_INVAL_REQ_ERROR=0x10, MTHCA_EVENT_TYPE_WQ_ACCESS_ERROR=0x11, MTHCA_EVENT_TYPE_SRQ_CATAS_ERROR=0x12, MTHCA_EVENT_TYPE_LOCAL_CATAS_ERROR=0x08, MTHCA_EVENT_TYPE_PORT_CHANGE=0x09, MTHCA_EVENT_TYPE_EQ_OVERFLOW=0x0f, MTHCA_EVENT_TYPE_ECC_DETECT=0x0e, MTHCA_EVENT_TYPE_CMD=0x0a,} cocci_id/* drivers/infiniband/hw/mthca/mthca_eq.c 80 */;
	phys_addr_t cocci_id/* drivers/infiniband/hw/mthca/mthca_eq.c 646 */;
	void __iomem **cocci_id/* drivers/infiniband/hw/mthca/mthca_eq.c 644 */;
	struct mthca_eq_context cocci_id/* drivers/infiniband/hw/mthca/mthca_eq.c 609 */;
	struct mthca_eq_context {
		__be32 flags;
		__be64 start;
		__be32 logsize_usrpage;
		__be32 tavor_pd;
		u8 reserved1[3];
		u8 intr;
		__be32 arbel_pd;
		__be32 lkey;
		u32 reserved2[2];
		__be32 consumer_index;
		__be32 producer_index;
		u32 reserved3[4];
	}__packed cocci_id/* drivers/infiniband/hw/mthca/mthca_eq.c 53 */;
	struct mthca_eq_context *cocci_id/* drivers/infiniband/hw/mthca/mthca_eq.c 474 */;
	struct mthca_mailbox *cocci_id/* drivers/infiniband/hw/mthca/mthca_eq.c 473 */;
	dma_addr_t cocci_id/* drivers/infiniband/hw/mthca/mthca_eq.c 472 */;
	u64 *cocci_id/* drivers/infiniband/hw/mthca/mthca_eq.c 471 */;
	u8 cocci_id/* drivers/infiniband/hw/mthca/mthca_eq.c 467 */;
	irqreturn_t cocci_id/* drivers/infiniband/hw/mthca/mthca_eq.c 431 */;
	void *cocci_id/* drivers/infiniband/hw/mthca/mthca_eq.c 431 */;
	enum{MTHCA_NUM_ASYNC_EQE=0x80, MTHCA_NUM_CMD_EQE=0x80, MTHCA_NUM_SPARE_EQE=0x80, MTHCA_EQ_ENTRY_SIZE=0x20,} cocci_id/* drivers/infiniband/hw/mthca/mthca_eq.c 43 */;
	struct ib_event cocci_id/* drivers/infiniband/hw/mthca/mthca_eq.c 248 */;
	unsigned long cocci_id/* drivers/infiniband/hw/mthca/mthca_eq.c 230 */;
	struct mthca_eqe *cocci_id/* drivers/infiniband/hw/mthca/mthca_eq.c 228 */;
	int cocci_id/* drivers/infiniband/hw/mthca/mthca_eq.c 219 */;
	u32 cocci_id/* drivers/infiniband/hw/mthca/mthca_eq.c 214 */;
	struct mthca_dev *cocci_id/* drivers/infiniband/hw/mthca/mthca_eq.c 214 */;
	void cocci_id/* drivers/infiniband/hw/mthca/mthca_eq.c 214 */;
	struct mthca_eq *cocci_id/* drivers/infiniband/hw/mthca/mthca_eq.c 189 */;
	u64 cocci_id/* drivers/infiniband/hw/mthca/mthca_eq.c 166 */;
	struct mthca_eqe {
		u8 reserved1;
		u8 type;
		u8 reserved2;
		u8 subtype;
		union {
			u32 raw[6];
			struct {
				__be32 cqn;
			}__packed comp;
			struct {
				u16 reserved1;
				__be16 token;
				u32 reserved2;
				u8 reserved3[3];
				u8 status;
				__be64 out_param;
			}__packed cmd;
			struct {
				__be32 qpn;
			}__packed qp;
			struct {
				__be32 srqn;
			}__packed srq;
			struct {
				__be32 cqn;
				u32 reserved1;
				u8 reserved2[3];
				u8 syndrome;
			}__packed cq_err;
			struct {
				u32 reserved1[2];
				__be32 port;
			}__packed port_change;
		} event;
		u8 reserved3[3];
		u8 owner;
	}__packed cocci_id/* drivers/infiniband/hw/mthca/mthca_eq.c 124 */;
}
