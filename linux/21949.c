cocci_test_suite() {
	struct kunit_try_catch_test_context *cocci_id/* lib/kunit/test-test.c 57 */;
	struct kunit_try_catch *cocci_id/* lib/kunit/test-test.c 33 */;
	struct kunit_suite cocci_id/* lib/kunit/test-test.c 325 */;
	struct kunit_case cocci_id/* lib/kunit/test-test.c 316 */[];
	struct kunit_test_resource_context *cocci_id/* lib/kunit/test-test.c 254 */;
	struct kunit_resource *cocci_id/* lib/kunit/test-test.c 252 */;
	void cocci_id/* lib/kunit/test-test.c 252 */;
	void *cocci_id/* lib/kunit/test-test.c 235 */;
	int cocci_id/* lib/kunit/test-test.c 235 */;
	size_t cocci_id/* lib/kunit/test-test.c 201 */;
	int cocci_id/* lib/kunit/test-test.c 200 */[];
	struct kunit_resource *cocci_id/* lib/kunit/test-test.c 185 */[5];
	kunit_resource_free_t cocci_id/* lib/kunit/test-test.c 145 */;
	struct kunit *cocci_id/* lib/kunit/test-test.c 141 */;
	bool *cocci_id/* lib/kunit/test-test.c 127 */;
	struct kunit_test_resource_context {
		struct kunit test;
		bool is_resource_initialized;
		int allocate_order[2];
		int free_order[2];
	} cocci_id/* lib/kunit/test-test.c 109 */;
	struct kunit_try_catch_test_context {
		struct kunit_try_catch *try_catch;
		bool function_called;
	} cocci_id/* lib/kunit/test-test.c 10 */;
}
