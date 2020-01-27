cocci_test_suite() {
	void *cocci_id/* arch/arc/kernel/unwind.c 983 */;
	unsigned long *cocci_id/* arch/arc/kernel/unwind.c 911 */;
	struct unwind_state cocci_id/* arch/arc/kernel/unwind.c 910 */;
	const struct unwind_table *cocci_id/* arch/arc/kernel/unwind.c 909 */;
	uleb128_t cocci_id/* arch/arc/kernel/unwind.c 908 */;
	signed cocci_id/* arch/arc/kernel/unwind.c 907 */;
	unsigned cocci_id/* arch/arc/kernel/unwind.c 906 */;
	const u8 *cocci_id/* arch/arc/kernel/unwind.c 903 */;
	struct unwind_frame_info *cocci_id/* arch/arc/kernel/unwind.c 899 */;
	const uleb128_t cocci_id/* arch/arc/kernel/unwind.c 809 */;
	union {
		const u8 *p8;
		const u16 *p16;
		const u32 *p32;
	} cocci_id/* arch/arc/kernel/unwind.c 707 */;
	enum item_location cocci_id/* arch/arc/kernel/unwind.c 675 */;
	struct unwind_state *cocci_id/* arch/arc/kernel/unwind.c 664 */;
	unsigned long cocci_id/* arch/arc/kernel/unwind.c 664 */;
	int cocci_id/* arch/arc/kernel/unwind.c 664 */;
	unsigned long __user *cocci_id/* arch/arc/kernel/unwind.c 601 */;
	u16 *cocci_id/* arch/arc/kernel/unwind.c 557 */;
	union {
		const u8 *p8;
		const u16 *p16u;
		const s16 *p16s;
		const u32 *p32u;
		const s32 *p32s;
		const unsigned long *pul;
	} cocci_id/* arch/arc/kernel/unwind.c 540 */;
	const struct {
		unsigned offs:BITS_PER_LONG / 2;
		unsigned width:BITS_PER_LONG / 2;
	} cocci_id/* arch/arc/kernel/unwind.c 52 */[];
	const u32 *cocci_id/* arch/arc/kernel/unwind.c 504 */;
	sleb128_t cocci_id/* arch/arc/kernel/unwind.c 481 */;
	const u8 **cocci_id/* arch/arc/kernel/unwind.c 481 */;
	struct unlink_table_info cocci_id/* arch/arc/kernel/unwind.c 439 */;
	struct unlink_table_info *cocci_id/* arch/arc/kernel/unwind.c 412 */;
	struct unlink_table_info {
		struct unwind_table *table;
		int init_only;
	} cocci_id/* arch/arc/kernel/unwind.c 405 */;
	struct module *cocci_id/* arch/arc/kernel/unwind.c 372 */;
	typeof(*header->table) cocci_id/* arch/arc/kernel/unwind.c 331 */;
	typeof(header->fde_count) cocci_id/* arch/arc/kernel/unwind.c 327 */;
	typeof(*header) cocci_id/* arch/arc/kernel/unwind.c 326 */;
	unsigned int cocci_id/* arch/arc/kernel/unwind.c 314 */;
	struct {
		u8 version;
		u8 eh_frame_ptr_enc;
		u8 fde_count_enc;
		u8 table_enc;
		unsigned long eh_frame_ptr;
		unsigned int fde_count;
		struct eh_frame_hdr_table_entry table[];
	}__attribute__((__packed__)) *cocci_id/* arch/arc/kernel/unwind.c 264 */;
	void *(*cocci_id/* arch/arc/kernel/unwind.c 258 */)(unsigned long);
	char cocci_id/* arch/arc/kernel/unwind.c 25 */[];
	struct eh_frame_hdr_table_entry *cocci_id/* arch/arc/kernel/unwind.c 245 */;
	const struct eh_frame_hdr_table_entry *cocci_id/* arch/arc/kernel/unwind.c 237 */;
	const void *cocci_id/* arch/arc/kernel/unwind.c 235 */;
	struct eh_frame_hdr_table_entry {
		unsigned long start,fde;
	} cocci_id/* arch/arc/kernel/unwind.c 231 */;
	signed cocci_id/* arch/arc/kernel/unwind.c 229 */(const u32 *cie);
	const u32 *cocci_id/* arch/arc/kernel/unwind.c 228 */(const u32 *fde);
	const u32 *cocci_id/* arch/arc/kernel/unwind.c 227 */(const u32 *fde,
							      const struct unwind_table *);
	void __init cocci_id/* arch/arc/kernel/unwind.c 216 */;
	void cocci_id/* arch/arc/kernel/unwind.c 216 */;
	void *__initcocci_id/* arch/arc/kernel/unwind.c 179 */;
	void cocci_id/* arch/arc/kernel/unwind.c 172 */(struct unwind_table *table,
							void *(*alloc)(unsigned long));
	unsigned long cocci_id/* arch/arc/kernel/unwind.c 170 */(const u8 **pLoc,
								 const void *end,
								 signed ptrType);
	struct unwind_table *cocci_id/* arch/arc/kernel/unwind.c 156 */;
	const struct cfa cocci_id/* arch/arc/kernel/unwind.c 154 */;
	struct unwind_state {
		uleb128_t loc,org;
		const u8 *cieStart,*cieEnd;
		uleb128_t codeAlign;
		sleb128_t dataAlign;
		struct cfa {
			uleb128_t reg,offs;
		} cfa;
		struct unwind_item regs[ARRAY_SIZE(reg_info)];
		unsigned stackDepth:8;
		unsigned version:8;
		const u8 *label;
		const u8 *stack[MAX_STACK_DEPTH];
	} cocci_id/* arch/arc/kernel/unwind.c 139 */;
	u64 __user *cocci_id/* arch/arc/kernel/unwind.c 1304 */;
	u32 __user *cocci_id/* arch/arc/kernel/unwind.c 1299 */;
	u16 __user *cocci_id/* arch/arc/kernel/unwind.c 1295 */;
	u8 __user *cocci_id/* arch/arc/kernel/unwind.c 1291 */;
	struct unwind_item {
		enum item_location{Nowhere, Memory, Register, Value,} where;
		uleb128_t value;
	} cocci_id/* arch/arc/kernel/unwind.c 129 */;
	__typeof__(UNW_SP(frame)) cocci_id/* arch/arc/kernel/unwind.c 1247 */;
	const u32 cocci_id/* arch/arc/kernel/unwind.c 1223 */;
	u32 cocci_id/* arch/arc/kernel/unwind.c 1221 */;
	const u16 cocci_id/* arch/arc/kernel/unwind.c 1219 */;
	u16 cocci_id/* arch/arc/kernel/unwind.c 1217 */;
	const u8 cocci_id/* arch/arc/kernel/unwind.c 1215 */;
	u8 cocci_id/* arch/arc/kernel/unwind.c 1213 */;
	struct unwind_table {
		struct {
			unsigned long pc;
			unsigned long range;
		} core,init;
		const void *address;
		unsigned long size;
		const unsigned char *header;
		unsigned long hdrsz;
		struct unwind_table *link;
		const char *name;
	} cocci_id/* arch/arc/kernel/unwind.c 116 */;
	signed long cocci_id/* arch/arc/kernel/unwind.c 114 */;
	const char *cocci_id/* arch/arc/kernel/unwind.c 1066 */;
}
