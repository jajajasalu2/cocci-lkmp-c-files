cocci_test_suite() {
	enum{FS__SYSFS=0, FS__PROCFS=1, FS__DEBUGFS=2, FS__TRACEFS=3, FS__HUGETLBFS=4, FS__BPF_FS=5,} cocci_id/* tools/lib/api/fs/fs.c 96 */;
	struct fs {
		const char *name;
		const char *const *mounts;
		char path[PATH_MAX];
		bool found;
		long magic;
	} cocci_id/* tools/lib/api/fs/fs.c 88 */;
	const char *const cocci_id/* tools/lib/api/fs/fs.c 83 */[];
	bool *cocci_id/* tools/lib/api/fs/fs.c 485 */;
	char cocci_id/* tools/lib/api/fs/fs.c 424 */[PATH_MAX];
	char cocci_id/* tools/lib/api/fs/fs.c 363 */[STRERR_BUFSIZE];
	void *cocci_id/* tools/lib/api/fs/fs.c 361 */;
	size_t cocci_id/* tools/lib/api/fs/fs.c 360 */;
	char **cocci_id/* tools/lib/api/fs/fs.c 358 */;
	size_t *cocci_id/* tools/lib/api/fs/fs.c 358 */;
	unsigned long long *cocci_id/* tools/lib/api/fs/fs.c 351 */;
	char cocci_id/* tools/lib/api/fs/fs.c 303 */[64];
	const char *cocci_id/* tools/lib/api/fs/fs.c 301 */;
	int *cocci_id/* tools/lib/api/fs/fs.c 301 */;
	int cocci_id/* tools/lib/api/fs/fs.c 301 */;
	char cocci_id/* tools/lib/api/fs/fs.c 254 */[5 + name_len + 12 + 1];
	char cocci_id/* tools/lib/api/fs/fs.c 212 */[name_len + 5 + 1];
	char *cocci_id/* tools/lib/api/fs/fs.c 209 */;
	void cocci_id/* tools/lib/api/fs/fs.c 193 */;
	const char *const *cocci_id/* tools/lib/api/fs/fs.c 178 */;
	bool cocci_id/* tools/lib/api/fs/fs.c 176 */;
	struct fs *cocci_id/* tools/lib/api/fs/fs.c 176 */;
	struct statfs cocci_id/* tools/lib/api/fs/fs.c 166 */;
	long cocci_id/* tools/lib/api/fs/fs.c 164 */;
	FILE *cocci_id/* tools/lib/api/fs/fs.c 146 */;
	char cocci_id/* tools/lib/api/fs/fs.c 145 */[100];
	struct fs cocci_id/* tools/lib/api/fs/fs.c 109 */[];
}
