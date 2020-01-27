cocci_test_suite() {
	enum mountstat3{MNT3_OK=0, MNT3ERR_PERM=1, MNT3ERR_NOENT=2, MNT3ERR_IO=5, MNT3ERR_ACCES=13, MNT3ERR_NOTDIR=20, MNT3ERR_INVAL=22, MNT3ERR_NAMETOOLONG=63, MNT3ERR_NOTSUPP=10004, MNT3ERR_SERVERFAULT=10006,} cocci_id/* fs/nfs/mount_clnt.c 96 */;
	enum mountstat{MNT_OK=0, MNT_EPERM=1, MNT_ENOENT=2, MNT_EACCES=13, MNT_EINVAL=22,} cocci_id/* fs/nfs/mount_clnt.c 74 */;
	const struct rpc_program cocci_id/* fs/nfs/mount_clnt.c 69 */;
	enum{MOUNTPROC3_NULL=0, MOUNTPROC3_MNT=1, MOUNTPROC3_DUMP=2, MOUNTPROC3_UMNT=3, MOUNTPROC3_UMNTALL=4, MOUNTPROC3_EXPORT=5,} cocci_id/* fs/nfs/mount_clnt.c 60 */;
	struct rpc_stat cocci_id/* fs/nfs/mount_clnt.c 533 */;
	const struct rpc_version *cocci_id/* fs/nfs/mount_clnt.c 526 */[];
	unsigned int cocci_id/* fs/nfs/mount_clnt.c 518 */[ARRAY_SIZE(mnt3_procedures)];
	const struct rpc_version cocci_id/* fs/nfs/mount_clnt.c 511 */;
	unsigned int cocci_id/* fs/nfs/mount_clnt.c 510 */[ARRAY_SIZE(mnt_procedures)];
	const struct rpc_procinfo cocci_id/* fs/nfs/mount_clnt.c 491 */[];
	enum{MOUNTPROC_NULL=0, MOUNTPROC_MNT=1, MOUNTPROC_DUMP=2, MOUNTPROC_UMNT=3, MOUNTPROC_UMNTALL=4, MOUNTPROC_EXPORT=5,} cocci_id/* fs/nfs/mount_clnt.c 48 */;
	__be32 *cocci_id/* fs/nfs/mount_clnt.c 425 */;
	u32 cocci_id/* fs/nfs/mount_clnt.c 424 */;
	unsigned int *cocci_id/* fs/nfs/mount_clnt.c 423 */;
	rpc_authflavor_t *cocci_id/* fs/nfs/mount_clnt.c 422 */;
	struct xdr_stream *cocci_id/* fs/nfs/mount_clnt.c 420 */;
	struct mountres *cocci_id/* fs/nfs/mount_clnt.c 420 */;
	int cocci_id/* fs/nfs/mount_clnt.c 420 */;
	unsigned int cocci_id/* fs/nfs/mount_clnt.c 376 */;
	void *cocci_id/* fs/nfs/mount_clnt.c 363 */;
	struct rpc_rqst *cocci_id/* fs/nfs/mount_clnt.c 361 */;
	struct nfs_fh *cocci_id/* fs/nfs/mount_clnt.c 349 */;
	const void *cocci_id/* fs/nfs/mount_clnt.c 310 */;
	const u32 cocci_id/* fs/nfs/mount_clnt.c 302 */;
	const char *cocci_id/* fs/nfs/mount_clnt.c 300 */;
	void cocci_id/* fs/nfs/mount_clnt.c 300 */;
	const struct rpc_timeout cocci_id/* fs/nfs/mount_clnt.c 237 */;
	const struct nfs_mount_request *cocci_id/* fs/nfs/mount_clnt.c 235 */;
	struct rpc_clnt *cocci_id/* fs/nfs/mount_clnt.c 168 */;
	struct rpc_create_args cocci_id/* fs/nfs/mount_clnt.c 157 */;
	struct rpc_message cocci_id/* fs/nfs/mount_clnt.c 153 */;
	struct mountres cocci_id/* fs/nfs/mount_clnt.c 148 */;
	struct nfs_mount_request *cocci_id/* fs/nfs/mount_clnt.c 146 */;
	struct mnt_fhstatus {
		u32 status;
		struct nfs_fh *fh;
	} cocci_id/* fs/nfs/mount_clnt.c 132 */;
	struct mountres {
		int errno;
		struct nfs_fh *fh;
		unsigned int *auth_count;
		rpc_authflavor_t *auth_flavors;
	} cocci_id/* fs/nfs/mount_clnt.c 125 */;
	struct {
		u32 status;
		int errno;
	} cocci_id/* fs/nfs/mount_clnt.c 109 */[];
}
