cocci_test_suite() {
	struct type86x_reply cocci_id/* drivers/s390/crypto/zcrypt_msgtype6.c 941 */;
	struct response_type *cocci_id/* drivers/s390/crypto/zcrypt_msgtype6.c 928 */;
	struct error_hdr cocci_id/* drivers/s390/crypto/zcrypt_msgtype6.c 924 */;
	struct ap_queue *cocci_id/* drivers/s390/crypto/zcrypt_msgtype6.c 920 */;
	struct type86_ep11_reply *cocci_id/* drivers/s390/crypto/zcrypt_msgtype6.c 856 */;
	struct ep11_urb *cocci_id/* drivers/s390/crypto/zcrypt_msgtype6.c 854 */;
	struct type86x_reply *cocci_id/* drivers/s390/crypto/zcrypt_msgtype6.c 783 */;
	unsigned int cocci_id/* drivers/s390/crypto/zcrypt_msgtype6.c 781 */;
	char __user *cocci_id/* drivers/s390/crypto/zcrypt_msgtype6.c 780 */;
	struct {
		struct type86_hdr hdr;
		struct type86_fmt2_ext fmt2;
		struct CPRBX cprbx;
	}__packed *cocci_id/* drivers/s390/crypto/zcrypt_msgtype6.c 765 */;
	char __force __user *cocci_id/* drivers/s390/crypto/zcrypt_msgtype6.c 754 */;
	struct type86_fmt2_msg *cocci_id/* drivers/s390/crypto/zcrypt_msgtype6.c 747 */;
	unsigned short cocci_id/* drivers/s390/crypto/zcrypt_msgtype6.c 643 */;
	unsigned char cocci_id/* drivers/s390/crypto/zcrypt_msgtype6.c 607 */[];
	struct type86_ep11_reply {
		struct type86_hdr hdr;
		struct type86_fmt2_ext fmt2;
		struct ep11_cprb cprbx;
	}__packed cocci_id/* drivers/s390/crypto/zcrypt_msgtype6.c 596 */;
	struct CPRB {
		unsigned short cprb_len;
		unsigned char cprb_ver_id;
		unsigned char pad_000;
		unsigned char srpi_rtcode[4];
		unsigned char srpi_verb;
		unsigned char flags;
		unsigned char func_id[2];
		unsigned char checkpoint_flag;
		unsigned char resv2;
		unsigned short req_parml;
		unsigned char req_parmp[4];
		unsigned char req_datal[4];
		unsigned char req_datap[4];
		unsigned short rpl_parml;
		unsigned char pad_001[2];
		unsigned char rpl_parmp[4];
		unsigned char rpl_datal[4];
		unsigned char rpl_datap[4];
		unsigned short ccp_rscode;
		unsigned short ccp_rtcode;
		unsigned char repd_parml[2];
		unsigned char mac_data_len[2];
		unsigned char repd_datal[4];
		unsigned char req_pc[2];
		unsigned char res_origin[8];
		unsigned char mac_value[8];
		unsigned char logon_id[8];
		unsigned char usage_domain[2];
		unsigned char resv3[18];
		unsigned short svr_namel;
		unsigned char svr_name[8];
	}__packed cocci_id/* drivers/s390/crypto/zcrypt_msgtype6.c 59 */;
	struct type86x_reply {
		struct type86_hdr hdr;
		struct type86_fmt2_ext fmt2;
		struct CPRBX cprbx;
		unsigned char pad[4];
		unsigned short length;
		char text[0];
	}__packed cocci_id/* drivers/s390/crypto/zcrypt_msgtype6.c 587 */;
	struct pld_hdr *cocci_id/* drivers/s390/crypto/zcrypt_msgtype6.c 567 */;
	struct pld_hdr {
		unsigned char func_tag;
		unsigned char func_len;
		unsigned int func_val;
		unsigned char dom_tag;
		unsigned char dom_len;
		unsigned int dom_val;
	}__packed *cocci_id/* drivers/s390/crypto/zcrypt_msgtype6.c 517 */;
	struct {
		struct type6_hdr hdr;
		struct ep11_cprb cprbx;
		unsigned char pld_tag;
		unsigned char pld_lenfmt;
	}__packed *cocci_id/* drivers/s390/crypto/zcrypt_msgtype6.c 510 */;
	unsigned short *cocci_id/* drivers/s390/crypto/zcrypt_msgtype6.c 479 */;
	unsigned char *cocci_id/* drivers/s390/crypto/zcrypt_msgtype6.c 474 */;
	struct type86_fmt2_msg cocci_id/* drivers/s390/crypto/zcrypt_msgtype6.c 438 */;
	char *cocci_id/* drivers/s390/crypto/zcrypt_msgtype6.c 407 */;
	struct {
		struct type6_hdr hdr;
		struct CPRBX cprbx;
	}__packed *cocci_id/* drivers/s390/crypto/zcrypt_msgtype6.c 400 */;
	unsigned short **cocci_id/* drivers/s390/crypto/zcrypt_msgtype6.c 394 */;
	unsigned int *cocci_id/* drivers/s390/crypto/zcrypt_msgtype6.c 393 */;
	struct ica_xcRB *cocci_id/* drivers/s390/crypto/zcrypt_msgtype6.c 392 */;
	struct type86_fmt2_msg {
		struct type86_hdr hdr;
		struct type86_fmt2_ext fmt2;
	}__packed cocci_id/* drivers/s390/crypto/zcrypt_msgtype6.c 386 */;
	struct response_type {
		struct completion work;
		int type;
	} cocci_id/* drivers/s390/crypto/zcrypt_msgtype6.c 34 */;
	struct {
		struct type6_hdr hdr;
		struct CPRBX cprbx;
		struct function_and_rules_block fr;
		unsigned short length;
		char text[0];
	}__packed *cocci_id/* drivers/s390/crypto/zcrypt_msgtype6.c 333 */;
	struct function_and_rules_block cocci_id/* drivers/s390/crypto/zcrypt_msgtype6.c 327 */;
	struct type6_hdr cocci_id/* drivers/s390/crypto/zcrypt_msgtype6.c 321 */;
	struct ica_rsa_modexpo_crt *cocci_id/* drivers/s390/crypto/zcrypt_msgtype6.c 319 */;
	struct ap_message *cocci_id/* drivers/s390/crypto/zcrypt_msgtype6.c 318 */;
	struct zcrypt_queue *cocci_id/* drivers/s390/crypto/zcrypt_msgtype6.c 317 */;
	int cocci_id/* drivers/s390/crypto/zcrypt_msgtype6.c 317 */;
	struct ica_rsa_modexpo *cocci_id/* drivers/s390/crypto/zcrypt_msgtype6.c 250 */;
	void __exit cocci_id/* drivers/s390/crypto/zcrypt_msgtype6.c 1351 */;
	void cocci_id/* drivers/s390/crypto/zcrypt_msgtype6.c 1351 */;
	void __init cocci_id/* drivers/s390/crypto/zcrypt_msgtype6.c 1344 */;
	struct zcrypt_ops cocci_id/* drivers/s390/crypto/zcrypt_msgtype6.c 1335 */;
	struct {
		struct type6_hdr hdr;
		struct CPRBX cprbx;
		char function_code[2];
		short int rule_length;
		char rule[8];
		short int verb_length;
		short int key_length;
	}__packed *cocci_id/* drivers/s390/crypto/zcrypt_msgtype6.c 1285 */;
	const struct CPRBX cocci_id/* drivers/s390/crypto/zcrypt_msgtype6.c 127 */;
	int *cocci_id/* drivers/s390/crypto/zcrypt_msgtype6.c 1252 */;
	unsigned long long cocci_id/* drivers/s390/crypto/zcrypt_msgtype6.c 1114 */;
	struct response_type cocci_id/* drivers/s390/crypto/zcrypt_msgtype6.c 1106 */;
	unsigned long cocci_id/* drivers/s390/crypto/zcrypt_msgtype6.c 1046 */;
	struct function_and_rules_block {
		unsigned char function_code[2];
		unsigned short ulen;
		unsigned char only_rule[8];
	}__packed cocci_id/* drivers/s390/crypto/zcrypt_msgtype6.c 104 */;
	void *cocci_id/* drivers/s390/crypto/zcrypt_msgtype6.c 1023 */;
	struct ap_message cocci_id/* drivers/s390/crypto/zcrypt_msgtype6.c 1016 */;
	long cocci_id/* drivers/s390/crypto/zcrypt_msgtype6.c 1013 */;
	atomic_t cocci_id/* drivers/s390/crypto/zcrypt_msgtype6.c 1004 */;
}
