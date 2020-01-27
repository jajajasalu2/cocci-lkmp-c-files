cocci_test_suite() {
	struct percpu_memcpy_buffer_node *cocci_id/* tools/testing/selftests/rseq/param_test.c 978 */;
	bool cocci_id/* tools/testing/selftests/rseq/param_test.c 977 */;
	struct percpu_memcpy_buffer *cocci_id/* tools/testing/selftests/rseq/param_test.c 977 */;
	size_t cocci_id/* tools/testing/selftests/rseq/param_test.c 945 */;
	char *cocci_id/* tools/testing/selftests/rseq/param_test.c 944 */;
	cpu_set_t cocci_id/* tools/testing/selftests/rseq/param_test.c 816 */;
	pthread_t cocci_id/* tools/testing/selftests/rseq/param_test.c 815 */[num_threads];
	struct percpu_buffer cocci_id/* tools/testing/selftests/rseq/param_test.c 814 */;
	uint64_t cocci_id/* tools/testing/selftests/rseq/param_test.c 813 */;
	const int cocci_id/* tools/testing/selftests/rseq/param_test.c 811 */;
	void *cocci_id/* tools/testing/selftests/rseq/param_test.c 777 */;
	intptr_t cocci_id/* tools/testing/selftests/rseq/param_test.c 767 */;
	int cocci_id/* tools/testing/selftests/rseq/param_test.c 764 */;
	struct percpu_buffer_node *cocci_id/* tools/testing/selftests/rseq/param_test.c 763 */;
	struct percpu_buffer *cocci_id/* tools/testing/selftests/rseq/param_test.c 763 */;
	intptr_t *cocci_id/* tools/testing/selftests/rseq/param_test.c 733 */;
	int *cocci_id/* tools/testing/selftests/rseq/param_test.c 727 */;
	struct percpu_list cocci_id/* tools/testing/selftests/rseq/param_test.c 623 */;
	struct percpu_list_node *cocci_id/* tools/testing/selftests/rseq/param_test.c 579 */;
	struct percpu_list *cocci_id/* tools/testing/selftests/rseq/param_test.c 579 */;
	struct percpu_list_node cocci_id/* tools/testing/selftests/rseq/param_test.c 558 */;
	off_t cocci_id/* tools/testing/selftests/rseq/param_test.c 552 */;
	struct inc_thread_test_data cocci_id/* tools/testing/selftests/rseq/param_test.c 477 */[num_threads];
	struct inc_test_data cocci_id/* tools/testing/selftests/rseq/param_test.c 476 */;
	unsigned int cocci_id/* tools/testing/selftests/rseq/param_test.c 46 */;
	struct inc_test_data *cocci_id/* tools/testing/selftests/rseq/param_test.c 440 */;
	struct inc_thread_test_data *cocci_id/* tools/testing/selftests/rseq/param_test.c 439 */;
	struct spinlock_thread_test_data cocci_id/* tools/testing/selftests/rseq/param_test.c 401 */[num_threads];
	struct spinlock_test_data cocci_id/* tools/testing/selftests/rseq/param_test.c 400 */;
	long long cocci_id/* tools/testing/selftests/rseq/param_test.c 40 */;
	struct spinlock_test_data *cocci_id/* tools/testing/selftests/rseq/param_test.c 361 */;
	struct spinlock_thread_test_data *cocci_id/* tools/testing/selftests/rseq/param_test.c 360 */;
	struct percpu_lock *cocci_id/* tools/testing/selftests/rseq/param_test.c 348 */;
	struct percpu_memcpy_buffer {
		struct percpu_memcpy_buffer_entry c[CPU_SETSIZE];
	} cocci_id/* tools/testing/selftests/rseq/param_test.c 321 */;
	struct percpu_memcpy_buffer_entry {
		intptr_t offset;
		intptr_t buflen;
		struct percpu_memcpy_buffer_node *array;
	}__attribute__((aligned(128))) cocci_id/* tools/testing/selftests/rseq/param_test.c 315 */;
	struct percpu_memcpy_buffer_node {
		intptr_t data1;
		uint64_t data2;
	} cocci_id/* tools/testing/selftests/rseq/param_test.c 310 */;
	struct percpu_buffer {
		struct percpu_buffer_entry c[CPU_SETSIZE];
	} cocci_id/* tools/testing/selftests/rseq/param_test.c 304 */;
	struct percpu_buffer_entry {
		intptr_t offset;
		intptr_t buflen;
		struct percpu_buffer_node **array;
	}__attribute__((aligned(128))) cocci_id/* tools/testing/selftests/rseq/param_test.c 298 */;
	struct percpu_buffer_node {
		intptr_t data;
	} cocci_id/* tools/testing/selftests/rseq/param_test.c 294 */;
	struct percpu_list {
		struct percpu_list_entry c[CPU_SETSIZE];
	} cocci_id/* tools/testing/selftests/rseq/param_test.c 288 */;
	struct percpu_list_entry {
		struct percpu_list_node *head;
	}__attribute__((aligned(128))) cocci_id/* tools/testing/selftests/rseq/param_test.c 284 */;
	struct percpu_list_node {
		intptr_t data;
		struct percpu_list_node *next;
	} cocci_id/* tools/testing/selftests/rseq/param_test.c 279 */;
	struct inc_thread_test_data {
		struct inc_test_data *data;
		long long reps;
		int reg;
	} cocci_id/* tools/testing/selftests/rseq/param_test.c 273 */;
	struct inc_test_data {
		struct test_data_entry c[CPU_SETSIZE];
	} cocci_id/* tools/testing/selftests/rseq/param_test.c 269 */;
	struct spinlock_thread_test_data {
		struct spinlock_test_data *data;
		long long reps;
		int reg;
	} cocci_id/* tools/testing/selftests/rseq/param_test.c 263 */;
	struct spinlock_test_data {
		struct percpu_lock lock;
		struct test_data_entry c[CPU_SETSIZE];
	} cocci_id/* tools/testing/selftests/rseq/param_test.c 258 */;
	struct test_data_entry {
		intptr_t count;
	}__attribute__((aligned(128))) cocci_id/* tools/testing/selftests/rseq/param_test.c 254 */;
	struct percpu_lock {
		struct percpu_lock_entry c[CPU_SETSIZE];
	} cocci_id/* tools/testing/selftests/rseq/param_test.c 250 */;
	struct percpu_lock_entry {
		intptr_t v;
	}__attribute__((aligned(128))) cocci_id/* tools/testing/selftests/rseq/param_test.c 246 */;
	int cocci_id/* tools/testing/selftests/rseq/param_test.c 24 */[NR_INJECT + 1];
	pid_t cocci_id/* tools/testing/selftests/rseq/param_test.c 18 */;
	void cocci_id/* tools/testing/selftests/rseq/param_test.c 18 */;
	char **cocci_id/* tools/testing/selftests/rseq/param_test.c 1163 */;
	sigset_t cocci_id/* tools/testing/selftests/rseq/param_test.c 1112 */;
	struct sigaction cocci_id/* tools/testing/selftests/rseq/param_test.c 1111 */;
	struct percpu_memcpy_buffer_node cocci_id/* tools/testing/selftests/rseq/param_test.c 1083 */;
	struct percpu_memcpy_buffer cocci_id/* tools/testing/selftests/rseq/param_test.c 1029 */;
}
