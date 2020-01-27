cocci_test_suite() {
	struct nfsd_fault_inject_op cocci_id/* fs/nfsd/fault_inject.c 97 */[];
	void cocci_id/* fs/nfsd/fault_inject.c 92 */;
	const struct file_operations cocci_id/* fs/nfsd/fault_inject.c 86 */;
	struct sockaddr *cocci_id/* fs/nfsd/fault_inject.c 67 */;
	char *cocci_id/* fs/nfsd/fault_inject.c 54 */;
	struct sockaddr_storage cocci_id/* fs/nfsd/fault_inject.c 51 */;
	struct net *cocci_id/* fs/nfsd/fault_inject.c 50 */;
	char cocci_id/* fs/nfsd/fault_inject.c 48 */[INET6_ADDRSTRLEN];
	const char __user *cocci_id/* fs/nfsd/fault_inject.c 45 */;
	struct nfsd_fault_inject_op *cocci_id/* fs/nfsd/fault_inject.c 36 */;
	loff_t cocci_id/* fs/nfsd/fault_inject.c 35 */;
	char cocci_id/* fs/nfsd/fault_inject.c 33 */[25];
	u64 cocci_id/* fs/nfsd/fault_inject.c 32 */;
	loff_t *cocci_id/* fs/nfsd/fault_inject.c 30 */;
	size_t cocci_id/* fs/nfsd/fault_inject.c 30 */;
	struct file *cocci_id/* fs/nfsd/fault_inject.c 29 */;
	char __user *cocci_id/* fs/nfsd/fault_inject.c 29 */;
	ssize_t cocci_id/* fs/nfsd/fault_inject.c 29 */;
	struct dentry *cocci_id/* fs/nfsd/fault_inject.c 27 */;
	struct nfsd_fault_inject_op {
		char *file;
		u64 (*get)(void);
		u64 (*set_val)(u64);
		u64 (*set_clnt)(struct sockaddr_storage *, size_t);
	} cocci_id/* fs/nfsd/fault_inject.c 20 */;
	umode_t cocci_id/* fs/nfsd/fault_inject.c 134 */;
	unsigned int cocci_id/* fs/nfsd/fault_inject.c 132 */;
}
