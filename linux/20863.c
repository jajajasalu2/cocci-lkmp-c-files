cocci_test_suite() {
	long cocci_id/* arch/x86/entry/vdso/vgetcpu.c 21 */(unsigned *cpu,
							    unsigned *node,
							    struct getcpu_cache *tcache)
	__attribute__((weak,alias("__vdso_getcpu")));
	struct getcpu_cache *cocci_id/* arch/x86/entry/vdso/vgetcpu.c 14 */;
	unsigned *cocci_id/* arch/x86/entry/vdso/vgetcpu.c 14 */;
	long cocci_id/* arch/x86/entry/vdso/vgetcpu.c 13 */;
}
