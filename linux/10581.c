cocci_test_suite() {
	struct guc_ct_buffer_desc cocci_id/* drivers/gpu/drm/i915/gt/uc/intel_guc_ct.c 93 */;
	u32 cocci_id/* drivers/gpu/drm/i915/gt/uc/intel_guc_ct.c 792 */[GUC_CT_MSG_LEN_MASK + 1];
	struct intel_guc_ct_buffer *cocci_id/* drivers/gpu/drm/i915/gt/uc/intel_guc_ct.c 791 */;
	struct intel_guc_ct_channel *cocci_id/* drivers/gpu/drm/i915/gt/uc/intel_guc_ct.c 790 */;
	unsigned long cocci_id/* drivers/gpu/drm/i915/gt/uc/intel_guc_ct.c 769 */;
	struct ct_incoming_request *cocci_id/* drivers/gpu/drm/i915/gt/uc/intel_guc_ct.c 768 */;
	u32 cocci_id/* drivers/gpu/drm/i915/gt/uc/intel_guc_ct.c 765 */;
	const u32 *cocci_id/* drivers/gpu/drm/i915/gt/uc/intel_guc_ct.c 763 */;
	struct intel_guc_ct *cocci_id/* drivers/gpu/drm/i915/gt/uc/intel_guc_ct.c 763 */;
	int cocci_id/* drivers/gpu/drm/i915/gt/uc/intel_guc_ct.c 763 */;
	struct intel_guc_ct cocci_id/* drivers/gpu/drm/i915/gt/uc/intel_guc_ct.c 737 */;
	struct work_struct *cocci_id/* drivers/gpu/drm/i915/gt/uc/intel_guc_ct.c 735 */;
	void cocci_id/* drivers/gpu/drm/i915/gt/uc/intel_guc_ct.c 735 */;
	struct ct_incoming_request cocci_id/* drivers/gpu/drm/i915/gt/uc/intel_guc_ct.c 715 */;
	u32 *cocci_id/* drivers/gpu/drm/i915/gt/uc/intel_guc_ct.c 710 */;
	struct intel_guc *cocci_id/* drivers/gpu/drm/i915/gt/uc/intel_guc_ct.c 685 */;
	bool cocci_id/* drivers/gpu/drm/i915/gt/uc/intel_guc_ct.c 633 */;
	struct ct_request *cocci_id/* drivers/gpu/drm/i915/gt/uc/intel_guc_ct.c 632 */;
	s32 cocci_id/* drivers/gpu/drm/i915/gt/uc/intel_guc_ct.c 560 */;
	struct guc_ct_buffer_desc *cocci_id/* drivers/gpu/drm/i915/gt/uc/intel_guc_ct.c 555 */;
	unsigned int cocci_id/* drivers/gpu/drm/i915/gt/uc/intel_guc_ct.c 543 */;
	const char *cocci_id/* drivers/gpu/drm/i915/gt/uc/intel_guc_ct.c 54 */;
	struct intel_guc cocci_id/* drivers/gpu/drm/i915/gt/uc/intel_guc_ct.c 51 */;
	struct ct_request cocci_id/* drivers/gpu/drm/i915/gt/uc/intel_guc_ct.c 453 */;
	void cocci_id/* drivers/gpu/drm/i915/gt/uc/intel_guc_ct.c 32 */(struct work_struct *w);
	enum{CTB_OWNER_HOST=0,} cocci_id/* drivers/gpu/drm/i915/gt/uc/intel_guc_ct.c 30 */;
	enum{CTB_SEND=0, CTB_RECV=1,} cocci_id/* drivers/gpu/drm/i915/gt/uc/intel_guc_ct.c 28 */;
	struct ct_incoming_request {
		struct list_head link;
		u32 msg[];
	} cocci_id/* drivers/gpu/drm/i915/gt/uc/intel_guc_ct.c 23 */;
	struct ct_request {
		struct list_head link;
		u32 fence;
		u32 status;
		u32 response_len;
		u32 *response_buf;
	} cocci_id/* drivers/gpu/drm/i915/gt/uc/intel_guc_ct.c 15 */;
	void *cocci_id/* drivers/gpu/drm/i915/gt/uc/intel_guc_ct.c 129 */;
	struct i915_vma *cocci_id/* drivers/gpu/drm/i915/gt/uc/intel_guc_ct.c 128 */;
	u32 cocci_id/* drivers/gpu/drm/i915/gt/uc/intel_guc_ct.c 110 */[];
}
