cocci_test_suite() {
	struct dentry *cocci_id/* arch/x86/kernel/cpu/mce/severity.c 403 */;
	int __init cocci_id/* arch/x86/kernel/cpu/mce/severity.c 401 */;
	const struct file_operations cocci_id/* arch/x86/kernel/cpu/mce/severity.c 393 */;
	size_t cocci_id/* arch/x86/kernel/cpu/mce/severity.c 385 */;
	const char __user *cocci_id/* arch/x86/kernel/cpu/mce/severity.c 384 */;
	ssize_t cocci_id/* arch/x86/kernel/cpu/mce/severity.c 383 */;
	struct inode *cocci_id/* arch/x86/kernel/cpu/mce/severity.c 378 */;
	struct file *cocci_id/* arch/x86/kernel/cpu/mce/severity.c 378 */;
	const struct seq_operations cocci_id/* arch/x86/kernel/cpu/mce/severity.c 371 */;
	loff_t *cocci_id/* arch/x86/kernel/cpu/mce/severity.c 353 */;
	struct seq_file *cocci_id/* arch/x86/kernel/cpu/mce/severity.c 353 */;
	void *cocci_id/* arch/x86/kernel/cpu/mce/severity.c 353 */;
	void __init cocci_id/* arch/x86/kernel/cpu/mce/severity.c 338 */;
	void cocci_id/* arch/x86/kernel/cpu/mce/severity.c 338 */;
	int (*cocci_id/* arch/x86/kernel/cpu/mce/severity.c 335 */)(struct mce *m,
								    int tolerant,
								    char **msg,
								    bool is_excp);
	struct severity {
		u64 mask;
		u64 result;
		unsigned char sev;
		unsigned char mcgmask;
		unsigned char mcgres;
		unsigned char ser;
		unsigned char context;
		unsigned char excp;
		unsigned char covered;
		char *msg;
	} cocci_id/* arch/x86/kernel/cpu/mce/severity.c 33 */[];
	enum exception{EXCP_CONTEXT=1, NO_EXCP=2,} cocci_id/* arch/x86/kernel/cpu/mce/severity.c 31 */;
	struct severity *cocci_id/* arch/x86/kernel/cpu/mce/severity.c 308 */;
	enum exception cocci_id/* arch/x86/kernel/cpu/mce/severity.c 306 */;
	enum ser{SER_REQUIRED=1, NO_SER=2,} cocci_id/* arch/x86/kernel/cpu/mce/severity.c 30 */;
	enum context{IN_KERNEL=1, IN_USER=2, IN_KERNEL_RECOV=3,} cocci_id/* arch/x86/kernel/cpu/mce/severity.c 29 */;
	enum context cocci_id/* arch/x86/kernel/cpu/mce/severity.c 254 */;
	bool cocci_id/* arch/x86/kernel/cpu/mce/severity.c 252 */;
	char **cocci_id/* arch/x86/kernel/cpu/mce/severity.c 252 */;
	u32 cocci_id/* arch/x86/kernel/cpu/mce/severity.c 223 */;
	struct mce *cocci_id/* arch/x86/kernel/cpu/mce/severity.c 212 */;
	int cocci_id/* arch/x86/kernel/cpu/mce/severity.c 212 */;
}
