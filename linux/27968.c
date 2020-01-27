cocci_test_suite() {
	int cocci_id/* ipc/shm.c 96 */(struct seq_file *s, void *it);
	void cocci_id/* ipc/shm.c 94 */(struct ipc_namespace *ns,
					struct shmid_kernel *shp);
	void cocci_id/* ipc/shm.c 93 */(struct vm_area_struct *vma);
	int cocci_id/* ipc/shm.c 91 */(struct ipc_namespace *,
				       struct ipc_params *);
	struct shmem_inode_info *cocci_id/* ipc/shm.c 845 */;
	struct address_space *cocci_id/* ipc/shm.c 840 */;
	const struct vm_operations_struct cocci_id/* ipc/shm.c 84 */;
	struct inode *cocci_id/* ipc/shm.c 835 */;
	unsigned long *cocci_id/* ipc/shm.c 833 */;
	const struct file_operations cocci_id/* ipc/shm.c 83 */;
	struct shm_file_data **cocci_id/* ipc/shm.c 81 */;
	struct shmid_ds cocci_id/* ipc/shm.c 786 */;
	unsigned long cocci_id/* ipc/shm.c 776 */;
	struct shm_file_data {
		int id;
		struct ipc_namespace *ns;
		struct file *file;
		const struct vm_operations_struct *vm_ops;
	} cocci_id/* ipc/shm.c 74 */;
	struct ipc_params cocci_id/* ipc/shm.c 734 */;
	const struct ipc_ops cocci_id/* ipc/shm.c 729 */;
	key_t cocci_id/* ipc/shm.c 726 */;
	size_t cocci_id/* ipc/shm.c 726 */;
	struct hstate *cocci_id/* ipc/shm.c 639 */;
	vm_flags_t cocci_id/* ipc/shm.c 610 */;
	char cocci_id/* ipc/shm.c 609 */[13];
	struct ipc_params *cocci_id/* ipc/shm.c 600 */;
	bool cocci_id/* ipc/shm.c 576 */;
	struct shmid_kernel {
		struct kern_ipc_perm shm_perm;
		struct file *shm_file;
		unsigned long shm_nattch;
		unsigned long shm_segsz;
		time64_t shm_atim;
		time64_t shm_dtim;
		time64_t shm_ctim;
		struct pid *shm_cprid;
		struct pid *shm_lprid;
		struct user_struct *mlock_user;
		struct task_struct *shm_creator;
		struct list_head shm_clist;
	} cocci_id/* ipc/shm.c 52 */;
	struct mempolicy *cocci_id/* ipc/shm.c 471 */;
	vm_fault_t cocci_id/* ipc/shm.c 429 */;
	struct vm_fault *cocci_id/* ipc/shm.c 429 */;
	struct task_struct *cocci_id/* ipc/shm.c 383 */;
	void *cocci_id/* ipc/shm.c 352 */;
	struct shmid_kernel *cocci_id/* ipc/shm.c 239 */;
	struct shm_file_data *cocci_id/* ipc/shm.c 238 */;
	struct file *cocci_id/* ipc/shm.c 237 */;
	struct vm_area_struct *cocci_id/* ipc/shm.c 235 */;
	int cocci_id/* ipc/shm.c 235 */;
	struct kern_ipc_perm cocci_id/* ipc/shm.c 220 */;
	struct rcu_head *cocci_id/* ipc/shm.c 218 */;
	struct user_namespace *cocci_id/* ipc/shm.c 1742 */;
	struct pid_namespace *cocci_id/* ipc/shm.c 1741 */;
	struct seq_file *cocci_id/* ipc/shm.c 1739 */;
	loff_t cocci_id/* ipc/shm.c 1633 */;
	struct mm_struct *cocci_id/* ipc/shm.c 1628 */;
	char *cocci_id/* ipc/shm.c 1591 */;
	void __init cocci_id/* ipc/shm.c 145 */;
	ulong *cocci_id/* ipc/shm.c 1419 */;
	char __user *cocci_id/* ipc/shm.c 1418 */;
	void __user *cocci_id/* ipc/shm.c 1397 */;
	long cocci_id/* ipc/shm.c 1397 */;
	int __init cocci_id/* ipc/shm.c 137 */;
	struct shm_info cocci_id/* ipc/shm.c 1357 */;
	struct shminfo64 cocci_id/* ipc/shm.c 1348 */;
	struct shmid64_ds cocci_id/* ipc/shm.c 1338 */;
	struct ipc_namespace *cocci_id/* ipc/shm.c 1337 */;
	struct compat_shmid_ds __user *cocci_id/* ipc/shm.c 1330 */;
	struct compat_shmid64_ds __user *cocci_id/* ipc/shm.c 1327 */;
	struct shmid64_ds *cocci_id/* ipc/shm.c 1322 */;
	struct compat_shmid_ds cocci_id/* ipc/shm.c 1307 */;
	struct compat_shmid64_ds cocci_id/* ipc/shm.c 1292 */;
	struct compat_shm_info cocci_id/* ipc/shm.c 1276 */;
	struct compat_shm_info __user *cocci_id/* ipc/shm.c 1274 */;
	struct shm_info *cocci_id/* ipc/shm.c 1273 */;
	struct shminfo cocci_id/* ipc/shm.c 1262 */;
	struct compat_shminfo64 cocci_id/* ipc/shm.c 1253 */;
	struct shminfo64 *cocci_id/* ipc/shm.c 1247 */;
	struct compat_shm_info {
		compat_int_t used_ids;
		compat_ulong_t shm_tot,shm_rss,shm_swp;
		compat_ulong_t swap_attempts,swap_successes;
	} cocci_id/* ipc/shm.c 1241 */;
	struct compat_shminfo64 {
		compat_ulong_t shmmax;
		compat_ulong_t shmmin;
		compat_ulong_t shmmni;
		compat_ulong_t shmseg;
		compat_ulong_t shmall;
		compat_ulong_t __unused1;
		compat_ulong_t __unused2;
		compat_ulong_t __unused3;
		compat_ulong_t __unused4;
	} cocci_id/* ipc/shm.c 1229 */;
	struct compat_shmid_ds {
		struct compat_ipc_perm shm_perm;
		int shm_segsz;
		old_time32_t shm_atime;
		old_time32_t shm_dtime;
		old_time32_t shm_ctime;
		compat_ipc_pid_t shm_cpid;
		compat_ipc_pid_t shm_lpid;
		unsigned short shm_nattch;
		unsigned short shm_unused;
		compat_uptr_t shm_unused2;
		compat_uptr_t shm_unused3;
	} cocci_id/* ipc/shm.c 1215 */;
	struct shmid_ds *cocci_id/* ipc/shm.c 1207 */;
	struct shmid_ds __user *cocci_id/* ipc/shm.c 1200 */;
	struct shmid_kernel cocci_id/* ipc/shm.c 117 */;
	struct kern_ipc_perm *cocci_id/* ipc/shm.c 113 */;
	void cocci_id/* ipc/shm.c 113 */;
	struct user_struct *cocci_id/* ipc/shm.c 1109 */;
	kuid_t cocci_id/* ipc/shm.c 1091 */;
}
