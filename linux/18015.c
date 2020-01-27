cocci_test_suite() {
	long cocci_id/* arch/sparc/vdso/vclock_gettime.c 66 */;
	void cocci_id/* arch/sparc/vdso/vclock_gettime.c 51 */;
	int cocci_id/* arch/sparc/vdso/vclock_gettime.c 338 */(struct __kernel_old_timeval *,
							       struct timezone *)
	__attribute__((weak,alias("__vdso_gettimeofday")));
	union tstv_t *cocci_id/* arch/sparc/vdso/vclock_gettime.c 316 */;
	union tstv_t {
		struct __kernel_old_timespec ts;
		struct __kernel_old_timeval tv;
	} *cocci_id/* arch/sparc/vdso/vclock_gettime.c 313 */;
	struct timezone *cocci_id/* arch/sparc/vdso/vclock_gettime.c 307 */;
	struct __kernel_old_timeval *cocci_id/* arch/sparc/vdso/vclock_gettime.c 307 */;
	int cocci_id/* arch/sparc/vdso/vclock_gettime.c 277 */(clockid_t,
							       struct __kernel_old_timespec *)
	__attribute__((weak,alias("__vdso_clock_gettime")));
	struct vvar_data *cocci_id/* arch/sparc/vdso/vclock_gettime.c 256 */;
	clockid_t cocci_id/* arch/sparc/vdso/vclock_gettime.c 254 */;
	struct __kernel_old_timespec *cocci_id/* arch/sparc/vdso/vclock_gettime.c 254 */;
	int cocci_id/* arch/sparc/vdso/vclock_gettime.c 253 */;
	u64 cocci_id/* arch/sparc/vdso/vclock_gettime.c 190 */;
	unsigned long cocci_id/* arch/sparc/vdso/vclock_gettime.c 189 */;
	unsigned long long cocci_id/* arch/sparc/vdso/vclock_gettime.c 107 */;
}
