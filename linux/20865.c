cocci_test_suite() {
	int cocci_id/* arch/x86/entry/vdso/vclock_gettime.c 83 */(clockid_t,
								  struct old_timespec32 *)
	__attribute__((weak,alias("__vdso_clock_getres")));
	struct old_timespec32 *cocci_id/* arch/x86/entry/vdso/vclock_gettime.c 78 */;
	int cocci_id/* arch/x86/entry/vdso/vclock_gettime.c 75 */(clockid_t,
								  struct __kernel_timespec *)
	__attribute__((weak,alias("__vdso_clock_gettime64")));
	int cocci_id/* arch/x86/entry/vdso/vclock_gettime.c 67 */(clockid_t,
								  struct old_timespec32 *)
	__attribute__((weak,alias("__vdso_clock_gettime")));
	int cocci_id/* arch/x86/entry/vdso/vclock_gettime.c 60 */(clockid_t clock,
								  struct old_timespec32 *res);
	int cocci_id/* arch/x86/entry/vdso/vclock_gettime.c 59 */(clockid_t clock,
								  struct old_timespec32 *ts);
	int cocci_id/* arch/x86/entry/vdso/vclock_gettime.c 54 */(clockid_t,
								  struct __kernel_timespec *)
	__attribute__((weak,alias("__vdso_clock_getres")));
	struct __kernel_timespec *cocci_id/* arch/x86/entry/vdso/vclock_gettime.c 50 */;
	clockid_t cocci_id/* arch/x86/entry/vdso/vclock_gettime.c 49 */;
	int cocci_id/* arch/x86/entry/vdso/vclock_gettime.c 49 */;
	int cocci_id/* arch/x86/entry/vdso/vclock_gettime.c 46 */(clockid_t,
								  struct __kernel_timespec *)
	__attribute__((weak,alias("__vdso_clock_gettime")));
	int cocci_id/* arch/x86/entry/vdso/vclock_gettime.c 39 */(clockid_t clock,
								  struct __kernel_timespec *res);
	int cocci_id/* arch/x86/entry/vdso/vclock_gettime.c 38 */(clockid_t clock,
								  struct __kernel_timespec *ts);
	__kernel_old_time_t cocci_id/* arch/x86/entry/vdso/vclock_gettime.c 33 */(__kernel_old_time_t *t)__attribute__((weak,alias("__vdso_time")));
	__kernel_old_time_t cocci_id/* arch/x86/entry/vdso/vclock_gettime.c 28 */;
	__kernel_old_time_t *cocci_id/* arch/x86/entry/vdso/vclock_gettime.c 28 */;
	int cocci_id/* arch/x86/entry/vdso/vclock_gettime.c 25 */(struct __kernel_old_timeval *,
								  struct timezone *)
	__attribute__((weak,alias("__vdso_gettimeofday")));
	struct timezone *cocci_id/* arch/x86/entry/vdso/vclock_gettime.c 20 */;
	struct __kernel_old_timeval *cocci_id/* arch/x86/entry/vdso/vclock_gettime.c 20 */;
	__kernel_old_time_t cocci_id/* arch/x86/entry/vdso/vclock_gettime.c 18 */(__kernel_old_time_t *t);
	int cocci_id/* arch/x86/entry/vdso/vclock_gettime.c 17 */(struct __kernel_old_timeval *tv,
								  struct timezone *tz);
}
