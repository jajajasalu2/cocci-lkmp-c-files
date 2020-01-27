cocci_test_suite() {
	struct ef4_nic cocci_id/* drivers/net/ethernet/sfc/falcon/selftest.c 788 */;
	struct work_struct *cocci_id/* drivers/net/ethernet/sfc/falcon/selftest.c 786 */;
	struct ef4_channel *cocci_id/* drivers/net/ethernet/sfc/falcon/selftest.c 774 */;
	struct ef4_loopback_state {
		bool flush;
		int packet_count;
		struct sk_buff **skbs;
		bool offload_csum;
		atomic_t rx_good;
		atomic_t rx_bad;
		struct ef4_loopback_payload payload;
	} cocci_id/* drivers/net/ethernet/sfc/falcon/selftest.c 77 */;
	enum ef4_loopback_mode cocci_id/* drivers/net/ethernet/sfc/falcon/selftest.c 692 */;
	unsigned cocci_id/* drivers/net/ethernet/sfc/falcon/selftest.c 690 */;
	struct ef4_self_tests *cocci_id/* drivers/net/ethernet/sfc/falcon/selftest.c 689 */;
	unsigned int cocci_id/* drivers/net/ethernet/sfc/falcon/selftest.c 614 */;
	const char *constcocci_id/* drivers/net/ethernet/sfc/falcon/selftest.c 59 */[];
	struct ef4_link_state *cocci_id/* drivers/net/ethernet/sfc/falcon/selftest.c 583 */;
	const unsigned int cocci_id/* drivers/net/ethernet/sfc/falcon/selftest.c 58 */;
	const char cocci_id/* drivers/net/ethernet/sfc/falcon/selftest.c 54 */[];
	const u8 cocci_id/* drivers/net/ethernet/sfc/falcon/selftest.c 50 */[ETH_ALEN]__aligned(2);
	struct ef4_loopback_self_tests *cocci_id/* drivers/net/ethernet/sfc/falcon/selftest.c 467 */;
	netdev_tx_t cocci_id/* drivers/net/ethernet/sfc/falcon/selftest.c 417 */;
	struct sk_buff *cocci_id/* drivers/net/ethernet/sfc/falcon/selftest.c 415 */;
	struct ef4_loopback_payload *cocci_id/* drivers/net/ethernet/sfc/falcon/selftest.c 414 */;
	struct ef4_loopback_state *cocci_id/* drivers/net/ethernet/sfc/falcon/selftest.c 413 */;
	struct ef4_nic *cocci_id/* drivers/net/ethernet/sfc/falcon/selftest.c 412 */;
	struct ef4_tx_queue *cocci_id/* drivers/net/ethernet/sfc/falcon/selftest.c 410 */;
	int cocci_id/* drivers/net/ethernet/sfc/falcon/selftest.c 410 */;
	struct ef4_loopback_payload {
		struct ethhdr header;
		struct iphdr ip;
		struct udphdr udp;
		__be16 iteration;
		char msg[64];
	}__packed cocci_id/* drivers/net/ethernet/sfc/falcon/selftest.c 41 */;
	struct iphdr cocci_id/* drivers/net/ethernet/sfc/falcon/selftest.c 397 */;
	struct ethhdr cocci_id/* drivers/net/ethernet/sfc/falcon/selftest.c 390 */;
	__sum16 cocci_id/* drivers/net/ethernet/sfc/falcon/selftest.c 389 */;
	u8 *cocci_id/* drivers/net/ethernet/sfc/falcon/selftest.c 382 */;
	struct net_device *cocci_id/* drivers/net/ethernet/sfc/falcon/selftest.c 378 */;
	void cocci_id/* drivers/net/ethernet/sfc/falcon/selftest.c 375 */;
	const char *cocci_id/* drivers/net/ethernet/sfc/falcon/selftest.c 284 */;
	bool cocci_id/* drivers/net/ethernet/sfc/falcon/selftest.c 218 */;
	unsigned long cocci_id/* drivers/net/ethernet/sfc/falcon/selftest.c 177 */;
	unsigned int cocci_id/* drivers/net/ethernet/sfc/falcon/selftest.c 176 */[EF4_MAX_CHANNELS];
}
