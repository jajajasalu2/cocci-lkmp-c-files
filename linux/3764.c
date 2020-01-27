cocci_test_suite() {
	struct task_struct *cocci_id/* drivers/crypto/ccp/ccp-dev-v5.c 949 */;
	union ccp_function {
		struct {
			u16 size:7;
			u16 encrypt:1;
			u16 mode:5;
			u16 type:2;
		} aes;
		struct {
			u16 size:7;
			u16 encrypt:1;
			u16 rsvd:5;
			u16 type:2;
		} aes_xts;
		struct {
			u16 size:7;
			u16 encrypt:1;
			u16 mode:5;
			u16 type:2;
		} des3;
		struct {
			u16 rsvd1:10;
			u16 type:4;
			u16 rsvd2:1;
		} sha;
		struct {
			u16 mode:3;
			u16 size:12;
		} rsa;
		struct {
			u16 byteswap:2;
			u16 bitwise:3;
			u16 reflect:2;
			u16 rsvd:8;
		} pt;
		struct {
			u16 rsvd:13;
		} zlib;
		struct {
			u16 size:10;
			u16 type:2;
			u16 mode:3;
		} ecc;
		u16 raw;
	} cocci_id/* drivers/crypto/ccp/ccp-dev-v5.c 92 */;
	unsigned long cocci_id/* drivers/crypto/ccp/ccp-dev-v5.c 898 */;
	u64 cocci_id/* drivers/crypto/ccp/ccp-dev-v5.c 786 */;
	char cocci_id/* drivers/crypto/ccp/ccp-dev-v5.c 784 */[MAX_DMAPOOL_NAME_LEN];
	struct dma_pool *cocci_id/* drivers/crypto/ccp/ccp-dev-v5.c 783 */;
	struct device *cocci_id/* drivers/crypto/ccp/ccp-dev-v5.c 781 */;
	irqreturn_t cocci_id/* drivers/crypto/ccp/ccp-dev-v5.c 766 */;
	void *cocci_id/* drivers/crypto/ccp/ccp-dev-v5.c 766 */;
	unsigned long *cocci_id/* drivers/crypto/ccp/ccp-dev-v5.c 610 */;
	struct ccp_dma_info *cocci_id/* drivers/crypto/ccp/ccp-dev-v5.c 495 */;
	union ccp_function cocci_id/* drivers/crypto/ccp/ccp-dev-v5.c 280 */;
	struct ccp_op *cocci_id/* drivers/crypto/ccp/ccp-dev-v5.c 277 */;
	u32 cocci_id/* drivers/crypto/ccp/ccp-dev-v5.c 226 */;
	__le32 *cocci_id/* drivers/crypto/ccp/ccp-dev-v5.c 225 */;
	u32 *cocci_id/* drivers/crypto/ccp/ccp-dev-v5.c 224 */;
	struct ccp5_desc *cocci_id/* drivers/crypto/ccp/ccp-dev-v5.c 221 */;
	int cocci_id/* drivers/crypto/ccp/ccp-dev-v5.c 221 */;
	struct ccp5_desc cocci_id/* drivers/crypto/ccp/ccp-dev-v5.c 214 */;
	const struct ccp_vdata cocci_id/* drivers/crypto/ccp/ccp-dev-v5.c 1114 */;
	const struct ccp_actions cocci_id/* drivers/crypto/ccp/ccp-dev-v5.c 1099 */;
	struct ccp_device *cocci_id/* drivers/crypto/ccp/ccp-dev-v5.c 1066 */;
	void cocci_id/* drivers/crypto/ccp/ccp-dev-v5.c 1066 */;
	struct ccp_cmd cocci_id/* drivers/crypto/ccp/ccp-dev-v5.c 1054 */;
	unsigned int cocci_id/* drivers/crypto/ccp/ccp-dev-v5.c 1011 */;
	struct ccp_cmd *cocci_id/* drivers/crypto/ccp/ccp-dev-v5.c 1010 */;
	struct ccp_cmd_queue *cocci_id/* drivers/crypto/ccp/ccp-dev-v5.c 1009 */;
}
