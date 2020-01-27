cocci_test_suite() {
	struct sock *cocci_id/* drivers/nvme/host/tcp.c 785 */;
	read_descriptor_t *cocci_id/* drivers/nvme/host/tcp.c 752 */;
	unsigned int *cocci_id/* drivers/nvme/host/tcp.c 636 */;
	size_t *cocci_id/* drivers/nvme/host/tcp.c 636 */;
	struct sk_buff *cocci_id/* drivers/nvme/host/tcp.c 635 */;
	union nvme_result cocci_id/* drivers/nvme/host/tcp.c 630 */;
	u16 cocci_id/* drivers/nvme/host/tcp.c 628 */;
	struct request *cocci_id/* drivers/nvme/host/tcp.c 628 */;
	struct nvme_tcp_queue {
		struct socket *sock;
		struct work_struct io_work;
		int io_cpu;
		spinlock_t lock;
		struct list_head send_list;
		void *pdu;
		int pdu_remaining;
		int pdu_offset;
		size_t data_remaining;
		size_t ddgst_remaining;
		unsigned int nr_cqe;
		struct nvme_tcp_request *request;
		int queue_size;
		size_t cmnd_capsule_len;
		struct nvme_tcp_ctrl *ctrl;
		unsigned long flags;
		bool rd_enabled;
		bool hdr_digest;
		bool data_digest;
		struct ahash_request *rcv_hash;
		struct ahash_request *snd_hash;
		__le32 exp_ddgst;
		__le32 recv_ddgst;
		struct page_frag_cache pf_cache;
		void (*state_change)(struct sock *);
		void (*data_ready)(struct sock *);
		void (*write_space)(struct sock *);
	} cocci_id/* drivers/nvme/host/tcp.c 62 */;
	struct nvme_tcp_r2t_pdu *cocci_id/* drivers/nvme/host/tcp.c 551 */;
	enum nvme_tcp_recv_state{NVME_TCP_RECV_PDU=0, NVME_TCP_RECV_DATA, NVME_TCP_RECV_DDGST,} cocci_id/* drivers/nvme/host/tcp.c 55 */;
	enum nvme_tcp_queue_flags{NVME_TCP_Q_ALLOCATED=0, NVME_TCP_Q_LIVE=1,} cocci_id/* drivers/nvme/host/tcp.c 50 */;
	struct nvme_completion *cocci_id/* drivers/nvme/host/tcp.c 485 */;
	struct nvme_tcp_rsp_pdu *cocci_id/* drivers/nvme/host/tcp.c 483 */;
	struct nvme_tcp_data_pdu *cocci_id/* drivers/nvme/host/tcp.c 449 */;
	enum nvme_tcp_recv_state cocci_id/* drivers/nvme/host/tcp.c 403 */;
	struct blk_mq_hw_ctx *cocci_id/* drivers/nvme/host/tcp.c 393 */;
	u32 cocci_id/* drivers/nvme/host/tcp.c 337 */;
	struct nvme_tcp_hdr *cocci_id/* drivers/nvme/host/tcp.c 335 */;
	void *cocci_id/* drivers/nvme/host/tcp.c 333 */;
	__le32 cocci_id/* drivers/nvme/host/tcp.c 310 */;
	struct nvme_tcp_request {
		struct nvme_request req;
		void *pdu;
		struct nvme_tcp_queue *queue;
		u32 data_len;
		u32 pdu_len;
		u32 pdu_sent;
		u16 ttag;
		struct list_head entry;
		__le32 ddgst;
		struct bio *curr_bio;
		struct iov_iter iter;
		size_t offset;
		size_t data_sent;
		enum nvme_tcp_send_state state;
	} cocci_id/* drivers/nvme/host/tcp.c 30 */;
	struct scatterlist cocci_id/* drivers/nvme/host/tcp.c 288 */;
	off_t cocci_id/* drivers/nvme/host/tcp.c 286 */;
	struct page *cocci_id/* drivers/nvme/host/tcp.c 286 */;
	u8 *cocci_id/* drivers/nvme/host/tcp.c 281 */;
	__le32 *cocci_id/* drivers/nvme/host/tcp.c 279 */;
	struct ahash_request *cocci_id/* drivers/nvme/host/tcp.c 278 */;
	void __exit cocci_id/* drivers/nvme/host/tcp.c 2401 */;
	int __init cocci_id/* drivers/nvme/host/tcp.c 2390 */;
	struct nvme_tcp_request *cocci_id/* drivers/nvme/host/tcp.c 239 */;
	struct nvmf_transport_ops cocci_id/* drivers/nvme/host/tcp.c 2378 */;
	enum nvme_tcp_send_state{NVME_TCP_SEND_CMD_PDU=0, NVME_TCP_SEND_H2C_PDU, NVME_TCP_SEND_DATA, NVME_TCP_SEND_DDGST,} cocci_id/* drivers/nvme/host/tcp.c 23 */;
	struct nvmf_ctrl_options *cocci_id/* drivers/nvme/host/tcp.c 2279 */;
	struct device *cocci_id/* drivers/nvme/host/tcp.c 2278 */;
	struct bio *cocci_id/* drivers/nvme/host/tcp.c 227 */;
	const struct nvme_ctrl_ops cocci_id/* drivers/nvme/host/tcp.c 2248 */;
	struct bio_vec *cocci_id/* drivers/nvme/host/tcp.c 216 */;
	struct nvme_ns *cocci_id/* drivers/nvme/host/tcp.c 2151 */;
	const struct blk_mq_queue_data *cocci_id/* drivers/nvme/host/tcp.c 2149 */;
	struct nvme_command *cocci_id/* drivers/nvme/host/tcp.c 2084 */;
	struct nvme_tcp_cmd_pdu *cocci_id/* drivers/nvme/host/tcp.c 2083 */;
	blk_status_t cocci_id/* drivers/nvme/host/tcp.c 2079 */;
	enum blk_eh_timer_return cocci_id/* drivers/nvme/host/tcp.c 2042 */;
	struct nvme_sgl_desc *cocci_id/* drivers/nvme/host/tcp.c 2006 */;
	struct nvme_ctrl cocci_id/* drivers/nvme/host/tcp.c 1945 */;
	struct work_struct *cocci_id/* drivers/nvme/host/tcp.c 1942 */;
	struct nvme_tcp_ctrl cocci_id/* drivers/nvme/host/tcp.c 1904 */;
	unsigned int cocci_id/* drivers/nvme/host/tcp.c 1631 */;
	struct nvme_ctrl *cocci_id/* drivers/nvme/host/tcp.c 1563 */;
	int cocci_id/* drivers/nvme/host/tcp.c 1563 */;
	struct nvme_tcp_request cocci_id/* drivers/nvme/host/tcp.c 1474 */;
	bool cocci_id/* drivers/nvme/host/tcp.c 1461 */;
	struct blk_mq_tag_set *cocci_id/* drivers/nvme/host/tcp.c 1460 */;
	struct nvme_tcp_queue *cocci_id/* drivers/nvme/host/tcp.c 1421 */;
	void cocci_id/* drivers/nvme/host/tcp.c 1421 */;
	struct socket *cocci_id/* drivers/nvme/host/tcp.c 1411 */;
	struct nvme_tcp_rsp_pdu cocci_id/* drivers/nvme/host/tcp.c 1354 */;
	struct blk_mq_tags *cocci_id/* drivers/nvme/host/tcp.c 135 */;
	struct sockaddr *cocci_id/* drivers/nvme/host/tcp.c 1333 */;
	char *cocci_id/* drivers/nvme/host/tcp.c 1277 */;
	struct nvme_command cocci_id/* drivers/nvme/host/tcp.c 1263 */;
	struct linger cocci_id/* drivers/nvme/host/tcp.c 1251 */;
	size_t cocci_id/* drivers/nvme/host/tcp.c 1247 */;
	struct blk_mq_ops cocci_id/* drivers/nvme/host/tcp.c 123 */;
	struct workqueue_struct *cocci_id/* drivers/nvme/host/tcp.c 121 */;
	struct kvec cocci_id/* drivers/nvme/host/tcp.c 1153 */;
	struct msghdr cocci_id/* drivers/nvme/host/tcp.c 1152 */;
	struct nvme_tcp_icresp_pdu *cocci_id/* drivers/nvme/host/tcp.c 1151 */;
	struct nvme_tcp_icreq_pdu *cocci_id/* drivers/nvme/host/tcp.c 1150 */;
	struct nvme_tcp_cmd_pdu cocci_id/* drivers/nvme/host/tcp.c 1124 */;
	u8 cocci_id/* drivers/nvme/host/tcp.c 1121 */;
	struct nvme_tcp_ctrl *cocci_id/* drivers/nvme/host/tcp.c 1117 */;
	struct crypto_ahash *cocci_id/* drivers/nvme/host/tcp.c 1086 */;
	unsigned long cocci_id/* drivers/nvme/host/tcp.c 1045 */;
	struct nvme_tcp_queue cocci_id/* drivers/nvme/host/tcp.c 1044 */;
	read_descriptor_t cocci_id/* drivers/nvme/host/tcp.c 1029 */;
	struct nvme_tcp_ctrl {
		struct nvme_tcp_queue *queues;
		struct blk_mq_tag_set tag_set;
		struct list_head list;
		struct blk_mq_tag_set admin_tag_set;
		struct sockaddr_storage addr;
		struct sockaddr_storage src_addr;
		struct nvme_ctrl ctrl;
		struct work_struct err_work;
		struct delayed_work connect_work;
		struct nvme_tcp_request async_req;
		u32 io_queues[HCTX_MAX_TYPES];
	} cocci_id/* drivers/nvme/host/tcp.c 101 */;
}
