cocci_test_suite() {
	uint16_t cocci_id/* fs/nfs/fscache.c 54 */;
	struct nfs_server_key cocci_id/* fs/nfs/fscache.c 53 */;
	const struct sockaddr_in *cocci_id/* fs/nfs/fscache.c 52 */;
	struct sockaddr_in *cocci_id/* fs/nfs/fscache.c 52 */;
	const struct sockaddr_in6 *cocci_id/* fs/nfs/fscache.c 51 */;
	struct sockaddr_in6 *cocci_id/* fs/nfs/fscache.c 51 */;
	struct nfs_client *cocci_id/* fs/nfs/fscache.c 49 */;
	unsigned cocci_id/* fs/nfs/fscache.c 443 */;
	unsigned *cocci_id/* fs/nfs/fscache.c 441 */;
	struct list_head *cocci_id/* fs/nfs/fscache.c 440 */;
	struct address_space *cocci_id/* fs/nfs/fscache.c 439 */;
	struct nfs_open_context *cocci_id/* fs/nfs/fscache.c 398 */;
	int cocci_id/* fs/nfs/fscache.c 398 */;
	struct fscache_cookie *cocci_id/* fs/nfs/fscache.c 356 */;
	struct page *cocci_id/* fs/nfs/fscache.c 354 */;
	struct inode *cocci_id/* fs/nfs/fscache.c 354 */;
	void cocci_id/* fs/nfs/fscache.c 354 */;
	gfp_t cocci_id/* fs/nfs/fscache.c 331 */;
	struct nfs_server_key {
		struct {
			uint16_t nfsversion;
			uint16_t family;
			__be16 port;
		} hdr;
		union {
			struct in_addr ipv4_addr;
			struct in6_addr ipv6_addr;
		};
	}__packed cocci_id/* fs/nfs/fscache.c 31 */;
	struct file *cocci_id/* fs/nfs/fscache.c 298 */;
	bool cocci_id/* fs/nfs/fscache.c 272 */;
	void *cocci_id/* fs/nfs/fscache.c 272 */;
	struct nfs_inode *cocci_id/* fs/nfs/fscache.c 260 */;
	struct nfs_fscache_inode_auxdata cocci_id/* fs/nfs/fscache.c 259 */;
	struct rb_root cocci_id/* fs/nfs/fscache.c 25 */;
	struct nfs_fscache_key cocci_id/* fs/nfs/fscache.c 150 */;
	struct rb_node **cocci_id/* fs/nfs/fscache.c 114 */;
	struct nfs_server *cocci_id/* fs/nfs/fscache.c 113 */;
	struct nfs_fscache_key *cocci_id/* fs/nfs/fscache.c 112 */;
	const char *cocci_id/* fs/nfs/fscache.c 110 */;
	struct super_block *cocci_id/* fs/nfs/fscache.c 110 */;
}
