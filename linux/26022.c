cocci_test_suite() {
	struct sparsebit **cocci_id/* tools/testing/selftests/kvm/lib/sparsebit.c 956 */;
	mask_t cocci_id/* tools/testing/selftests/kvm/lib/sparsebit.c 911 */;
	unsigned int cocci_id/* tools/testing/selftests/kvm/lib/sparsebit.c 873 */;
	struct node *cocci_id/* tools/testing/selftests/kvm/lib/sparsebit.c 834 */;
	sparsebit_idx_t cocci_id/* tools/testing/selftests/kvm/lib/sparsebit.c 832 */;
	struct sparsebit *cocci_id/* tools/testing/selftests/kvm/lib/sparsebit.c 832 */;
	void cocci_id/* tools/testing/selftests/kvm/lib/sparsebit.c 832 */;
	uint8_t cocci_id/* tools/testing/selftests/kvm/lib/sparsebit.c 2079 */;
	uint64_t cocci_id/* tools/testing/selftests/kvm/lib/sparsebit.c 2061 */;
	int cocci_id/* tools/testing/selftests/kvm/lib/sparsebit.c 2053 */;
	unsigned char cocci_id/* tools/testing/selftests/kvm/lib/sparsebit.c 2051 */;
	sparsebit_num_t cocci_id/* tools/testing/selftests/kvm/lib/sparsebit.c 197 */;
	struct range cocci_id/* tools/testing/selftests/kvm/lib/sparsebit.c 1939 */;
	struct range cocci_id/* tools/testing/selftests/kvm/lib/sparsebit.c 1901 */[1000];
	struct range {
		sparsebit_idx_t first,last;
		bool set;
	} cocci_id/* tools/testing/selftests/kvm/lib/sparsebit.c 1895 */;
	struct sparsebit {
		struct node *root;
		sparsebit_num_t num_set;
	} cocci_id/* tools/testing/selftests/kvm/lib/sparsebit.c 177 */;
	struct node {
		struct node *parent;
		struct node *left;
		struct node *right;
		sparsebit_idx_t idx;
		sparsebit_num_t num_after;
		mask_t mask;
	} cocci_id/* tools/testing/selftests/kvm/lib/sparsebit.c 168 */;
	uint32_t cocci_id/* tools/testing/selftests/kvm/lib/sparsebit.c 165 */;
	char *cocci_id/* tools/testing/selftests/kvm/lib/sparsebit.c 1552 */;
	bool cocci_id/* tools/testing/selftests/kvm/lib/sparsebit.c 1550 */;
	FILE *cocci_id/* tools/testing/selftests/kvm/lib/sparsebit.c 1549 */;
	size_t cocci_id/* tools/testing/selftests/kvm/lib/sparsebit.c 1549 */;
}
