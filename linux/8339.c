cocci_test_suite() {
	struct octeon_soft_command *cocci_id/* drivers/net/ethernet/cavium/liquidio/lio_vf_main.c 864 */;
	skb_frag_t *cocci_id/* drivers/net/ethernet/cavium/liquidio/lio_vf_main.c 840 */;
	struct octnic_gather *cocci_id/* drivers/net/ethernet/cavium/liquidio/lio_vf_main.c 823 */;
	struct sk_buff *cocci_id/* drivers/net/ethernet/cavium/liquidio/lio_vf_main.c 803 */;
	struct octnet_buf_free_info *cocci_id/* drivers/net/ethernet/cavium/liquidio/lio_vf_main.c 802 */;
	void *cocci_id/* drivers/net/ethernet/cavium/liquidio/lio_vf_main.c 800 */;
	struct octeon_device_priv *cocci_id/* drivers/net/ethernet/cavium/liquidio/lio_vf_main.c 76 */;
	int cocci_id/* drivers/net/ethernet/cavium/liquidio/lio_vf_main.c 72 */(struct net_device *netdev);
	int cocci_id/* drivers/net/ethernet/cavium/liquidio/lio_vf_main.c 71 */(struct octeon_device *oct);
	void cocci_id/* drivers/net/ethernet/cavium/liquidio/lio_vf_main.c 70 */(struct pci_dev *pdev);
	int cocci_id/* drivers/net/ethernet/cavium/liquidio/lio_vf_main.c 68 */(struct pci_dev *pdev,
										const struct pci_device_id *ent);
	struct napi_struct *cocci_id/* drivers/net/ethernet/cavium/liquidio/lio_vf_main.c 661 */;
	union octnet_cmd *cocci_id/* drivers/net/ethernet/cavium/liquidio/lio_vf_main.c 605 */;
	union tx_info {
		u64 u64;
		struct {
#ifdef __BIG_ENDIAN_BITFIELD
			u16 gso_size;
			u16 gso_segs;
			u32 reserved;
#else
			u32 reserved;
			u16 gso_segs;
			u16 gso_size;
#endif
		} s;
	} cocci_id/* drivers/net/ethernet/cavium/liquidio/lio_vf_main.c 49 */;
	struct octeon_instr_queue *cocci_id/* drivers/net/ethernet/cavium/liquidio/lio_vf_main.c 487 */;
	struct msix_entry *cocci_id/* drivers/net/ethernet/cavium/liquidio/lio_vf_main.c 449 */;
	struct oct_timestamp_resp {
		u64 rh;
		u64 timestamp;
		u64 status;
	} cocci_id/* drivers/net/ethernet/cavium/liquidio/lio_vf_main.c 43 */;
	struct octeon_device_priv cocci_id/* drivers/net/ethernet/cavium/liquidio/lio_vf_main.c 389 */;
	const struct pci_device_id *cocci_id/* drivers/net/ethernet/cavium/liquidio/lio_vf_main.c 384 */;
	struct lio *cocci_id/* drivers/net/ethernet/cavium/liquidio/lio_vf_main.c 323 */;
	struct net_device *cocci_id/* drivers/net/ethernet/cavium/liquidio/lio_vf_main.c 321 */;
	struct cavium_wk *cocci_id/* drivers/net/ethernet/cavium/liquidio/lio_vf_main.c 287 */;
	struct work_struct *cocci_id/* drivers/net/ethernet/cavium/liquidio/lio_vf_main.c 285 */;
	struct oct_link_info *cocci_id/* drivers/net/ethernet/cavium/liquidio/lio_vf_main.c 269 */;
	struct pci_driver cocci_id/* drivers/net/ethernet/cavium/liquidio/lio_vf_main.c 251 */;
	void __exit cocci_id/* drivers/net/ethernet/cavium/liquidio/lio_vf_main.c 2419 */;
	int __init cocci_id/* drivers/net/ethernet/cavium/liquidio/lio_vf_main.c 2413 */;
	const struct pci_device_id cocci_id/* drivers/net/ethernet/cavium/liquidio/lio_vf_main.c 240 */[];
	const struct pci_error_handlers cocci_id/* drivers/net/ethernet/cavium/liquidio/lio_vf_main.c 236 */;
	struct octdev_props cocci_id/* drivers/net/ethernet/cavium/liquidio/lio_vf_main.c 2245 */;
	pci_channel_state_t cocci_id/* drivers/net/ethernet/cavium/liquidio/lio_vf_main.c 217 */;
	pci_ers_result_t cocci_id/* drivers/net/ethernet/cavium/liquidio/lio_vf_main.c 216 */;
	struct lio cocci_id/* drivers/net/ethernet/cavium/liquidio/lio_vf_main.c 2048 */;
	struct liquidio_if_cfg_info cocci_id/* drivers/net/ethernet/cavium/liquidio/lio_vf_main.c 2014 */;
	struct lio_version cocci_id/* drivers/net/ethernet/cavium/liquidio/lio_vf_main.c 1958 */;
	struct liquidio_if_cfg_resp cocci_id/* drivers/net/ethernet/cavium/liquidio/lio_vf_main.c 1957 */;
	u8 cocci_id/* drivers/net/ethernet/cavium/liquidio/lio_vf_main.c 1935 */[ETH_ALEN];
	struct lio_version *cocci_id/* drivers/net/ethernet/cavium/liquidio/lio_vf_main.c 1933 */;
	struct octdev_props *cocci_id/* drivers/net/ethernet/cavium/liquidio/lio_vf_main.c 1931 */;
	union oct_nic_if_cfg cocci_id/* drivers/net/ethernet/cavium/liquidio/lio_vf_main.c 1930 */;
	struct liquidio_if_cfg_resp *cocci_id/* drivers/net/ethernet/cavium/liquidio/lio_vf_main.c 1928 */;
	union oct_link_status cocci_id/* drivers/net/ethernet/cavium/liquidio/lio_vf_main.c 1900 */;
	u64 *cocci_id/* drivers/net/ethernet/cavium/liquidio/lio_vf_main.c 1900 */;
	union oct_link_status *cocci_id/* drivers/net/ethernet/cavium/liquidio/lio_vf_main.c 1885 */;
	struct octeon_recv_pkt *cocci_id/* drivers/net/ethernet/cavium/liquidio/lio_vf_main.c 1884 */;
	struct octeon_recv_info *cocci_id/* drivers/net/ethernet/cavium/liquidio/lio_vf_main.c 1881 */;
	const struct net_device_ops cocci_id/* drivers/net/ethernet/cavium/liquidio/lio_vf_main.c 1863 */;
	struct udp_tunnel_info *cocci_id/* drivers/net/ethernet/cavium/liquidio/lio_vf_main.c 1840 */;
	netdev_features_t cocci_id/* drivers/net/ethernet/cavium/liquidio/lio_vf_main.c 1776 */;
	u8 cocci_id/* drivers/net/ethernet/cavium/liquidio/lio_vf_main.c 1708 */;
	u16 cocci_id/* drivers/net/ethernet/cavium/liquidio/lio_vf_main.c 1646 */;
	__be16 cocci_id/* drivers/net/ethernet/cavium/liquidio/lio_vf_main.c 1646 */;
	int cocci_id/* drivers/net/ethernet/cavium/liquidio/lio_vf_main.c 153 */;
	u32 cocci_id/* drivers/net/ethernet/cavium/liquidio/lio_vf_main.c 152 */;
	struct pci_dev *cocci_id/* drivers/net/ethernet/cavium/liquidio/lio_vf_main.c 150 */;
	void cocci_id/* drivers/net/ethernet/cavium/liquidio/lio_vf_main.c 150 */;
	union tx_info *cocci_id/* drivers/net/ethernet/cavium/liquidio/lio_vf_main.c 1413 */;
	struct octeon_instr_irh *cocci_id/* drivers/net/ethernet/cavium/liquidio/lio_vf_main.c 1409 */;
	struct octnic_data_pkt cocci_id/* drivers/net/ethernet/cavium/liquidio/lio_vf_main.c 1408 */;
	union octnic_cmd_setup cocci_id/* drivers/net/ethernet/cavium/liquidio/lio_vf_main.c 1407 */;
	netdev_tx_t cocci_id/* drivers/net/ethernet/cavium/liquidio/lio_vf_main.c 1404 */;
	struct octeon_instr_ih3 *cocci_id/* drivers/net/ethernet/cavium/liquidio/lio_vf_main.c 1380 */;
	struct oct_timestamp_resp cocci_id/* drivers/net/ethernet/cavium/liquidio/lio_vf_main.c 1363 */;
	struct octnic_data_pkt *cocci_id/* drivers/net/ethernet/cavium/liquidio/lio_vf_main.c 1350 */;
	unsigned long long cocci_id/* drivers/net/ethernet/cavium/liquidio/lio_vf_main.c 1335 */;
	u64 cocci_id/* drivers/net/ethernet/cavium/liquidio/lio_vf_main.c 1331 */;
	struct skb_shared_hwtstamps cocci_id/* drivers/net/ethernet/cavium/liquidio/lio_vf_main.c 1330 */;
	struct oct_timestamp_resp *cocci_id/* drivers/net/ethernet/cavium/liquidio/lio_vf_main.c 1311 */;
	struct octeon_device *cocci_id/* drivers/net/ethernet/cavium/liquidio/lio_vf_main.c 1307 */;
	struct hwtstamp_config cocci_id/* drivers/net/ethernet/cavium/liquidio/lio_vf_main.c 1242 */;
	struct ifreq *cocci_id/* drivers/net/ethernet/cavium/liquidio/lio_vf_main.c 1239 */;
	struct oct_iq_stats *cocci_id/* drivers/net/ethernet/cavium/liquidio/lio_vf_main.c 1174 */;
	struct oct_droq_stats *cocci_id/* drivers/net/ethernet/cavium/liquidio/lio_vf_main.c 1173 */;
	struct rtnl_link_stats64 *cocci_id/* drivers/net/ethernet/cavium/liquidio/lio_vf_main.c 1168 */;
	u8 *cocci_id/* drivers/net/ethernet/cavium/liquidio/lio_vf_main.c 1146 */;
	struct octnic_ctrl_pkt cocci_id/* drivers/net/ethernet/cavium/liquidio/lio_vf_main.c 1123 */;
	struct sockaddr *cocci_id/* drivers/net/ethernet/cavium/liquidio/lio_vf_main.c 1120 */;
	struct netdev_hw_addr *cocci_id/* drivers/net/ethernet/cavium/liquidio/lio_vf_main.c 1074 */;
	enum octnet_ifflags cocci_id/* drivers/net/ethernet/cavium/liquidio/lio_vf_main.c 1002 */;
}
