cocci_test_suite() {
	long cocci_id/* fs/orangefs/waitqueue.c 69 */;
	const char *cocci_id/* fs/orangefs/waitqueue.c 66 */;
	int cocci_id/* fs/orangefs/waitqueue.c 65 */;
	void cocci_id/* fs/orangefs/waitqueue.c 249 */;
	void cocci_id/* fs/orangefs/waitqueue.c 24 */(struct orangefs_kernel_op_s *op)
	__releases(op->lock);
	u64 cocci_id/* fs/orangefs/waitqueue.c 209 */;
	bool cocci_id/* fs/orangefs/waitqueue.c 207 */;
	struct orangefs_kernel_op_s *cocci_id/* fs/orangefs/waitqueue.c 207 */;
	int cocci_id/* fs/orangefs/waitqueue.c 20 */(struct orangefs_kernel_op_s *op,
						     long timeout, int flags)
			__acquires(op->lock);
}
