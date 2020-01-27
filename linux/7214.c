cocci_test_suite() {
	struct nvme_tcp_data_pdu cocci_id/* drivers/nvme/target/tcp.c 942 */;
	struct nvme_tcp_cmd_pdu cocci_id/* drivers/nvme/target/tcp.c 941 */;
	struct nvme_tcp_icreq_pdu cocci_id/* drivers/nvme/target/tcp.c 940 */;
	const u8 cocci_id/* drivers/nvme/target/tcp.c 939 */[];
	struct nvme_command *cocci_id/* drivers/nvme/target/tcp.c 866 */;
	struct nvmet_tcp_queue {
		struct socket *sock;
		struct nvmet_tcp_port *port;
		struct work_struct io_work;
		int cpu;
		struct nvmet_cq nvme_cq;
		struct nvmet_sq nvme_sq;
		struct nvmet_tcp_cmd *cmds;
		unsigned int nr_cmds;
		struct list_head free_list;
		struct llist_head resp_list;
		struct list_head resp_send_list;
		int send_list_len;
		struct nvmet_tcp_cmd *snd_cmd;
		int offset;
		int left;
		enum nvmet_tcp_recv_state rcv_state;
		struct nvmet_tcp_cmd *cmd;
		union nvme_tcp_pdu pdu;
		bool hdr_digest;
		bool data_digest;
		struct ahash_request *snd_hash;
		struct ahash_request *rcv_hash;
		spinlock_t state_lock;
		enum nvmet_tcp_queue_state state;
		struct sockaddr_storage sockaddr;
		struct sockaddr_storage sockaddr_peer;
		struct work_struct release_work;
		int idx;
		struct list_head queue_list;
		struct nvmet_tcp_cmd connect;
		struct page_frag_cache pf_cache;
		void (*data_ready)(struct sock *);
		void (*state_change)(struct sock *);
		void (*write_space)(struct sock *);
	} cocci_id/* drivers/nvme/target/tcp.c 83 */;
	size_t cocci_id/* drivers/nvme/target/tcp.c 816 */;
	enum nvmet_tcp_queue_state{NVMET_TCP_Q_CONNECTING, NVMET_TCP_Q_LIVE, NVMET_TCP_Q_DISCONNECTING,} cocci_id/* drivers/nvme/target/tcp.c 77 */;
	struct kvec cocci_id/* drivers/nvme/target/tcp.c 757 */;
	struct msghdr cocci_id/* drivers/nvme/target/tcp.c 756 */;
	struct nvme_tcp_icresp_pdu *cocci_id/* drivers/nvme/target/tcp.c 755 */;
	struct nvme_tcp_icreq_pdu *cocci_id/* drivers/nvme/target/tcp.c 754 */;
	struct crypto_ahash *cocci_id/* drivers/nvme/target/tcp.c 727 */;
	struct nvme_tcp_hdr cocci_id/* drivers/nvme/target/tcp.c 711 */;
	struct nvmet_tcp_queue *cocci_id/* drivers/nvme/target/tcp.c 708 */;
	void cocci_id/* drivers/nvme/target/tcp.c 708 */;
	struct page *cocci_id/* drivers/nvme/target/tcp.c 524 */;
	struct nvmet_tcp_cmd {
		struct nvmet_tcp_queue *queue;
		struct nvmet_req req;
		struct nvme_tcp_cmd_pdu *cmd_pdu;
		struct nvme_tcp_rsp_pdu *rsp_pdu;
		struct nvme_tcp_data_pdu *data_pdu;
		struct nvme_tcp_r2t_pdu *r2t_pdu;
		u32 rbytes_done;
		u32 wbytes_done;
		u32 pdu_len;
		u32 pdu_recv;
		int sg_idx;
		int nr_mapped;
		struct msghdr recv_msg;
		struct kvec *iov;
		u32 flags;
		struct list_head entry;
		struct llist_node lentry;
		u32 offset;
		struct scatterlist *cur_sg;
		enum nvmet_tcp_send_state state;
		__le32 exp_ddgst;
		__le32 recv_ddgst;
	} cocci_id/* drivers/nvme/target/tcp.c 45 */;
	struct llist_node *cocci_id/* drivers/nvme/target/tcp.c 443 */;
	struct nvme_tcp_rsp_pdu *cocci_id/* drivers/nvme/target/tcp.c 423 */;
	enum{NVMET_TCP_F_INIT_FAILED=(1 << 0),} cocci_id/* drivers/nvme/target/tcp.c 41 */;
	struct nvme_tcp_r2t_pdu *cocci_id/* drivers/nvme/target/tcp.c 398 */;
	u8 cocci_id/* drivers/nvme/target/tcp.c 367 */;
	struct nvme_tcp_data_pdu *cocci_id/* drivers/nvme/target/tcp.c 365 */;
	struct nvmet_tcp_cmd *cocci_id/* drivers/nvme/target/tcp.c 363 */;
	struct ahash_request *cocci_id/* drivers/nvme/target/tcp.c 355 */;
	enum nvmet_tcp_recv_state{NVMET_TCP_RECV_PDU, NVMET_TCP_RECV_DATA, NVMET_TCP_RECV_DDGST, NVMET_TCP_RECV_ERR,} cocci_id/* drivers/nvme/target/tcp.c 34 */;
	struct nvme_sgl_desc *cocci_id/* drivers/nvme/target/tcp.c 320 */;
	struct scatterlist *cocci_id/* drivers/nvme/target/tcp.c 284 */;
	struct kvec *cocci_id/* drivers/nvme/target/tcp.c 283 */;
	enum nvmet_tcp_send_state{NVMET_TCP_SEND_DATA_PDU, NVMET_TCP_SEND_DATA, NVMET_TCP_SEND_R2T, NVMET_TCP_SEND_DDGST, NVMET_TCP_SEND_RESPONSE,} cocci_id/* drivers/nvme/target/tcp.c 26 */;
	u32 cocci_id/* drivers/nvme/target/tcp.c 257 */;
	struct nvme_tcp_hdr *cocci_id/* drivers/nvme/target/tcp.c 255 */;
	void *cocci_id/* drivers/nvme/target/tcp.c 253 */;
	__le32 *cocci_id/* drivers/nvme/target/tcp.c 240 */;
	__le32 cocci_id/* drivers/nvme/target/tcp.c 231 */;
	struct scatterlist cocci_id/* drivers/nvme/target/tcp.c 220 */;
	void __exit cocci_id/* drivers/nvme/target/tcp.c 1739 */;
	int __init cocci_id/* drivers/nvme/target/tcp.c 1721 */;
	struct nvmet_req *cocci_id/* drivers/nvme/target/tcp.c 1692 */;
	struct nvmet_tcp_queue cocci_id/* drivers/nvme/target/tcp.c 1679 */;
	struct nvmet_sq *cocci_id/* drivers/nvme/target/tcp.c 1676 */;
	struct nvmet_ctrl *cocci_id/* drivers/nvme/target/tcp.c 1665 */;
	struct sockaddr *cocci_id/* drivers/nvme/target/tcp.c 1625 */;
	char *cocci_id/* drivers/nvme/target/tcp.c 1612 */;
	__kernel_sa_family_t cocci_id/* drivers/nvme/target/tcp.c 1564 */;
	struct nvmet_port *cocci_id/* drivers/nvme/target/tcp.c 1561 */;
	bool cocci_id/* drivers/nvme/target/tcp.c 156 */;
	int cocci_id/* drivers/nvme/target/tcp.c 1529 */;
	struct socket *cocci_id/* drivers/nvme/target/tcp.c 1528 */;
	struct nvmet_tcp_port cocci_id/* drivers/nvme/target/tcp.c 1527 */;
	struct nvmet_tcp_port *cocci_id/* drivers/nvme/target/tcp.c 1526 */;
	struct work_struct *cocci_id/* drivers/nvme/target/tcp.c 1524 */;
	u16 cocci_id/* drivers/nvme/target/tcp.c 150 */;
	void cocci_id/* drivers/nvme/target/tcp.c 148 */(struct nvmet_tcp_cmd *cmd);
	void cocci_id/* drivers/nvme/target/tcp.c 147 */(struct nvmet_tcp_cmd *c);
	struct nvmet_fabrics_ops cocci_id/* drivers/nvme/target/tcp.c 146 */;
	struct workqueue_struct *cocci_id/* drivers/nvme/target/tcp.c 145 */;
	struct linger cocci_id/* drivers/nvme/target/tcp.c 1413 */;
	struct inet_sock *cocci_id/* drivers/nvme/target/tcp.c 1412 */;
	struct sock *cocci_id/* drivers/nvme/target/tcp.c 1351 */;
	struct nvmet_tcp_port {
		struct socket *sock;
		struct work_struct accept_work;
		struct nvmet_port *nport;
		struct sockaddr_storage addr;
		int last_cpu;
		void (*data_ready)(struct sock *);
	} cocci_id/* drivers/nvme/target/tcp.c 132 */;
	struct nvmet_tcp_cmd cocci_id/* drivers/nvme/target/tcp.c 1258 */;
	int *cocci_id/* drivers/nvme/target/tcp.c 1135 */;
}