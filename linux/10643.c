cocci_test_suite() {
	char *cocci_id/* drivers/gpu/drm/i915/gvt/cmd_parser.c 882 */;
	const struct decode_info *cocci_id/* drivers/gpu/drm/i915/gvt/cmd_parser.c 640 */;
	struct decode_info {
		const char *name;
		int op_len;
		int nr_sub_op;
		const struct sub_op_bits *sub_op;
	} cocci_id/* drivers/gpu/drm/i915/gvt/cmd_parser.c 59 */;
	const struct decode_info *cocci_id/* drivers/gpu/drm/i915/gvt/cmd_parser.c 581 */[I915_NUM_ENGINES][8];
	struct sub_op_bits {
		int hi;
		int low;
	} cocci_id/* drivers/gpu/drm/i915/gvt/cmd_parser.c 55 */;
	const struct decode_info cocci_id/* drivers/gpu/drm/i915/gvt/cmd_parser.c 527 */;
	const struct sub_op_bits cocci_id/* drivers/gpu/drm/i915/gvt/cmd_parser.c 522 */[];
	unsigned long cocci_id/* drivers/gpu/drm/i915/gvt/cmd_parser.c 506 */;
	struct parser_exec_state {
		struct intel_vgpu *vgpu;
		int ring_id;
		int buf_type;
		int buf_addr_type;
		unsigned long ring_start;
		unsigned long ring_size;
		unsigned long ring_head;
		unsigned long ring_tail;
		unsigned long ip_gma;
		void *ip_va;
		void *rb_va;
		void *ret_bb_va;
		unsigned long ret_ip_gma_ring;
		unsigned long ret_ip_gma_bb;
		int saved_buf_addr_type;
		bool is_ctx_wa;
		const struct cmd_info *info;
		struct intel_vgpu_workload *workload;
	} cocci_id/* drivers/gpu/drm/i915/gvt/cmd_parser.c 463 */;
	enum{GTT_BUFFER, PPGTT_BUFFER,} cocci_id/* drivers/gpu/drm/i915/gvt/cmd_parser.c 458 */;
	enum{RING_BUFFER_INSTRUCTION, BATCH_BUFFER_INSTRUCTION, BATCH_BUFFER_2ND_LEVEL,} cocci_id/* drivers/gpu/drm/i915/gvt/cmd_parser.c 452 */;
	struct cmd_entry {
		struct hlist_node hlist;
		const struct cmd_info *info;
	} cocci_id/* drivers/gpu/drm/i915/gvt/cmd_parser.c 447 */;
	struct cmd_info {
		const char *name;
		u32 opcode;
#define F_LEN_MASK 3U
#define F_LEN_CONST 1U
#define F_LEN_VAR 0U
#define F_LEN_VAR_FIXED (1 << 1)
#define F_IP_ADVANCE_CUSTOM (1 << 2)
				u32 flag;
#define R_RCS BIT(RCS0)
#define R_VCS1 BIT(VCS0)
#define R_VCS2 BIT(VCS1)
#define R_VCS (R_VCS1 | R_VCS2)
#define R_BCS BIT(BCS0)
#define R_VECS BIT(VECS0)
#define R_ALL (R_RCS | R_VCS | R_BCS | R_VECS)
									u16 rings;
		u16 devices;
		u16 addr_bitmap;
		u32 len;
		parser_cmd_handler handler;
		u32 valid_len;
	} cocci_id/* drivers/gpu/drm/i915/gvt/cmd_parser.c 395 */;
	int (*cocci_id/* drivers/gpu/drm/i915/gvt/cmd_parser.c 368 */)(struct parser_exec_state *s);
	struct hlist_node *cocci_id/* drivers/gpu/drm/i915/gvt/cmd_parser.c 3086 */;
	struct intel_vgpu_workload cocci_id/* drivers/gpu/drm/i915/gvt/cmd_parser.c 3008 */;
	unsigned char *cocci_id/* drivers/gpu/drm/i915/gvt/cmd_parser.c 2988 */;
	u32 cocci_id/* drivers/gpu/drm/i915/gvt/cmd_parser.c 2987 */[CACHELINE_DWORDS];
	struct intel_shadow_wa_ctx *cocci_id/* drivers/gpu/drm/i915/gvt/cmd_parser.c 2985 */;
	struct drm_i915_gem_object *cocci_id/* drivers/gpu/drm/i915/gvt/cmd_parser.c 2939 */;
	struct intel_vgpu_workload *cocci_id/* drivers/gpu/drm/i915/gvt/cmd_parser.c 2912 */;
	struct intel_vgpu_submission *cocci_id/* drivers/gpu/drm/i915/gvt/cmd_parser.c 2855 */;
	struct parser_exec_state cocci_id/* drivers/gpu/drm/i915/gvt/cmd_parser.c 2812 */;
	struct intel_gvt *cocci_id/* drivers/gpu/drm/i915/gvt/cmd_parser.c 2650 */;
	struct cmd_entry *cocci_id/* drivers/gpu/drm/i915/gvt/cmd_parser.c 2650 */;
	void cocci_id/* drivers/gpu/drm/i915/gvt/cmd_parser.c 2650 */;
	const struct cmd_info cocci_id/* drivers/gpu/drm/i915/gvt/cmd_parser.c 1972 */[];
	struct intel_vgpu_shadow_bb *cocci_id/* drivers/gpu/drm/i915/gvt/cmd_parser.c 1822 */;
	const struct cmd_info *cocci_id/* drivers/gpu/drm/i915/gvt/cmd_parser.c 1800 */;
	u32 cocci_id/* drivers/gpu/drm/i915/gvt/cmd_parser.c 1799 */;
	u32 *cocci_id/* drivers/gpu/drm/i915/gvt/cmd_parser.c 1799 */;
	struct intel_vgpu *cocci_id/* drivers/gpu/drm/i915/gvt/cmd_parser.c 1798 */;
	void *cocci_id/* drivers/gpu/drm/i915/gvt/cmd_parser.c 1796 */;
	int cocci_id/* drivers/gpu/drm/i915/gvt/cmd_parser.c 1796 */;
	unsigned long *cocci_id/* drivers/gpu/drm/i915/gvt/cmd_parser.c 1735 */;
	struct intel_vgpu_mm *cocci_id/* drivers/gpu/drm/i915/gvt/cmd_parser.c 1693 */;
	struct parser_exec_state *cocci_id/* drivers/gpu/drm/i915/gvt/cmd_parser.c 1684 */;
	u64 cocci_id/* drivers/gpu/drm/i915/gvt/cmd_parser.c 1666 */;
	bool cocci_id/* drivers/gpu/drm/i915/gvt/cmd_parser.c 1488 */;
	struct mi_display_flip_command_info cocci_id/* drivers/gpu/drm/i915/gvt/cmd_parser.c 1406 */;
	struct mi_display_flip_command_info *cocci_id/* drivers/gpu/drm/i915/gvt/cmd_parser.c 1392 */;
	struct drm_i915_private *cocci_id/* drivers/gpu/drm/i915/gvt/cmd_parser.c 1381 */;
	struct plane_code_mapping cocci_id/* drivers/gpu/drm/i915/gvt/cmd_parser.c 1217 */[];
	struct plane_code_mapping {
		int pipe;
		int plane;
		int event;
	} cocci_id/* drivers/gpu/drm/i915/gvt/cmd_parser.c 1207 */;
	struct mi_display_flip_command_info {
		int pipe;
		int plane;
		int event;
		i915_reg_t stride_reg;
		i915_reg_t ctrl_reg;
		i915_reg_t surf_reg;
		u64 stride_val;
		u64 tile_val;
		u64 surf_val;
		bool async_flip;
	} cocci_id/* drivers/gpu/drm/i915/gvt/cmd_parser.c 1194 */;
	unsigned int cocci_id/* drivers/gpu/drm/i915/gvt/cmd_parser.c 1115 */;
	struct cmd_interrupt_event cocci_id/* drivers/gpu/drm/i915/gvt/cmd_parser.c 1082 */[];
	struct cmd_interrupt_event {
		int pipe_control_notify;
		int mi_flush_dw;
		int mi_user_interrupt;
	} cocci_id/* drivers/gpu/drm/i915/gvt/cmd_parser.c 1076 */;
	int cocci_id/* drivers/gpu/drm/i915/gvt/cmd_parser.c 1020 */(struct parser_exec_state *s, unsigned long guest_gma, int op_size, bool index_mode);
}
