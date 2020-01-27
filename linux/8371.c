cocci_test_suite() {
	const struct {
		enum nfp_eth_rate rate;
		unsigned int speed;
	} cocci_id/* drivers/net/ethernet/netronome/nfp/nfpcore/nfp_nsp_eth.c 82 */[];
	union eth_table_entry {
		struct {
			__le64 port;
			__le64 state;
			u8 mac_addr[6];
			u8 resv[2];
			__le64 control;
		};
		__le64 raw[NSP_ETH_NUM_RAW];
	} cocci_id/* drivers/net/ethernet/netronome/nfp/nfpcore/nfp_nsp_eth.c 71 */;
	enum nfp_eth_rate{RATE_INVALID=0, RATE_10M, RATE_100M, RATE_1G, RATE_10G, RATE_25G,} cocci_id/* drivers/net/ethernet/netronome/nfp/nfpcore/nfp_nsp_eth.c 62 */;
	enum nfp_eth_rate cocci_id/* drivers/net/ethernet/netronome/nfp/nfpcore/nfp_nsp_eth.c 580 */;
	unsigned int cocci_id/* drivers/net/ethernet/netronome/nfp/nfpcore/nfp_nsp_eth.c 578 */;
	enum nfp_eth_raw{NSP_ETH_RAW_PORT=0, NSP_ETH_RAW_STATE, NSP_ETH_RAW_MAC, NSP_ETH_RAW_CONTROL, NSP_ETH_NUM_RAW,} cocci_id/* drivers/net/ethernet/netronome/nfp/nfpcore/nfp_nsp_eth.c 53 */;
	enum nfp_eth_fec cocci_id/* drivers/net/ethernet/netronome/nfp/nfpcore/nfp_nsp_eth.c 529 */;
	enum nfp_eth_aneg cocci_id/* drivers/net/ethernet/netronome/nfp/nfpcore/nfp_nsp_eth.c 512 */;
	const u64 cocci_id/* drivers/net/ethernet/netronome/nfp/nfpcore/nfp_nsp_eth.c 463 */;
	const unsigned int cocci_id/* drivers/net/ethernet/netronome/nfp/nfpcore/nfp_nsp_eth.c 463 */;
	bool cocci_id/* drivers/net/ethernet/netronome/nfp/nfpcore/nfp_nsp_eth.c 427 */;
	int cocci_id/* drivers/net/ethernet/netronome/nfp/nfpcore/nfp_nsp_eth.c 249 */;
	union eth_table_entry *cocci_id/* drivers/net/ethernet/netronome/nfp/nfpcore/nfp_nsp_eth.c 247 */;
	struct nfp_nsp *cocci_id/* drivers/net/ethernet/netronome/nfp/nfpcore/nfp_nsp_eth.c 245 */;
	struct nfp_cpp *cocci_id/* drivers/net/ethernet/netronome/nfp/nfpcore/nfp_nsp_eth.c 245 */;
	struct nfp_eth_table *cocci_id/* drivers/net/ethernet/netronome/nfp/nfpcore/nfp_nsp_eth.c 244 */;
	union eth_table_entry cocci_id/* drivers/net/ethernet/netronome/nfp/nfpcore/nfp_nsp_eth.c 22 */;
	struct nfp_eth_table_port *cocci_id/* drivers/net/ethernet/netronome/nfp/nfpcore/nfp_nsp_eth.c 204 */;
	void cocci_id/* drivers/net/ethernet/netronome/nfp/nfpcore/nfp_nsp_eth.c 175 */;
	u64 cocci_id/* drivers/net/ethernet/netronome/nfp/nfpcore/nfp_nsp_eth.c 130 */;
	const union eth_table_entry *cocci_id/* drivers/net/ethernet/netronome/nfp/nfpcore/nfp_nsp_eth.c 125 */;
	const u8 *cocci_id/* drivers/net/ethernet/netronome/nfp/nfpcore/nfp_nsp_eth.c 116 */;
	u8 *cocci_id/* drivers/net/ethernet/netronome/nfp/nfpcore/nfp_nsp_eth.c 116 */;
}
