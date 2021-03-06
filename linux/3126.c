cocci_test_suite() {
	struct socket *cocci_id/* drivers/block/drbd/drbd_receiver.c 954 */;
	struct accept_wait_data cocci_id/* drivers/block/drbd/drbd_receiver.c 929 */;
	enum drbd_state_rv cocci_id/* drivers/block/drbd/drbd_receiver.c 928 */;
	struct net_conf *cocci_id/* drivers/block/drbd/drbd_receiver.c 925 */;
	struct drbd_peer_device *cocci_id/* drivers/block/drbd/drbd_receiver.c 924 */;
	struct drbd_socket cocci_id/* drivers/block/drbd/drbd_receiver.c 923 */;
	struct socket **cocci_id/* drivers/block/drbd/drbd_receiver.c 863 */;
	char cocci_id/* drivers/block/drbd/drbd_receiver.c 846 */[4];
	int cocci_id/* drivers/block/drbd/drbd_receiver.c 801 */(struct drbd_connection *,
								 void *,
								 struct packet_info *);
	void (*cocci_id/* drivers/block/drbd/drbd_receiver.c 685 */)(struct sock *sk);
	struct accept_wait_data *cocci_id/* drivers/block/drbd/drbd_receiver.c 684 */;
	struct sock *cocci_id/* drivers/block/drbd/drbd_receiver.c 682 */;
	struct accept_wait_data {
		struct drbd_connection *connection;
		struct socket *s_listen;
		struct completion door_bell;
		void (*original_sk_state_change)(struct sock *sk);
	} cocci_id/* drivers/block/drbd/drbd_receiver.c 674 */;
	struct drbd_peer_device cocci_id/* drivers/block/drbd/drbd_receiver.c 6152 */;
	struct work_struct *cocci_id/* drivers/block/drbd/drbd_receiver.c 6149 */;
	struct sockaddr_in *cocci_id/* drivers/block/drbd/drbd_receiver.c 614 */;
	struct sockaddr *cocci_id/* drivers/block/drbd/drbd_receiver.c 611 */;
	int cocci_id/* drivers/block/drbd/drbd_receiver.c 61 */(struct drbd_work *,
								int);
	long cocci_id/* drivers/block/drbd/drbd_receiver.c 6060 */;
	struct sched_param cocci_id/* drivers/block/drbd/drbd_receiver.c 6022 */;
	struct packet_info cocci_id/* drivers/block/drbd/drbd_receiver.c 6014 */;
	struct meta_sock_cmd *cocci_id/* drivers/block/drbd/drbd_receiver.c 6013 */;
	struct drbd_thread *cocci_id/* drivers/block/drbd/drbd_receiver.c 6010 */;
	struct p_delay_probe93 cocci_id/* drivers/block/drbd/drbd_receiver.c 6004 */;
	struct p_req_state_reply cocci_id/* drivers/block/drbd/drbd_receiver.c 6002 */;
	struct p_barrier_ack cocci_id/* drivers/block/drbd/drbd_receiver.c 6001 */;
	enum finish_epoch cocci_id/* drivers/block/drbd/drbd_receiver.c 60 */(struct drbd_connection *,
									      struct drbd_epoch *,
									      enum epoch_event);
	struct p_block_ack cocci_id/* drivers/block/drbd/drbd_receiver.c 5993 */;
	struct meta_sock_cmd cocci_id/* drivers/block/drbd/drbd_receiver.c 5990 */[];
	struct meta_sock_cmd {
		size_t pkt_size;
		int (*fn)(struct drbd_connection *connection,
			  struct packet_info *);
	} cocci_id/* drivers/block/drbd/drbd_receiver.c 5958 */;
	struct drbd_device_work *cocci_id/* drivers/block/drbd/drbd_receiver.c 5906 */;
	struct sockaddr_in6 cocci_id/* drivers/block/drbd/drbd_receiver.c 590 */;
	void cocci_id/* drivers/block/drbd/drbd_receiver.c 59 */(struct drbd_connection *connection);
	struct p_barrier_ack *cocci_id/* drivers/block/drbd/drbd_receiver.c 5879 */;
	int cocci_id/* drivers/block/drbd/drbd_receiver.c 58 */(struct drbd_peer_device *);
	enum drbd_req_event cocci_id/* drivers/block/drbd/drbd_receiver.c 5744 */;
	struct p_block_ack *cocci_id/* drivers/block/drbd/drbd_receiver.c 5741 */;
	int cocci_id/* drivers/block/drbd/drbd_receiver.c 57 */(struct drbd_connection *connection);
	struct p_req_state_reply *cocci_id/* drivers/block/drbd/drbd_receiver.c 5644 */;
	u8 *cocci_id/* drivers/block/drbd/drbd_receiver.c 5442 */;
	struct shash_desc cocci_id/* drivers/block/drbd/drbd_receiver.c 5433 */;
	struct shash_desc *cocci_id/* drivers/block/drbd/drbd_receiver.c 5420 */;
	char cocci_id/* drivers/block/drbd/drbd_receiver.c 5418 */[SHARED_SECRET_MAX];
	char *cocci_id/* drivers/block/drbd/drbd_receiver.c 5414 */;
	char cocci_id/* drivers/block/drbd/drbd_receiver.c 5413 */[CHALLENGE_LEN];
	struct drbd_socket *cocci_id/* drivers/block/drbd/drbd_receiver.c 5412 */;
	const int cocci_id/* drivers/block/drbd/drbd_receiver.c 5332 */;
	struct p_connection_features cocci_id/* drivers/block/drbd/drbd_receiver.c 5332 */;
	struct p_connection_features *cocci_id/* drivers/block/drbd/drbd_receiver.c 5331 */;
	enum drbd_conns cocci_id/* drivers/block/drbd/drbd_receiver.c 5156 */;
	struct o_qlim cocci_id/* drivers/block/drbd/drbd_receiver.c 5119 */;
	size_t cocci_id/* drivers/block/drbd/drbd_receiver.c 511 */;
	const struct data_cmd *cocci_id/* drivers/block/drbd/drbd_receiver.c 5103 */;
	struct p_wsame cocci_id/* drivers/block/drbd/drbd_receiver.c 5093 */;
	struct p_trim cocci_id/* drivers/block/drbd/drbd_receiver.c 5090 */;
	struct p_block_desc cocci_id/* drivers/block/drbd/drbd_receiver.c 5087 */;
	struct p_rs_uuid cocci_id/* drivers/block/drbd/drbd_receiver.c 5081 */;
	struct p_req_state cocci_id/* drivers/block/drbd/drbd_receiver.c 5080 */;
	struct p_state cocci_id/* drivers/block/drbd/drbd_receiver.c 5079 */;
	struct p_sizes cocci_id/* drivers/block/drbd/drbd_receiver.c 5078 */;
	struct p_uuids cocci_id/* drivers/block/drbd/drbd_receiver.c 5077 */;
	struct p_protocol cocci_id/* drivers/block/drbd/drbd_receiver.c 5076 */;
	struct p_block_req cocci_id/* drivers/block/drbd/drbd_receiver.c 5072 */;
	struct p_barrier cocci_id/* drivers/block/drbd/drbd_receiver.c 5068 */;
	struct p_data cocci_id/* drivers/block/drbd/drbd_receiver.c 5065 */;
	struct data_cmd cocci_id/* drivers/block/drbd/drbd_receiver.c 5064 */[];
	struct data_cmd {
		int expect_payload;
		unsigned int pkt_size;
		int (*fn)(struct drbd_connection *, struct packet_info *);
	} cocci_id/* drivers/block/drbd/drbd_receiver.c 5058 */;
	struct msghdr cocci_id/* drivers/block/drbd/drbd_receiver.c 504 */;
	struct kvec cocci_id/* drivers/block/drbd/drbd_receiver.c 500 */;
	enum finish_epoch{FE_STILL_LIVE, FE_DESTROYED, FE_RECYCLED,} cocci_id/* drivers/block/drbd/drbd_receiver.c 50 */;
	struct p_block_desc *cocci_id/* drivers/block/drbd/drbd_receiver.c 4970 */;
	struct bm_xfer_ctx cocci_id/* drivers/block/drbd/drbd_receiver.c 4865 */;
	unsigned long cocci_id/* drivers/block/drbd/drbd_receiver.c 4825 */;
	unsigned int cocci_id/* drivers/block/drbd/drbd_receiver.c 4821 */;
	const char *cocci_id/* drivers/block/drbd/drbd_receiver.c 4818 */;
	struct bm_xfer_ctx *cocci_id/* drivers/block/drbd/drbd_receiver.c 4818 */;
	struct drbd_device *cocci_id/* drivers/block/drbd/drbd_receiver.c 4817 */;
	void cocci_id/* drivers/block/drbd/drbd_receiver.c 4817 */;
	struct list_head *cocci_id/* drivers/block/drbd/drbd_receiver.c 475 */;
	struct bitstream cocci_id/* drivers/block/drbd/drbd_receiver.c 4736 */;
	enum drbd_bitmap_code cocci_id/* drivers/block/drbd/drbd_receiver.c 4709 */;
	struct p_compressed_bm *cocci_id/* drivers/block/drbd/drbd_receiver.c 4709 */;
	struct p_rs_uuid *cocci_id/* drivers/block/drbd/drbd_receiver.c 4641 */;
	enum chg_state_flags cocci_id/* drivers/block/drbd/drbd_receiver.c 4447 */;
	struct p_state *cocci_id/* drivers/block/drbd/drbd_receiver.c 4444 */;
	struct p_req_state *cocci_id/* drivers/block/drbd/drbd_receiver.c 4418 */;
	enum drbd_conns cocci_id/* drivers/block/drbd/drbd_receiver.c 4360 */[];
	union drbd_state cocci_id/* drivers/block/drbd/drbd_receiver.c 4356 */;
	struct packet_info {
		enum drbd_packet cmd;
		unsigned int size;
		unsigned int vnr;
		void *data;
	} cocci_id/* drivers/block/drbd/drbd_receiver.c 43 */;
	struct p_uuids *cocci_id/* drivers/block/drbd/drbd_receiver.c 4280 */;
	enum dds_flags cocci_id/* drivers/block/drbd/drbd_receiver.c 4113 */;
	enum determine_dev_size cocci_id/* drivers/block/drbd/drbd_receiver.c 4109 */;
	struct o_qlim *cocci_id/* drivers/block/drbd/drbd_receiver.c 4108 */;
	struct p_sizes *cocci_id/* drivers/block/drbd/drbd_receiver.c 4107 */;
	int cocci_id/* drivers/block/drbd/drbd_receiver.c 405 */;
	struct drbd_peer_request *cocci_id/* drivers/block/drbd/drbd_receiver.c 404 */;
	struct net_conf cocci_id/* drivers/block/drbd/drbd_receiver.c 4021 */;
	struct disk_conf cocci_id/* drivers/block/drbd/drbd_receiver.c 3934 */;
	struct p_rs_param_95 cocci_id/* drivers/block/drbd/drbd_receiver.c 3902 */;
	struct p_rs_param_89 cocci_id/* drivers/block/drbd/drbd_receiver.c 3901 */;
	struct p_rs_param cocci_id/* drivers/block/drbd/drbd_receiver.c 3898 */;
	struct fifo_buffer *cocci_id/* drivers/block/drbd/drbd_receiver.c 3889 */;
	struct p_rs_param_95 *cocci_id/* drivers/block/drbd/drbd_receiver.c 3882 */;
	struct packet_info *cocci_id/* drivers/block/drbd/drbd_receiver.c 3871 */;
	struct drbd_connection *cocci_id/* drivers/block/drbd/drbd_receiver.c 3871 */;
	const struct drbd_device *cocci_id/* drivers/block/drbd/drbd_receiver.c 3823 */;
	struct crypto_shash *cocci_id/* drivers/block/drbd/drbd_receiver.c 3822 */;
	struct p_protocol *cocci_id/* drivers/block/drbd/drbd_receiver.c 3668 */;
	enum drbd_after_sb_p cocci_id/* drivers/block/drbd/drbd_receiver.c 3652 */;
	unsigned cocci_id/* drivers/block/drbd/drbd_receiver.c 364 */;
	gfp_t cocci_id/* drivers/block/drbd/drbd_receiver.c 359 */;
	u64 cocci_id/* drivers/block/drbd/drbd_receiver.c 358 */;
	sector_t cocci_id/* drivers/block/drbd/drbd_receiver.c 358 */;
	enum drbd_disk_state cocci_id/* drivers/block/drbd/drbd_receiver.c 3488 */;
	enum drbd_role cocci_id/* drivers/block/drbd/drbd_receiver.c 3487 */;
	struct drbd_connection *const cocci_id/* drivers/block/drbd/drbd_receiver.c 3271 */;
	struct drbd_peer_device *const cocci_id/* drivers/block/drbd/drbd_receiver.c 3270 */;
	const enum drbd_role cocci_id/* drivers/block/drbd/drbd_receiver.c 3268 */;
	struct drbd_device *const cocci_id/* drivers/block/drbd/drbd_receiver.c 3268 */;
	int *cocci_id/* drivers/block/drbd/drbd_receiver.c 3268 */;
	unsigned long long cocci_id/* drivers/block/drbd/drbd_receiver.c 3247 */;
	u64 *cocci_id/* drivers/block/drbd/drbd_receiver.c 3238 */;
	atomic_t *cocci_id/* drivers/block/drbd/drbd_receiver.c 317 */;
	struct digest_info cocci_id/* drivers/block/drbd/drbd_receiver.c 2935 */;
	struct p_block_req *cocci_id/* drivers/block/drbd/drbd_receiver.c 2845 */;
	struct digest_info *cocci_id/* drivers/block/drbd/drbd_receiver.c 2842 */;
	struct gendisk *cocci_id/* drivers/block/drbd/drbd_receiver.c 2791 */;
	struct bm_extent cocci_id/* drivers/block/drbd/drbd_receiver.c 2778 */;
	struct bm_extent *cocci_id/* drivers/block/drbd/drbd_receiver.c 2778 */;
	struct lc_element *cocci_id/* drivers/block/drbd/drbd_receiver.c 2769 */;
	u32 cocci_id/* drivers/block/drbd/drbd_receiver.c 2593 */;
	struct p_data *cocci_id/* drivers/block/drbd/drbd_receiver.c 2592 */;
	const unsigned int cocci_id/* drivers/block/drbd/drbd_receiver.c 2482 */;
	struct drbd_request cocci_id/* drivers/block/drbd/drbd_receiver.c 2463 */;
	struct bio_and_error cocci_id/* drivers/block/drbd/drbd_receiver.c 2459 */;
	struct drbd_request *cocci_id/* drivers/block/drbd/drbd_receiver.c 2458 */;
	const u32 cocci_id/* drivers/block/drbd/drbd_receiver.c 2381 */;
	s32 cocci_id/* drivers/block/drbd/drbd_receiver.c 2312 */;
	enum drbd_packet cocci_id/* drivers/block/drbd/drbd_receiver.c 2277 */;
	struct drbd_peer_request cocci_id/* drivers/block/drbd/drbd_receiver.c 2237 */;
	struct drbd_work *cocci_id/* drivers/block/drbd/drbd_receiver.c 2234 */;
	struct rb_root *cocci_id/* drivers/block/drbd/drbd_receiver.c 2126 */;
	struct bvec_iter cocci_id/* drivers/block/drbd/drbd_receiver.c 2012 */;
	struct bio_vec cocci_id/* drivers/block/drbd/drbd_receiver.c 2011 */;
	struct p_trim *cocci_id/* drivers/block/drbd/drbd_receiver.c 1870 */;
	unsigned long *cocci_id/* drivers/block/drbd/drbd_receiver.c 1869 */;
	const sector_t cocci_id/* drivers/block/drbd/drbd_receiver.c 1862 */;
	struct p_barrier *cocci_id/* drivers/block/drbd/drbd_receiver.c 1772 */;
	struct drbd_interval *cocci_id/* drivers/block/drbd/drbd_receiver.c 1741 */;
	struct bio *cocci_id/* drivers/block/drbd/drbd_receiver.c 1641 */;
	const unsigned cocci_id/* drivers/block/drbd/drbd_receiver.c 1638 */;
	struct disk_conf *cocci_id/* drivers/block/drbd/drbd_receiver.c 1579 */;
	struct request_queue *cocci_id/* drivers/block/drbd/drbd_receiver.c 1578 */;
	bool cocci_id/* drivers/block/drbd/drbd_receiver.c 1576 */;
	struct block_device *cocci_id/* drivers/block/drbd/drbd_receiver.c 1513 */;
	char *cocci_id/* drivers/block/drbd/drbd_receiver.c 1452 */[];
	struct page *cocci_id/* drivers/block/drbd/drbd_receiver.c 145 */;
	enum write_ordering_e cocci_id/* drivers/block/drbd/drbd_receiver.c 1447 */;
	struct drbd_resource *cocci_id/* drivers/block/drbd/drbd_receiver.c 1446 */;
	struct drbd_backing_dev *cocci_id/* drivers/block/drbd/drbd_receiver.c 1446 */;
	struct drbd_epoch cocci_id/* drivers/block/drbd/drbd_receiver.c 1398 */;
	enum epoch_event cocci_id/* drivers/block/drbd/drbd_receiver.c 1358 */;
	struct drbd_epoch *cocci_id/* drivers/block/drbd/drbd_receiver.c 1357 */;
	enum finish_epoch cocci_id/* drivers/block/drbd/drbd_receiver.c 1356 */;
	struct issue_flush_context cocci_id/* drivers/block/drbd/drbd_receiver.c 1313 */;
	struct page **cocci_id/* drivers/block/drbd/drbd_receiver.c 131 */;
	struct issue_flush_context *cocci_id/* drivers/block/drbd/drbd_receiver.c 1260 */;
	struct one_flush_context *cocci_id/* drivers/block/drbd/drbd_receiver.c 1258 */;
	struct one_flush_context {
		struct drbd_device *device;
		struct issue_flush_context *ctx;
	} cocci_id/* drivers/block/drbd/drbd_receiver.c 1251 */;
	struct issue_flush_context {
		atomic_t pending;
		int error;
		struct completion done;
	} cocci_id/* drivers/block/drbd/drbd_receiver.c 1246 */;
	struct p_header80 *cocci_id/* drivers/block/drbd/drbd_receiver.c 1175 */;
	struct p_header80 cocci_id/* drivers/block/drbd/drbd_receiver.c 1173 */;
	struct p_header95 *cocci_id/* drivers/block/drbd/drbd_receiver.c 1169 */;
	__be16 *cocci_id/* drivers/block/drbd/drbd_receiver.c 1168 */;
	struct p_header95 cocci_id/* drivers/block/drbd/drbd_receiver.c 1167 */;
	struct p_header100 *cocci_id/* drivers/block/drbd/drbd_receiver.c 1159 */;
	__be32 *cocci_id/* drivers/block/drbd/drbd_receiver.c 1158 */;
	struct p_header100 cocci_id/* drivers/block/drbd/drbd_receiver.c 1157 */;
	void *cocci_id/* drivers/block/drbd/drbd_receiver.c 1153 */;
}
