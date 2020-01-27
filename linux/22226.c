cocci_test_suite() {
	long __weak cocci_id/* mm/maccess.c 83 */(void *dst,
						  const void __user *src,
						  size_t size)
    __attribute__((alias("__probe_user_read")));
	const void __user *cocci_id/* mm/maccess.c 66 */;
	mm_segment_t cocci_id/* mm/maccess.c 63 */;
	const void *cocci_id/* mm/maccess.c 60 */;
	void *cocci_id/* mm/maccess.c 60 */;
	long cocci_id/* mm/maccess.c 60 */;
	size_t cocci_id/* mm/maccess.c 60 */;
	long __weak cocci_id/* mm/maccess.c 54 */(void *dst, const void *src,
						  size_t size)
    __attribute__((alias("__probe_kernel_read")));
	int cocci_id/* mm/maccess.c 269 */;
	const char __user __force *cocci_id/* mm/maccess.c 197 */;
	char *cocci_id/* mm/maccess.c 184 */;
	long __weak cocci_id/* mm/maccess.c 177 */(char *dst,
						   const void *unsafe_addr,
						   long count)
    __attribute__((alias("__strncpy_from_unsafe")));
	long __weak cocci_id/* mm/maccess.c 136 */(void __user *dst,
						   const void *src,
						   size_t size)
    __attribute__((alias("__probe_user_write")));
	void __user *cocci_id/* mm/maccess.c 119 */;
	long __weak cocci_id/* mm/maccess.c 110 */(void *dst, const void *src,
						   size_t size)
    __attribute__((alias("__probe_kernel_write")));
}
