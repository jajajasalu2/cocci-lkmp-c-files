cocci_test_suite() {
	struct rndis_initialize_request cocci_id/* drivers/net/hyperv/rndis_filter.c 961 */;
	struct rndis_initialize_complete *cocci_id/* drivers/net/hyperv/rndis_filter.c 956 */;
	struct rndis_initialize_request *cocci_id/* drivers/net/hyperv/rndis_filter.c 955 */;
	struct work_struct *cocci_id/* drivers/net/hyperv/rndis_filter.c 925 */;
	struct rndis_request cocci_id/* drivers/net/hyperv/rndis_filter.c 88 */;
	unsigned long cocci_id/* drivers/net/hyperv/rndis_filter.c 86 */;
	struct rndis_set_request *cocci_id/* drivers/net/hyperv/rndis_filter.c 85 */;
	const u8 *cocci_id/* drivers/net/hyperv/rndis_filter.c 845 */;
	struct rndis_message *cocci_id/* drivers/net/hyperv/rndis_filter.c 84 */;
	u32 cocci_id/* drivers/net/hyperv/rndis_filter.c 80 */;
	struct rndis_request *cocci_id/* drivers/net/hyperv/rndis_filter.c 79 */;
	u8 *cocci_id/* drivers/net/hyperv/rndis_filter.c 784 */;
	struct ndis_recv_scale_param *cocci_id/* drivers/net/hyperv/rndis_filter.c 782 */;
	struct ndis_recv_scale_param cocci_id/* drivers/net/hyperv/rndis_filter.c 780 */;
	struct ndis_offload_params cocci_id/* drivers/net/hyperv/rndis_filter.c 724 */;
	struct ndis_offload_params *cocci_id/* drivers/net/hyperv/rndis_filter.c 717 */;
	ulong cocci_id/* drivers/net/hyperv/rndis_filter.c 675 */;
	struct rndis_set_request cocci_id/* drivers/net/hyperv/rndis_filter.c 665 */;
	struct rndis_config_parameter_info cocci_id/* drivers/net/hyperv/rndis_filter.c 660 */;
	char cocci_id/* drivers/net/hyperv/rndis_filter.c 659 */[2 * ETH_ALEN + 1];
	struct rndis_set_complete *cocci_id/* drivers/net/hyperv/rndis_filter.c 658 */;
	wchar_t *cocci_id/* drivers/net/hyperv/rndis_filter.c 657 */;
	struct rndis_config_parameter_info *cocci_id/* drivers/net/hyperv/rndis_filter.c 656 */;
	const char *cocci_id/* drivers/net/hyperv/rndis_filter.c 651 */;
	struct rndis_device cocci_id/* drivers/net/hyperv/rndis_filter.c 65 */;
	struct rndis_device *cocci_id/* drivers/net/hyperv/rndis_filter.c 61 */;
	struct ndis_recv_scale_cap *cocci_id/* drivers/net/hyperv/rndis_filter.c 558 */;
	size_t cocci_id/* drivers/net/hyperv/rndis_filter.c 535 */;
	u8 cocci_id/* drivers/net/hyperv/rndis_filter.c 534 */;
	struct ndis_offload *cocci_id/* drivers/net/hyperv/rndis_filter.c 532 */;
	const u8 cocci_id/* drivers/net/hyperv/rndis_filter.c 53 */[NETVSC_HASH_KEYLEN];
	struct rndis_query_request cocci_id/* drivers/net/hyperv/rndis_filter.c 518 */;
	struct rndis_query_complete *cocci_id/* drivers/net/hyperv/rndis_filter.c 510 */;
	struct rndis_query_request *cocci_id/* drivers/net/hyperv/rndis_filter.c 509 */;
	u32 *cocci_id/* drivers/net/hyperv/rndis_filter.c 505 */;
	void *cocci_id/* drivers/net/hyperv/rndis_filter.c 505 */;
	const u32 *cocci_id/* drivers/net/hyperv/rndis_filter.c 390 */;
	const struct rndis_pktinfo_id *cocci_id/* drivers/net/hyperv/rndis_filter.c 389 */;
	const struct ndis_pkt_8021q_info *cocci_id/* drivers/net/hyperv/rndis_filter.c 388 */;
	const struct ndis_tcp_ip_checksum_info *cocci_id/* drivers/net/hyperv/rndis_filter.c 387 */;
	struct rndis_packet *cocci_id/* drivers/net/hyperv/rndis_filter.c 386 */;
	struct rndis_per_packet_info *cocci_id/* drivers/net/hyperv/rndis_filter.c 337 */;
	struct rndis_message cocci_id/* drivers/net/hyperv/rndis_filter.c 294 */;
	struct rndis_request {
		struct list_head list_ent;
		struct completion wait_event;
		struct rndis_message response_msg;
		u8 response_ext[RNDIS_EXT_LEN];
		struct hv_netvsc_packet pkt;
		struct rndis_message request_msg;
		u8 request_ext[RNDIS_EXT_LEN];
	} cocci_id/* drivers/net/hyperv/rndis_filter.c 29 */;
	void cocci_id/* drivers/net/hyperv/rndis_filter.c 26 */(struct work_struct *w);
	struct hv_page_buffer *cocci_id/* drivers/net/hyperv/rndis_filter.c 208 */;
	struct hv_page_buffer cocci_id/* drivers/net/hyperv/rndis_filter.c 207 */[2];
	struct hv_netvsc_packet *cocci_id/* drivers/net/hyperv/rndis_filter.c 206 */;
	struct ndis_recv_scale_cap cocci_id/* drivers/net/hyperv/rndis_filter.c 1319 */;
	struct netvsc_device_info *cocci_id/* drivers/net/hyperv/rndis_filter.c 1313 */;
	struct hv_device *cocci_id/* drivers/net/hyperv/rndis_filter.c 1312 */;
	u8 cocci_id/* drivers/net/hyperv/rndis_filter.c 1292 */[256];
	ucs2_char_t cocci_id/* drivers/net/hyperv/rndis_filter.c 1290 */[256];
	const struct rndis_message *cocci_id/* drivers/net/hyperv/rndis_filter.c 129 */;
	struct net_device *cocci_id/* drivers/net/hyperv/rndis_filter.c 128 */;
	void cocci_id/* drivers/net/hyperv/rndis_filter.c 128 */;
	unsigned int cocci_id/* drivers/net/hyperv/rndis_filter.c 1197 */;
	struct ndis_offload cocci_id/* drivers/net/hyperv/rndis_filter.c 1195 */;
	struct nvsp_message cocci_id/* drivers/net/hyperv/rndis_filter.c 1145 */;
	struct nvsp_message *cocci_id/* drivers/net/hyperv/rndis_filter.c 1137 */;
	struct netvsc_channel *cocci_id/* drivers/net/hyperv/rndis_filter.c 1097 */;
	u16 cocci_id/* drivers/net/hyperv/rndis_filter.c 1096 */;
	struct netvsc_device *cocci_id/* drivers/net/hyperv/rndis_filter.c 1095 */;
	struct net_device_context *cocci_id/* drivers/net/hyperv/rndis_filter.c 1094 */;
	struct vmbus_channel *cocci_id/* drivers/net/hyperv/rndis_filter.c 1090 */;
	struct rndis_halt_request cocci_id/* drivers/net/hyperv/rndis_filter.c 1027 */;
	struct rndis_halt_request *cocci_id/* drivers/net/hyperv/rndis_filter.c 1023 */;
	const struct netvsc_channel *cocci_id/* drivers/net/hyperv/rndis_filter.c 1007 */;
	int cocci_id/* drivers/net/hyperv/rndis_filter.c 1004 */;
	bool cocci_id/* drivers/net/hyperv/rndis_filter.c 1002 */;
	const struct netvsc_device *cocci_id/* drivers/net/hyperv/rndis_filter.c 1002 */;
}
