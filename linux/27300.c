cocci_test_suite() {
	__u32 cocci_id/* fs/cifs/smb2misc.c 97 */;
	struct sdesc *cocci_id/* fs/cifs/smb2misc.c 818 */;
	struct kvec *cocci_id/* fs/cifs/smb2misc.c 815 */;
	struct close_cancelled_open *cocci_id/* fs/cifs/smb2misc.c 744 */;
	__u64 cocci_id/* fs/cifs/smb2misc.c 741 */;
	__u16 cocci_id/* fs/cifs/smb2misc.c 741 */;
	struct cifs_tcon *cocci_id/* fs/cifs/smb2misc.c 741 */;
	int cocci_id/* fs/cifs/smb2misc.c 740 */;
	const __le16 cocci_id/* fs/cifs/smb2misc.c 73 */[NUMBER_OF_SMB2_COMMANDS];
	struct close_cancelled_open cocci_id/* fs/cifs/smb2misc.c 713 */;
	struct cifsFileInfo cocci_id/* fs/cifs/smb2misc.c 668 */;
	struct cifsFileInfo *cocci_id/* fs/cifs/smb2misc.c 641 */;
	struct smb2_oplock_break *cocci_id/* fs/cifs/smb2misc.c 636 */;
	struct cifs_tcon cocci_id/* fs/cifs/smb2misc.c 601 */;
	struct TCP_Server_Info cocci_id/* fs/cifs/smb2misc.c 595 */;
	struct smb2_lease_break *cocci_id/* fs/cifs/smb2misc.c 576 */;
	bool cocci_id/* fs/cifs/smb2misc.c 573 */;
	struct cifs_pending_open *cocci_id/* fs/cifs/smb2misc.c 515 */;
	__u8 cocci_id/* fs/cifs/smb2misc.c 512 */;
	struct smb2_lease_break_work cocci_id/* fs/cifs/smb2misc.c 496 */;
	struct smb2_lease_break_work *cocci_id/* fs/cifs/smb2misc.c 495 */;
	struct work_struct *cocci_id/* fs/cifs/smb2misc.c 493 */;
	void cocci_id/* fs/cifs/smb2misc.c 492 */;
	struct smb2_lease_break_work {
		struct work_struct lease_break;
		struct tcon_link *tlink;
		__u8 lease_key[16];
		__le32 lease_state;
	} cocci_id/* fs/cifs/smb2misc.c 485 */;
	struct cifsInodeInfo *cocci_id/* fs/cifs/smb2misc.c 472 */;
	__le32 cocci_id/* fs/cifs/smb2misc.c 471 */;
	const char *cocci_id/* fs/cifs/smb2misc.c 440 */;
	struct cifs_sb_info *cocci_id/* fs/cifs/smb2misc.c 440 */;
	__le16 *cocci_id/* fs/cifs/smb2misc.c 439 */;
	struct smb2_sync_pdu *cocci_id/* fs/cifs/smb2misc.c 399 */;
	struct TCP_Server_Info *cocci_id/* fs/cifs/smb2misc.c 397 */;
	void *cocci_id/* fs/cifs/smb2misc.c 397 */;
	unsigned int cocci_id/* fs/cifs/smb2misc.c 396 */;
	struct smb2_ioctl_rsp *cocci_id/* fs/cifs/smb2misc.c 352 */;
	struct smb2_sync_hdr *cocci_id/* fs/cifs/smb2misc.c 35 */;
	struct smb2_query_directory_rsp *cocci_id/* fs/cifs/smb2misc.c 346 */;
	struct smb2_read_rsp *cocci_id/* fs/cifs/smb2misc.c 341 */;
	struct smb2_query_info_rsp *cocci_id/* fs/cifs/smb2misc.c 335 */;
	struct smb2_create_rsp *cocci_id/* fs/cifs/smb2misc.c 329 */;
	struct smb2_sess_setup_rsp *cocci_id/* fs/cifs/smb2misc.c 323 */;
	struct smb2_err_rsp *cocci_id/* fs/cifs/smb2misc.c 305 */;
	int *cocci_id/* fs/cifs/smb2misc.c 298 */;
	const bool cocci_id/* fs/cifs/smb2misc.c 271 */[NUMBER_OF_SMB2_COMMANDS];
	struct cifs_ses cocci_id/* fs/cifs/smb2misc.c 155 */;
	struct list_head *cocci_id/* fs/cifs/smb2misc.c 150 */;
	struct cifs_ses *cocci_id/* fs/cifs/smb2misc.c 149 */;
	struct smb2_transform_hdr *cocci_id/* fs/cifs/smb2misc.c 147 */;
	struct smb2_sync_hdr cocci_id/* fs/cifs/smb2misc.c 140 */;
	struct smb2_sync_pdu cocci_id/* fs/cifs/smb2misc.c 139 */;
	char *cocci_id/* fs/cifs/smb2misc.c 132 */;
	struct smb2_neg_context cocci_id/* fs/cifs/smb2misc.c 119 */;
	struct smb2_negotiate_rsp *cocci_id/* fs/cifs/smb2misc.c 102 */;
}