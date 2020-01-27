cocci_test_suite() {
	struct cb_process_state cocci_id/* fs/nfs/callback_xdr.c 930 */;
	struct xdr_stream cocci_id/* fs/nfs/callback_xdr.c 928 */;
	struct cb_compound_hdr_res cocci_id/* fs/nfs/callback_xdr.c 927 */;
	struct cb_compound_hdr_arg cocci_id/* fs/nfs/callback_xdr.c 926 */;
	long cocci_id/* fs/nfs/callback_xdr.c 873 */;
	struct callback_op *cocci_id/* fs/nfs/callback_xdr.c 870 */;
	struct nfs_fh *cocci_id/* fs/nfs/callback_xdr.c 87 */;
	struct cb_process_state *cocci_id/* fs/nfs/callback_xdr.c 806 */;
	void **cocci_id/* fs/nfs/callback_xdr.c 80 */;
	struct nfs4_slot_table *cocci_id/* fs/nfs/callback_xdr.c 795 */;
	struct nfs4_slot *cocci_id/* fs/nfs/callback_xdr.c 793 */;
	struct nfs4_session *cocci_id/* fs/nfs/callback_xdr.c 792 */;
	void cocci_id/* fs/nfs/callback_xdr.c 792 */;
	ssize_t cocci_id/* fs/nfs/callback_xdr.c 78 */;
	const char **cocci_id/* fs/nfs/callback_xdr.c 76 */;
	size_t cocci_id/* fs/nfs/callback_xdr.c 76 */;
	struct callback_op **cocci_id/* fs/nfs/callback_xdr.c 757 */;
	const struct cb_sequenceres *cocci_id/* fs/nfs/callback_xdr.c 734 */;
	const void *cocci_id/* fs/nfs/callback_xdr.c 732 */;
	const struct nfs4_sessionid *cocci_id/* fs/nfs/callback_xdr.c 718 */;
	char *cocci_id/* fs/nfs/callback_xdr.c 710 */;
	const struct cb_getattrres *cocci_id/* fs/nfs/callback_xdr.c 687 */;
	struct cb_compound_hdr_res *cocci_id/* fs/nfs/callback_xdr.c 656 */;
	const struct timespec64 *cocci_id/* fs/nfs/callback_xdr.c 642 */;
	const uint32_t *cocci_id/* fs/nfs/callback_xdr.c 597 */;
	const char *cocci_id/* fs/nfs/callback_xdr.c 590 */;
	struct callback_op cocci_id/* fs/nfs/callback_xdr.c 58 */[];
	struct cb_offloadargs *cocci_id/* fs/nfs/callback_xdr.c 556 */;
	struct callback_op {
		__be32 (*process_op)(void *, void *,
				     struct cb_process_state *);
		__be32 (*decode_args)(struct svc_rqst *, struct xdr_stream *,
				      void *);
		__be32 (*encode_res)(struct svc_rqst *, struct xdr_stream *,
				     const void *);
		long res_maxsize;
	} cocci_id/* fs/nfs/callback_xdr.c 50 */;
	struct cb_notify_lock_args *cocci_id/* fs/nfs/callback_xdr.c 481 */;
	struct cb_recallslotargs *cocci_id/* fs/nfs/callback_xdr.c 471 */;
	uint32_t cocci_id/* fs/nfs/callback_xdr.c 452 */[2];
	struct cb_recallanyargs *cocci_id/* fs/nfs/callback_xdr.c 451 */;
	uint32_t cocci_id/* fs/nfs/callback_xdr.c 412 */;
	int cocci_id/* fs/nfs/callback_xdr.c 405 */;
	struct cb_sequenceargs *cocci_id/* fs/nfs/callback_xdr.c 403 */;
	void *cocci_id/* fs/nfs/callback_xdr.c 401 */;
	struct svc_rqst *cocci_id/* fs/nfs/callback_xdr.c 399 */;
	struct referring_call_list *cocci_id/* fs/nfs/callback_xdr.c 362 */;
	struct nfs4_sessionid *cocci_id/* fs/nfs/callback_xdr.c 349 */;
	struct cb_devicenotifyitem *cocci_id/* fs/nfs/callback_xdr.c 289 */;
	u32 cocci_id/* fs/nfs/callback_xdr.c 263 */;
	struct cb_devicenotifyargs *cocci_id/* fs/nfs/callback_xdr.c 260 */;
	uint64_t cocci_id/* fs/nfs/callback_xdr.c 238 */;
	struct cb_layoutrecallargs *cocci_id/* fs/nfs/callback_xdr.c 215 */;
	struct cb_recallargs *cocci_id/* fs/nfs/callback_xdr.c 191 */;
	struct cb_getattrargs *cocci_id/* fs/nfs/callback_xdr.c 179 */;
	unsigned int *cocci_id/* fs/nfs/callback_xdr.c 166 */;
	struct cb_compound_hdr_arg *cocci_id/* fs/nfs/callback_xdr.c 141 */;
	nfs4_stateid *cocci_id/* fs/nfs/callback_xdr.c 135 */;
	unsigned int cocci_id/* fs/nfs/callback_xdr.c 108 */;
	__be32 *cocci_id/* fs/nfs/callback_xdr.c 107 */;
	const struct svc_version cocci_id/* fs/nfs/callback_xdr.c 1069 */;
	unsigned int cocci_id/* fs/nfs/callback_xdr.c 1068 */[ARRAY_SIZE(nfs4_callback_procedures1)];
	const struct svc_procedure cocci_id/* fs/nfs/callback_xdr.c 1052 */[];
	__be32 cocci_id/* fs/nfs/callback_xdr.c 105 */;
	uint32_t *cocci_id/* fs/nfs/callback_xdr.c 105 */;
	struct xdr_stream *cocci_id/* fs/nfs/callback_xdr.c 105 */;
}
