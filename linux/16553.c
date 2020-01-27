cocci_test_suite() {
	struct vud_block cocci_id/* drivers/s390/crypto/zcrypt_ccamisc.c 992 */;
	struct vud_block *cocci_id/* drivers/s390/crypto/zcrypt_ccamisc.c 989 */;
	struct rule_array_block cocci_id/* drivers/s390/crypto/zcrypt_ccamisc.c 981 */;
	struct rule_array_block *cocci_id/* drivers/s390/crypto/zcrypt_ccamisc.c 976 */;
	bool cocci_id/* drivers/s390/crypto/zcrypt_ccamisc.c 97 */;
	struct cipherkeytoken *cocci_id/* drivers/s390/crypto/zcrypt_ccamisc.c 963 */;
	struct iprepparm {
		u8 subfunc_code[2];
		u16 rule_array_len;
		struct {
			u16 len;
		} vud;
		struct {
			u16 len;
			struct {
				u16 len;
				u16 flag;
				u8 key_token[0];
			} tlv1;
		} kb;
	}__packed *cocci_id/* drivers/s390/crypto/zcrypt_ccamisc.c 948 */;
	struct key_block {
		u16 len;
		struct {
			u16 len;
			u16 flag;
			u8 key_token[0];
		} tlv1;
	}__packed *cocci_id/* drivers/s390/crypto/zcrypt_ccamisc.c 940 */;
	struct vud_block {
		u16 len;
		struct {
			u16 len;
			u16 flag;
			u16 clr_key_bit_len;
		} tlv1;
		struct {
			u16 len;
			u16 flag;
			u8 clr_key[0];
		} tlv2;
	}__packed *cocci_id/* drivers/s390/crypto/zcrypt_ccamisc.c 927 */;
	struct rule_array_block {
		u8 subfunc_code[2];
		u16 rule_array_len;
		char rule_array[0];
	}__packed *cocci_id/* drivers/s390/crypto/zcrypt_ccamisc.c 922 */;
	struct ica_xcRB cocci_id/* drivers/s390/crypto/zcrypt_ccamisc.c 921 */;
	struct CPRBX *cocci_id/* drivers/s390/crypto/zcrypt_ccamisc.c 920 */;
	debug_info_t *cocci_id/* drivers/s390/crypto/zcrypt_ccamisc.c 92 */;
	int *cocci_id/* drivers/s390/crypto/zcrypt_ccamisc.c 916 */;
	u8 *cocci_id/* drivers/s390/crypto/zcrypt_ccamisc.c 915 */;
	const u8 *cocci_id/* drivers/s390/crypto/zcrypt_ccamisc.c 913 */;
	const char *cocci_id/* drivers/s390/crypto/zcrypt_ccamisc.c 910 */;
	u16 cocci_id/* drivers/s390/crypto/zcrypt_ccamisc.c 909 */;
	int cocci_id/* drivers/s390/crypto/zcrypt_ccamisc.c 909 */;
	struct gkrepparm *cocci_id/* drivers/s390/crypto/zcrypt_ccamisc.c 870 */;
	struct gkreqparm *cocci_id/* drivers/s390/crypto/zcrypt_ccamisc.c 798 */;
	struct gkreqparm cocci_id/* drivers/s390/crypto/zcrypt_ccamisc.c 795 */;
	struct gkrepparm {
		u8 subfunc_code[2];
		u16 rule_array_len;
		struct {
			u16 len;
		} vud;
		struct {
			u16 len;
			struct {
				u16 len;
				u16 flag;
				u8 gen_key[0];
			} tlv1;
		} kb;
	}__packed *cocci_id/* drivers/s390/crypto/zcrypt_ccamisc.c 771 */;
	struct gkreqparm {
		u8 subfunc_code[2];
		u16 rule_array_len;
		char rule_array[2 * 8];
		struct {
			u16 len;
			u8 key_type_1[8];
			u8 key_type_2[8];
			u16 clear_key_bit_len;
			u16 key_name_1_len;
			u16 key_name_2_len;
			u16 user_data_1_len;
			u16 user_data_2_len;
			u8 key_name_1[0];
			u8 key_name_2[0];
			u8 user_data_1[0];
			u8 user_data_2[0];
		} vud;
		struct {
			u16 len;
			struct {
				u16 len;
				u16 flag;
				u8 kek_id_1[0];
			} tlv1;
			struct {
				u16 len;
				u16 flag;
				u8 kek_id_2[0];
			} tlv2;
			struct {
				u16 len;
				u16 flag;
				u8 gen_key_id_1[SIZEOF_SKELETON];
			} tlv3;
			struct {
				u16 len;
				u16 flag;
				u8 gen_key_id_1_label[0];
			} tlv4;
			struct {
				u16 len;
				u16 flag;
				u8 gen_key_id_2[0];
			} tlv5;
			struct {
				u16 len;
				u16 flag;
				u8 gen_key_id_2_label[0];
			} tlv6;
		} kb;
	}__packed *cocci_id/* drivers/s390/crypto/zcrypt_ccamisc.c 719 */;
	const u8 cocci_id/* drivers/s390/crypto/zcrypt_ccamisc.c 699 */[];
	struct uskrepparm *cocci_id/* drivers/s390/crypto/zcrypt_ccamisc.c 650 */;
	struct uskreqparm cocci_id/* drivers/s390/crypto/zcrypt_ccamisc.c 619 */;
	struct uskreqparm *cocci_id/* drivers/s390/crypto/zcrypt_ccamisc.c 608 */;
	struct uskrepparm {
		u8 subfunc_code[2];
		u16 rule_array_len;
		struct lv3 {
			u16 len;
			u16 attr_len;
			u16 attr_flags;
			struct cpacfkeyblock {
				u8 version;
				u8 flags[2];
				u8 algo;
				u8 form;
				u8 pad1[3];
				u16 len;
				u8 key[64];
				u16 keyattrlen;
				u8 keyattr[32];
				u8 pad2[1];
				u8 vptype;
				u8 vp[32];
			} keyblock;
		} lv3;
	}__packed *cocci_id/* drivers/s390/crypto/zcrypt_ccamisc.c 575 */;
	struct uskreqparm {
		u8 subfunc_code[2];
		u16 rule_array_len;
		struct lv1 {
			u16 len;
			u16 attr_len;
			u16 attr_flags;
		} lv1;
		struct lv2 {
			u16 len;
			u16 attr_len;
			u16 attr_flags;
			u8 token[0];
		} lv2;
	}__packed *cocci_id/* drivers/s390/crypto/zcrypt_ccamisc.c 560 */;
	struct secaeskeytoken *cocci_id/* drivers/s390/crypto/zcrypt_ccamisc.c 56 */;
	const u8 cocci_id/* drivers/s390/crypto/zcrypt_ccamisc.c 553 */[SECKEYBLOBSIZE];
	struct cmrepparm *cocci_id/* drivers/s390/crypto/zcrypt_ccamisc.c 518 */;
	struct cmreqparm cocci_id/* drivers/s390/crypto/zcrypt_ccamisc.c 493 */;
	struct keyid cocci_id/* drivers/s390/crypto/zcrypt_ccamisc.c 491 */;
	struct lv2 cocci_id/* drivers/s390/crypto/zcrypt_ccamisc.c 490 */;
	struct lv1 cocci_id/* drivers/s390/crypto/zcrypt_ccamisc.c 487 */;
	struct cmreqparm *cocci_id/* drivers/s390/crypto/zcrypt_ccamisc.c 463 */;
	struct cmrepparm {
		u8 subfunc_code[2];
		u16 rule_array_len;
		struct lv3 {
			u16 len;
			u16 keyblocklen;
			struct {
				u16 toklen;
				u16 tokattr;
				u8 tok[0];
			} keyblock;
		} lv3;
	}__packed *cocci_id/* drivers/s390/crypto/zcrypt_ccamisc.c 439 */;
	struct lv2 *cocci_id/* drivers/s390/crypto/zcrypt_ccamisc.c 438 */;
	struct cmreqparm {
		u8 subfunc_code[2];
		u16 rule_array_len;
		char rule_array[8];
		struct lv1 {
			u16 len;
			u8 clrkey[0];
		} lv1;
		struct lv2 {
			u16 len;
			struct keyid {
				u16 len;
				u16 attr;
				u8 data[SECKEYBLOBSIZE];
			} keyid;
		} lv2;
	}__packed *cocci_id/* drivers/s390/crypto/zcrypt_ccamisc.c 421 */;
	u8 cocci_id/* drivers/s390/crypto/zcrypt_ccamisc.c 415 */[SECKEYBLOBSIZE];
	struct kgrepparm *cocci_id/* drivers/s390/crypto/zcrypt_ccamisc.c 381 */;
	struct cca_info_list_entry {
		struct list_head list;
		u16 cardnr;
		u16 domain;
		struct cca_info info;
	} cocci_id/* drivers/s390/crypto/zcrypt_ccamisc.c 37 */;
	struct kgreqparm cocci_id/* drivers/s390/crypto/zcrypt_ccamisc.c 356 */;
	struct kgreqparm *cocci_id/* drivers/s390/crypto/zcrypt_ccamisc.c 323 */;
	struct kgrepparm {
		u8 subfunc_code[2];
		u16 rule_array_len;
		struct lv3 {
			u16 len;
			u16 keyblocklen;
			struct {
				u16 toklen;
				u16 tokattr;
				u8 tok[0];
			} keyblock;
		} lv3;
	}__packed *cocci_id/* drivers/s390/crypto/zcrypt_ccamisc.c 299 */;
	struct kgreqparm {
		u8 subfunc_code[2];
		u16 rule_array_len;
		struct lv1 {
			u16 len;
			char key_form[8];
			char key_length[8];
			char key_type1[8];
			char key_type2[8];
		} lv1;
		struct lv2 {
			u16 len;
			struct keyid {
				u16 len;
				u16 attr;
				u8 data[SECKEYBLOBSIZE];
			} keyid[6];
		} lv2;
	}__packed *cocci_id/* drivers/s390/crypto/zcrypt_ccamisc.c 280 */;
	mm_segment_t cocci_id/* drivers/s390/crypto/zcrypt_ccamisc.c 260 */;
	struct ica_xcRB *cocci_id/* drivers/s390/crypto/zcrypt_ccamisc.c 257 */;
	void __user *cocci_id/* drivers/s390/crypto/zcrypt_ccamisc.c 246 */;
	void *cocci_id/* drivers/s390/crypto/zcrypt_ccamisc.c 226 */;
	struct CPRBX **cocci_id/* drivers/s390/crypto/zcrypt_ccamisc.c 183 */;
	u8 **cocci_id/* drivers/s390/crypto/zcrypt_ccamisc.c 182 */;
	size_t cocci_id/* drivers/s390/crypto/zcrypt_ccamisc.c 181 */;
	struct zcrypt_device_status_ext cocci_id/* drivers/s390/crypto/zcrypt_ccamisc.c 1688 */;
	struct cca_info cocci_id/* drivers/s390/crypto/zcrypt_ccamisc.c 1681 */;
	struct zcrypt_device_status_ext *cocci_id/* drivers/s390/crypto/zcrypt_ccamisc.c 1679 */;
	u32 **cocci_id/* drivers/s390/crypto/zcrypt_ccamisc.c 1676 */;
	const struct keytoken_header *cocci_id/* drivers/s390/crypto/zcrypt_ccamisc.c 1655 */;
	struct keytoken_header *cocci_id/* drivers/s390/crypto/zcrypt_ccamisc.c 1655 */;
	u64 cocci_id/* drivers/s390/crypto/zcrypt_ccamisc.c 1653 */;
	u16 *cocci_id/* drivers/s390/crypto/zcrypt_ccamisc.c 1651 */;
	struct cca_info *cocci_id/* drivers/s390/crypto/zcrypt_ccamisc.c 1539 */;
	unsigned long cocci_id/* drivers/s390/crypto/zcrypt_ccamisc.c 1531 */;
	char cocci_id/* drivers/s390/crypto/zcrypt_ccamisc.c 1519 */;
	void __exit cocci_id/* drivers/s390/crypto/zcrypt_ccamisc.c 1476 */;
	void cocci_id/* drivers/s390/crypto/zcrypt_ccamisc.c 1460 */;
	const struct cca_info *cocci_id/* drivers/s390/crypto/zcrypt_ccamisc.c 1432 */;
	struct cca_info_list_entry *cocci_id/* drivers/s390/crypto/zcrypt_ccamisc.c 1416 */;
	struct fqrepparm *cocci_id/* drivers/s390/crypto/zcrypt_ccamisc.c 1381 */;
	struct fqreqparm *cocci_id/* drivers/s390/crypto/zcrypt_ccamisc.c 1349 */;
	struct fqrepparm {
		u8 subfunc_code[2];
		u8 lvdata[0];
	}__packed *cocci_id/* drivers/s390/crypto/zcrypt_ccamisc.c 1335 */;
	struct fqreqparm cocci_id/* drivers/s390/crypto/zcrypt_ccamisc.c 1334 */;
	struct fqreqparm {
		u8 subfunc_code[2];
		u16 rule_array_len;
		char rule_array[8];
		struct lv1 {
			u16 len;
			u8 data[VARDATASIZE];
		} lv1;
		u16 dummylen;
	}__packed *cocci_id/* drivers/s390/crypto/zcrypt_ccamisc.c 1324 */;
	struct aurepparm *cocci_id/* drivers/s390/crypto/zcrypt_ccamisc.c 1260 */;
	struct aureqparm cocci_id/* drivers/s390/crypto/zcrypt_ccamisc.c 1226 */;
	struct aureqparm *cocci_id/* drivers/s390/crypto/zcrypt_ccamisc.c 1210 */;
	struct aurepparm {
		u8 subfunc_code[2];
		u16 rule_array_len;
		struct {
			u16 len;
			u16 sublen;
			u16 tag;
			struct cpacfkeyblock {
				u8 version;
				u8 flags[2];
				u8 algo;
				u8 form;
				u8 pad1[3];
				u16 keylen;
				u8 key[64];
				u16 keyattrlen;
				u8 keyattr[32];
				u8 pad2[1];
				u8 vptype;
				u8 vp[32];
			} ckb;
		} vud;
		struct {
			u16 len;
		} kb;
	}__packed *cocci_id/* drivers/s390/crypto/zcrypt_ccamisc.c 1173 */;
	struct aureqparm {
		u8 subfunc_code[2];
		u16 rule_array_len;
		u8 rule_array[8];
		struct {
			u16 len;
			u16 tk_blob_len;
			u16 tk_blob_tag;
			u8 tk_blob[66];
		} vud;
		struct {
			u16 len;
			u16 cca_key_token_len;
			u16 cca_key_token_flags;
			u8 cca_key_token[0];
		} kb;
	}__packed *cocci_id/* drivers/s390/crypto/zcrypt_ccamisc.c 1156 */;
	u32 *cocci_id/* drivers/s390/crypto/zcrypt_ccamisc.c 1150 */;
	u8 cocci_id/* drivers/s390/crypto/zcrypt_ccamisc.c 1069 */[32];
	size_t *cocci_id/* drivers/s390/crypto/zcrypt_ccamisc.c 1064 */;
	u32 cocci_id/* drivers/s390/crypto/zcrypt_ccamisc.c 1063 */;
	struct iprepparm *cocci_id/* drivers/s390/crypto/zcrypt_ccamisc.c 1037 */;
	struct CPRBX cocci_id/* drivers/s390/crypto/zcrypt_ccamisc.c 1036 */;
	struct key_block cocci_id/* drivers/s390/crypto/zcrypt_ccamisc.c 1006 */;
	struct key_block *cocci_id/* drivers/s390/crypto/zcrypt_ccamisc.c 1003 */;
}
