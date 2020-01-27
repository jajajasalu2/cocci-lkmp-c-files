cocci_test_suite() {
	enum eq_arm_state{EQ_NOT_ARMED, EQ_ARMED,} cocci_id/* drivers/net/ethernet/huawei/hinic/hinic_hw_eqs.c 98 */;
	enum eq_int_mode{EQ_INT_MODE_ARMED, EQ_INT_MODE_ALWAYS,} cocci_id/* drivers/net/ethernet/huawei/hinic/hinic_hw_eqs.c 93 */;
	struct hinic_eq_work cocci_id/* drivers/net/ethernet/huawei/hinic/hinic_hw_eqs.c 85 */;
	struct hinic_ceqs cocci_id/* drivers/net/ethernet/huawei/hinic/hinic_hw_eqs.c 82 */;
	struct hinic_aeqs cocci_id/* drivers/net/ethernet/huawei/hinic/hinic_hw_eqs.c 79 */;
	struct msix_entry *cocci_id/* drivers/net/ethernet/huawei/hinic/hinic_hw_eqs.c 783 */;
	struct msix_entry cocci_id/* drivers/net/ethernet/huawei/hinic/hinic_hw_eqs.c 662 */;
	enum hinic_eq_type cocci_id/* drivers/net/ethernet/huawei/hinic/hinic_hw_eqs.c 661 */;
	size_t cocci_id/* drivers/net/ethernet/huawei/hinic/hinic_hw_eqs.c 571 */;
	u32 *cocci_id/* drivers/net/ethernet/huawei/hinic/hinic_hw_eqs.c 549 */;
	int cocci_id/* drivers/net/ethernet/huawei/hinic/hinic_hw_eqs.c 532 */;
	struct hinic_aeq_elem *cocci_id/* drivers/net/ethernet/huawei/hinic/hinic_hw_eqs.c 531 */;
	u32 cocci_id/* drivers/net/ethernet/huawei/hinic/hinic_hw_eqs.c 529 */;
	struct hinic_eq *cocci_id/* drivers/net/ethernet/huawei/hinic/hinic_hw_eqs.c 529 */;
	void cocci_id/* drivers/net/ethernet/huawei/hinic/hinic_hw_eqs.c 529 */;
	struct hinic_aeqs *cocci_id/* drivers/net/ethernet/huawei/hinic/hinic_hw_eqs.c 386 */;
	struct hinic_eq_work *cocci_id/* drivers/net/ethernet/huawei/hinic/hinic_hw_eqs.c 384 */;
	irqreturn_t cocci_id/* drivers/net/ethernet/huawei/hinic/hinic_hw_eqs.c 382 */;
	void *cocci_id/* drivers/net/ethernet/huawei/hinic/hinic_hw_eqs.c 382 */;
	struct work_struct *cocci_id/* drivers/net/ethernet/huawei/hinic/hinic_hw_eqs.c 357 */;
	enum hinic_ceq_type cocci_id/* drivers/net/ethernet/huawei/hinic/hinic_hw_eqs.c 283 */;
	struct hinic_ceq_cb *cocci_id/* drivers/net/ethernet/huawei/hinic/hinic_hw_eqs.c 282 */;
	struct hinic_ceqs *cocci_id/* drivers/net/ethernet/huawei/hinic/hinic_hw_eqs.c 278 */;
	unsigned long cocci_id/* drivers/net/ethernet/huawei/hinic/hinic_hw_eqs.c 224 */;
	enum hinic_aeq_type cocci_id/* drivers/net/ethernet/huawei/hinic/hinic_hw_eqs.c 223 */;
	struct hinic_hw_event_cb *cocci_id/* drivers/net/ethernet/huawei/hinic/hinic_hw_eqs.c 222 */;
	struct pci_dev *cocci_id/* drivers/net/ethernet/huawei/hinic/hinic_hw_eqs.c 220 */;
	struct hinic_hwif *cocci_id/* drivers/net/ethernet/huawei/hinic/hinic_hw_eqs.c 219 */;
	u8 cocci_id/* drivers/net/ethernet/huawei/hinic/hinic_hw_eqs.c 176 */;
	void (*cocci_id/* drivers/net/ethernet/huawei/hinic/hinic_hw_eqs.c 149 */)(void *handle,
										   u32 ceqe_data);
	void (*cocci_id/* drivers/net/ethernet/huawei/hinic/hinic_hw_eqs.c 112 */)(void *handle,
										   void *data,
										   u8 size);
}
