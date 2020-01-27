cocci_test_suite() {
	struct qlcnic_tx_mbx_out *cocci_id/* drivers/net/ethernet/qlogic/qlcnic/qlcnic_sriov_pf.c 948 */;
	struct qlcnic_rcv_mbx_out *cocci_id/* drivers/net/ethernet/qlogic/qlcnic/qlcnic_sriov_pf.c 888 */;
	u16 cocci_id/* drivers/net/ethernet/qlogic/qlcnic/qlcnic_sriov_pf.c 859 */;
	struct qlcnic_sriov *cocci_id/* drivers/net/ethernet/qlogic/qlcnic/qlcnic_sriov_pf.c 858 */;
	u8 *cocci_id/* drivers/net/ethernet/qlogic/qlcnic/qlcnic_sriov_pf.c 794 */;
	struct qlcnic_vport *cocci_id/* drivers/net/ethernet/qlogic/qlcnic/qlcnic_sriov_pf.c 793 */;
	struct qlcnic_macvlan_mbx cocci_id/* drivers/net/ethernet/qlogic/qlcnic/qlcnic_sriov_pf.c 792 */;
	struct qlcnic_cmd_args *cocci_id/* drivers/net/ethernet/qlogic/qlcnic/qlcnic_sriov_pf.c 791 */;
	u8 cocci_id/* drivers/net/ethernet/qlogic/qlcnic/qlcnic_sriov_pf.c 789 */;
	u32 cocci_id/* drivers/net/ethernet/qlogic/qlcnic/qlcnic_sriov_pf.c 76 */;
	size_t cocci_id/* drivers/net/ethernet/qlogic/qlcnic/qlcnic_sriov_pf.c 747 */;
	struct qlcnic_resources *cocci_id/* drivers/net/ethernet/qlogic/qlcnic/qlcnic_sriov_pf.c 72 */;
	struct pci_dev *cocci_id/* drivers/net/ethernet/qlogic/qlcnic/qlcnic_sriov_pf.c 666 */;
	struct qlcnic_adapter *cocci_id/* drivers/net/ethernet/qlogic/qlcnic/qlcnic_sriov_pf.c 581 */;
	int cocci_id/* drivers/net/ethernet/qlogic/qlcnic/qlcnic_sriov_pf.c 581 */;
	struct qlcnic_info cocci_id/* drivers/net/ethernet/qlogic/qlcnic/qlcnic_sriov_pf.c 507 */;
	struct qlcnic_hardware_context *cocci_id/* drivers/net/ethernet/qlogic/qlcnic/qlcnic_sriov_pf.c 506 */;
	struct net_device *cocci_id/* drivers/net/ethernet/qlogic/qlcnic/qlcnic_sriov_pf.c 467 */;
	struct workqueue_struct *cocci_id/* drivers/net/ethernet/qlogic/qlcnic/qlcnic_sriov_pf.c 422 */;
	struct qlcnic_back_channel *cocci_id/* drivers/net/ethernet/qlogic/qlcnic/qlcnic_sriov_pf.c 421 */;
	struct qlcnic_sriov_fw_cmd_handler {
		u32 cmd;
		int (*fn)(struct qlcnic_bc_trans *, struct qlcnic_cmd_args *);
	} cocci_id/* drivers/net/ethernet/qlogic/qlcnic/qlcnic_sriov_pf.c 28 */;
	struct qlcnic_sriov_cmd_handler {
		int (*fn)(struct qlcnic_bc_trans *, struct qlcnic_cmd_args *);
	} cocci_id/* drivers/net/ethernet/qlogic/qlcnic/qlcnic_sriov_pf.c 24 */;
	int cocci_id/* drivers/net/ethernet/qlogic/qlcnic/qlcnic_sriov_pf.c 22 */(struct qlcnic_adapter *,
										  u8);
	bool cocci_id/* drivers/net/ethernet/qlogic/qlcnic/qlcnic_sriov_pf.c 2023 */;
	struct ifla_vf_info *cocci_id/* drivers/net/ethernet/qlogic/qlcnic/qlcnic_sriov_pf.c 1993 */;
	__u32 cocci_id/* drivers/net/ethernet/qlogic/qlcnic/qlcnic_sriov_pf.c 1969 */;
	__be16 cocci_id/* drivers/net/ethernet/qlogic/qlcnic/qlcnic_sriov_pf.c 1914 */;
	struct qlcnic_info *cocci_id/* drivers/net/ethernet/qlogic/qlcnic/qlcnic_sriov_pf.c 176 */;
	struct qlcnic_bc_hdr *cocci_id/* drivers/net/ethernet/qlogic/qlcnic/qlcnic_sriov_pf.c 1724 */;
	work_func_t cocci_id/* drivers/net/ethernet/qlogic/qlcnic/qlcnic_sriov_pf.c 1696 */;
	struct qlcnic_vf_info cocci_id/* drivers/net/ethernet/qlogic/qlcnic/qlcnic_sriov_pf.c 1689 */;
	struct work_struct *cocci_id/* drivers/net/ethernet/qlogic/qlcnic/qlcnic_sriov_pf.c 1685 */;
	struct qlcnic_vf_info *cocci_id/* drivers/net/ethernet/qlogic/qlcnic/qlcnic_sriov_pf.c 1661 */;
	void cocci_id/* drivers/net/ethernet/qlogic/qlcnic/qlcnic_sriov_pf.c 1661 */;
	unsigned long cocci_id/* drivers/net/ethernet/qlogic/qlcnic/qlcnic_sriov_pf.c 1651 */;
	struct qlcnic_trans_list *cocci_id/* drivers/net/ethernet/qlogic/qlcnic/qlcnic_sriov_pf.c 1650 */;
	struct qlcnic_bc_trans *cocci_id/* drivers/net/ethernet/qlogic/qlcnic/qlcnic_sriov_pf.c 1648 */;
	struct qlcnic_cmd_args cocci_id/* drivers/net/ethernet/qlogic/qlcnic/qlcnic_sriov_pf.c 1597 */;
	u32 *cocci_id/* drivers/net/ethernet/qlogic/qlcnic/qlcnic_sriov_pf.c 1525 */;
	const struct qlcnic_sriov_fw_cmd_handler cocci_id/* drivers/net/ethernet/qlogic/qlcnic/qlcnic_sriov_pf.c 1470 */[];
	const struct qlcnic_sriov_cmd_handler cocci_id/* drivers/net/ethernet/qlogic/qlcnic/qlcnic_sriov_pf.c 1463 */[];
	const int cocci_id/* drivers/net/ethernet/qlogic/qlcnic/qlcnic_sriov_pf.c 1455 */[];
	struct qlcnic_nic_intr_coalesce *cocci_id/* drivers/net/ethernet/qlogic/qlcnic/qlcnic_sriov_pf.c 1197 */;
}
