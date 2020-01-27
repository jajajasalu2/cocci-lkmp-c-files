cocci_test_suite() {
	struct vlan_hdr *cocci_id/* drivers/net/thunderbolt.c 930 */;
	struct thunderbolt_ip_login {
		struct thunderbolt_ip_header hdr;
		u32 proto_version;
		u32 transmit_path;
		u32 reserved[4];
	} cocci_id/* drivers/net/thunderbolt.c 92 */;
	__sum16 *cocci_id/* drivers/net/thunderbolt.c 912 */;
	__be16 cocci_id/* drivers/net/thunderbolt.c 909 */;
	__wsum cocci_id/* drivers/net/thunderbolt.c 907 */;
	struct tbnet_frame **cocci_id/* drivers/net/thunderbolt.c 903 */;
	struct tb_ring *cocci_id/* drivers/net/thunderbolt.c 853 */;
	u16 cocci_id/* drivers/net/thunderbolt.c 852 */;
	typeof(*tf) cocci_id/* drivers/net/thunderbolt.c 773 */;
	struct thunderbolt_ip_header {
		u32 route_hi;
		u32 route_lo;
		u32 length_sn;
		uuid_t uuid;
		uuid_t initiator_uuid;
		uuid_t target_uuid;
		u32 type;
		u32 command_id;
	} cocci_id/* drivers/net/thunderbolt.c 77 */;
	struct page *cocci_id/* drivers/net/thunderbolt.c 753 */;
	struct ring_frame *cocci_id/* drivers/net/thunderbolt.c 751 */;
	struct tbnet cocci_id/* drivers/net/thunderbolt.c 742 */;
	struct napi_struct *cocci_id/* drivers/net/thunderbolt.c 740 */;
	enum thunderbolt_ip_type{TBIP_LOGIN, TBIP_LOGIN_RESPONSE, TBIP_LOGOUT, TBIP_STATUS,} cocci_id/* drivers/net/thunderbolt.c 70 */;
	u32 cocci_id/* drivers/net/thunderbolt.c 672 */;
	const struct thunderbolt_ip_frame_header *cocci_id/* drivers/net/thunderbolt.c 670 */;
	bool cocci_id/* drivers/net/thunderbolt.c 669 */;
	const struct tbnet_frame *cocci_id/* drivers/net/thunderbolt.c 669 */;
	enum thunderbolt_ip_frame_pdf{TBIP_PDF_FRAME_START=1, TBIP_PDF_FRAME_END,} cocci_id/* drivers/net/thunderbolt.c 65 */;
	unsigned long cocci_id/* drivers/net/thunderbolt.c 637 */;
	typeof(*net) cocci_id/* drivers/net/thunderbolt.c 586 */;
	struct work_struct *cocci_id/* drivers/net/thunderbolt.c 584 */;
	struct thunderbolt_ip_frame_header {
		u32 frame_size;
		u16 frame_index;
		u16 frame_id;
		u32 frame_count;
	} cocci_id/* drivers/net/thunderbolt.c 58 */;
	dma_addr_t cocci_id/* drivers/net/thunderbolt.c 475 */;
	struct tbnet_frame *cocci_id/* drivers/net/thunderbolt.c 474 */;
	struct device *cocci_id/* drivers/net/thunderbolt.c 472 */;
	struct tbnet_ring *cocci_id/* drivers/net/thunderbolt.c 468 */;
	unsigned int cocci_id/* drivers/net/thunderbolt.c 466 */;
	int cocci_id/* drivers/net/thunderbolt.c 466 */;
	const struct tbnet_ring *cocci_id/* drivers/net/thunderbolt.c 461 */;
	struct skb_shared_info cocci_id/* drivers/net/thunderbolt.c 41 */;
	struct thunderbolt_ip_header cocci_id/* drivers/net/thunderbolt.c 401 */;
	const struct thunderbolt_ip_login *cocci_id/* drivers/net/thunderbolt.c 393 */;
	const void *cocci_id/* drivers/net/thunderbolt.c 391 */;
	void *cocci_id/* drivers/net/thunderbolt.c 391 */;
	struct thunderbolt_ip_frame_header cocci_id/* drivers/net/thunderbolt.c 38 */;
	enum dma_data_direction cocci_id/* drivers/net/thunderbolt.c 328 */;
	struct tbnet *cocci_id/* drivers/net/thunderbolt.c 299 */;
	void cocci_id/* drivers/net/thunderbolt.c 299 */;
	struct thunderbolt_ip_status cocci_id/* drivers/net/thunderbolt.c 285 */;
	struct thunderbolt_ip_logout cocci_id/* drivers/net/thunderbolt.c 284 */;
	struct tb_xdomain *cocci_id/* drivers/net/thunderbolt.c 252 */;
	struct thunderbolt_ip_login cocci_id/* drivers/net/thunderbolt.c 251 */;
	struct thunderbolt_ip_login_response cocci_id/* drivers/net/thunderbolt.c 250 */;
	enum thunderbolt_ip_type cocci_id/* drivers/net/thunderbolt.c 213 */;
	size_t cocci_id/* drivers/net/thunderbolt.c 213 */;
	u8 cocci_id/* drivers/net/thunderbolt.c 212 */;
	const uuid_t *cocci_id/* drivers/net/thunderbolt.c 212 */;
	u64 cocci_id/* drivers/net/thunderbolt.c 211 */;
	struct thunderbolt_ip_header *cocci_id/* drivers/net/thunderbolt.c 211 */;
	struct tb_property_dir *cocci_id/* drivers/net/thunderbolt.c 209 */;
	const uuid_t cocci_id/* drivers/net/thunderbolt.c 200 */;
	struct tbnet {
		const struct tb_service *svc;
		struct tb_xdomain *xd;
		struct tb_protocol_handler handler;
		struct net_device *dev;
		struct napi_struct napi;
		struct tbnet_stats stats;
		struct sk_buff *skb;
		atomic_t command_id;
		bool login_sent;
		bool login_received;
		u32 transmit_path;
		struct mutex connection_lock;
		int login_retries;
		struct delayed_work login_work;
		struct work_struct connected_work;
		struct work_struct disconnect_work;
		struct thunderbolt_ip_frame_header rx_hdr;
		struct tbnet_ring rx_ring;
		atomic_t frame_id;
		struct tbnet_ring tx_ring;
	} cocci_id/* drivers/net/thunderbolt.c 176 */;
	struct tbnet_ring {
		struct tbnet_frame frames[TBNET_RING_SIZE];
		unsigned int cons;
		unsigned int prod;
		struct tb_ring *ring;
	} cocci_id/* drivers/net/thunderbolt.c 137 */;
	void __exit cocci_id/* drivers/net/thunderbolt.c 1351 */;
	int __init cocci_id/* drivers/net/thunderbolt.c 1327 */;
	struct tb_service_driver cocci_id/* drivers/net/thunderbolt.c 1315 */;
	struct tbnet_frame {
		struct net_device *dev;
		struct page *page;
		struct ring_frame frame;
	} cocci_id/* drivers/net/thunderbolt.c 131 */;
	const struct tb_service_id cocci_id/* drivers/net/thunderbolt.c 1309 */[];
	const struct dev_pm_ops cocci_id/* drivers/net/thunderbolt.c 1305 */;
	int __maybe_unused cocci_id/* drivers/net/thunderbolt.c 1289 */;
	const struct tb_service_id *cocci_id/* drivers/net/thunderbolt.c 1190 */;
	struct tb_service *cocci_id/* drivers/net/thunderbolt.c 1190 */;
	u32 *cocci_id/* drivers/net/thunderbolt.c 1184 */;
	struct tbnet_stats {
		u64 tx_packets;
		u64 rx_packets;
		u64 tx_bytes;
		u64 rx_bytes;
		u64 rx_errors;
		u64 tx_errors;
		u64 rx_length_errors;
		u64 rx_over_errors;
		u64 rx_crc_errors;
		u64 rx_missed_errors;
	} cocci_id/* drivers/net/thunderbolt.c 118 */;
	const struct tb_xdomain *cocci_id/* drivers/net/thunderbolt.c 1176 */;
	const struct tbnet *cocci_id/* drivers/net/thunderbolt.c 1175 */;
	struct net_device *cocci_id/* drivers/net/thunderbolt.c 1173 */;
	const struct net_device_ops cocci_id/* drivers/net/thunderbolt.c 1166 */;
	struct rtnl_link_stats64 *cocci_id/* drivers/net/thunderbolt.c 1148 */;
	struct thunderbolt_ip_status {
		struct thunderbolt_ip_header hdr;
		u32 status;
	} cocci_id/* drivers/net/thunderbolt.c 113 */;
	struct thunderbolt_ip_logout {
		struct thunderbolt_ip_header hdr;
	} cocci_id/* drivers/net/thunderbolt.c 109 */;
	struct thunderbolt_ip_frame_header *cocci_id/* drivers/net/thunderbolt.c 1017 */;
	struct tbnet_frame *cocci_id/* drivers/net/thunderbolt.c 1015 */[MAX_SKB_FRAGS];
	netdev_tx_t cocci_id/* drivers/net/thunderbolt.c 1011 */;
	struct thunderbolt_ip_login_response {
		struct thunderbolt_ip_header hdr;
		u32 status;
		u32 receiver_mac[2];
		u32 receiver_mac_len;
		u32 reserved[4];
	} cocci_id/* drivers/net/thunderbolt.c 101 */;
	const skb_frag_t *cocci_id/* drivers/net/thunderbolt.c 1005 */;
	unsigned int *cocci_id/* drivers/net/thunderbolt.c 1003 */;
	struct sk_buff *cocci_id/* drivers/net/thunderbolt.c 1002 */;
}
