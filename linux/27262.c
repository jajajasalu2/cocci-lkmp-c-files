cocci_test_suite() {
	struct dentry *cocci_id/* fs/nfsd/nfs4recover.c 993 */;
	struct net *cocci_id/* fs/nfsd/nfs4recover.c 990 */;
	struct super_block *cocci_id/* fs/nfsd/nfs4recover.c 965 */;
	const struct rpc_pipe_ops cocci_id/* fs/nfsd/nfs4recover.c 936 */;
	struct cld_msg *cocci_id/* fs/nfsd/nfs4recover.c 925 */;
	struct rpc_pipe_msg *cocci_id/* fs/nfsd/nfs4recover.c 923 */;
	const struct cred *cocci_id/* fs/nfsd/nfs4recover.c 89 */;
	int16_t cocci_id/* fs/nfsd/nfs4recover.c 869 */;
	uint32_t cocci_id/* fs/nfsd/nfs4recover.c 865 */;
	struct cld_msg_v2 __user *cocci_id/* fs/nfsd/nfs4recover.c 864 */;
	struct cld_msg_hdr __user *cocci_id/* fs/nfsd/nfs4recover.c 863 */;
	const char __user *cocci_id/* fs/nfsd/nfs4recover.c 860 */;
	struct file *cocci_id/* fs/nfsd/nfs4recover.c 860 */;
	size_t cocci_id/* fs/nfsd/nfs4recover.c 860 */;
	const struct cld_name __user *cocci_id/* fs/nfsd/nfs4recover.c 834 */;
	const struct cld_clntinfo __user *cocci_id/* fs/nfsd/nfs4recover.c 814 */;
	struct cld_net *cocci_id/* fs/nfsd/nfs4recover.c 806 */;
	uint16_t cocci_id/* fs/nfsd/nfs4recover.c 805 */;
	struct xdr_netobj cocci_id/* fs/nfsd/nfs4recover.c 804 */;
	uint8_t cocci_id/* fs/nfsd/nfs4recover.c 803 */;
	struct nfsd_net *cocci_id/* fs/nfsd/nfs4recover.c 801 */;
	const struct cld_msg_v2 __user *cocci_id/* fs/nfsd/nfs4recover.c 800 */;
	ssize_t cocci_id/* fs/nfsd/nfs4recover.c 799 */;
	struct cld_upcall cocci_id/* fs/nfsd/nfs4recover.c 762 */;
	struct cld_upcall *cocci_id/* fs/nfsd/nfs4recover.c 762 */;
	struct rpc_pipe_msg cocci_id/* fs/nfsd/nfs4recover.c 761 */;
	struct rpc_pipe *cocci_id/* fs/nfsd/nfs4recover.c 758 */;
	void *cocci_id/* fs/nfsd/nfs4recover.c 758 */;
	int cocci_id/* fs/nfsd/nfs4recover.c 757 */;
	struct cred *cocci_id/* fs/nfsd/nfs4recover.c 75 */;
	struct cld_upcall {
		struct list_head cu_list;
		struct cld_net *cu_net;
		struct completion cu_done;
		union {
			struct cld_msg_hdr cu_hdr;
			struct cld_msg cu_msg;
			struct cld_msg_v2 cu_msg_v2;
		} cu_u;
	} cocci_id/* fs/nfsd/nfs4recover.c 746 */;
	struct cld_net {
		struct rpc_pipe *cn_pipe;
		spinlock_t cn_lock;
		struct list_head cn_list;
		unsigned int cn_xid;
		bool cn_has_legacy;
		struct crypto_shash *cn_tfm;
	} cocci_id/* fs/nfsd/nfs4recover.c 737 */;
	const struct cred **cocci_id/* fs/nfsd/nfs4recover.c 73 */;
	char cocci_id/* fs/nfsd/nfs4recover.c 686 */[HEXDIR_LEN];
	struct path cocci_id/* fs/nfsd/nfs4recover.c 662 */;
	const struct nfsd4_client_tracking_ops cocci_id/* fs/nfsd/nfs4recover.c 66 */;
	struct nfsd4_client_tracking_ops {
		int (*init)(struct net *);
		void (*exit)(struct net *);
		void (*create)(struct nfs4_client *);
		void (*remove)(struct nfs4_client *);
		int (*check)(struct nfs4_client *);
		void (*grace_done)(struct nfsd_net *);
		uint8_t version;
		size_t msglen;
	} cocci_id/* fs/nfsd/nfs4recover.c 55 */;
	recdir_func *cocci_id/* fs/nfsd/nfs4recover.c 297 */;
	struct name_list cocci_id/* fs/nfsd/nfs4recover.c 287 */;
	struct name_list *cocci_id/* fs/nfsd/nfs4recover.c 283 */;
	struct nfs4_dir_ctx cocci_id/* fs/nfsd/nfs4recover.c 282 */;
	struct nfs4_dir_ctx *cocci_id/* fs/nfsd/nfs4recover.c 281 */;
	u64 cocci_id/* fs/nfsd/nfs4recover.c 279 */;
	loff_t cocci_id/* fs/nfsd/nfs4recover.c 279 */;
	unsigned int cocci_id/* fs/nfsd/nfs4recover.c 279 */;
	struct dir_context *cocci_id/* fs/nfsd/nfs4recover.c 278 */;
	struct nfs4_dir_ctx {
		struct dir_context ctx;
		struct list_head names;
	} cocci_id/* fs/nfsd/nfs4recover.c 272 */;
	struct name_list {
		char name[HEXDIR_LEN];
		struct list_head list;
	} cocci_id/* fs/nfsd/nfs4recover.c 267 */;
	int cocci_id/* fs/nfsd/nfs4recover.c 265 */(struct dentry *,
						    struct dentry *,
						    struct nfsd_net *);
	struct notifier_block cocci_id/* fs/nfsd/nfs4recover.c 2168 */;
	struct notifier_block *cocci_id/* fs/nfsd/nfs4recover.c 2130 */;
	unsigned long cocci_id/* fs/nfsd/nfs4recover.c 2130 */;
	char cocci_id/* fs/nfsd/nfs4recover.c 2005 */[22];
	const unsigned char *cocci_id/* fs/nfsd/nfs4recover.c 1853 */;
	char *cocci_id/* fs/nfsd/nfs4recover.c 1852 */;
	struct nfs4_client_reclaim *cocci_id/* fs/nfsd/nfs4recover.c 182 */;
	char *cocci_id/* fs/nfsd/nfs4recover.c 1813 */[4];
	char *cocci_id/* fs/nfsd/nfs4recover.c 1812 */[3];
	time_t cocci_id/* fs/nfsd/nfs4recover.c 1785 */;
	const char *cocci_id/* fs/nfsd/nfs4recover.c 178 */;
	struct nfs4_client *cocci_id/* fs/nfsd/nfs4recover.c 177 */;
	void cocci_id/* fs/nfsd/nfs4recover.c 176 */;
	char cocci_id/* fs/nfsd/nfs4recover.c 1681 */[PATH_MAX];
	struct cld_msg_v2 cocci_id/* fs/nfsd/nfs4recover.c 1677 */;
	struct cld_msg cocci_id/* fs/nfsd/nfs4recover.c 1665 */;
	bool cocci_id/* fs/nfsd/nfs4recover.c 1518 */;
	struct list_head cocci_id/* fs/nfsd/nfs4recover.c 1495 */;
	int64_t cocci_id/* fs/nfsd/nfs4recover.c 1448 */;
	struct cld_msg_v2 *cocci_id/* fs/nfsd/nfs4recover.c 1147 */;
	struct crypto_shash *cocci_id/* fs/nfsd/nfs4recover.c 112 */;
	const struct xdr_netobj *cocci_id/* fs/nfsd/nfs4recover.c 109 */;
	unsigned char cocci_id/* fs/nfsd/nfs4recover.c 100 */;
}
