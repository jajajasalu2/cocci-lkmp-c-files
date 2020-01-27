cocci_test_suite() {
	struct efx_nic cocci_id/* drivers/net/ethernet/sfc/selftest.c 788 */;
	struct work_struct *cocci_id/* drivers/net/ethernet/sfc/selftest.c 786 */;
	struct efx_channel *cocci_id/* drivers/net/ethernet/sfc/selftest.c 774 */;
	struct efx_loopback_state {
		bool flush;
		int packet_count;
		struct sk_buff **skbs;
		bool offload_csum;
		atomic_t rx_good;
		atomic_t rx_bad;
		struct efx_loopback_payload payload;
	} cocci_id/* drivers/net/ethernet/sfc/selftest.c 77 */;
	enum efx_loopback_mode cocci_id/* drivers/net/ethernet/sfc/selftest.c 692 */;
	unsigned cocci_id/* drivers/net/ethernet/sfc/selftest.c 690 */;
	struct efx_self_tests *cocci_id/* drivers/net/ethernet/sfc/selftest.c 689 */;
	unsigned int cocci_id/* drivers/net/ethernet/sfc/selftest.c 614 */;
	const char *constcocci_id/* drivers/net/ethernet/sfc/selftest.c 59 */[];
	struct efx_link_state *cocci_id/* drivers/net/ethernet/sfc/selftest.c 583 */;
	const unsigned int cocci_id/* drivers/net/ethernet/sfc/selftest.c 58 */;
	const char cocci_id/* drivers/net/ethernet/sfc/selftest.c 54 */[];
	const u8 cocci_id/* drivers/net/ethernet/sfc/selftest.c 50 */[ETH_ALEN]__aligned(2);
	struct efx_loopback_self_tests *cocci_id/* drivers/net/ethernet/sfc/selftest.c 467 */;
	netdev_tx_t cocci_id/* drivers/net/ethernet/sfc/selftest.c 417 */;
	struct sk_buff *cocci_id/* drivers/net/ethernet/sfc/selftest.c 415 */;
	struct efx_loopback_payload *cocci_id/* drivers/net/ethernet/sfc/selftest.c 414 */;
	struct efx_loopback_state *cocci_id/* drivers/net/ethernet/sfc/selftest.c 413 */;
	struct efx_nic *cocci_id/* drivers/net/ethernet/sfc/selftest.c 412 */;
	struct efx_tx_queue *cocci_id/* drivers/net/ethernet/sfc/selftest.c 410 */;
	int cocci_id/* drivers/net/ethernet/sfc/selftest.c 410 */;
	struct efx_loopback_payload {
		struct ethhdr header;
		struct iphdr ip;
		struct udphdr udp;
		__be16 iteration;
		char msg[64];
	}__packed cocci_id/* drivers/net/ethernet/sfc/selftest.c 41 */;
	struct iphdr cocci_id/* drivers/net/ethernet/sfc/selftest.c 397 */;
	struct ethhdr cocci_id/* drivers/net/ethernet/sfc/selftest.c 390 */;
	__sum16 cocci_id/* drivers/net/ethernet/sfc/selftest.c 389 */;
	u8 *cocci_id/* drivers/net/ethernet/sfc/selftest.c 382 */;
	struct net_device *cocci_id/* drivers/net/ethernet/sfc/selftest.c 378 */;
	void cocci_id/* drivers/net/ethernet/sfc/selftest.c 375 */;
	const char *cocci_id/* drivers/net/ethernet/sfc/selftest.c 284 */;
	bool cocci_id/* drivers/net/ethernet/sfc/selftest.c 218 */;
	unsigned long cocci_id/* drivers/net/ethernet/sfc/selftest.c 177 */;
	unsigned int cocci_id/* drivers/net/ethernet/sfc/selftest.c 176 */[EFX_MAX_CHANNELS];
}
