cocci_test_suite() {
	struct ceph_nfs_confh cocci_id/* fs/ceph/export.c 91 */;
	struct ceph_nfs_fh cocci_id/* fs/ceph/export.c 89 */;
	const int cocci_id/* fs/ceph/export.c 88 */;
	u32 *cocci_id/* fs/ceph/export.c 85 */;
	int *cocci_id/* fs/ceph/export.c 85 */;
	const struct export_operations cocci_id/* fs/ceph/export.c 543 */;
	struct ceph_mds_reply_dir_entry *cocci_id/* fs/ceph/export.c 427 */;
	struct ceph_mds_reply_info_parsed *cocci_id/* fs/ceph/export.c 426 */;
	unsigned cocci_id/* fs/ceph/export.c 410 */;
	struct ceph_fs_client *cocci_id/* fs/ceph/export.c 407 */;
	char *cocci_id/* fs/ceph/export.c 402 */;
	struct ceph_nfs_snapfh cocci_id/* fs/ceph/export.c 39 */;
	long cocci_id/* fs/ceph/export.c 371 */;
	struct ceph_vino cocci_id/* fs/ceph/export.c 305 */;
	int cocci_id/* fs/ceph/export.c 293 */;
	struct ceph_mds_request *cocci_id/* fs/ceph/export.c 291 */;
	struct ceph_mds_client *cocci_id/* fs/ceph/export.c 290 */;
	struct ceph_nfs_snapfh {
		u64 ino;
		u64 snapid;
		u64 parent_ino;
		u32 hash;
	}__attribute__((packed)) cocci_id/* fs/ceph/export.c 28 */;
	struct fid *cocci_id/* fs/ceph/export.c 267 */;
	struct ceph_nfs_confh {
		u64 ino,parent_ino;
	}__attribute__((packed)) cocci_id/* fs/ceph/export.c 21 */;
	bool cocci_id/* fs/ceph/export.c 186 */;
	struct ceph_nfs_snapfh *cocci_id/* fs/ceph/export.c 185 */;
	struct inode *cocci_id/* fs/ceph/export.c 174 */;
	u64 cocci_id/* fs/ceph/export.c 172 */;
	struct super_block *cocci_id/* fs/ceph/export.c 172 */;
	struct dentry *cocci_id/* fs/ceph/export.c 172 */;
	struct ceph_nfs_fh {
		u64 ino;
	}__attribute__((packed)) cocci_id/* fs/ceph/export.c 14 */;
	struct ceph_nfs_fh *cocci_id/* fs/ceph/export.c 114 */;
	struct ceph_nfs_confh *cocci_id/* fs/ceph/export.c 106 */;
	void *cocci_id/* fs/ceph/export.c 106 */;
}
