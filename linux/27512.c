cocci_test_suite() {
	char *cocci_id/* fs/ceph/caps.c 83 */;
	const char *cocci_id/* fs/ceph/caps.c 80 */;
	struct ceph_cap cocci_id/* fs/ceph/caps.c 799 */;
	struct rb_node *cocci_id/* fs/ceph/caps.c 794 */;
	int *cocci_id/* fs/ceph/caps.c 790 */;
	u32 cocci_id/* fs/ceph/caps.c 768 */;
	unsigned long cocci_id/* fs/ceph/caps.c 767 */;
	struct ceph_cap *cocci_id/* fs/ceph/caps.c 765 */;
	int cocci_id/* fs/ceph/caps.c 765 */;
	struct ceph_snap_realm *cocci_id/* fs/ceph/caps.c 688 */;
	struct ceph_cap **cocci_id/* fs/ceph/caps.c 610 */;
	unsigned cocci_id/* fs/ceph/caps.c 568 */;
	struct ceph_inode_info *cocci_id/* fs/ceph/caps.c 554 */;
	struct ceph_mds_client *cocci_id/* fs/ceph/caps.c 553 */;
	void cocci_id/* fs/ceph/caps.c 553 */;
	char cocci_id/* fs/ceph/caps.c 55 */[MAX_CAP_STR][40];
	bool cocci_id/* fs/ceph/caps.c 512 */;
	struct ceph_mount_options *cocci_id/* fs/ceph/caps.c 492 */;
	struct rb_node **cocci_id/* fs/ceph/caps.c 466 */;
	void cocci_id/* fs/ceph/caps.c 46 */(struct ceph_mds_client *mdsc,
					     struct ceph_mds_session *session,
					     struct ceph_inode_info *ci,
					     u64 oldest_flush_tid);
	u64 cocci_id/* fs/ceph/caps.c 45 */(struct ceph_mds_client *mdsc);
	struct ceph_dentry_info *cocci_id/* fs/ceph/caps.c 4254 */;
	struct ceph_mds_request_release *cocci_id/* fs/ceph/caps.c 4253 */;
	struct dentry *cocci_id/* fs/ceph/caps.c 4248 */;
	void **cocci_id/* fs/ceph/caps.c 4248 */;
	struct ceph_inode_info cocci_id/* fs/ceph/caps.c 4057 */;
	struct ceph_timespec *cocci_id/* fs/ceph/caps.c 3903 */;
	struct ceph_osd_client *cocci_id/* fs/ceph/caps.c 3875 */;
	struct cap_extra_info cocci_id/* fs/ceph/caps.c 3826 */;
	size_t cocci_id/* fs/ceph/caps.c 3824 */;
	void *cocci_id/* fs/ceph/caps.c 3823 */;
	struct ceph_vino cocci_id/* fs/ceph/caps.c 3822 */;
	struct ceph_mds_cap_peer *cocci_id/* fs/ceph/caps.c 3817 */;
	struct ceph_mds_caps *cocci_id/* fs/ceph/caps.c 3816 */;
	struct ceph_msg *cocci_id/* fs/ceph/caps.c 3810 */;
	struct ceph_cap_reservation *cocci_id/* fs/ceph/caps.c 327 */;
	struct ceph_string *cocci_id/* fs/ceph/caps.c 3230 */;
	s64 cocci_id/* fs/ceph/caps.c 3229 */;
	struct timespec64 cocci_id/* fs/ceph/caps.c 3212 */;
	unsigned char cocci_id/* fs/ceph/caps.c 3115 */;
	struct cap_extra_info *cocci_id/* fs/ceph/caps.c 3105 */;
	struct cap_extra_info {
		struct ceph_string *pool_ns;
		u64 inline_version;
		void *inline_data;
		u32 inline_len;
		bool dirstat_valid;
		u64 nfiles;
		u64 nsubdirs;
		u64 change_attr;
		int issued;
		struct timespec64 btime;
	} cocci_id/* fs/ceph/caps.c 3078 */;
	struct ceph_snap_context *cocci_id/* fs/ceph/caps.c 2970 */;
	struct page *cocci_id/* fs/ceph/caps.c 2818 */;
	struct cap_wait cocci_id/* fs/ceph/caps.c 2764 */;
	struct page **cocci_id/* fs/ceph/caps.c 2736 */;
	enum{NON_BLOCKING=1, CHECK_FILELOCK=2,} cocci_id/* fs/ceph/caps.c 2531 */;
	struct writeback_control *cocci_id/* fs/ceph/caps.c 2272 */;
	struct ceph_file_info *cocci_id/* fs/ceph/caps.c 2222 */;
	struct file *cocci_id/* fs/ceph/caps.c 2220 */;
	struct ceph_mds_request cocci_id/* fs/ceph/caps.c 2189 */;
	struct ceph_mds_request *cocci_id/* fs/ceph/caps.c 2183 */;
	struct ceph_fs_client *cocci_id/* fs/ceph/caps.c 1816 */;
	loff_t cocci_id/* fs/ceph/caps.c 1789 */;
	u64 *cocci_id/* fs/ceph/caps.c 1721 */;
	struct ceph_cap_flush cocci_id/* fs/ceph/caps.c 1676 */;
	struct ceph_cap_flush **cocci_id/* fs/ceph/caps.c 1611 */;
	struct ceph_mds_session **cocci_id/* fs/ceph/caps.c 1545 */;
	struct ceph_cap_snap cocci_id/* fs/ceph/caps.c 1524 */;
	struct ceph_cap_flush *cocci_id/* fs/ceph/caps.c 1503 */;
	u64 cocci_id/* fs/ceph/caps.c 1457 */;
	struct ceph_cap_snap *cocci_id/* fs/ceph/caps.c 1456 */;
	struct inode *cocci_id/* fs/ceph/caps.c 1454 */;
	struct ceph_mds_session *cocci_id/* fs/ceph/caps.c 1450 */;
	struct cap_msg_args cocci_id/* fs/ceph/caps.c 1273 */;
	struct ceph_buffer *cocci_id/* fs/ceph/caps.c 1272 */;
	struct ceph_timespec cocci_id/* fs/ceph/caps.c 1223 */;
	struct cap_msg_args *cocci_id/* fs/ceph/caps.c 1131 */;
	struct cap_msg_args {
		struct ceph_mds_session *session;
		u64 ino,cid,follows;
		u64 flush_tid,oldest_flush_tid,size,max_size;
		u64 xattr_version;
		u64 change_attr;
		struct ceph_buffer *xattr_buf;
		struct timespec64 atime,mtime,ctime,btime;
		int op,caps,wanted,dirty;
		u32 seq,issue_seq,mseq,time_warp_seq;
		u32 flags;
		kuid_t uid;
		kgid_t gid;
		umode_t mode;
		bool inline_data;
	} cocci_id/* fs/ceph/caps.c 1109 */;
}
