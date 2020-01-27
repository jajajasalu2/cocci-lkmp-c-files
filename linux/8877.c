cocci_test_suite() {
	struct hinic_mgmt_cb *cocci_id/* drivers/net/ethernet/huawei/hinic/hinic_hw_mgmt.c 81 */;
	void (*cocci_id/* drivers/net/ethernet/huawei/hinic/hinic_hw_mgmt.c 76 */)(void *handle,
										   u8 cmd,
										   void *buf_in,
										   u16 in_size,
										   void *buf_out,
										   u16 *out_size);
	enum msg_ack_type{MSG_ACK=0, MSG_NO_ACK=1,} cocci_id/* drivers/net/ethernet/huawei/hinic/hinic_hw_mgmt.c 61 */;
	struct hinic_hwdev *cocci_id/* drivers/net/ethernet/huawei/hinic/hinic_hw_mgmt.c 584 */;
	struct hinic_pfhwdev *cocci_id/* drivers/net/ethernet/huawei/hinic/hinic_hw_mgmt.c 583 */;
	void cocci_id/* drivers/net/ethernet/huawei/hinic/hinic_hw_mgmt.c 581 */;
	enum mgmt_direction_type{MGMT_DIRECT_SEND=0, MGMT_RESP=1,} cocci_id/* drivers/net/ethernet/huawei/hinic/hinic_hw_mgmt.c 56 */;
	struct pci_dev *cocci_id/* drivers/net/ethernet/huawei/hinic/hinic_hw_mgmt.c 513 */;
	struct hinic_hwif *cocci_id/* drivers/net/ethernet/huawei/hinic/hinic_hw_mgmt.c 512 */;
	struct hinic_pf_to_mgmt *cocci_id/* drivers/net/ethernet/huawei/hinic/hinic_hw_mgmt.c 510 */;
	int cocci_id/* drivers/net/ethernet/huawei/hinic/hinic_hw_mgmt.c 510 */;
	enum msg_segment_type{NOT_LAST_SEGMENT=0, LAST_SEGMENT=1,} cocci_id/* drivers/net/ethernet/huawei/hinic/hinic_hw_mgmt.c 51 */;
	struct hinic_pfhwdev cocci_id/* drivers/net/ethernet/huawei/hinic/hinic_hw_mgmt.c 49 */;
	struct hinic_recv_msg *cocci_id/* drivers/net/ethernet/huawei/hinic/hinic_hw_mgmt.c 486 */;
	u64 *cocci_id/* drivers/net/ethernet/huawei/hinic/hinic_hw_mgmt.c 468 */;
	unsigned long cocci_id/* drivers/net/ethernet/huawei/hinic/hinic_hw_mgmt.c 372 */;
	u8 *cocci_id/* drivers/net/ethernet/huawei/hinic/hinic_hw_mgmt.c 370 */;
	enum hinic_mgmt_msg_type cocci_id/* drivers/net/ethernet/huawei/hinic/hinic_hw_mgmt.c 340 */;
	u16 cocci_id/* drivers/net/ethernet/huawei/hinic/hinic_hw_mgmt.c 339 */;
	u16 *cocci_id/* drivers/net/ethernet/huawei/hinic/hinic_hw_mgmt.c 339 */;
	void *cocci_id/* drivers/net/ethernet/huawei/hinic/hinic_hw_mgmt.c 339 */;
	u8 cocci_id/* drivers/net/ethernet/huawei/hinic/hinic_hw_mgmt.c 338 */;
	enum hinic_mod_type cocci_id/* drivers/net/ethernet/huawei/hinic/hinic_hw_mgmt.c 338 */;
	enum mgmt_direction_type cocci_id/* drivers/net/ethernet/huawei/hinic/hinic_hw_mgmt.c 309 */;
	struct completion *cocci_id/* drivers/net/ethernet/huawei/hinic/hinic_hw_mgmt.c 246 */;
	struct hinic_api_cmd_chain *cocci_id/* drivers/net/ethernet/huawei/hinic/hinic_hw_mgmt.c 199 */;
	u64 cocci_id/* drivers/net/ethernet/huawei/hinic/hinic_hw_mgmt.c 167 */;
	enum msg_ack_type cocci_id/* drivers/net/ethernet/huawei/hinic/hinic_hw_mgmt.c 120 */;
}
