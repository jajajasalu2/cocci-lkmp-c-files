cocci_test_suite() {
	struct hlist_node *cocci_id/* drivers/platform/x86/intel_speed_select_if/isst_if_common.c 99 */;
	struct isst_cmd *cocci_id/* drivers/platform/x86/intel_speed_select_if/isst_if_common.c 98 */;
	void cocci_id/* drivers/platform/x86/intel_speed_select_if/isst_if_common.c 96 */;
	struct isst_cmd {
		struct hlist_node hnode;
		u64 data;
		u32 cmd;
		int cpu;
		int mbox_cmd_type;
		u32 param;
	} cocci_id/* drivers/platform/x86/intel_speed_select_if/isst_if_common.c 64 */;
	struct isst_if_cmd_cb *cocci_id/* drivers/platform/x86/intel_speed_select_if/isst_if_common.c 613 */;
	struct miscdevice cocci_id/* drivers/platform/x86/intel_speed_select_if/isst_if_common.c 592 */;
	const struct file_operations cocci_id/* drivers/platform/x86/intel_speed_select_if/isst_if_common.c 586 */;
	const struct isst_cmd_set_req_type cocci_id/* drivers/platform/x86/intel_speed_select_if/isst_if_common.c 55 */[];
	struct inode *cocci_id/* drivers/platform/x86/intel_speed_select_if/isst_if_common.c 537 */;
	struct isst_if_msr_cmds cocci_id/* drivers/platform/x86/intel_speed_select_if/isst_if_common.c 521 */;
	struct isst_if_msr_cmd cocci_id/* drivers/platform/x86/intel_speed_select_if/isst_if_common.c 520 */;
	struct isst_if_cpu_maps cocci_id/* drivers/platform/x86/intel_speed_select_if/isst_if_common.c 505 */;
	struct isst_if_cpu_map cocci_id/* drivers/platform/x86/intel_speed_select_if/isst_if_common.c 504 */;
	struct isst_if_cmd_cb cocci_id/* drivers/platform/x86/intel_speed_select_if/isst_if_common.c 495 */;
	void __user *cocci_id/* drivers/platform/x86/intel_speed_select_if/isst_if_common.c 494 */;
	unsigned long cocci_id/* drivers/platform/x86/intel_speed_select_if/isst_if_common.c 492 */;
	struct file *cocci_id/* drivers/platform/x86/intel_speed_select_if/isst_if_common.c 491 */;
	long cocci_id/* drivers/platform/x86/intel_speed_select_if/isst_if_common.c 491 */;
	const struct isst_valid_cmd_ranges cocci_id/* drivers/platform/x86/intel_speed_select_if/isst_if_common.c 48 */[];
	u8 *cocci_id/* drivers/platform/x86/intel_speed_select_if/isst_if_common.c 443 */;
	u32 cocci_id/* drivers/platform/x86/intel_speed_select_if/isst_if_common.c 442 */;
	unsigned char __user *cocci_id/* drivers/platform/x86/intel_speed_select_if/isst_if_common.c 441 */;
	struct isst_cmd_set_req_type {
		u16 cmd;
		u16 sub_cmd;
		u16 param;
	} cocci_id/* drivers/platform/x86/intel_speed_select_if/isst_if_common.c 42 */;
	struct isst_if_msr_cmd *cocci_id/* drivers/platform/x86/intel_speed_select_if/isst_if_common.c 401 */;
	int *cocci_id/* drivers/platform/x86/intel_speed_select_if/isst_if_common.c 399 */;
	struct isst_if_cpu_map *cocci_id/* drivers/platform/x86/intel_speed_select_if/isst_if_common.c 374 */;
	struct isst_valid_cmd_ranges {
		u16 cmd;
		u16 sub_cmd_beg;
		u16 sub_cmd_end;
	} cocci_id/* drivers/platform/x86/intel_speed_select_if/isst_if_common.c 36 */;
	u64 cocci_id/* drivers/platform/x86/intel_speed_select_if/isst_if_common.c 316 */;
	unsigned int cocci_id/* drivers/platform/x86/intel_speed_select_if/isst_if_common.c 314 */;
	struct pci_dev *cocci_id/* drivers/platform/x86/intel_speed_select_if/isst_if_common.c 298 */;
	int cocci_id/* drivers/platform/x86/intel_speed_select_if/isst_if_common.c 29 */[];
	struct isst_if_cpu_info *cocci_id/* drivers/platform/x86/intel_speed_select_if/isst_if_common.c 284 */;
	struct isst_if_cpu_info {
		int bus_info[2];
		int punit_cpu_id;
	} cocci_id/* drivers/platform/x86/intel_speed_select_if/isst_if_common.c 278 */;
	struct isst_if_cmd_cb cocci_id/* drivers/platform/x86/intel_speed_select_if/isst_if_common.c 27 */[ISST_IF_DEV_MAX];
	struct isst_if_platform_info cocci_id/* drivers/platform/x86/intel_speed_select_if/isst_if_common.c 263 */;
	bool cocci_id/* drivers/platform/x86/intel_speed_select_if/isst_if_common.c 218 */;
	struct isst_if_mbox_cmd *cocci_id/* drivers/platform/x86/intel_speed_select_if/isst_if_common.c 218 */;
	struct isst_if_mbox_cmd cocci_id/* drivers/platform/x86/intel_speed_select_if/isst_if_common.c 152 */;
	int cocci_id/* drivers/platform/x86/intel_speed_select_if/isst_if_common.c 100 */;
}
