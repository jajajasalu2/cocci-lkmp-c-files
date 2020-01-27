cocci_test_suite() {
	unsigned int cocci_id/* arch/x86/oprofile/op_model_amd.c 82 */;
	struct ibs_state cocci_id/* arch/x86/oprofile/op_model_amd.c 67 */;
	struct ibs_config cocci_id/* arch/x86/oprofile/op_model_amd.c 66 */;
	struct ibs_state {
		u64 ibs_op_ctl;
		int branch_target;
		unsigned long sample_size;
	} cocci_id/* arch/x86/oprofile/op_model_amd.c 60 */;
	struct oprofile_operations *cocci_id/* arch/x86/oprofile/op_model_amd.c 509 */;
	struct op_x86_model_spec cocci_id/* arch/x86/oprofile/op_model_amd.c 507 */;
	struct ibs_config {
		unsigned long op_enabled;
		unsigned long fetch_enabled;
		unsigned long max_cnt_fetch;
		unsigned long max_cnt_op;
		unsigned long rand_en;
		unsigned long dispatched_ops;
		unsigned long branch_target;
	} cocci_id/* arch/x86/oprofile/op_model_amd.c 50 */;
	u32 cocci_id/* arch/x86/oprofile/op_model_amd.c 48 */;
	struct dentry *cocci_id/* arch/x86/oprofile/op_model_amd.c 458 */;
	int (*cocci_id/* arch/x86/oprofile/op_model_amd.c 456 */)(struct dentry *root);
	void cocci_id/* arch/x86/oprofile/op_model_amd.c 446 */;
	unsigned long cocci_id/* arch/x86/oprofile/op_model_amd.c 43 */[OP_MAX_COUNTER];
	int cocci_id/* arch/x86/oprofile/op_model_amd.c 42 */;
	u64 cocci_id/* arch/x86/oprofile/op_model_amd.c 384 */;
	const struct op_msrs *const cocci_id/* arch/x86/oprofile/op_model_amd.c 382 */;
	struct pt_regs *const cocci_id/* arch/x86/oprofile/op_model_amd.c 381 */;
	const struct op_x86_model_spec *cocci_id/* arch/x86/oprofile/op_model_amd.c 333 */;
	struct op_msrs *const cocci_id/* arch/x86/oprofile/op_model_amd.c 302 */;
	unsigned long cocci_id/* arch/x86/oprofile/op_model_amd.c 179 */;
	struct op_entry cocci_id/* arch/x86/oprofile/op_model_amd.c 136 */;
}
