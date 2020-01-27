cocci_test_suite() {
	void __user *cocci_id/* fs/readdir.c 515 */;
	char __user *cocci_id/* fs/readdir.c 512 */;
	struct compat_linux_dirent cocci_id/* fs/readdir.c 485 */;
	compat_ulong_t cocci_id/* fs/readdir.c 484 */;
	struct compat_getdents_callback cocci_id/* fs/readdir.c 483 */;
	struct compat_getdents_callback *cocci_id/* fs/readdir.c 482 */;
	struct compat_linux_dirent __user *cocci_id/* fs/readdir.c 481 */;
	u64 cocci_id/* fs/readdir.c 479 */;
	loff_t cocci_id/* fs/readdir.c 479 */;
	unsigned int cocci_id/* fs/readdir.c 479 */;
	const char *cocci_id/* fs/readdir.c 478 */;
	struct dir_context *cocci_id/* fs/readdir.c 478 */;
	int cocci_id/* fs/readdir.c 478 */;
	struct compat_getdents_callback {
		struct dir_context ctx;
		struct compat_linux_dirent __user *current_dir;
		struct compat_linux_dirent __user *previous;
		int count;
		int error;
	} cocci_id/* fs/readdir.c 470 */;
	struct compat_linux_dirent {
		compat_ulong_t d_ino;
		compat_ulong_t d_off;
		unsigned short d_reclen;
		char d_name[1];
	} cocci_id/* fs/readdir.c 463 */;
	bool cocci_id/* fs/readdir.c 43 */;
	unsigned long cocci_id/* fs/readdir.c 427 */;
	struct inode *cocci_id/* fs/readdir.c 42 */;
	struct compat_old_linux_dirent __user *cocci_id/* fs/readdir.c 414 */;
	struct compat_readdir_callback cocci_id/* fs/readdir.c 413 */;
	struct compat_readdir_callback *cocci_id/* fs/readdir.c 412 */;
	struct compat_readdir_callback {
		struct dir_context ctx;
		struct compat_old_linux_dirent __user *dirent;
		int result;
	} cocci_id/* fs/readdir.c 402 */;
	struct file *cocci_id/* fs/readdir.c 40 */;
	struct compat_old_linux_dirent {
		compat_ulong_t d_ino;
		compat_ulong_t d_offset;
		unsigned short d_namlen;
		char d_name[1];
	} cocci_id/* fs/readdir.c 395 */;
	struct linux_dirent64 *cocci_id/* fs/readdir.c 389 */;
	typeof(lastdirent->d_off) cocci_id/* fs/readdir.c 377 */;
	size_t cocci_id/* fs/readdir.c 34 */;
	struct linux_dirent64 cocci_id/* fs/readdir.c 313 */;
	struct getdents_callback64 cocci_id/* fs/readdir.c 312 */;
	struct getdents_callback64 *cocci_id/* fs/readdir.c 311 */;
	struct linux_dirent64 __user *cocci_id/* fs/readdir.c 310 */;
	struct getdents_callback64 {
		struct dir_context ctx;
		struct linux_dirent64 __user *current_dir;
		struct linux_dirent64 __user *previous;
		int count;
		int error;
	} cocci_id/* fs/readdir.c 299 */;
	struct fd cocci_id/* fs/readdir.c 269 */;
	struct linux_dirent *cocci_id/* fs/readdir.c 267 */;
	long cocci_id/* fs/readdir.c 222 */;
	struct linux_dirent cocci_id/* fs/readdir.c 221 */;
	struct getdents_callback cocci_id/* fs/readdir.c 219 */;
	struct getdents_callback *cocci_id/* fs/readdir.c 218 */;
	struct linux_dirent __user *cocci_id/* fs/readdir.c 217 */;
	struct getdents_callback {
		struct dir_context ctx;
		struct linux_dirent __user *current_dir;
		struct linux_dirent __user *previous;
		int count;
		int error;
	} cocci_id/* fs/readdir.c 206 */;
	struct linux_dirent {
		unsigned long d_ino;
		unsigned long d_off;
		unsigned short d_reclen;
		char d_name[1];
	} cocci_id/* fs/readdir.c 199 */;
	struct old_linux_dirent *cocci_id/* fs/readdir.c 173 */;
	struct old_linux_dirent __user *cocci_id/* fs/readdir.c 144 */;
	struct readdir_callback cocci_id/* fs/readdir.c 143 */;
	struct readdir_callback *cocci_id/* fs/readdir.c 142 */;
	struct readdir_callback {
		struct dir_context ctx;
		struct old_linux_dirent __user *dirent;
		int result;
	} cocci_id/* fs/readdir.c 133 */;
	struct old_linux_dirent {
		unsigned long d_ino;
		unsigned long d_offset;
		unsigned short d_namlen;
		char d_name[1];
	} cocci_id/* fs/readdir.c 126 */;
}
