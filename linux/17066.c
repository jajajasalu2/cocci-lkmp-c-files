cocci_test_suite() {
	u64 cocci_id/* arch/powerpc/kernel/rtas-proc.c 710 */;
	struct individual_sensor *cocci_id/* arch/powerpc/kernel/rtas-proc.c 694 */;
	const char *cocci_id/* arch/powerpc/kernel/rtas-proc.c 643 */;
	struct seq_file *cocci_id/* arch/powerpc/kernel/rtas-proc.c 643 */;
	void cocci_id/* arch/powerpc/kernel/rtas-proc.c 643 */;
	const char *cocci_id/* arch/powerpc/kernel/rtas-proc.c 494 */[];
	const unsigned int *cocci_id/* arch/powerpc/kernel/rtas-proc.c 435 */;
	char cocci_id/* arch/powerpc/kernel/rtas-proc.c 406 */[64];
	unsigned int cocci_id/* arch/powerpc/kernel/rtas-proc.c 377 */;
	int cocci_id/* arch/powerpc/kernel/rtas-proc.c 369 */[8];
	void *cocci_id/* arch/powerpc/kernel/rtas-proc.c 367 */;
	time64_t cocci_id/* arch/powerpc/kernel/rtas-proc.c 352 */;
	struct rtc_time cocci_id/* arch/powerpc/kernel/rtas-proc.c 351 */;
	loff_t *cocci_id/* arch/powerpc/kernel/rtas-proc.c 349 */;
	ssize_t cocci_id/* arch/powerpc/kernel/rtas-proc.c 348 */;
	char *cocci_id/* arch/powerpc/kernel/rtas-proc.c 262 */;
	char cocci_id/* arch/powerpc/kernel/rtas-proc.c 261 */[40];
	const char __user *cocci_id/* arch/powerpc/kernel/rtas-proc.c 259 */;
	u64 *cocci_id/* arch/powerpc/kernel/rtas-proc.c 259 */;
	size_t cocci_id/* arch/powerpc/kernel/rtas-proc.c 259 */;
	int __init cocci_id/* arch/powerpc/kernel/rtas-proc.c 231 */;
	void cocci_id/* arch/powerpc/kernel/rtas-proc.c 229 */(struct seq_file *m,
							       const char *c);
	void cocci_id/* arch/powerpc/kernel/rtas-proc.c 226 */(struct seq_file *m,
							       struct individual_sensor *s,
							       const char *loc);
	char *cocci_id/* arch/powerpc/kernel/rtas-proc.c 225 */(int error);
	void cocci_id/* arch/powerpc/kernel/rtas-proc.c 223 */(struct seq_file *m,
							       struct individual_sensor *s,
							       int state,
							       int error,
							       const char *loc);
	int cocci_id/* arch/powerpc/kernel/rtas-proc.c 222 */(void);
	const struct file_operations cocci_id/* arch/powerpc/kernel/rtas-proc.c 188 */;
	struct inode *cocci_id/* arch/powerpc/kernel/rtas-proc.c 183 */;
	struct file *cocci_id/* arch/powerpc/kernel/rtas-proc.c 183 */;
	int cocci_id/* arch/powerpc/kernel/rtas-proc.c 183 */;
	ssize_t cocci_id/* arch/powerpc/kernel/rtas-proc.c 140 */(struct file *file,
								  const char __user *buf,
								  size_t count,
								  loff_t *ppos);
	int cocci_id/* arch/powerpc/kernel/rtas-proc.c 139 */(struct seq_file *m,
							      void *v);
	char cocci_id/* arch/powerpc/kernel/rtas-proc.c 131 */[MAX_LINELENGTH];
	unsigned long cocci_id/* arch/powerpc/kernel/rtas-proc.c 130 */;
	struct device_node *cocci_id/* arch/powerpc/kernel/rtas-proc.c 129 */;
	struct rtas_sensors cocci_id/* arch/powerpc/kernel/rtas-proc.c 128 */;
	struct rtas_sensors {
		struct individual_sensor sensor[MAX_SENSORS];
		unsigned int quant;
	} cocci_id/* arch/powerpc/kernel/rtas-proc.c 122 */;
	struct individual_sensor {
		unsigned int token;
		unsigned int quant;
	} cocci_id/* arch/powerpc/kernel/rtas-proc.c 117 */;
}
