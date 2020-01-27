cocci_test_suite() {
	struct type **cocci_id/* scripts/asn1_compiler.c 859 */;
	struct element *cocci_id/* scripts/asn1_compiler.c 847 */(struct token **_cursor,
								  struct token *end,
								  int alternates);
	struct token *cocci_id/* scripts/asn1_compiler.c 835 */;
	struct element *cocci_id/* scripts/asn1_compiler.c 835 */;
	struct element *cocci_id/* scripts/asn1_compiler.c 798 */(struct token **_cursor,
								  struct token *stop,
								  struct token *name);
	unsigned cocci_id/* scripts/asn1_compiler.c 749 */;
	struct type *cocci_id/* scripts/asn1_compiler.c 748 */;
	void cocci_id/* scripts/asn1_compiler.c 746 */;
	const struct type *const *cocci_id/* scripts/asn1_compiler.c 733 */;
	struct type {
		struct token *name;
		struct token *def;
		struct element *element;
		unsigned ref_count;
		unsigned flags;
#define TYPE_STOP_MARKER 0x0001
#define TYPE_BEGIN 0x0002
	} cocci_id/* scripts/asn1_compiler.c 705 */;
	struct element {
		struct type *type_def;
		struct token *name;
		struct token *type;
		struct action *action;
		struct element *children;
		struct element *next;
		struct element *render_next;
		struct element *list_next;
		uint8_t n_elements;
		enum compound compound:8;
		enum asn1_class class:8;
		enum asn1_method method:8;
		uint8_t tag;
		unsigned entry_index;
		unsigned flags;
#define ELEMENT_IMPLICIT 0x0001
#define ELEMENT_EXPLICIT 0x0002
#define ELEMENT_TAG_SPECIFIED 0x0004
#define ELEMENT_RENDERED 0x0008
#define ELEMENT_SKIPPABLE 0x0010
#define ELEMENT_CONDITIONAL 0x0020
	} cocci_id/* scripts/asn1_compiler.c 681 */;
	enum compound{NOT_COMPOUND, SET, SET_OF, SEQUENCE, SEQUENCE_OF, CHOICE, ANY, TYPE_REF, TAG_OVERRIDE,} cocci_id/* scripts/asn1_compiler.c 669 */;
	char *cocci_id/* scripts/asn1_compiler.c 565 */;
	FILE *cocci_id/* scripts/asn1_compiler.c 564 */;
	ssize_t cocci_id/* scripts/asn1_compiler.c 563 */;
	struct stat cocci_id/* scripts/asn1_compiler.c 562 */;
	char **cocci_id/* scripts/asn1_compiler.c 560 */;
	void cocci_id/* scripts/asn1_compiler.c 555 */(FILE *out, FILE *hdr);
	void cocci_id/* scripts/asn1_compiler.c 552 */(void);
	const char **cocci_id/* scripts/asn1_compiler.c 412 */;
	struct token cocci_id/* scripts/asn1_compiler.c 355 */;
	size_t cocci_id/* scripts/asn1_compiler.c 321 */;
	const char *const *cocci_id/* scripts/asn1_compiler.c 320 */;
	const struct token *cocci_id/* scripts/asn1_compiler.c 319 */;
	const void *cocci_id/* scripts/asn1_compiler.c 317 */;
	int cocci_id/* scripts/asn1_compiler.c 317 */;
	bool cocci_id/* scripts/asn1_compiler.c 312 */;
	struct token {
		unsigned short line;
		enum token_type token_type:8;
		unsigned char size;
		struct action *action;
		char *content;
		struct type *type;
	} cocci_id/* scripts/asn1_compiler.c 300 */;
	struct action *cocci_id/* scripts/asn1_compiler.c 297 */;
	struct action {
		struct action *next;
		char *name;
		unsigned char index;
	} cocci_id/* scripts/asn1_compiler.c 291 */;
	const char *const cocci_id/* scripts/asn1_compiler.c 205 */[NR__DIRECTIVES];
	enum token_type{DIRECTIVE_ABSENT, DIRECTIVE_ALL, DIRECTIVE_ANY, DIRECTIVE_APPLICATION, DIRECTIVE_AUTOMATIC, DIRECTIVE_BEGIN, DIRECTIVE_BIT, DIRECTIVE_BMPString, DIRECTIVE_BOOLEAN, DIRECTIVE_BY, DIRECTIVE_CHARACTER, DIRECTIVE_CHOICE, DIRECTIVE_CLASS, DIRECTIVE_COMPONENT, DIRECTIVE_COMPONENTS, DIRECTIVE_CONSTRAINED, DIRECTIVE_CONTAINING, DIRECTIVE_DEFAULT, DIRECTIVE_DEFINED, DIRECTIVE_DEFINITIONS, DIRECTIVE_EMBEDDED, DIRECTIVE_ENCODED, DIRECTIVE_ENCODING_CONTROL, DIRECTIVE_END, DIRECTIVE_ENUMERATED, DIRECTIVE_EXCEPT, DIRECTIVE_EXPLICIT, DIRECTIVE_EXPORTS, DIRECTIVE_EXTENSIBILITY, DIRECTIVE_EXTERNAL, DIRECTIVE_FALSE, DIRECTIVE_FROM, DIRECTIVE_GeneralString, DIRECTIVE_GeneralizedTime, DIRECTIVE_GraphicString, DIRECTIVE_IA5String, DIRECTIVE_IDENTIFIER, DIRECTIVE_IMPLICIT, DIRECTIVE_IMPLIED, DIRECTIVE_IMPORTS, DIRECTIVE_INCLUDES, DIRECTIVE_INSTANCE, DIRECTIVE_INSTRUCTIONS, DIRECTIVE_INTEGER, DIRECTIVE_INTERSECTION, DIRECTIVE_ISO646String, DIRECTIVE_MAX, DIRECTIVE_MIN, DIRECTIVE_MINUS_INFINITY, DIRECTIVE_NULL, DIRECTIVE_NumericString, DIRECTIVE_OBJECT, DIRECTIVE_OCTET, DIRECTIVE_OF, DIRECTIVE_OPTIONAL, DIRECTIVE_ObjectDescriptor, DIRECTIVE_PATTERN, DIRECTIVE_PDV, DIRECTIVE_PLUS_INFINITY, DIRECTIVE_PRESENT, DIRECTIVE_PRIVATE, DIRECTIVE_PrintableString, DIRECTIVE_REAL, DIRECTIVE_RELATIVE_OID, DIRECTIVE_SEQUENCE, DIRECTIVE_SET, DIRECTIVE_SIZE, DIRECTIVE_STRING, DIRECTIVE_SYNTAX, DIRECTIVE_T61String, DIRECTIVE_TAGS, DIRECTIVE_TRUE, DIRECTIVE_TeletexString, DIRECTIVE_UNION, DIRECTIVE_UNIQUE, DIRECTIVE_UNIVERSAL, DIRECTIVE_UTCTime, DIRECTIVE_UTF8String, DIRECTIVE_UniversalString, DIRECTIVE_VideotexString, DIRECTIVE_VisibleString, DIRECTIVE_WITH, NR__DIRECTIVES, TOKEN_ASSIGNMENT=NR__DIRECTIVES, TOKEN_OPEN_CURLY, TOKEN_CLOSE_CURLY, TOKEN_OPEN_SQUARE, TOKEN_CLOSE_SQUARE, TOKEN_OPEN_ACTION, TOKEN_CLOSE_ACTION, TOKEN_COMMA, TOKEN_NUMBER, TOKEN_TYPE_NAME, TOKEN_ELEMENT_NAME, NR__TOKENS,} cocci_id/* scripts/asn1_compiler.c 20 */;
	const char *const cocci_id/* scripts/asn1_compiler.c 165 */[32];
	const char cocci_id/* scripts/asn1_compiler.c 160 */[2][5];
	const char cocci_id/* scripts/asn1_compiler.c 153 */[4][5];
	va_list cocci_id/* scripts/asn1_compiler.c 1280 */;
	void cocci_id/* scripts/asn1_compiler.c 1257 */(FILE *out);
	void cocci_id/* scripts/asn1_compiler.c 1256 */(FILE *out, struct element *e, struct element *tag);
	char cocci_id/* scripts/asn1_compiler.c 1216 */[32];
	const char *cocci_id/* scripts/asn1_compiler.c 1214 */;
	const struct type *cocci_id/* scripts/asn1_compiler.c 1213 */;
	const struct element *cocci_id/* scripts/asn1_compiler.c 1210 */;
	const unsigned char cocci_id/* scripts/asn1_compiler.c 118 */[NR__TOKENS];
	struct token **cocci_id/* scripts/asn1_compiler.c 1147 */;
	struct action cocci_id/* scripts/asn1_compiler.c 1088 */;
}
