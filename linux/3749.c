cocci_test_suite() {
	union mbox_msg cocci_id/* drivers/crypto/cavium/nitrox/nitrox_mbx.c 57 */;
	struct pf2vf_work {
		struct nitrox_vfdev *vfdev;
		struct nitrox_device *ndev;
		struct work_struct pf2vf_resp;
	} cocci_id/* drivers/crypto/cavium/nitrox/nitrox_mbx.c 31 */;
	enum mbx_msg_opcode{MSG_OP_VF_MODE=1, MSG_OP_VF_UP, MSG_OP_VF_DOWN, MSG_OP_CHIPID_VFID, MSG_OP_MCODE_INFO=11,} cocci_id/* drivers/crypto/cavium/nitrox/nitrox_mbx.c 23 */;
	struct nitrox_device *cocci_id/* drivers/crypto/cavium/nitrox/nitrox_mbx.c 201 */;
	void cocci_id/* drivers/crypto/cavium/nitrox/nitrox_mbx.c 201 */;
	struct nitrox_vfdev cocci_id/* drivers/crypto/cavium/nitrox/nitrox_mbx.c 180 */;
	struct nitrox_vfdev *cocci_id/* drivers/crypto/cavium/nitrox/nitrox_mbx.c 176 */;
	int cocci_id/* drivers/crypto/cavium/nitrox/nitrox_mbx.c 174 */;
	const unsigned long *cocci_id/* drivers/crypto/cavium/nitrox/nitrox_mbx.c 131 */;
	enum mbx_msg_type{MBX_MSG_TYPE_NOP, MBX_MSG_TYPE_REQ, MBX_MSG_TYPE_ACK, MBX_MSG_TYPE_NACK,} cocci_id/* drivers/crypto/cavium/nitrox/nitrox_mbx.c 13 */;
	u32 cocci_id/* drivers/crypto/cavium/nitrox/nitrox_mbx.c 125 */;
	u64 cocci_id/* drivers/crypto/cavium/nitrox/nitrox_mbx.c 124 */;
	struct pf2vf_work *cocci_id/* drivers/crypto/cavium/nitrox/nitrox_mbx.c 123 */;
	struct pf2vf_work cocci_id/* drivers/crypto/cavium/nitrox/nitrox_mbx.c 102 */;
	struct work_struct *cocci_id/* drivers/crypto/cavium/nitrox/nitrox_mbx.c 100 */;
}
