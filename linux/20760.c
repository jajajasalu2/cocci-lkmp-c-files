cocci_test_suite() {
	struct multicall_entry cocci_id/* arch/x86/xen/multicalls.c 74 */;
	int cocci_id/* arch/x86/xen/multicalls.c 60 */;
	struct multicall_entry *cocci_id/* arch/x86/xen/multicalls.c 59 */;
	struct callback *cocci_id/* arch/x86/xen/multicalls.c 202 */;
	void (*cocci_id/* arch/x86/xen/multicalls.c 199 */)(void *);
	void *cocci_id/* arch/x86/xen/multicalls.c 199 */;
	void cocci_id/* arch/x86/xen/multicalls.c 199 */;
	unsigned long cocci_id/* arch/x86/xen/multicalls.c 169 */;
	unsigned cocci_id/* arch/x86/xen/multicalls.c 142 */;
	struct mc_buffer *cocci_id/* arch/x86/xen/multicalls.c 140 */;
	struct multicall_space cocci_id/* arch/x86/xen/multicalls.c 138 */;
	size_t cocci_id/* arch/x86/xen/multicalls.c 138 */;
	__typeof__(struct mc_buffer) cocci_id/* /home/jaskaran/lkmp/coccinelle/standard.h 437 */;
	__typeof__(unsigned long) cocci_id/* /home/jaskaran/lkmp/coccinelle/standard.h 437 */;
	struct mc_buffer {
		unsigned mcidx,argidx,cbidx;
		struct multicall_entry entries[MC_BATCH];
#if MC_DEBUG
		struct multicall_entry debug[MC_BATCH];
		void *caller[MC_BATCH];
#endif
		unsigned char args[MC_ARGS];
		struct callback {
			void (*fn)(void *);
			void *data;
		} callbacks[MC_BATCH];
	} cocci_id/*  1 */;
}
