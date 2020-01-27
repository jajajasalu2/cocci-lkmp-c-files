cocci_test_suite() {
	struct drm_i915_cmd_descriptor {
		u32 flags;
#define CMD_DESC_FIXED (1 << 0)
#define CMD_DESC_SKIP (1 << 1)
#define CMD_DESC_REJECT (1 << 2)
#define CMD_DESC_REGISTER (1 << 3)
#define CMD_DESC_BITMASK (1 << 4)
							struct {
								u32 value;
								u32 mask;
							} cmd;
		union {
			u32 fixed;
			u32 mask;
		} length;
		struct {
			u32 offset;
			u32 mask;
			u32 step;
		} reg;
#define MAX_CMD_DESC_BITMASKS 3
		struct {
			u32 offset;
			u32 mask;
			u32 expected;
			u32 condition_offset;
			u32 condition_mask;
		} bits[MAX_CMD_DESC_BITMASKS];
	} cocci_id/* drivers/gpu/drm/i915/i915_cmd_parser.c 93 */;
	struct hlist_node *cocci_id/* drivers/gpu/drm/i915/i915_cmd_parser.c 918 */;
	void cocci_id/* drivers/gpu/drm/i915/i915_cmd_parser.c 916 */;
	const struct drm_i915_cmd_table *cocci_id/* drivers/gpu/drm/i915/i915_cmd_parser.c 888 */;
	struct cmd_node {
		const struct drm_i915_cmd_descriptor *desc;
		struct hlist_node node;
	} cocci_id/* drivers/gpu/drm/i915/i915_cmd_parser.c 859 */;
	const struct drm_i915_reg_table cocci_id/* drivers/gpu/drm/i915/i915_cmd_parser.c 715 */[];
	struct drm_i915_reg_table {
		const struct drm_i915_reg_descriptor *regs;
		int num_regs;
	} cocci_id/* drivers/gpu/drm/i915/i915_cmd_parser.c 693 */;
	const struct drm_i915_reg_descriptor cocci_id/* drivers/gpu/drm/i915/i915_cmd_parser.c 660 */[];
	struct drm_i915_reg_descriptor {
		i915_reg_t addr;
		u32 mask;
		u32 value;
	} cocci_id/* drivers/gpu/drm/i915/i915_cmd_parser.c 565 */;
	const struct drm_i915_cmd_table cocci_id/* drivers/gpu/drm/i915/i915_cmd_parser.c 536 */[];
	const struct drm_i915_cmd_descriptor cocci_id/* drivers/gpu/drm/i915/i915_cmd_parser.c 501 */;
	const struct drm_i915_cmd_descriptor cocci_id/* drivers/gpu/drm/i915/i915_cmd_parser.c 409 */[];
	struct drm_i915_cmd_table {
		const struct drm_i915_cmd_descriptor *table;
		int count;
	} cocci_id/* drivers/gpu/drm/i915/i915_cmd_parser.c 178 */;
	struct drm_i915_private *cocci_id/* drivers/gpu/drm/i915/i915_cmd_parser.c 1529 */;
	struct drm_i915_cmd_descriptor cocci_id/* drivers/gpu/drm/i915/i915_cmd_parser.c 1433 */;
	long cocci_id/* drivers/gpu/drm/i915/i915_cmd_parser.c 1383 */;
	unsigned long *cocci_id/* drivers/gpu/drm/i915/i915_cmd_parser.c 1372 */;
	struct i915_gem_context *cocci_id/* drivers/gpu/drm/i915/i915_cmd_parser.c 1367 */;
	u64 *cocci_id/* drivers/gpu/drm/i915/i915_cmd_parser.c 1330 */;
	u64 cocci_id/* drivers/gpu/drm/i915/i915_cmd_parser.c 1312 */;
	u32 *cocci_id/* drivers/gpu/drm/i915/i915_cmd_parser.c 1310 */;
	const struct i915_gem_context *cocci_id/* drivers/gpu/drm/i915/i915_cmd_parser.c 1309 */;
	const u32 cocci_id/* drivers/gpu/drm/i915/i915_cmd_parser.c 1224 */;
	const u32 *cocci_id/* drivers/gpu/drm/i915/i915_cmd_parser.c 1208 */;
	const struct drm_i915_cmd_descriptor *cocci_id/* drivers/gpu/drm/i915/i915_cmd_parser.c 1207 */;
	bool cocci_id/* drivers/gpu/drm/i915/i915_cmd_parser.c 1206 */;
	const struct intel_engine_cs *cocci_id/* drivers/gpu/drm/i915/i915_cmd_parser.c 1206 */;
	void *cocci_id/* drivers/gpu/drm/i915/i915_cmd_parser.c 1136 */;
	unsigned int cocci_id/* drivers/gpu/drm/i915/i915_cmd_parser.c 1134 */;
	bool *cocci_id/* drivers/gpu/drm/i915/i915_cmd_parser.c 1132 */;
	struct drm_i915_gem_object *cocci_id/* drivers/gpu/drm/i915/i915_cmd_parser.c 1128 */;
	const struct drm_i915_reg_table *cocci_id/* drivers/gpu/drm/i915/i915_cmd_parser.c 1117 */;
	u32 cocci_id/* drivers/gpu/drm/i915/i915_cmd_parser.c 1098 */;
	int cocci_id/* drivers/gpu/drm/i915/i915_cmd_parser.c 1098 */;
	const struct drm_i915_reg_descriptor *cocci_id/* drivers/gpu/drm/i915/i915_cmd_parser.c 1097 */;
	struct drm_i915_cmd_descriptor *cocci_id/* drivers/gpu/drm/i915/i915_cmd_parser.c 1075 */;
	struct intel_engine_cs *cocci_id/* drivers/gpu/drm/i915/i915_cmd_parser.c 1072 */;
	struct cmd_node *cocci_id/* drivers/gpu/drm/i915/i915_cmd_parser.c 1051 */;
}
