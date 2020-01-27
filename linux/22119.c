cocci_test_suite() {
	struct once_work {
		struct work_struct work;
		struct static_key_true *key;
	} cocci_id/* lib/once.c 7 */;
	unsigned long *cocci_id/* lib/once.c 56 */;
	bool *cocci_id/* lib/once.c 55 */;
	struct static_key_true *cocci_id/* lib/once.c 55 */;
	void cocci_id/* lib/once.c 55 */;
	bool cocci_id/* lib/once.c 37 */;
	struct once_work cocci_id/* lib/once.c 16 */;
	struct once_work *cocci_id/* lib/once.c 14 */;
	struct work_struct *cocci_id/* lib/once.c 12 */;
}
