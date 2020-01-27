cocci_test_suite() {
	struct hinic_cmd_hw_ci cocci_id/* drivers/net/ethernet/huawei/hinic/hinic_hw_dev.c 981 */;
	struct hinic_qp cocci_id/* drivers/net/ethernet/huawei/hinic/hinic_hw_dev.c 977 */;
	struct hinic_qp *cocci_id/* drivers/net/ethernet/huawei/hinic/hinic_hw_dev.c 922 */;
	struct hinic_func_to_io *cocci_id/* drivers/net/ethernet/huawei/hinic/hinic_hw_dev.c 921 */;
	struct hinic_rq *cocci_id/* drivers/net/ethernet/huawei/hinic/hinic_hw_dev.c 919 */;
	struct hinic_sq *cocci_id/* drivers/net/ethernet/huawei/hinic/hinic_hw_dev.c 901 */;
	struct hinic_cap *cocci_id/* drivers/net/ethernet/huawei/hinic/hinic_hw_dev.c 73 */;
	struct hinic_dev_cap *cocci_id/* drivers/net/ethernet/huawei/hinic/hinic_hw_dev.c 71 */;
	enum hinic_cb_state cocci_id/* drivers/net/ethernet/huawei/hinic/hinic_hw_dev.c 672 */;
	u8 cocci_id/* drivers/net/ethernet/huawei/hinic/hinic_hw_dev.c 611 */;
	struct hinic_nic_cb *cocci_id/* drivers/net/ethernet/huawei/hinic/hinic_hw_dev.c 610 */;
	void (*cocci_id/* drivers/net/ethernet/huawei/hinic/hinic_hw_dev.c 603 */)(void *handle,
										   void *buf_in,
										   u16 in_size,
										   void *buf_out,
										   u16 *out_size);
	enum hinic_mgmt_msg_cmd cocci_id/* drivers/net/ethernet/huawei/hinic/hinic_hw_dev.c 602 */;
	void *cocci_id/* drivers/net/ethernet/huawei/hinic/hinic_hw_dev.c 602 */;
	struct msix_entry *cocci_id/* drivers/net/ethernet/huawei/hinic/hinic_hw_dev.c 521 */;
	struct hinic_dev_cap {
		u8 status;
		u8 version;
		u8 rsvd0[6];
		u8 rsvd1[5];
		u8 intr_type;
		u8 rsvd2[66];
		u16 max_sqs;
		u16 max_rqs;
		u8 rsvd3[208];
	} cocci_id/* drivers/net/ethernet/huawei/hinic/hinic_hw_dev.c 50 */;
	u16 cocci_id/* drivers/net/ethernet/huawei/hinic/hinic_hw_dev.c 491 */;
	struct hinic_cmd_base_qpn cocci_id/* drivers/net/ethernet/huawei/hinic/hinic_hw_dev.c 488 */;
	u16 *cocci_id/* drivers/net/ethernet/huawei/hinic/hinic_hw_dev.c 486 */;
	struct hinic_cmd_set_res_state cocci_id/* drivers/net/ethernet/huawei/hinic/hinic_hw_dev.c 457 */;
	enum hinic_res_state cocci_id/* drivers/net/ethernet/huawei/hinic/hinic_hw_dev.c 455 */;
	enum hw_ioctxt_set_cmdq_depth{HW_IOCTXT_SET_CMDQ_DEPTH_DEFAULT,} cocci_id/* drivers/net/ethernet/huawei/hinic/hinic_hw_dev.c 45 */;
	struct hinic_pfhwdev cocci_id/* drivers/net/ethernet/huawei/hinic/hinic_hw_dev.c 433 */;
	struct hinic_pfhwdev *cocci_id/* drivers/net/ethernet/huawei/hinic/hinic_hw_dev.c 417 */;
	struct pci_dev *cocci_id/* drivers/net/ethernet/huawei/hinic/hinic_hw_dev.c 416 */;
	struct hinic_hwif *cocci_id/* drivers/net/ethernet/huawei/hinic/hinic_hw_dev.c 415 */;
	struct hinic_cmd_clear_io_res cocci_id/* drivers/net/ethernet/huawei/hinic/hinic_hw_dev.c 414 */;
	struct hinic_hwdev *cocci_id/* drivers/net/ethernet/huawei/hinic/hinic_hw_dev.c 412 */;
	int cocci_id/* drivers/net/ethernet/huawei/hinic/hinic_hw_dev.c 412 */;
	enum io_status{IO_STOPPED=0, IO_RUNNING=1,} cocci_id/* drivers/net/ethernet/huawei/hinic/hinic_hw_dev.c 40 */;
	struct hinic_cmd_io_status cocci_id/* drivers/net/ethernet/huawei/hinic/hinic_hw_dev.c 364 */;
	enum intr_type{INTR_MSIX_TYPE,} cocci_id/* drivers/net/ethernet/huawei/hinic/hinic_hw_dev.c 36 */;
	unsigned long cocci_id/* drivers/net/ethernet/huawei/hinic/hinic_hw_dev.c 346 */;
	enum hinic_db_state cocci_id/* drivers/net/ethernet/huawei/hinic/hinic_hw_dev.c 345 */;
	enum hinic_outbound_state cocci_id/* drivers/net/ethernet/huawei/hinic/hinic_hw_dev.c 322 */;
	struct hinic_cmd_hw_ioctxt cocci_id/* drivers/net/ethernet/huawei/hinic/hinic_hw_dev.c 290 */;
	unsigned int cocci_id/* drivers/net/ethernet/huawei/hinic/hinic_hw_dev.c 286 */;
	struct hinic_cmd_fw_ctxt cocci_id/* drivers/net/ethernet/huawei/hinic/hinic_hw_dev.c 254 */;
	enum hinic_port_cmd cocci_id/* drivers/net/ethernet/huawei/hinic/hinic_hw_dev.c 225 */;
	void cocci_id/* drivers/net/ethernet/huawei/hinic/hinic_hw_dev.c 206 */;
	size_t cocci_id/* drivers/net/ethernet/huawei/hinic/hinic_hw_dev.c 175 */;
	struct hinic_dev_cap cocci_id/* drivers/net/ethernet/huawei/hinic/hinic_hw_dev.c 113 */;
	enum hinic_msix_state cocci_id/* drivers/net/ethernet/huawei/hinic/hinic_hw_dev.c 1017 */;
}
