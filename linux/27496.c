cocci_test_suite() {
	struct ceph_fs_client *cocci_id/* fs/ceph/xattr.c 948 */;
	struct ceph_vxattr *cocci_id/* fs/ceph/xattr.c 829 */;
	size_t cocci_id/* fs/ceph/xattr.c 825 */;
	ssize_t cocci_id/* fs/ceph/xattr.c 824 */;
	struct ceph_mds_request *cocci_id/* fs/ceph/xattr.c 808 */;
	struct rb_node *cocci_id/* fs/ceph/xattr.c 764 */;
	struct ceph_buffer *cocci_id/* fs/ceph/xattr.c 762 */;
	struct ceph_inode_xattr cocci_id/* fs/ceph/xattr.c 687 */;
	struct ceph_inode_xattr *cocci_id/* fs/ceph/xattr.c 680 */;
	struct ceph_inode_xattr **cocci_id/* fs/ceph/xattr.c 659 */;
	struct ceph_inode_info *cocci_id/* fs/ceph/xattr.c 657 */;
	const char *cocci_id/* fs/ceph/xattr.c 656 */;
	void *cocci_id/* fs/ceph/xattr.c 654 */;
	u32 cocci_id/* fs/ceph/xattr.c 652 */;
	char cocci_id/* fs/ceph/xattr.c 65 */[128];
	struct inode *cocci_id/* fs/ceph/xattr.c 648 */;
	int cocci_id/* fs/ceph/xattr.c 648 */;
	void cocci_id/* fs/ceph/xattr.c 621 */;
	s64 cocci_id/* fs/ceph/xattr.c 62 */;
	struct ceph_string *cocci_id/* fs/ceph/xattr.c 61 */;
	struct ceph_osd_client *cocci_id/* fs/ceph/xattr.c 60 */;
	struct rb_node **cocci_id/* fs/ceph/xattr.c 535 */;
	struct ceph_file_layout *cocci_id/* fs/ceph/xattr.c 50 */;
	struct ceph_vxattr cocci_id/* fs/ceph/xattr.c 336 */[];
	struct ceph_vxattr {
		char *name;
		size_t name_size;
		ssize_t (*getxattr_cb)(struct ceph_inode_info *ci, char *val,
				       size_t size);
		bool (*exists_cb)(struct ceph_inode_info *ci);
		unsigned int flags;
	} cocci_id/* fs/ceph/xattr.c 33 */;
	int cocci_id/* fs/ceph/xattr.c 18 */(struct ceph_inode_info *ci,
					     struct ceph_inode_xattr *xattr);
	const struct xattr_handler *cocci_id/* fs/ceph/xattr.c 1289 */[];
	struct ceph_acl_sec_ctx *cocci_id/* fs/ceph/xattr.c 1272 */;
	struct page cocci_id/* fs/ceph/xattr.c 1248 */;
	struct page *cocci_id/* fs/ceph/xattr.c 1247 */;
	__le32 *cocci_id/* fs/ceph/xattr.c 1245 */;
	__le32 cocci_id/* fs/ceph/xattr.c 1243 */;
	char cocci_id/* fs/ceph/xattr.c 123 */[96];
	va_list cocci_id/* fs/ceph/xattr.c 122 */;
	struct ceph_pagelist *cocci_id/* fs/ceph/xattr.c 1204 */;
	umode_t cocci_id/* fs/ceph/xattr.c 1201 */;
	const struct xattr_handler cocci_id/* fs/ceph/xattr.c 1173 */;
	struct dentry *cocci_id/* fs/ceph/xattr.c 1155 */;
	const struct xattr_handler *cocci_id/* fs/ceph/xattr.c 1154 */;
	bool cocci_id/* fs/ceph/xattr.c 1027 */;
	char *cocci_id/* fs/ceph/xattr.c 1023 */;
	struct ceph_cap_flush *cocci_id/* fs/ceph/xattr.c 1016 */;
	struct ceph_mds_client *cocci_id/* fs/ceph/xattr.c 1015 */;
	const void *cocci_id/* fs/ceph/xattr.c 1011 */;
}
