cocci_test_suite() {
	unsigned int cocci_id/* lib/test_sysctl.c 97 */;
	struct test_sysctl_data cocci_id/* lib/test_sysctl.c 55 */;
	struct test_sysctl_data {
		int int_0001;
		int int_0002;
		int int_0003[4];
		unsigned int uint_0001;
		char string_0001[65];
#define SYSCTL_TEST_BITMAP_SIZE 65536
		unsigned long *bitmap_0001;
	} cocci_id/* lib/test_sysctl.c 42 */;
	int cocci_id/* lib/test_sysctl.c 40 */;
	void __exit cocci_id/* lib/test_sysctl.c 154 */;
	void cocci_id/* lib/test_sysctl.c 154 */;
	int __init cocci_id/* lib/test_sysctl.c 140 */;
	struct ctl_table_header *cocci_id/* lib/test_sysctl.c 138 */;
	struct ctl_table cocci_id/* lib/test_sysctl.c 128 */[];
}
