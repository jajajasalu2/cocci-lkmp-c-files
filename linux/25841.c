cocci_test_suite() {
	siginfo_t *cocci_id/* tools/testing/selftests/seccomp/seccomp_bpf.c 968 */;
	void *cocci_id/* tools/testing/selftests/seccomp/seccomp_bpf.c 968 */;
	void cocci_id/* tools/testing/selftests/seccomp/seccomp_bpf.c 968 */;
	volatile int cocci_id/* tools/testing/selftests/seccomp/seccomp_bpf.c 967 */;
	siginfo_t cocci_id/* tools/testing/selftests/seccomp/seccomp_bpf.c 966 */;
	unsigned short cocci_id/* tools/testing/selftests/seccomp/seccomp_bpf.c 930 */;
	struct seccomp_data cocci_id/* tools/testing/selftests/seccomp/seccomp_bpf.c 920 */;
	struct sock_filter cocci_id/* tools/testing/selftests/seccomp/seccomp_bpf.c 918 */[];
	struct sock_fprog cocci_id/* tools/testing/selftests/seccomp/seccomp_bpf.c 913 */;
	TRAP cocci_id/* tools/testing/selftests/seccomp/seccomp_bpf.c 912 */;
	ERRNO_order cocci_id/* tools/testing/selftests/seccomp/seccomp_bpf.c 887 */;
	ERRNO_capped cocci_id/* tools/testing/selftests/seccomp/seccomp_bpf.c 864 */;
	struct seccomp_data {
		int nr;
		__u32 arch;
		__u64 instruction_pointer;
		__u64 args[6];
	} cocci_id/* tools/testing/selftests/seccomp/seccomp_bpf.c 85 */;
	ERRNO_zero cocci_id/* tools/testing/selftests/seccomp/seccomp_bpf.c 842 */;
	ERRNO_valid cocci_id/* tools/testing/selftests/seccomp/seccomp_bpf.c 824 */;
	arg_out_of_range cocci_id/* tools/testing/selftests/seccomp/seccomp_bpf.c 790 */;
	KILL_process cocci_id/* tools/testing/selftests/seccomp/seccomp_bpf.c 770 */;
	KILL_thread cocci_id/* tools/testing/selftests/seccomp/seccomp_bpf.c 751 */;
	bool cocci_id/* tools/testing/selftests/seccomp/seccomp_bpf.c 681 */;
	log_all cocci_id/* tools/testing/selftests/seccomp/seccomp_bpf.c 478 */;
	empty_prog cocci_id/* tools/testing/selftests/seccomp/seccomp_bpf.c 460 */;
	ALLOW_all cocci_id/* tools/testing/selftests/seccomp/seccomp_bpf.c 442 */;
	mode_filter_get_seccomp cocci_id/* tools/testing/selftests/seccomp/seccomp_bpf.c 417 */;
	mode_filter_cannot_move_to_strict cocci_id/* tools/testing/selftests/seccomp/seccomp_bpf.c 394 */;
	struct seccomp_notif_sizes cocci_id/* tools/testing/selftests/seccomp/seccomp_bpf.c 3493 */;
	seccomp_get_notif_sizes cocci_id/* tools/testing/selftests/seccomp/seccomp_bpf.c 3491 */;
	user_notification_fault_recv cocci_id/* tools/testing/selftests/seccomp/seccomp_bpf.c 3453 */;
	user_notification_child_pid_ns cocci_id/* tools/testing/selftests/seccomp/seccomp_bpf.c 3348 */;
	struct tsync_sibling *cocci_id/* tools/testing/selftests/seccomp/seccomp_bpf.c 2391 */;
	int cocci_id/* tools/testing/selftests/seccomp/seccomp_bpf.c 2330 */;
	pthread_mutex_t cocci_id/* tools/testing/selftests/seccomp/seccomp_bpf.c 2329 */;
	pthread_cond_t cocci_id/* tools/testing/selftests/seccomp/seccomp_bpf.c 2328 */;
	sem_t cocci_id/* tools/testing/selftests/seccomp/seccomp_bpf.c 2327 */;
	struct tsync_sibling cocci_id/* tools/testing/selftests/seccomp/seccomp_bpf.c 2326 */[TSYNC_SIBLINGS];
	TSYNC cocci_id/* tools/testing/selftests/seccomp/seccomp_bpf.c 2324 */;
	struct tsync_sibling {
		pthread_t tid;
		pid_t system_tid;
		sem_t *started;
		pthread_cond_t *cond;
		pthread_mutex_t *mutex;
		int diverge;
		int num_waits;
		struct sock_fprog *prog;
		struct __test_metadata *metadata;
	} cocci_id/* tools/testing/selftests/seccomp/seccomp_bpf.c 2295 */;
	__u32 cocci_id/* tools/testing/selftests/seccomp/seccomp_bpf.c 226 */;
	unsigned int cocci_id/* tools/testing/selftests/seccomp/seccomp_bpf.c 216 */;
	struct seccomp_notif_sizes {
		__u16 seccomp_notif;
		__u16 seccomp_notif_resp;
		__u16 seccomp_data;
	} cocci_id/* tools/testing/selftests/seccomp/seccomp_bpf.c 199 */;
	struct seccomp_notif_resp {
		__u64 id;
		__s64 val;
		__s32 error;
		__u32 flags;
	} cocci_id/* tools/testing/selftests/seccomp/seccomp_bpf.c 192 */;
	struct seccomp_notif {
		__u64 id;
		__u32 pid;
		__u32 flags;
		struct seccomp_data data;
	} cocci_id/* tools/testing/selftests/seccomp/seccomp_bpf.c 185 */;
	__u64 cocci_id/* tools/testing/selftests/seccomp/seccomp_bpf.c 183 */;
	TRACE_syscall cocci_id/* tools/testing/selftests/seccomp/seccomp_bpf.c 1820 */;
	struct seccomp_notif_resp cocci_id/* tools/testing/selftests/seccomp/seccomp_bpf.c 182 */;
	struct seccomp_notif cocci_id/* tools/testing/selftests/seccomp/seccomp_bpf.c 180 */;
	struct seccomp_metadata {
		__u64 filter_off;
		__u64 flags;
	} cocci_id/* tools/testing/selftests/seccomp/seccomp_bpf.c 162 */;
	struct pt_regs ARCH_REGS cocci_id/* tools/testing/selftests/seccomp/seccomp_bpf.c 1615 */;
	struct user_pt_regs cocci_id/* tools/testing/selftests/seccomp/seccomp_bpf.c 1595 */;
	struct pt_regs cocci_id/* tools/testing/selftests/seccomp/seccomp_bpf.c 1591 */;
	struct user_regs_struct cocci_id/* tools/testing/selftests/seccomp/seccomp_bpf.c 1583 */;
	unsigned long cocci_id/* tools/testing/selftests/seccomp/seccomp_bpf.c 1537 */;
	struct tracer_args_poke_t cocci_id/* tools/testing/selftests/seccomp/seccomp_bpf.c 1516 */;
	long cocci_id/* tools/testing/selftests/seccomp/seccomp_bpf.c 1515 */;
	pid_t cocci_id/* tools/testing/selftests/seccomp/seccomp_bpf.c 1514 */;
	TRACE_poke cocci_id/* tools/testing/selftests/seccomp/seccomp_bpf.c 1512 */;
	struct tracer_args_poke_t {
		unsigned long poke_addr;
	} cocci_id/* tools/testing/selftests/seccomp/seccomp_bpf.c 1486 */;
	int cocci_id/* tools/testing/selftests/seccomp/seccomp_bpf.c 1445 */[2];
	char cocci_id/* tools/testing/selftests/seccomp/seccomp_bpf.c 1444 */;
	tracer_func_t cocci_id/* tools/testing/selftests/seccomp/seccomp_bpf.c 1442 */;
	struct __test_metadata *cocci_id/* tools/testing/selftests/seccomp/seccomp_bpf.c 1441 */;
	void cocci_id/* tools/testing/selftests/seccomp/seccomp_bpf.c 1376 */(struct __test_metadata *_metadata,
									      pid_t tracee,
									      int status,
									      void *args);
	precedence cocci_id/* tools/testing/selftests/seccomp/seccomp_bpf.c 1023 */;
}
