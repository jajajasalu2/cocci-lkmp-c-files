cocci_test_suite() {
	struct timespec64 cocci_id/* fs/ceph/file.c 941 */;
	struct ceph_vino cocci_id/* fs/ceph/file.c 934 */;
	struct ceph_cap_flush **cocci_id/* fs/ceph/file.c 928 */;
	struct kiocb *cocci_id/* fs/ceph/file.c 926 */;
	struct page *cocci_id/* fs/ceph/file.c 91 */[ITER_GET_BVECS_PAGES];
	struct ceph_cap_snap cocci_id/* fs/ceph/file.c 875 */;
	struct ceph_cap_snap *cocci_id/* fs/ceph/file.c 873 */;
	struct ceph_snap_context *cocci_id/* fs/ceph/file.c 867 */;
	struct ceph_aio_work cocci_id/* fs/ceph/file.c 862 */;
	struct work_struct *cocci_id/* fs/ceph/file.c 859 */;
	struct iov_iter cocci_id/* fs/ceph/file.c 823 */;
	struct bio_vec *cocci_id/* fs/ceph/file.c 82 */;
	struct iov_iter *cocci_id/* fs/ceph/file.c 81 */;
	struct ceph_aio_work *cocci_id/* fs/ceph/file.c 807 */;
	struct ceph_osd_data *cocci_id/* fs/ceph/file.c 798 */;
	struct ceph_osd_request *cocci_id/* fs/ceph/file.c 793 */;
	struct ceph_aio_request *cocci_id/* fs/ceph/file.c 748 */;
	void cocci_id/* fs/ceph/file.c 747 */;
	void cocci_id/* fs/ceph/file.c 745 */(struct work_struct *work);
	struct ceph_aio_work {
		struct work_struct work;
		struct ceph_osd_request *req;
	} cocci_id/* fs/ceph/file.c 740 */;
	struct ceph_aio_request {
		struct kiocb *iocb;
		size_t total_len;
		bool write;
		bool should_dirty;
		int error;
		struct list_head osd_reqs;
		unsigned num_reqs;
		atomic_t pending_reqs;
		struct timespec64 mtime;
		struct ceph_cap_flush *prealloc_cf;
	} cocci_id/* fs/ceph/file.c 727 */;
	struct page **cocci_id/* fs/ceph/file.c 613 */;
	struct ceph_osd_client *cocci_id/* fs/ceph/file.c 589 */;
	int *cocci_id/* fs/ceph/file.c 583 */;
	enum{HAVE_RETRIED=1, CHECK_EOF=2, READ_INLINE=3,} cocci_id/* fs/ceph/file.c 566 */;
	struct ceph_acl_sec_ctx cocci_id/* fs/ceph/file.c 445 */;
	struct ceph_mds_request *cocci_id/* fs/ceph/file.c 443 */;
	struct ceph_mds_client *cocci_id/* fs/ceph/file.c 442 */;
	umode_t cocci_id/* fs/ceph/file.c 439 */;
	unsigned cocci_id/* fs/ceph/file.c 439 */;
	struct dentry *cocci_id/* fs/ceph/file.c 438 */;
	const struct file_operations cocci_id/* fs/ceph/file.c 2178 */;
	struct ceph_dir_file_info *cocci_id/* fs/ceph/file.c 213 */;
	__le32 cocci_id/* fs/ceph/file.c 20 */;
	bool cocci_id/* fs/ceph/file.c 1951 */;
	int cocci_id/* fs/ceph/file.c 1950 */;
	u32 cocci_id/* fs/ceph/file.c 1949 */;
	u64 cocci_id/* fs/ceph/file.c 1948 */;
	struct ceph_object_id cocci_id/* fs/ceph/file.c 1945 */;
	struct ceph_object_locator cocci_id/* fs/ceph/file.c 1944 */;
	struct ceph_fs_client *cocci_id/* fs/ceph/file.c 1943 */;
	struct ceph_cap_flush *cocci_id/* fs/ceph/file.c 1942 */;
	struct ceph_inode_info *cocci_id/* fs/ceph/file.c 1940 */;
	struct inode *cocci_id/* fs/ceph/file.c 1938 */;
	unsigned int cocci_id/* fs/ceph/file.c 1936 */;
	size_t cocci_id/* fs/ceph/file.c 1936 */;
	loff_t cocci_id/* fs/ceph/file.c 1934 */;
	struct file *cocci_id/* fs/ceph/file.c 1934 */;
	ssize_t cocci_id/* fs/ceph/file.c 1934 */;
	struct super_block *cocci_id/* fs/ceph/file.c 181 */;
	struct ceph_file_info *cocci_id/* fs/ceph/file.c 1775 */;
	long cocci_id/* fs/ceph/file.c 1772 */;
	s32 cocci_id/* fs/ceph/file.c 1730 */;
	loff_t *cocci_id/* fs/ceph/file.c 1686 */;
	pgoff_t cocci_id/* fs/ceph/file.c 1652 */;
	struct bio_vec **cocci_id/* fs/ceph/file.c 129 */;
	struct page *cocci_id/* fs/ceph/file.c 1262 */;
	struct ceph_osd_request cocci_id/* fs/ceph/file.c 1100 */;
	struct bio_vec cocci_id/* fs/ceph/file.c 105 */;
}
