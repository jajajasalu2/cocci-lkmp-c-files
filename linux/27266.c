cocci_test_suite() {
	__be32 *cocci_id/* fs/nfsd/nfs4acl.c 869 */;
	__be32 cocci_id/* fs/nfsd/nfs4acl.c 867 */;
	struct xdr_stream *cocci_id/* fs/nfsd/nfs4acl.c 867 */;
	char *cocci_id/* fs/nfsd/nfs4acl.c 855 */;
	struct {
		char *string;
		int stringlen;
		int type;
	} cocci_id/* fs/nfsd/nfs4acl.c 832 */[];
	struct nfs4_acl cocci_id/* fs/nfsd/nfs4acl.c 829 */;
	struct nfs4_ace cocci_id/* fs/nfsd/nfs4acl.c 829 */;
	short cocci_id/* fs/nfsd/nfs4acl.c 805 */;
	struct svc_fh *cocci_id/* fs/nfsd/nfs4acl.c 755 */;
	struct posix_acl **cocci_id/* fs/nfsd/nfs4acl.c 693 */;
	struct posix_ace_state_array *cocci_id/* fs/nfsd/nfs4acl.c 613 */;
	kgid_t cocci_id/* fs/nfsd/nfs4acl.c 588 */;
	kuid_t cocci_id/* fs/nfsd/nfs4acl.c 571 */;
	u32 cocci_id/* fs/nfsd/nfs4acl.c 559 */;
	struct posix_acl_state *cocci_id/* fs/nfsd/nfs4acl.c 485 */;
	struct posix_ace_state *cocci_id/* fs/nfsd/nfs4acl.c 485 */;
	struct posix_user_ace_state cocci_id/* fs/nfsd/nfs4acl.c 467 */;
	struct posix_ace_state_array cocci_id/* fs/nfsd/nfs4acl.c 466 */;
	struct posix_acl_state cocci_id/* fs/nfsd/nfs4acl.c 459 */;
	struct posix_acl_state {
		int empty;
		struct posix_ace_state owner;
		struct posix_ace_state group;
		struct posix_ace_state other;
		struct posix_ace_state everyone;
		struct posix_ace_state mask;
		struct posix_ace_state_array *users;
		struct posix_ace_state_array *groups;
	} cocci_id/* fs/nfsd/nfs4acl.c 443 */;
	struct posix_ace_state_array {
		int n;
		struct posix_user_ace_state aces[];
	} cocci_id/* fs/nfsd/nfs4acl.c 434 */;
	struct posix_user_ace_state {
		union {
			kuid_t uid;
			kgid_t gid;
		};
		struct posix_ace_state perms;
	} cocci_id/* fs/nfsd/nfs4acl.c 426 */;
	struct posix_ace_state {
		u32 allow;
		u32 deny;
	} cocci_id/* fs/nfsd/nfs4acl.c 421 */;
	bool cocci_id/* fs/nfsd/nfs4acl.c 362 */;
	int cocci_id/* fs/nfsd/nfs4acl.c 240 */;
	unsigned short cocci_id/* fs/nfsd/nfs4acl.c 239 */;
	struct posix_acl_summary cocci_id/* fs/nfsd/nfs4acl.c 238 */;
	struct nfs4_ace *cocci_id/* fs/nfsd/nfs4acl.c 237 */;
	struct posix_acl_entry *cocci_id/* fs/nfsd/nfs4acl.c 236 */;
	unsigned int cocci_id/* fs/nfsd/nfs4acl.c 234 */;
	struct posix_acl *cocci_id/* fs/nfsd/nfs4acl.c 233 */;
	struct nfs4_acl *cocci_id/* fs/nfsd/nfs4acl.c 233 */;
	void cocci_id/* fs/nfsd/nfs4acl.c 232 */;
	struct posix_acl_summary *cocci_id/* fs/nfsd/nfs4acl.c 189 */;
	struct posix_acl_summary {
		unsigned short owner;
		unsigned short users;
		unsigned short group;
		unsigned short groups;
		unsigned short other;
		unsigned short mask;
	} cocci_id/* fs/nfsd/nfs4acl.c 179 */;
	struct inode *cocci_id/* fs/nfsd/nfs4acl.c 132 */;
	struct nfs4_acl **cocci_id/* fs/nfsd/nfs4acl.c 130 */;
	struct svc_rqst *cocci_id/* fs/nfsd/nfs4acl.c 129 */;
	struct dentry *cocci_id/* fs/nfsd/nfs4acl.c 129 */;
	void cocci_id/* fs/nfsd/nfs4acl.c 125 */(struct posix_acl *,
						 struct nfs4_acl *,
						 unsigned int);
	short cocci_id/* fs/nfsd/nfs4acl.c 124 */(struct nfs4_ace *);
	unsigned short *cocci_id/* fs/nfsd/nfs4acl.c 109 */;
}
