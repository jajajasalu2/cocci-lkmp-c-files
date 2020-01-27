cocci_test_suite() {
	struct stack_record *cocci_id/* lib/stackdepot.c 99 */;
	unsigned long *cocci_id/* lib/stackdepot.c 99 */;
	int cocci_id/* lib/stackdepot.c 99 */;
	bool cocci_id/* lib/stackdepot.c 74 */;
	size_t cocci_id/* lib/stackdepot.c 71 */;
	void *cocci_id/* lib/stackdepot.c 67 */[STACK_ALLOC_MAX_SLABS];
	struct stack_record {
		struct stack_record *next;
		u32 hash;
		u32 size;
		union handle_parts handle;
		unsigned long entries[1];
	} cocci_id/* lib/stackdepot.c 59 */;
	union handle_parts {
		depot_stack_handle_t handle;
		struct {
			u32 slabindex:STACK_ALLOC_INDEX_BITS;
			u32 offset:STACK_ALLOC_OFFSET_BITS;
			u32 valid:STACK_ALLOC_NULL_PROTECTION_BITS;
		};
	} cocci_id/* lib/stackdepot.c 50 */;
	depot_stack_handle_t cocci_id/* lib/stackdepot.c 34 */;
	struct page *cocci_id/* lib/stackdepot.c 225 */;
	void *cocci_id/* lib/stackdepot.c 201 */;
	union handle_parts cocci_id/* lib/stackdepot.c 200 */;
	unsigned long **cocci_id/* lib/stackdepot.c 198 */;
	const unsigned long *cocci_id/* lib/stackdepot.c 162 */;
	u32 *cocci_id/* lib/stackdepot.c 152 */;
	unsigned int cocci_id/* lib/stackdepot.c 150 */;
	struct stack_record *cocci_id/* lib/stackdepot.c 145 */[STACK_HASH_SIZE];
	unsigned long cocci_id/* lib/stackdepot.c 103 */;
	struct stack_record cocci_id/* lib/stackdepot.c 102 */;
	u32 cocci_id/* lib/stackdepot.c 100 */;
	gfp_t cocci_id/* lib/stackdepot.c 100 */;
	void **cocci_id/* lib/stackdepot.c 100 */;
}
