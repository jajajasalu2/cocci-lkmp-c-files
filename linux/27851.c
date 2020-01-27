cocci_test_suite() {
	struct cachefiles_cache cocci_id/* fs/cachefiles/daemon.c 98 */;
	struct inode *cocci_id/* fs/cachefiles/daemon.c 83 */;
	struct file *cocci_id/* fs/cachefiles/daemon.c 83 */;
	struct kstatfs cocci_id/* fs/cachefiles/daemon.c 674 */;
	const struct cachefiles_daemon_cmd cocci_id/* fs/cachefiles/daemon.c 62 */[];
	struct cachefiles_daemon_cmd {
		char name[8];
		int (*handler)(struct cachefiles_cache *cache, char *args);
	} cocci_id/* fs/cachefiles/daemon.c 57 */;
	const struct cred *cocci_id/* fs/cachefiles/daemon.c 553 */;
	struct path cocci_id/* fs/cachefiles/daemon.c 552 */;
	const struct file_operations cocci_id/* fs/cachefiles/daemon.c 47 */;
	unsigned long cocci_id/* fs/cachefiles/daemon.c 422 */;
	struct cachefiles_cache *cocci_id/* fs/cachefiles/daemon.c 420 */;
	char *cocci_id/* fs/cachefiles/daemon.c 420 */;
	int cocci_id/* fs/cachefiles/daemon.c 420 */;
	int cocci_id/* fs/cachefiles/daemon.c 36 */(struct cachefiles_cache *,
						    char *);
	__poll_t cocci_id/* fs/cachefiles/daemon.c 30 */(struct file *,
							 struct poll_table_struct *);
	struct poll_table_struct *cocci_id/* fs/cachefiles/daemon.c 291 */;
	__poll_t cocci_id/* fs/cachefiles/daemon.c 290 */;
	ssize_t cocci_id/* fs/cachefiles/daemon.c 28 */(struct file *,
							const char __user *,
							size_t, loff_t *);
	ssize_t cocci_id/* fs/cachefiles/daemon.c 26 */(struct file *,
							char __user *, size_t,
							loff_t *);
	int cocci_id/* fs/cachefiles/daemon.c 24 */(struct inode *,
						    struct file *);
	const struct cachefiles_daemon_cmd *cocci_id/* fs/cachefiles/daemon.c 216 */;
	const char __user *cocci_id/* fs/cachefiles/daemon.c 212 */;
	char cocci_id/* fs/cachefiles/daemon.c 163 */[256];
	unsigned cocci_id/* fs/cachefiles/daemon.c 162 */;
	unsigned long long cocci_id/* fs/cachefiles/daemon.c 161 */;
	loff_t *cocci_id/* fs/cachefiles/daemon.c 158 */;
	size_t cocci_id/* fs/cachefiles/daemon.c 158 */;
	char __user *cocci_id/* fs/cachefiles/daemon.c 157 */;
	ssize_t cocci_id/* fs/cachefiles/daemon.c 157 */;
}
