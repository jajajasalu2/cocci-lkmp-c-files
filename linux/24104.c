cocci_test_suite() {
	size_t cocci_id/* net/sunrpc/xprtrdma/svc_rdma_rw.c 788 */;
	struct svc_rdma_recv_ctxt *cocci_id/* net/sunrpc/xprtrdma/svc_rdma_rw.c 718 */;
	__be32 *cocci_id/* net/sunrpc/xprtrdma/svc_rdma_rw.c 716 */;
	struct svc_rdma_read_info *cocci_id/* net/sunrpc/xprtrdma/svc_rdma_rw.c 715 */;
	struct svc_rqst *cocci_id/* net/sunrpc/xprtrdma/svc_rdma_rw.c 714 */;
	int cocci_id/* net/sunrpc/xprtrdma/svc_rdma_rw.c 714 */;
	u64 cocci_id/* net/sunrpc/xprtrdma/svc_rdma_rw.c 682 */;
	u32 cocci_id/* net/sunrpc/xprtrdma/svc_rdma_rw.c 681 */;
	unsigned int cocci_id/* net/sunrpc/xprtrdma/svc_rdma_rw.c 675 */;
	struct scatterlist *cocci_id/* net/sunrpc/xprtrdma/svc_rdma_rw.c 607 */;
	struct svc_rdma_rw_ctxt *cocci_id/* net/sunrpc/xprtrdma/svc_rdma_rw.c 605 */;
	struct svc_rdma_chunk_ctxt *cocci_id/* net/sunrpc/xprtrdma/svc_rdma_rw.c 604 */;
	bool cocci_id/* net/sunrpc/xprtrdma/svc_rdma_rw.c 556 */;
	struct svc_rdma_rw_ctxt cocci_id/* net/sunrpc/xprtrdma/svc_rdma_rw.c 50 */;
	struct list_head *cocci_id/* net/sunrpc/xprtrdma/svc_rdma_rw.c 48 */;
	struct kvec *cocci_id/* net/sunrpc/xprtrdma/svc_rdma_rw.c 478 */;
	struct svcxprt_rdma *cocci_id/* net/sunrpc/xprtrdma/svc_rdma_rw.c 409 */;
	void (*cocci_id/* net/sunrpc/xprtrdma/svc_rdma_rw.c 403 */)(struct svc_rdma_write_info *info,
								    unsigned int len,
								    struct svc_rdma_rw_ctxt *ctxt);
	struct svc_rdma_write_info *cocci_id/* net/sunrpc/xprtrdma/svc_rdma_rw.c 402 */;
	struct svc_rdma_rw_ctxt {
		struct list_head rw_list;
		struct rdma_rw_ctx rw_ctx;
		int rw_nents;
		struct sg_table rw_sg_table;
		struct scatterlist rw_first_sgl[0];
	} cocci_id/* net/sunrpc/xprtrdma/svc_rdma_rw.c 39 */;
	struct page **cocci_id/* net/sunrpc/xprtrdma/svc_rdma_rw.c 374 */;
	struct xdr_buf *cocci_id/* net/sunrpc/xprtrdma/svc_rdma_rw.c 372 */;
	struct ib_cqe *cocci_id/* net/sunrpc/xprtrdma/svc_rdma_rw.c 305 */;
	const struct ib_send_wr *cocci_id/* net/sunrpc/xprtrdma/svc_rdma_rw.c 303 */;
	struct ib_send_wr *cocci_id/* net/sunrpc/xprtrdma/svc_rdma_rw.c 302 */;
	struct svc_xprt *cocci_id/* net/sunrpc/xprtrdma/svc_rdma_rw.c 301 */;
	struct svc_rdma_read_info cocci_id/* net/sunrpc/xprtrdma/svc_rdma_rw.c 267 */;
	struct svc_rdma_chunk_ctxt cocci_id/* net/sunrpc/xprtrdma/svc_rdma_rw.c 264 */;
	struct ib_wc *cocci_id/* net/sunrpc/xprtrdma/svc_rdma_rw.c 260 */;
	struct ib_cq *cocci_id/* net/sunrpc/xprtrdma/svc_rdma_rw.c 260 */;
	struct svc_rdma_read_info {
		struct svc_rdma_recv_ctxt *ri_readctxt;
		unsigned int ri_position;
		unsigned int ri_pageno;
		unsigned int ri_pageoff;
		unsigned int ri_chunklen;
		struct svc_rdma_chunk_ctxt ri_cc;
	} cocci_id/* net/sunrpc/xprtrdma/svc_rdma_rw.c 224 */;
	struct svc_rdma_write_info cocci_id/* net/sunrpc/xprtrdma/svc_rdma_rw.c 209 */;
	void cocci_id/* net/sunrpc/xprtrdma/svc_rdma_rw.c 20 */(struct ib_cq *cq,
								struct ib_wc *wc);
	struct svc_rdma_write_info {
		unsigned int wi_seg_off;
		unsigned int wi_seg_no;
		unsigned int wi_nsegs;
		__be32 *wi_segs;
		struct xdr_buf *wi_xdr;
		unsigned char *wi_base;
		unsigned int wi_next_off;
		struct svc_rdma_chunk_ctxt wi_cc;
	} cocci_id/* net/sunrpc/xprtrdma/svc_rdma_rw.c 156 */;
	enum dma_data_direction cocci_id/* net/sunrpc/xprtrdma/svc_rdma_rw.c 136 */;
	void cocci_id/* net/sunrpc/xprtrdma/svc_rdma_rw.c 125 */;
	struct svc_rdma_chunk_ctxt {
		struct ib_cqe cc_cqe;
		struct svcxprt_rdma *cc_rdma;
		struct list_head cc_rwctxts;
		int cc_sqecount;
	} cocci_id/* net/sunrpc/xprtrdma/svc_rdma_rw.c 118 */;
}
