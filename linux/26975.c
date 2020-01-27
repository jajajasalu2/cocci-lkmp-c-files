cocci_test_suite() {
	const struct nfs_rpc_ops cocci_id/* fs/nfs/nfs4proc.c 9996 */;
	const struct inode_operations cocci_id/* fs/nfs/nfs4proc.c 9972 */;
	const struct nfs4_minor_version_ops *cocci_id/* fs/nfs/nfs4proc.c 9944 */[];
	struct nfs_seqid_counter *cocci_id/* fs/nfs/nfs4proc.c 9881 */;
	const struct nfs4_minor_version_ops cocci_id/* fs/nfs/nfs4proc.c 9860 */;
	const struct nfs4_mig_recovery_ops cocci_id/* fs/nfs/nfs4proc.c 9848 */;
	const struct nfs4_state_maintenance_ops cocci_id/* fs/nfs/nfs4proc.c 9834 */;
	const struct nfs4_state_recovery_ops cocci_id/* fs/nfs/nfs4proc.c 9816 */;
	struct nfs_free_stateid_data *cocci_id/* fs/nfs/nfs4proc.c 9737 */;
	struct nfs_free_stateid_data {
		struct nfs_server *server;
		struct nfs41_free_stateid_args args;
		struct nfs41_free_stateid_res res;
	} cocci_id/* fs/nfs/nfs4proc.c 9673 */;
	struct nfs41_test_stateid_res cocci_id/* fs/nfs/nfs4proc.c 9605 */;
	struct nfs41_test_stateid_args cocci_id/* fs/nfs/nfs4proc.c 9602 */;
	struct nfs4_secinfo4 *cocci_id/* fs/nfs/nfs4proc.c 9537 */;
	int cocci_id/* fs/nfs/nfs4proc.c 95 */(struct inode *inode,
					       const struct cred *cred,
					       struct nfs_fattr *fattr,
					       struct iattr *sattr,
					       struct nfs_open_context *ctx,
					       struct nfs4_label *ilabel,
					       struct nfs4_label *olabel);
	struct nfs4_exception cocci_id/* fs/nfs/nfs4proc.c 9493 */;
	struct rpc_task_setup cocci_id/* fs/nfs/nfs4proc.c 9461 */;
	struct nfs4_call_sync_data cocci_id/* fs/nfs/nfs4proc.c 9456 */;
	struct nfs4_secinfo_res cocci_id/* fs/nfs/nfs4proc.c 9447 */;
	struct nfs41_secinfo_no_name_args cocci_id/* fs/nfs/nfs4proc.c 9444 */;
	bool cocci_id/* fs/nfs/nfs4proc.c 9442 */;
	struct nfs4_secinfo_flavors *cocci_id/* fs/nfs/nfs4proc.c 9442 */;
	struct nfs_fsinfo *cocci_id/* fs/nfs/nfs4proc.c 9441 */;
	struct nfs_fh *cocci_id/* fs/nfs/nfs4proc.c 9440 */;
	int cocci_id/* fs/nfs/nfs4proc.c 94 */(struct nfs_server *server,
					       struct nfs_fh *fhandle,
					       struct nfs_fattr *fattr,
					       struct nfs4_label *label,
					       struct inode *inode);
	struct nfs4_layoutcommit_data *cocci_id/* fs/nfs/nfs4proc.c 9351 */;
	void cocci_id/* fs/nfs/nfs4proc.c 93 */(struct nfs_fattr *fattr);
	struct nfs4_getdeviceinfo_res cocci_id/* fs/nfs/nfs4proc.c 9298 */;
	struct nfs4_getdeviceinfo_args cocci_id/* fs/nfs/nfs4proc.c 9293 */;
	struct pnfs_device *cocci_id/* fs/nfs/nfs4proc.c 9290 */;
	int cocci_id/* fs/nfs/nfs4proc.c 92 */(struct nfs_server *,
					       struct nfs_fh *,
					       struct nfs_fsinfo *);
	struct nfs4_layoutreturn *cocci_id/* fs/nfs/nfs4proc.c 9180 */;
	struct pnfs_layout_segment *cocci_id/* fs/nfs/nfs4proc.c 9102 */;
	int cocci_id/* fs/nfs/nfs4proc.c 91 */(struct nfs4_opendata *data);
	struct nfs4_layoutget *cocci_id/* fs/nfs/nfs4proc.c 8982 */;
	struct nfs4_reclaim_complete_data *cocci_id/* fs/nfs/nfs4proc.c 8938 */;
	struct nfs4_reclaim_complete_data {
		struct nfs_client *clp;
		struct nfs41_reclaim_complete_args arg;
		struct nfs41_reclaim_complete_res res;
	} cocci_id/* fs/nfs/nfs4proc.c 8861 */;
	struct nfs4_sequence_data *cocci_id/* fs/nfs/nfs4proc.c 8787 */;
	struct nfs4_slot *cocci_id/* fs/nfs/nfs4proc.c 8784 */;
	struct rpc_task *cocci_id/* fs/nfs/nfs4proc.c 8782 */;
	struct nfs4_sequence_args *cocci_id/* fs/nfs/nfs4proc.c 8767 */;
	struct nfs4_sequence_data {
		struct nfs_client *clp;
		struct nfs4_sequence_args args;
		struct nfs4_sequence_res res;
	} cocci_id/* fs/nfs/nfs4proc.c 8710 */;
	unsigned *cocci_id/* fs/nfs/nfs4proc.c 8652 */;
	struct nfs41_create_session_res cocci_id/* fs/nfs/nfs4proc.c 8605 */;
	struct nfs41_create_session_args cocci_id/* fs/nfs/nfs4proc.c 8599 */;
	struct nfs4_session *cocci_id/* fs/nfs/nfs4proc.c 8598 */;
	struct nfs41_create_session_res *cocci_id/* fs/nfs/nfs4proc.c 8582 */;
	struct nfs4_channel_attrs *cocci_id/* fs/nfs/nfs4proc.c 8551 */;
	unsigned short cocci_id/* fs/nfs/nfs4proc.c 8513 */;
	struct nfs41_create_session_args *cocci_id/* fs/nfs/nfs4proc.c 8486 */;
	struct nfs4_get_lease_time_data cocci_id/* fs/nfs/nfs4proc.c 8453 */;
	struct nfs4_get_lease_time_res cocci_id/* fs/nfs/nfs4proc.c 8450 */;
	struct nfs4_get_lease_time_args cocci_id/* fs/nfs/nfs4proc.c 8449 */;
	struct nfs4_get_lease_time_data *cocci_id/* fs/nfs/nfs4proc.c 8422 */;
	struct nfs4_get_lease_time_data {
		struct nfs4_get_lease_time_args *args;
		struct nfs4_get_lease_time_res *res;
		struct nfs_client *clp;
	} cocci_id/* fs/nfs/nfs4proc.c 8394 */;
	struct nfs4_add_xprt_data *cocci_id/* fs/nfs/nfs4proc.c 8302 */;
	struct nfs41_exchange_id_res *cocci_id/* fs/nfs/nfs4proc.c 8205 */;
	struct nfs41_exchange_id_args *cocci_id/* fs/nfs/nfs4proc.c 8204 */;
	u32 cocci_id/* fs/nfs/nfs4proc.c 8201 */;
	struct nfs41_impl_id cocci_id/* fs/nfs/nfs4proc.c 8145 */;
	struct nfs41_server_scope cocci_id/* fs/nfs/nfs4proc.c 8140 */;
	struct nfs41_server_owner cocci_id/* fs/nfs/nfs4proc.c 8134 */;
	struct nfs41_exchange_id_data *cocci_id/* fs/nfs/nfs4proc.c 8084 */;
	struct nfs41_exchange_id_data {
		struct nfs41_exchange_id_res res;
		struct nfs41_exchange_id_args args;
	} cocci_id/* fs/nfs/nfs4proc.c 8077 */;
	const u32 cocci_id/* fs/nfs/nfs4proc.c 7985 */[NFS4_OP_MAP_NUM_WORDS];
	struct nfs41_state_protection *cocci_id/* fs/nfs/nfs4proc.c 7983 */;
	const struct nfs41_state_protection cocci_id/* fs/nfs/nfs4proc.c 7952 */;
	struct rpc_bind_conn_calldata cocci_id/* fs/nfs/nfs4proc.c 7940 */;
	struct rpc_bind_conn_calldata *cocci_id/* fs/nfs/nfs4proc.c 7933 */;
	struct rpc_xprt *cocci_id/* fs/nfs/nfs4proc.c 7930 */;
	struct rpc_bind_conn_calldata {
		struct nfs_client *clp;
		const struct cred *cred;
	} cocci_id/* fs/nfs/nfs4proc.c 7923 */;
	struct nfs41_bind_conn_to_session_res cocci_id/* fs/nfs/nfs4proc.c 7870 */;
	struct nfs41_bind_conn_to_session_args cocci_id/* fs/nfs/nfs4proc.c 7866 */;
	struct nfs41_bind_conn_to_session_args *cocci_id/* fs/nfs/nfs4proc.c 7838 */;
	struct nfs41_server_scope *cocci_id/* fs/nfs/nfs4proc.c 7827 */;
	struct nfs4_secinfo_arg cocci_id/* fs/nfs/nfs4proc.c 7730 */;
	const struct nfs4_mig_recovery_ops *cocci_id/* fs/nfs/nfs4proc.c 7696 */;
	unsigned long cocci_id/* fs/nfs/nfs4proc.c 7618 */;
	struct nfs4_fsid_present_res cocci_id/* fs/nfs/nfs4proc.c 7609 */;
	struct nfs4_fsid_present_arg cocci_id/* fs/nfs/nfs4proc.c 7604 */;
	struct rpc_clnt *cocci_id/* fs/nfs/nfs4proc.c 7603 */;
	struct nfs_client *cocci_id/* fs/nfs/nfs4proc.c 7602 */;
	struct nfs4_fs_locations_res cocci_id/* fs/nfs/nfs4proc.c 7465 */;
	struct nfs4_fs_locations_arg cocci_id/* fs/nfs/nfs4proc.c 7457 */;
	u32 cocci_id/* fs/nfs/nfs4proc.c 7454 */[2];
	struct page *cocci_id/* fs/nfs/nfs4proc.c 7450 */;
	struct nfs4_fs_locations *cocci_id/* fs/nfs/nfs4proc.c 7449 */;
	const struct qstr *cocci_id/* fs/nfs/nfs4proc.c 7380 */;
	const char *cocci_id/* fs/nfs/nfs4proc.c 7301 */;
	const struct xattr_handler *cocci_id/* fs/nfs/nfs4proc.c 7299 */;
	struct nfs_release_lockowner_data *cocci_id/* fs/nfs/nfs4proc.c 7266 */;
	struct nfs_release_lockowner_data {
		struct nfs4_lock_state *lsp;
		struct nfs_server *server;
		struct nfs_release_lockowner_args args;
		struct nfs_release_lockowner_res res;
		unsigned long timestamp;
	} cocci_id/* fs/nfs/nfs4proc.c 7209 */;
	wait_queue_entry_t cocci_id/* fs/nfs/nfs4proc.c 7108 */;
	struct nfs4_lock_waiter cocci_id/* fs/nfs/nfs4proc.c 7105 */;
	struct nfs_lowner cocci_id/* fs/nfs/nfs4proc.c 7102 */;
	wait_queue_head_t *cocci_id/* fs/nfs/nfs4proc.c 7101 */;
	struct nfs4_sequence_res *cocci_id/* fs/nfs/nfs4proc.c 710 */;
	struct nfs_lowner *cocci_id/* fs/nfs/nfs4proc.c 7073 */;
	struct cb_notify_lock_args *cocci_id/* fs/nfs/nfs4proc.c 7072 */;
	struct nfs4_lock_waiter *cocci_id/* fs/nfs/nfs4proc.c 7068 */;
	wait_queue_entry_t *cocci_id/* fs/nfs/nfs4proc.c 7065 */;
	struct nfs4_lock_waiter {
		struct task_struct *task;
		struct inode *inode;
		struct nfs_lowner *owner;
	} cocci_id/* fs/nfs/nfs4proc.c 7058 */;
	unsigned char cocci_id/* fs/nfs/nfs4proc.c 6990 */;
	struct nfs_inode *cocci_id/* fs/nfs/nfs4proc.c 6988 */;
	struct nfs4_slot_table *cocci_id/* fs/nfs/nfs4proc.c 698 */;
	struct nfs4_lockdata *cocci_id/* fs/nfs/nfs4proc.c 6867 */;
	struct file_lock *cocci_id/* fs/nfs/nfs4proc.c 6865 */;
	struct nfs4_call_sync_data {
		const struct nfs_server *seq_server;
		struct nfs4_sequence_args *seq_args;
		struct nfs4_sequence_res *seq_res;
	} cocci_id/* fs/nfs/nfs4proc.c 678 */;
	const struct nfs_server *cocci_id/* fs/nfs/nfs4proc.c 670 */;
	struct nfs_seqid *(*cocci_id/* fs/nfs/nfs4proc.c 6699 */)(struct nfs_seqid_counter *,
								  gfp_t);
	gfp_t cocci_id/* fs/nfs/nfs4proc.c 6694 */;
	struct nfs4_lockdata {
		struct nfs_lock_args arg;
		struct nfs_lock_res res;
		struct nfs4_lock_state *lsp;
		struct nfs_open_context *ctx;
		struct file_lock fl;
		unsigned long timestamp;
		int rpc_status;
		int cancelled;
		struct nfs_server *server;
	} cocci_id/* fs/nfs/nfs4proc.c 6680 */;
	rpc_authflavor_t cocci_id/* fs/nfs/nfs4proc.c 658 */;
	struct nfs_seqid *cocci_id/* fs/nfs/nfs4proc.c 6476 */;
	struct nfs4_unlockdata *cocci_id/* fs/nfs/nfs4proc.c 6473 */;
	struct nfs4_unlockdata {
		struct nfs_locku_args arg;
		struct nfs_locku_res res;
		struct nfs4_lock_state *lsp;
		struct nfs_open_context *ctx;
		struct nfs_lock_context *l_ctx;
		struct file_lock fl;
		struct nfs_server *server;
		unsigned long timestamp;
	} cocci_id/* fs/nfs/nfs4proc.c 6462 */;
	struct nfs4_lock_state *cocci_id/* fs/nfs/nfs4proc.c 6386 */;
	struct nfs_lockt_res cocci_id/* fs/nfs/nfs4proc.c 6377 */;
	struct nfs_lockt_args cocci_id/* fs/nfs/nfs4proc.c 6373 */;
	long *cocci_id/* fs/nfs/nfs4proc.c 632 */;
	struct nfs4_delegreturndata *cocci_id/* fs/nfs/nfs4proc.c 6284 */;
	const nfs4_stateid *cocci_id/* fs/nfs/nfs4proc.c 6282 */;
	struct nfs4_delegreturndata {
		struct nfs4_delegreturnargs args;
		struct nfs4_delegreturnres res;
		struct nfs_fh fh;
		nfs4_stateid stateid;
		unsigned long timestamp;
		struct {
			struct nfs4_layoutreturn_args arg;
			struct nfs4_layoutreturn_res res;
			struct nfs4_xdr_opaque_data ld_private;
			u32 roc_barrier;
			bool roc;
		} lr;
		struct nfs_fattr fattr;
		int rpc_status;
		struct inode *inode;
	} cocci_id/* fs/nfs/nfs4proc.c 6154 */;
	struct nfs4_setclientid cocci_id/* fs/nfs/nfs4proc.c 6069 */;
	nfs4_verifier cocci_id/* fs/nfs/nfs4proc.c 6068 */;
	struct nfs4_setclientid_res *cocci_id/* fs/nfs/nfs4proc.c 6066 */;
	struct nfs4_setclientid *cocci_id/* fs/nfs/nfs4proc.c 6044 */;
	char *cocci_id/* fs/nfs/nfs4proc.c 6034 */;
	struct nfs4_exception *cocci_id/* fs/nfs/nfs4proc.c 598 */;
	struct nfs_net *cocci_id/* fs/nfs/nfs4proc.c 5907 */;
	__be32 cocci_id/* fs/nfs/nfs4proc.c 5899 */[2];
	nfs4_verifier *cocci_id/* fs/nfs/nfs4proc.c 5897 */;
	const struct nfs_client *cocci_id/* fs/nfs/nfs4proc.c 5896 */;
	struct nfs_setattrres cocci_id/* fs/nfs/nfs4proc.c 5823 */;
	struct nfs_setattrargs cocci_id/* fs/nfs/nfs4proc.c 5816 */;
	const u32 cocci_id/* fs/nfs/nfs4proc.c 5815 */[3];
	struct iattr cocci_id/* fs/nfs/nfs4proc.c 5813 */;
	struct nfs_fattr *cocci_id/* fs/nfs/nfs4proc.c 5809 */;
	struct nfs4_getattr_res cocci_id/* fs/nfs/nfs4proc.c 5763 */;
	struct nfs4_getattr_arg cocci_id/* fs/nfs/nfs4proc.c 5759 */;
	u32 cocci_id/* fs/nfs/nfs4proc.c 5758 */[3];
	struct nfs4_label cocci_id/* fs/nfs/nfs4proc.c 5756 */;
	struct nfs_fattr cocci_id/* fs/nfs/nfs4proc.c 5755 */;
	struct nfs_setaclres cocci_id/* fs/nfs/nfs4proc.c 5697 */;
	struct nfs_setaclargs cocci_id/* fs/nfs/nfs4proc.c 5692 */;
	struct page *cocci_id/* fs/nfs/nfs4proc.c 5691 */[NFS4ACL_MAXPAGES];
	const void *cocci_id/* fs/nfs/nfs4proc.c 5688 */;
	int cocci_id/* fs/nfs/nfs4proc.c 5600 */;
	unsigned int cocci_id/* fs/nfs/nfs4proc.c 5599 */;
	struct rpc_message cocci_id/* fs/nfs/nfs4proc.c 5594 */;
	struct nfs_getaclres cocci_id/* fs/nfs/nfs4proc.c 5591 */;
	struct nfs_getaclargs cocci_id/* fs/nfs/nfs4proc.c 5586 */;
	struct page *cocci_id/* fs/nfs/nfs4proc.c 5585 */[NFS4ACL_MAXPAGES + 1];
	struct inode *cocci_id/* fs/nfs/nfs4proc.c 5583 */;
	void *cocci_id/* fs/nfs/nfs4proc.c 5583 */;
	ssize_t cocci_id/* fs/nfs/nfs4proc.c 5583 */;
	size_t cocci_id/* fs/nfs/nfs4proc.c 5583 */;
	struct nfs4_cached_acl *cocci_id/* fs/nfs/nfs4proc.c 5529 */;
	struct nfs4_cached_acl {
		int cached;
		size_t len;
		char data[0];
	} cocci_id/* fs/nfs/nfs4proc.c 5505 */;
	struct nfs4_renewdata *cocci_id/* fs/nfs/nfs4proc.c 5431 */;
	struct nfs4_renewdata {
		struct nfs_client *client;
		unsigned long timestamp;
	} cocci_id/* fs/nfs/nfs4proc.c 5373 */;
	struct nfs_commitargs cocci_id/* fs/nfs/nfs4proc.c 5357 */;
	__u64 cocci_id/* fs/nfs/nfs4proc.c 5355 */;
	struct nfs_commitres *cocci_id/* fs/nfs/nfs4proc.c 5340 */;
	struct nfs_commitargs *cocci_id/* fs/nfs/nfs4proc.c 5339 */;
	struct file *cocci_id/* fs/nfs/nfs4proc.c 5339 */;
	struct rpc_clnt **cocci_id/* fs/nfs/nfs4proc.c 5327 */;
	struct nfs_commit_data *cocci_id/* fs/nfs/nfs4proc.c 5319 */;
	struct nfs_pgio_header *cocci_id/* fs/nfs/nfs4proc.c 5197 */;
	struct nfs_pgio_args *cocci_id/* fs/nfs/nfs4proc.c 5158 */;
	const struct nfs_lock_context *cocci_id/* fs/nfs/nfs4proc.c 5098 */;
	struct nfs4_pathconf_res cocci_id/* fs/nfs/nfs4proc.c 5061 */;
	struct nfs4_pathconf_arg cocci_id/* fs/nfs/nfs4proc.c 5057 */;
	struct nfs_pathconf *cocci_id/* fs/nfs/nfs4proc.c 5055 */;
	struct nfs4_fsinfo_res cocci_id/* fs/nfs/nfs4proc.c 5005 */;
	struct nfs4_fsinfo_arg cocci_id/* fs/nfs/nfs4proc.c 5001 */;
	struct nfs4_statfs_res cocci_id/* fs/nfs/nfs4proc.c 4971 */;
	struct nfs4_statfs_arg cocci_id/* fs/nfs/nfs4proc.c 4967 */;
	struct nfs_fsstat *cocci_id/* fs/nfs/nfs4proc.c 4965 */;
	dev_t cocci_id/* fs/nfs/nfs4proc.c 4904 */;
	unsigned long long cocci_id/* fs/nfs/nfs4proc.c 4871 */;
	struct nfs4_readdir_res cocci_id/* fs/nfs/nfs4proc.c 4860 */;
	struct nfs4_readdir_arg cocci_id/* fs/nfs/nfs4proc.c 4852 */;
	u64 cocci_id/* fs/nfs/nfs4proc.c 4849 */;
	struct page **cocci_id/* fs/nfs/nfs4proc.c 4849 */;
	struct nfs4_createdata *cocci_id/* fs/nfs/nfs4proc.c 4808 */;
	struct nfs4_createdata {
		struct rpc_message msg;
		struct nfs4_create_arg arg;
		struct nfs4_create_res res;
		struct nfs_fh fh;
		struct nfs_fattr fattr;
		struct nfs4_label *label;
	} cocci_id/* fs/nfs/nfs4proc.c 4689 */;
	struct nfs4_link_res cocci_id/* fs/nfs/nfs4proc.c 4635 */;
	struct nfs4_link_arg cocci_id/* fs/nfs/nfs4proc.c 4629 */;
	struct nfs_renameres *cocci_id/* fs/nfs/nfs4proc.c 4601 */;
	struct nfs_renamedata *cocci_id/* fs/nfs/nfs4proc.c 4600 */;
	struct nfs_renameargs *cocci_id/* fs/nfs/nfs4proc.c 4575 */;
	struct nfs_removeres *cocci_id/* fs/nfs/nfs4proc.c 4558 */;
	struct nfs_unlinkdata *cocci_id/* fs/nfs/nfs4proc.c 4557 */;
	struct nfs_removeargs *cocci_id/* fs/nfs/nfs4proc.c 4534 */;
	struct nfs_removeres cocci_id/* fs/nfs/nfs4proc.c 4468 */;
	struct nfs_removeargs cocci_id/* fs/nfs/nfs4proc.c 4464 */;
	struct nfs4_readlink_res cocci_id/* fs/nfs/nfs4proc.c 4402 */;
	struct nfs4_readlink cocci_id/* fs/nfs/nfs4proc.c 4396 */;
	struct nfs4_accessres cocci_id/* fs/nfs/nfs4proc.c 4329 */;
	struct nfs4_accessargs cocci_id/* fs/nfs/nfs4proc.c 4325 */;
	struct nfs_access_entry *cocci_id/* fs/nfs/nfs4proc.c 4322 */;
	struct nfs4_lookupp_res cocci_id/* fs/nfs/nfs4proc.c 4283 */;
	struct nfs4_lookupp_arg cocci_id/* fs/nfs/nfs4proc.c 4279 */;
	struct nfs4_lookup_arg cocci_id/* fs/nfs/nfs4proc.c 4164 */;
	__u32 cocci_id/* fs/nfs/nfs4proc.c 4052 */[NFS4_BITMASK_SZ];
	struct nfs_fh cocci_id/* fs/nfs/nfs4proc.c 4040 */;
	struct nfs4_fs_locations cocci_id/* fs/nfs/nfs4proc.c 4016 */;
	const rpc_authflavor_t cocci_id/* fs/nfs/nfs4proc.c 3895 */[];
	long cocci_id/* fs/nfs/nfs4proc.c 388 */;
	struct rpc_auth *cocci_id/* fs/nfs/nfs4proc.c 3874 */;
	struct rpc_auth_create_args cocci_id/* fs/nfs/nfs4proc.c 3871 */;
	struct nfs4_lookup_res cocci_id/* fs/nfs/nfs4proc.c 3824 */;
	struct nfs4_lookup_root_arg cocci_id/* fs/nfs/nfs4proc.c 3821 */;
	const struct cred *cocci_id/* fs/nfs/nfs4proc.c 372 */;
	struct nfs4_server_caps_res cocci_id/* fs/nfs/nfs4proc.c 3716 */;
	struct nfs4_server_caps_arg cocci_id/* fs/nfs/nfs4proc.c 3712 */;
	nfs4_stateid *cocci_id/* fs/nfs/nfs4proc.c 371 */;
	struct nfs_server *cocci_id/* fs/nfs/nfs4proc.c 370 */;
	void cocci_id/* fs/nfs/nfs4proc.c 370 */;
	const struct nfs4_minor_version_ops *cocci_id/* fs/nfs/nfs4proc.c 365 */;
	struct pnfs_layout_hdr *cocci_id/* fs/nfs/nfs4proc.c 3505 */;
	struct nfs4_closedata *cocci_id/* fs/nfs/nfs4proc.c 3425 */;
	struct super_block *cocci_id/* fs/nfs/nfs4proc.c 3411 */;
	struct nfs4_closedata {
		struct inode *inode;
		struct nfs4_state *state;
		struct nfs_closeargs arg;
		struct nfs_closeres res;
		struct {
			struct nfs4_layoutreturn_args arg;
			struct nfs4_layoutreturn_res res;
			struct nfs4_xdr_opaque_data ld_private;
			u32 roc_barrier;
			bool roc;
		} lr;
		struct nfs_fattr fattr;
		unsigned long timestamp;
	} cocci_id/* fs/nfs/nfs4proc.c 3391 */;
	__be32 cocci_id/* fs/nfs/nfs4proc.c 3360 */;
	struct nfs_lock_context *cocci_id/* fs/nfs/nfs4proc.c 3231 */;
	struct nfs_setattrres *cocci_id/* fs/nfs/nfs4proc.c 3205 */;
	struct nfs_setattrargs *cocci_id/* fs/nfs/nfs4proc.c 3204 */;
	__u32 cocci_id/* fs/nfs/nfs4proc.c 3150 */;
	struct nfs4_open_createattrs cocci_id/* fs/nfs/nfs4proc.c 3146 */;
	unsigned cocci_id/* fs/nfs/nfs4proc.c 3089 */;
	struct nfs4_readdir_arg *cocci_id/* fs/nfs/nfs4proc.c 305 */;
	__be32 *cocci_id/* fs/nfs/nfs4proc.c 304 */;
	struct nfs4_label *cocci_id/* fs/nfs/nfs4proc.c 3039 */;
	struct iattr *cocci_id/* fs/nfs/nfs4proc.c 3038 */;
	enum open_claim_type4 cocci_id/* fs/nfs/nfs4proc.c 3037 */;
	struct nfs4_threshold **cocci_id/* fs/nfs/nfs4proc.c 3035 */;
	struct dentry *cocci_id/* fs/nfs/nfs4proc.c 3033 */;
	struct nfs4_opendata *cocci_id/* fs/nfs/nfs4proc.c 3032 */;
	struct nfs4_state *cocci_id/* fs/nfs/nfs4proc.c 3030 */;
	struct nfs4_state_owner *cocci_id/* fs/nfs/nfs4proc.c 3029 */;
	int *cocci_id/* fs/nfs/nfs4proc.c 3027 */;
	const struct nfs4_open_createattrs *cocci_id/* fs/nfs/nfs4proc.c 3026 */;
	struct nfs_open_context *cocci_id/* fs/nfs/nfs4proc.c 3024 */;
	__u32 cocci_id/* fs/nfs/nfs4proc.c 2925 */[3];
	struct nfs4_label **cocci_id/* fs/nfs/nfs4proc.c 2922 */;
	const __u32 *cocci_id/* fs/nfs/nfs4proc.c 277 */;
	__u32 *cocci_id/* fs/nfs/nfs4proc.c 277 */;
	nfs4_stateid cocci_id/* fs/nfs/nfs4proc.c 2767 */;
	struct nfs_openres *cocci_id/* fs/nfs/nfs4proc.c 2606 */;
	struct nfs_openargs *cocci_id/* fs/nfs/nfs4proc.c 2605 */;
	struct nfs_access_entry cocci_id/* fs/nfs/nfs4proc.c 2564 */;
	struct nfs_delegation *cocci_id/* fs/nfs/nfs4proc.c 2132 */;
	struct nfs4_opendata cocci_id/* fs/nfs/nfs4proc.c 1373 */;
	struct kref *cocci_id/* fs/nfs/nfs4proc.c 1370 */;
	u32 *cocci_id/* fs/nfs/nfs4proc.c 136 */;
	void **cocci_id/* fs/nfs/nfs4proc.c 124 */;
	fmode_t cocci_id/* fs/nfs/nfs4proc.c 1200 */;
	const struct nfs_open_context *cocci_id/* fs/nfs/nfs4proc.c 1200 */;
	struct nfs4_open_createattrs {
		struct nfs4_label *label;
		struct iattr *sattr;
		const __u32 verf[2];
	} cocci_id/* fs/nfs/nfs4proc.c 1182 */;
	struct nfs4_change_info *cocci_id/* fs/nfs/nfs4proc.c 1174 */;
	struct rpc_message *cocci_id/* fs/nfs/nfs4proc.c 1124 */;
	struct rpc_task_setup *cocci_id/* fs/nfs/nfs4proc.c 1086 */;
	const struct rpc_call_ops cocci_id/* fs/nfs/nfs4proc.c 1081 */;
	struct nfs4_call_sync_data *cocci_id/* fs/nfs/nfs4proc.c 1077 */;
	int cocci_id/* fs/nfs/nfs4proc.c 106 */(struct nfs_server *,
						const nfs4_stateid *,
						const struct cred *, bool);
	int cocci_id/* fs/nfs/nfs4proc.c 104 */(struct nfs_server *,
						nfs4_stateid *,
						const struct cred *);
	const struct xattr_handler *cocci_id/* fs/nfs/nfs4proc.c 10057 */[];
	const struct xattr_handler cocci_id/* fs/nfs/nfs4proc.c 10050 */;
	struct rpc_task *cocci_id/* fs/nfs/nfs4proc.c 100 */(struct nfs_client *clp,
							     const struct cred *cred,
							     struct nfs4_slot *slot,
							     bool is_privileged);
}
