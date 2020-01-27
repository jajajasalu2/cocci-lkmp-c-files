cocci_test_suite() {
	struct nfsacl_encode_desc cocci_id/* fs/nfs_common/nfsacl.c 96 */;
	struct posix_acl *cocci_id/* fs/nfs_common/nfsacl.c 93 */;
	struct inode *cocci_id/* fs/nfs_common/nfsacl.c 92 */;
	struct nfsacl_encode_desc *cocci_id/* fs/nfs_common/nfsacl.c 51 */;
	struct nfsacl_simple_acl {
		struct posix_acl acl;
		struct posix_acl_entry ace[4];
	} cocci_id/* fs/nfs_common/nfsacl.c 43 */;
	struct nfsacl_encode_desc {
		struct xdr_array2_desc desc;
		unsigned int count;
		struct posix_acl *acl;
		int typeflag;
		kuid_t uid;
		kgid_t gid;
	} cocci_id/* fs/nfs_common/nfsacl.c 34 */;
	u32 cocci_id/* fs/nfs_common/nfsacl.c 274 */;
	struct nfsacl_decode_desc cocci_id/* fs/nfs_common/nfsacl.c 268 */;
	struct posix_acl **cocci_id/* fs/nfs_common/nfsacl.c 266 */;
	struct xdr_buf *cocci_id/* fs/nfs_common/nfsacl.c 265 */;
	unsigned int *cocci_id/* fs/nfs_common/nfsacl.c 265 */;
	unsigned int cocci_id/* fs/nfs_common/nfsacl.c 265 */;
	struct posix_acl_entry cocci_id/* fs/nfs_common/nfsacl.c 227 */;
	struct posix_acl_entry *cocci_id/* fs/nfs_common/nfsacl.c 221 */;
	const struct posix_acl_entry *cocci_id/* fs/nfs_common/nfsacl.c 199 */;
	const void *cocci_id/* fs/nfs_common/nfsacl.c 197 */;
	int cocci_id/* fs/nfs_common/nfsacl.c 196 */;
	__be32 *cocci_id/* fs/nfs_common/nfsacl.c 150 */;
	struct nfsacl_decode_desc *cocci_id/* fs/nfs_common/nfsacl.c 148 */;
	struct xdr_array2_desc *cocci_id/* fs/nfs_common/nfsacl.c 146 */;
	void *cocci_id/* fs/nfs_common/nfsacl.c 146 */;
	struct nfsacl_decode_desc {
		struct xdr_array2_desc desc;
		unsigned int count;
		struct posix_acl *acl;
	} cocci_id/* fs/nfs_common/nfsacl.c 139 */;
	struct nfsacl_simple_acl cocci_id/* fs/nfs_common/nfsacl.c 107 */;
}
