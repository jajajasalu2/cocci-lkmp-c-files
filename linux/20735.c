cocci_test_suite() {
	long cocci_id/* arch/x86/um/vdso/um_vdso.c 67 */(unsigned *cpu,
							 unsigned *node,
							 struct getcpu_cache *tcache)
	__attribute__((weak,alias("__vdso_getcpu")));
	struct getcpu_cache *cocci_id/* arch/x86/um/vdso/um_vdso.c 53 */;
	unsigned *cocci_id/* arch/x86/um/vdso/um_vdso.c 53 */;
	__kernel_old_time_t cocci_id/* arch/x86/um/vdso/um_vdso.c 50 */(__kernel_old_time_t *t)__attribute__((weak,alias("__vdso_time")));
	__kernel_old_time_t cocci_id/* arch/x86/um/vdso/um_vdso.c 40 */;
	__kernel_old_time_t *cocci_id/* arch/x86/um/vdso/um_vdso.c 40 */;
	int cocci_id/* arch/x86/um/vdso/um_vdso.c 37 */(struct __kernel_old_timeval *,
							struct timezone *)
	__attribute__((weak,alias("__vdso_gettimeofday")));
	struct timezone *cocci_id/* arch/x86/um/vdso/um_vdso.c 28 */;
	struct __kernel_old_timeval *cocci_id/* arch/x86/um/vdso/um_vdso.c 28 */;
	int cocci_id/* arch/x86/um/vdso/um_vdso.c 25 */(clockid_t,
							struct __kernel_old_timespec *)
	__attribute__((weak,alias("__vdso_clock_gettime")));
	long cocci_id/* arch/x86/um/vdso/um_vdso.c 18 */;
	clockid_t cocci_id/* arch/x86/um/vdso/um_vdso.c 16 */;
	struct __kernel_old_timespec *cocci_id/* arch/x86/um/vdso/um_vdso.c 16 */;
	int cocci_id/* arch/x86/um/vdso/um_vdso.c 16 */;
}
