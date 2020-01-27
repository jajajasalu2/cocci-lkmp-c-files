cocci_test_suite() {
	union ull_union {
		unsigned long long ull;
		struct {
			unsigned int high;
			unsigned int low;
		} ui;
	} cocci_id/* arch/parisc/lib/ucmpdi2.c 4 */;
	union ull_union cocci_id/* arch/parisc/lib/ucmpdi2.c 14 */;
	unsigned long long cocci_id/* arch/parisc/lib/ucmpdi2.c 12 */;
	int cocci_id/* arch/parisc/lib/ucmpdi2.c 12 */;
}
