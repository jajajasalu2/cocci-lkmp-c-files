cocci_test_suite() {
	struct qed_rdma_device *cocci_id/* drivers/net/ethernet/qlogic/qed/qed_iwarp.c 95 */;
	struct qed_iwarp_ep_memory cocci_id/* drivers/net/ethernet/qlogic/qed/qed_iwarp.c 870 */;
	int cocci_id/* drivers/net/ethernet/qlogic/qed/qed_iwarp.c 87 */(struct qed_hwfn *p_hwfn,
									 u8 fw_event_code,
									 u16 echo,
									 union event_ring_data *data,
									 u8 fw_return_code);
	struct iwarp_mpa_offload_ramrod_data *cocci_id/* drivers/net/ethernet/qlogic/qed/qed_iwarp.c 836 */;
	union async_output *cocci_id/* drivers/net/ethernet/qlogic/qed/qed_iwarp.c 755 */;
	struct mpa_v2_hdr *cocci_id/* drivers/net/ethernet/qlogic/qed/qed_iwarp.c 754 */;
	struct tcp_offload_params_opt2 *cocci_id/* drivers/net/ethernet/qlogic/qed/qed_iwarp.c 644 */;
	struct iwarp_tcp_offload_ramrod_data *cocci_id/* drivers/net/ethernet/qlogic/qed/qed_iwarp.c 595 */;
	struct qed_iwarp_ep **cocci_id/* drivers/net/ethernet/qlogic/qed/qed_iwarp.c 562 */;
	struct mpa_v2_hdr {
		__be16 ird;
		__be16 ord;
	} cocci_id/* drivers/net/ethernet/qlogic/qed/qed_iwarp.c 52 */;
	const char *constcocci_id/* drivers/net/ethernet/qlogic/qed/qed_iwarp.c 385 */[];
	enum qed_iwarp_qp_state cocci_id/* drivers/net/ethernet/qlogic/qed/qed_iwarp.c 367 */;
	enum qed_roce_qp_state cocci_id/* drivers/net/ethernet/qlogic/qed/qed_iwarp.c 366 */;
	struct qed_rdma_query_qp_out_params *cocci_id/* drivers/net/ethernet/qlogic/qed/qed_iwarp.c 3236 */;
	struct qed_iwarp_send_rtr_in *cocci_id/* drivers/net/ethernet/qlogic/qed/qed_iwarp.c 3195 */;
	struct qed_iwarp_listener *cocci_id/* drivers/net/ethernet/qlogic/qed/qed_iwarp.c 3145 */;
	struct qed_iwarp_listen_out *cocci_id/* drivers/net/ethernet/qlogic/qed/qed_iwarp.c 3142 */;
	struct qed_iwarp_listen_in *cocci_id/* drivers/net/ethernet/qlogic/qed/qed_iwarp.c 3141 */;
	struct iwarp_modify_qp_ramrod_data *cocci_id/* drivers/net/ethernet/qlogic/qed/qed_iwarp.c 314 */;
	uintptr_t cocci_id/* drivers/net/ethernet/qlogic/qed/qed_iwarp.c 3046 */;
	struct regpair *cocci_id/* drivers/net/ethernet/qlogic/qed/qed_iwarp.c 3040 */;
	struct qed_rdma_events cocci_id/* drivers/net/ethernet/qlogic/qed/qed_iwarp.c 3039 */;
	union event_ring_data *cocci_id/* drivers/net/ethernet/qlogic/qed/qed_iwarp.c 3036 */;
	u16 cocci_id/* drivers/net/ethernet/qlogic/qed/qed_iwarp.c 3035 */;
	bool cocci_id/* drivers/net/ethernet/qlogic/qed/qed_iwarp.c 3023 */;
	struct qed_iwarp_cm_event_params cocci_id/* drivers/net/ethernet/qlogic/qed/qed_iwarp.c 2868 */;
	enum chip_ids cocci_id/* drivers/net/ethernet/qlogic/qed/qed_iwarp.c 2790 */;
	struct qed_dev *cocci_id/* drivers/net/ethernet/qlogic/qed/qed_iwarp.c 2788 */;
	struct {
		u32 two_ports;
		u32 four_ports;
	} cocci_id/* drivers/net/ethernet/qlogic/qed/qed_iwarp.c 2777 */[MAX_CHIP_IDS];
	struct qed_ll2_cbs cocci_id/* drivers/net/ethernet/qlogic/qed/qed_iwarp.c 2625 */;
	struct qed_ll2_acquire_data cocci_id/* drivers/net/ethernet/qlogic/qed/qed_iwarp.c 2624 */;
	struct qed_rdma_start_in_params *cocci_id/* drivers/net/ethernet/qlogic/qed/qed_iwarp.c 2620 */;
	struct unaligned_opaque_data cocci_id/* drivers/net/ethernet/qlogic/qed/qed_iwarp.c 2524 */;
	dma_addr_t cocci_id/* drivers/net/ethernet/qlogic/qed/qed_iwarp.c 2466 */;
	u8 cocci_id/* drivers/net/ethernet/qlogic/qed/qed_iwarp.c 2348 */[ETH_ALEN];
	struct qed_iwarp_cm_info cocci_id/* drivers/net/ethernet/qlogic/qed/qed_iwarp.c 2346 */;
	struct qed_ll2_tx_pkt_info cocci_id/* drivers/net/ethernet/qlogic/qed/qed_iwarp.c 2345 */;
	struct qed_iwarp_ll2_mpa_buf cocci_id/* drivers/net/ethernet/qlogic/qed/qed_iwarp.c 2308 */;
	struct qed_iwarp_ll2_mpa_buf *cocci_id/* drivers/net/ethernet/qlogic/qed/qed_iwarp.c 2302 */;
	struct qed_ll2_comp_rx_data *cocci_id/* drivers/net/ethernet/qlogic/qed/qed_iwarp.c 2300 */;
	u64 cocci_id/* drivers/net/ethernet/qlogic/qed/qed_iwarp.c 2136 */;
	struct qed_spq_entry *cocci_id/* drivers/net/ethernet/qlogic/qed/qed_iwarp.c 213 */;
	struct qed_sp_init_data cocci_id/* drivers/net/ethernet/qlogic/qed/qed_iwarp.c 212 */;
	struct iwarp_create_qp_ramrod_data *cocci_id/* drivers/net/ethernet/qlogic/qed/qed_iwarp.c 211 */;
	struct qed_rdma_create_qp_out_params *cocci_id/* drivers/net/ethernet/qlogic/qed/qed_iwarp.c 209 */;
	struct qed_rdma_qp *cocci_id/* drivers/net/ethernet/qlogic/qed/qed_iwarp.c 208 */;
	unsigned long int cocci_id/* drivers/net/ethernet/qlogic/qed/qed_iwarp.c 2012 */;
	struct qed_iwarp_ll2_buff *cocci_id/* drivers/net/ethernet/qlogic/qed/qed_iwarp.c 1891 */;
	struct unaligned_opaque_data *cocci_id/* drivers/net/ethernet/qlogic/qed/qed_iwarp.c 1890 */;
	struct qed_iwarp_fpdu *cocci_id/* drivers/net/ethernet/qlogic/qed/qed_iwarp.c 1889 */;
	u16 *cocci_id/* drivers/net/ethernet/qlogic/qed/qed_iwarp.c 1849 */;
	enum qed_iwarp_mpa_pkt_type cocci_id/* drivers/net/ethernet/qlogic/qed/qed_iwarp.c 1827 */;
	int cocci_id/* drivers/net/ethernet/qlogic/qed/qed_iwarp.c 1822 */(struct qed_hwfn *p_hwfn,
									   struct qed_iwarp_fpdu *fpdu,
									   struct qed_iwarp_ll2_buff *buf);
	enum qed_iwarp_mpa_pkt_type{QED_IWARP_MPA_PKT_PACKED, QED_IWARP_MPA_PKT_PARTIAL, QED_IWARP_MPA_PKT_UNALIGNED,} cocci_id/* drivers/net/ethernet/qlogic/qed/qed_iwarp.c 1796 */;
	struct iphdr *cocci_id/* drivers/net/ethernet/qlogic/qed/qed_iwarp.c 1682 */;
	struct tcphdr *cocci_id/* drivers/net/ethernet/qlogic/qed/qed_iwarp.c 1681 */;
	struct ethhdr *cocci_id/* drivers/net/ethernet/qlogic/qed/qed_iwarp.c 1680 */;
	struct ipv6hdr *cocci_id/* drivers/net/ethernet/qlogic/qed/qed_iwarp.c 1679 */;
	struct vlan_ethhdr *cocci_id/* drivers/net/ethernet/qlogic/qed/qed_iwarp.c 1677 */;
	int *cocci_id/* drivers/net/ethernet/qlogic/qed/qed_iwarp.c 1675 */;
	const u32 cocci_id/* drivers/net/ethernet/qlogic/qed/qed_iwarp.c 1634 */[4];
	struct qed_iwarp_cm_info *cocci_id/* drivers/net/ethernet/qlogic/qed/qed_iwarp.c 1598 */;
	struct qed_iwarp_reject_in *cocci_id/* drivers/net/ethernet/qlogic/qed/qed_iwarp.c 1523 */;
	u8 *cocci_id/* drivers/net/ethernet/qlogic/qed/qed_iwarp.c 1512 */;
	u32 *cocci_id/* drivers/net/ethernet/qlogic/qed/qed_iwarp.c 148 */;
	u8 cocci_id/* drivers/net/ethernet/qlogic/qed/qed_iwarp.c 1462 */;
	struct qed_iwarp_ep *cocci_id/* drivers/net/ethernet/qlogic/qed/qed_iwarp.c 1461 */;
	struct qed_hwfn *cocci_id/* drivers/net/ethernet/qlogic/qed/qed_iwarp.c 1460 */;
	struct qed_iwarp_accept_in *cocci_id/* drivers/net/ethernet/qlogic/qed/qed_iwarp.c 1458 */;
	void *cocci_id/* drivers/net/ethernet/qlogic/qed/qed_iwarp.c 1458 */;
	int cocci_id/* drivers/net/ethernet/qlogic/qed/qed_iwarp.c 1458 */;
	struct iwarp_init_func_ramrod_data *cocci_id/* drivers/net/ethernet/qlogic/qed/qed_iwarp.c 137 */;
	struct qed_iwarp_ep cocci_id/* drivers/net/ethernet/qlogic/qed/qed_iwarp.c 1358 */;
	struct qed_bmap *cocci_id/* drivers/net/ethernet/qlogic/qed/qed_iwarp.c 1300 */;
	u32 cocci_id/* drivers/net/ethernet/qlogic/qed/qed_iwarp.c 120 */;
	void cocci_id/* drivers/net/ethernet/qlogic/qed/qed_iwarp.c 120 */;
	struct qed_iwarp_info *cocci_id/* drivers/net/ethernet/qlogic/qed/qed_iwarp.c 1166 */;
	struct qed_iwarp_connect_out *cocci_id/* drivers/net/ethernet/qlogic/qed/qed_iwarp.c 1163 */;
	struct qed_iwarp_connect_in *cocci_id/* drivers/net/ethernet/qlogic/qed/qed_iwarp.c 1162 */;
	struct qed_ptt *cocci_id/* drivers/net/ethernet/qlogic/qed/qed_iwarp.c 109 */;
}
