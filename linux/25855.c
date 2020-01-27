cocci_test_suite() {
	struct spinlock_test_data *cocci_id/* tools/testing/selftests/rseq/basic_percpu_ops_test.c 82 */;
	struct percpu_lock *cocci_id/* tools/testing/selftests/rseq/basic_percpu_ops_test.c 70 */;
	void cocci_id/* tools/testing/selftests/rseq/basic_percpu_ops_test.c 70 */;
	struct percpu_list {
		struct percpu_list_entry c[CPU_SETSIZE];
	} cocci_id/* tools/testing/selftests/rseq/basic_percpu_ops_test.c 43 */;
	struct percpu_list_entry {
		struct percpu_list_node *head;
	}__attribute__((aligned(128))) cocci_id/* tools/testing/selftests/rseq/basic_percpu_ops_test.c 39 */;
	struct percpu_list_node {
		intptr_t data;
		struct percpu_list_node *next;
	} cocci_id/* tools/testing/selftests/rseq/basic_percpu_ops_test.c 34 */;
	char **cocci_id/* tools/testing/selftests/rseq/basic_percpu_ops_test.c 292 */;
	struct spinlock_test_data {
		struct percpu_lock lock;
		struct test_data_entry c[CPU_SETSIZE];
		int reps;
	} cocci_id/* tools/testing/selftests/rseq/basic_percpu_ops_test.c 28 */;
	cpu_set_t cocci_id/* tools/testing/selftests/rseq/basic_percpu_ops_test.c 243 */;
	pthread_t cocci_id/* tools/testing/selftests/rseq/basic_percpu_ops_test.c 242 */[200];
	struct percpu_list cocci_id/* tools/testing/selftests/rseq/basic_percpu_ops_test.c 241 */;
	uint64_t cocci_id/* tools/testing/selftests/rseq/basic_percpu_ops_test.c 240 */;
	struct test_data_entry {
		intptr_t count;
	}__attribute__((aligned(128))) cocci_id/* tools/testing/selftests/rseq/basic_percpu_ops_test.c 24 */;
	void *cocci_id/* tools/testing/selftests/rseq/basic_percpu_ops_test.c 207 */;
	struct percpu_lock {
		struct percpu_lock_entry c[CPU_SETSIZE];
	} cocci_id/* tools/testing/selftests/rseq/basic_percpu_ops_test.c 20 */;
	struct percpu_list_node *cocci_id/* tools/testing/selftests/rseq/basic_percpu_ops_test.c 196 */;
	struct percpu_list *cocci_id/* tools/testing/selftests/rseq/basic_percpu_ops_test.c 196 */;
	int cocci_id/* tools/testing/selftests/rseq/basic_percpu_ops_test.c 196 */;
	struct percpu_list_node cocci_id/* tools/testing/selftests/rseq/basic_percpu_ops_test.c 177 */;
	intptr_t cocci_id/* tools/testing/selftests/rseq/basic_percpu_ops_test.c 176 */;
	off_t cocci_id/* tools/testing/selftests/rseq/basic_percpu_ops_test.c 171 */;
	intptr_t *cocci_id/* tools/testing/selftests/rseq/basic_percpu_ops_test.c 170 */;
	int *cocci_id/* tools/testing/selftests/rseq/basic_percpu_ops_test.c 166 */;
	struct percpu_lock_entry {
		intptr_t v;
	}__attribute__((aligned(128))) cocci_id/* tools/testing/selftests/rseq/basic_percpu_ops_test.c 16 */;
	struct spinlock_test_data cocci_id/* tools/testing/selftests/rseq/basic_percpu_ops_test.c 116 */;
	pthread_t cocci_id/* tools/testing/selftests/rseq/basic_percpu_ops_test.c 115 */[num_threads];
	const int cocci_id/* tools/testing/selftests/rseq/basic_percpu_ops_test.c 112 */;
}
