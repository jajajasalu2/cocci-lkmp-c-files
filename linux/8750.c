cocci_test_suite() {
	struct rx_queue_update_ramrod_data *cocci_id/* drivers/net/ethernet/qlogic/qed/qed_l2.c 990 */;
	void **cocci_id/* drivers/net/ethernet/qlogic/qed/qed_l2.c 983 */;
	struct qed_rxq_start_ret_params *cocci_id/* drivers/net/ethernet/qlogic/qed/qed_l2.c 949 */;
	void __iomem **cocci_id/* drivers/net/ethernet/qlogic/qed/qed_l2.c 923 */;
	dma_addr_t cocci_id/* drivers/net/ethernet/qlogic/qed/qed_l2.c 921 */;
	struct rx_queue_start_ramrod_data *cocci_id/* drivers/net/ethernet/qlogic/qed/qed_l2.c 865 */;
	struct qed_sp_vport_update_params cocci_id/* drivers/net/ethernet/qlogic/qed/qed_l2.c 817 */;
	enum spq_mode cocci_id/* drivers/net/ethernet/qlogic/qed/qed_l2.c 814 */;
	struct qed_filter_accept_flags *cocci_id/* drivers/net/ethernet/qlogic/qed/qed_l2.c 798 */;
	unsigned long **cocci_id/* drivers/net/ethernet/qlogic/qed/qed_l2.c 79 */;
	struct vport_stop_ramrod_data *cocci_id/* drivers/net/ethernet/qlogic/qed/qed_l2.c 766 */;
	struct vport_update_ramrod_data_cmn *cocci_id/* drivers/net/ethernet/qlogic/qed/qed_l2.c 684 */;
	struct qed_rss_params *cocci_id/* drivers/net/ethernet/qlogic/qed/qed_l2.c 683 */;
	struct qed_l2_info {
		u32 queues;
		unsigned long **pp_qid_usage;
		struct mutex lock;
	} cocci_id/* drivers/net/ethernet/qlogic/qed/qed_l2.c 68 */;
	struct qed_sp_vport_update_params *cocci_id/* drivers/net/ethernet/qlogic/qed/qed_l2.c 660 */;
	struct eth_vport_tpa_param *cocci_id/* drivers/net/ethernet/qlogic/qed/qed_l2.c 630 */;
	struct qed_sge_tpa_params *cocci_id/* drivers/net/ethernet/qlogic/qed/qed_l2.c 628 */;
	struct eth_vport_rss_config *cocci_id/* drivers/net/ethernet/qlogic/qed/qed_l2.c 456 */;
	struct eth_vport_tpa_param cocci_id/* drivers/net/ethernet/qlogic/qed/qed_l2.c 405 */;
	struct vport_start_ramrod_data *cocci_id/* drivers/net/ethernet/qlogic/qed/qed_l2.c 368 */;
	struct qed_sp_vport_start_params *cocci_id/* drivers/net/ethernet/qlogic/qed/qed_l2.c 366 */;
	const struct qed_eth_ops *cocci_id/* drivers/net/ethernet/qlogic/qed/qed_l2.c 2943 */;
	const struct qed_eth_ops cocci_id/* drivers/net/ethernet/qlogic/qed/qed_l2.c 2913 */;
	const struct qed_eth_ptp_ops cocci_id/* drivers/net/ethernet/qlogic/qed/qed_l2.c 2911 */;
	const struct qed_eth_dcbnl_ops cocci_id/* drivers/net/ethernet/qlogic/qed/qed_l2.c 2908 */;
	const struct qed_iov_hv_ops cocci_id/* drivers/net/ethernet/qlogic/qed/qed_l2.c 2904 */;
	struct eth_slow_path_rx_cqe *cocci_id/* drivers/net/ethernet/qlogic/qed/qed_l2.c 2879 */;
	u16 *cocci_id/* drivers/net/ethernet/qlogic/qed/qed_l2.c 2863 */;
	struct qed_spq_comp_cb cocci_id/* drivers/net/ethernet/qlogic/qed/qed_l2.c 2834 */;
	struct qed_common_cb_ops *cocci_id/* drivers/net/ethernet/qlogic/qed/qed_l2.c 2822 */;
	union event_ring_data *cocci_id/* drivers/net/ethernet/qlogic/qed/qed_l2.c 2820 */;
	void *cocci_id/* drivers/net/ethernet/qlogic/qed/qed_l2.c 2819 */;
	struct qed_arfs_config_params cocci_id/* drivers/net/ethernet/qlogic/qed/qed_l2.c 2804 */;
	enum qed_filter_rx_mode_type cocci_id/* drivers/net/ethernet/qlogic/qed/qed_l2.c 2784 */;
	struct qed_filter_params *cocci_id/* drivers/net/ethernet/qlogic/qed/qed_l2.c 2782 */;
	struct qed_filter_mcast cocci_id/* drivers/net/ethernet/qlogic/qed/qed_l2.c 2758 */;
	struct qed_filter_mcast_params *cocci_id/* drivers/net/ethernet/qlogic/qed/qed_l2.c 2756 */;
	struct qed_filter_ucast cocci_id/* drivers/net/ethernet/qlogic/qed/qed_l2.c 2713 */;
	struct qed_filter_ucast_params *cocci_id/* drivers/net/ethernet/qlogic/qed/qed_l2.c 2711 */;
	struct qed_filter_accept_flags cocci_id/* drivers/net/ethernet/qlogic/qed/qed_l2.c 2683 */;
	struct qed_tunnel_info *cocci_id/* drivers/net/ethernet/qlogic/qed/qed_l2.c 2639 */;
	struct qed_tunnel_info cocci_id/* drivers/net/ethernet/qlogic/qed/qed_l2.c 2622 */;
	struct qed_tunn_params *cocci_id/* drivers/net/ethernet/qlogic/qed/qed_l2.c 2620 */;
	struct qed_update_vport_params *cocci_id/* drivers/net/ethernet/qlogic/qed/qed_l2.c 2443 */;
	struct qed_rss_params cocci_id/* drivers/net/ethernet/qlogic/qed/qed_l2.c 2409 */;
	struct qed_update_vport_rss_params *cocci_id/* drivers/net/ethernet/qlogic/qed/qed_l2.c 2380 */;
	struct qed_sp_vport_start_params cocci_id/* drivers/net/ethernet/qlogic/qed/qed_l2.c 2323 */;
	struct qed_start_vport_params *cocci_id/* drivers/net/ethernet/qlogic/qed/qed_l2.c 2318 */;
	struct qed_eth_cb_ops *cocci_id/* drivers/net/ethernet/qlogic/qed/qed_l2.c 2299 */;
	struct qed_dev_eth_info *cocci_id/* drivers/net/ethernet/qlogic/qed/qed_l2.c 2200 */;
	struct qed_queue_cid_vf_params *cocci_id/* drivers/net/ethernet/qlogic/qed/qed_l2.c 219 */;
	struct qed_queue_start_common_params *cocci_id/* drivers/net/ethernet/qlogic/qed/qed_l2.c 217 */;
	struct qed_queue_cid *cocci_id/* drivers/net/ethernet/qlogic/qed/qed_l2.c 213 */;
	struct cau_sb_entry cocci_id/* drivers/net/ethernet/qlogic/qed/qed_l2.c 2104 */;
	u64 cocci_id/* drivers/net/ethernet/qlogic/qed/qed_l2.c 2090 */;
	struct qed_sp_init_data cocci_id/* drivers/net/ethernet/qlogic/qed/qed_l2.c 2032 */;
	struct qed_spq_entry *cocci_id/* drivers/net/ethernet/qlogic/qed/qed_l2.c 2031 */;
	struct rx_update_gft_filter_data *cocci_id/* drivers/net/ethernet/qlogic/qed/qed_l2.c 2030 */;
	struct qed_ntuple_filter_params *cocci_id/* drivers/net/ethernet/qlogic/qed/qed_l2.c 2028 */;
	struct qed_spq_comp_cb *cocci_id/* drivers/net/ethernet/qlogic/qed/qed_l2.c 2027 */;
	struct qed_arfs_config_params *cocci_id/* drivers/net/ethernet/qlogic/qed/qed_l2.c 2002 */;
	enum qed_filter_config_mode cocci_id/* drivers/net/ethernet/qlogic/qed/qed_l2.c 1989 */;
	enum gft_profile_type cocci_id/* drivers/net/ethernet/qlogic/qed/qed_l2.c 1988 */;
	u64 *cocci_id/* drivers/net/ethernet/qlogic/qed/qed_l2.c 1938 */;
	struct qed_eth_stats cocci_id/* drivers/net/ethernet/qlogic/qed/qed_l2.c 1937 */;
	u8 cocci_id/* drivers/net/ethernet/qlogic/qed/qed_l2.c 1888 */;
	struct qed_dev *cocci_id/* drivers/net/ethernet/qlogic/qed/qed_l2.c 1885 */;
	bool cocci_id/* drivers/net/ethernet/qlogic/qed/qed_l2.c 1874 */;
	struct qed_eth_stats_ah *cocci_id/* drivers/net/ethernet/qlogic/qed/qed_l2.c 1857 */;
	struct qed_eth_stats_bb *cocci_id/* drivers/net/ethernet/qlogic/qed/qed_l2.c 1834 */;
	struct public_port cocci_id/* drivers/net/ethernet/qlogic/qed/qed_l2.c 1791 */;
	int cocci_id/* drivers/net/ethernet/qlogic/qed/qed_l2.c 1785 */;
	struct port_stats cocci_id/* drivers/net/ethernet/qlogic/qed/qed_l2.c 1784 */;
	struct qed_eth_stats_common *cocci_id/* drivers/net/ethernet/qlogic/qed/qed_l2.c 1783 */;
	u32 cocci_id/* drivers/net/ethernet/qlogic/qed/qed_l2.c 1756 */;
	struct eth_mstorm_per_queue_stat cocci_id/* drivers/net/ethernet/qlogic/qed/qed_l2.c 1755 */;
	u16 cocci_id/* drivers/net/ethernet/qlogic/qed/qed_l2.c 1753 */;
	struct qed_eth_stats *cocci_id/* drivers/net/ethernet/qlogic/qed/qed_l2.c 1753 */;
	struct qed_ptt *cocci_id/* drivers/net/ethernet/qlogic/qed/qed_l2.c 1752 */;
	struct qed_hwfn *cocci_id/* drivers/net/ethernet/qlogic/qed/qed_l2.c 1752 */;
	void cocci_id/* drivers/net/ethernet/qlogic/qed/qed_l2.c 1751 */;
	struct pfvf_acquire_resp_tlv *cocci_id/* drivers/net/ethernet/qlogic/qed/qed_l2.c 1744 */;
	struct qed_vf_iov *cocci_id/* drivers/net/ethernet/qlogic/qed/qed_l2.c 1743 */;
	u32 *cocci_id/* drivers/net/ethernet/qlogic/qed/qed_l2.c 1735 */;
	struct eth_ustorm_per_queue_stat cocci_id/* drivers/net/ethernet/qlogic/qed/qed_l2.c 1714 */;
	struct tstorm_per_port_stat cocci_id/* drivers/net/ethernet/qlogic/qed/qed_l2.c 1667 */;
	struct eth_pstorm_per_queue_stat cocci_id/* drivers/net/ethernet/qlogic/qed/qed_l2.c 1638 */;
	struct qed_filter_ucast *cocci_id/* drivers/net/ethernet/qlogic/qed/qed_l2.c 1587 */;
	struct qed_filter_mcast *cocci_id/* drivers/net/ethernet/qlogic/qed/qed_l2.c 1553 */;
	struct vport_update_ramrod_mcast *cocci_id/* drivers/net/ethernet/qlogic/qed/qed_l2.c 1540 */;
	struct qed_l2_info *cocci_id/* drivers/net/ethernet/qlogic/qed/qed_l2.c 154 */;
	u32 cocci_id/* drivers/net/ethernet/qlogic/qed/qed_l2.c 1489 */[ETH_MULTICAST_MAC_BINS_IN_REGS];
	struct vport_update_ramrod_data *cocci_id/* drivers/net/ethernet/qlogic/qed/qed_l2.c 1488 */;
	u32 cocci_id/* drivers/net/ethernet/qlogic/qed/qed_l2.c 1467 */[2];
	u8 *cocci_id/* drivers/net/ethernet/qlogic/qed/qed_l2.c 1441 */;
	struct eth_filter_cmd_header *cocci_id/* drivers/net/ethernet/qlogic/qed/qed_l2.c 1388 */;
	struct eth_filter_cmd *cocci_id/* drivers/net/ethernet/qlogic/qed/qed_l2.c 1249 */;
	struct vport_filter_update_ramrod_data *cocci_id/* drivers/net/ethernet/qlogic/qed/qed_l2.c 1248 */;
	struct qed_spq_entry **cocci_id/* drivers/net/ethernet/qlogic/qed/qed_l2.c 1243 */;
	struct vport_filter_update_ramrod_data **cocci_id/* drivers/net/ethernet/qlogic/qed/qed_l2.c 1242 */;
	enum qed_filter_opcode cocci_id/* drivers/net/ethernet/qlogic/qed/qed_l2.c 1217 */;
	enum eth_filter_action cocci_id/* drivers/net/ethernet/qlogic/qed/qed_l2.c 1217 */;
	struct qed_txq_start_ret_params *cocci_id/* drivers/net/ethernet/qlogic/qed/qed_l2.c 1155 */;
	struct tx_queue_start_ramrod_data *cocci_id/* drivers/net/ethernet/qlogic/qed/qed_l2.c 1090 */;
	struct rx_queue_stop_ramrod_data *cocci_id/* drivers/net/ethernet/qlogic/qed/qed_l2.c 1034 */;
	unsigned long *cocci_id/* drivers/net/ethernet/qlogic/qed/qed_l2.c 101 */;
	struct qed_queue_cid **cocci_id/* drivers/net/ethernet/qlogic/qed/qed_l2.c 1002 */;
}
