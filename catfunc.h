/* File:			catfunc.h
 *
 * Description:		See "info.c"
 *
 * Comments:		See "notice.txt" for copyright and license information.
 *
 */

#ifndef __CATFUNC_H__
#define __CATFUNC_H__

#include "psqlodbc.h"

/*	SQLTables field position	*/
enum {
	TABLES_CATALOG_NAME	=	0
	,TABLES_SCHEMA_NAME
	,TABLES_TABLE_NAME
	,TABLES_TABLE_TYPE
	,TABLES_REMARKS
	,NUM_OF_TABLES_FIELDS
};

/*	SQLColumns field position	*/
enum {
	COLUMNS_CATALOG_NAME	=	0
	,COLUMNS_SCHEMA_NAME
	,COLUMNS_TABLE_NAME
	,COLUMNS_COLUMN_NAME
	,COLUMNS_DATA_TYPE
	,COLUMNS_TYPE_NAME
	,COLUMNS_PRECISION
	,COLUMNS_LENGTH
	,COLUMNS_SCALE
	,COLUMNS_RADIX
	,COLUMNS_NULLABLE
	,COLUMNS_REMARKS
	,COLUMNS_COLUMN_DEF /* ODBC 3.0 but always use it */
#if (ODBCVER >= 0x0300)
	,COLUMNS_SQL_DATA_TYPE
	,COLUMNS_SQL_DATETIME_SUB
	,COLUMNS_CHAR_OCTET_LENGTH
	,COLUMNS_ORDINAL_POSITION
	,COLUMNS_IS_NULLABLE
#endif	/* ODBCVER */
	,COLUMNS_DISPLAY_SIZE
	,COLUMNS_FIELD_TYPE
	,COLUMNS_AUTO_INCREMENT
	,COLUMNS_PHYSICAL_NUMBER
	,COLUMNS_TABLE_OID
	,COLUMNS_BASE_TYPEID
	,COLUMNS_ATTTYPMOD
	,NUM_OF_COLUMNS_FIELDS
};
/*	SQLPrimaryKeys field position	*/
enum {
	PKS_TABLE_CAT	=	0
	,PKS_TABLE_SCHEM
	,PKS_TABLE_NAME
	,PKS_COLUMN_NAME
	,PKS_KEY_SQ
	,PKS_PK_NAME
	,NUM_OF_PKS_FIELDS
};
/*	SQLForeignKeys field position	*/
enum {
	FKS_PKTABLE_CAT	=	0
	,FKS_PKTABLE_SCHEM
	,FKS_PKTABLE_NAME
	,FKS_PKCOLUMN_NAME
	,FKS_FKTABLE_CAT
	,FKS_FKTABLE_SCHEM
	,FKS_FKTABLE_NAME
	,FKS_FKCOLUMN_NAME
	,FKS_KEY_SEQ
	,FKS_UPDATE_RULE
	,FKS_DELETE_RULE
	,FKS_FK_NAME
	,FKS_PK_NAME
#if (ODBCVER >= 0x0300)
	,FKS_DEFERRABILITY
#endif	/* ODBCVER */
	,FKS_TRIGGER_NAME
	,NUM_OF_FKS_FIELDS
};
/* SQLColAttribute */
enum {
	COLATTR_DESC_COUNT = -1
	,COLATTR_DESC_AUTO_UNIQUE_VALUE = 0
	,COLATTR_DESC_BASE_COLUMN_NAME
	,COLATTR_DESC_BASE_TABLE_NAME
	,COLATTR_DESC_CASE_SENSITIVE
	,COLATTR_DESC_CATALOG_NAME
	,COLATTR_DESC_CONCISE_TYPE
	,COLATTR_DESC_DISPLAY_SIZE
	,COLATTR_DESC_FIXED_PREC_SCALE
	,COLATTR_DESC_LABEL
	,COLATTR_DESC_LENGTH
	,COLATTR_DESC_LITERAL_PREFIX
	,COLATTR_DESC_LITERAL_SUFFIX
	,COLATTR_DESC_LOCAL_TYPE_NAME
	,COLATTR_DESC_NAME
	,COLATTR_DESC_NULLABLE
	,COLATTR_DESC_NUM_PREX_RADIX
	,COLATTR_DESC_OCTET_LENGTH
	,COLATTR_DESC_PRECISION
	,COLATTR_DESC_SCALE
	,COLATTR_DESC_SCHEMA_NAME
	,COLATTR_DESC_SEARCHABLE
	,COLATTR_DESC_TABLE_NAME
	,COLATTR_DESC_TYPE
	,COLATTR_DESC_TYPE_NAME
	,COLATTR_DESC_UNNAMED
	,COLATTR_DESC_UNSIGNED
	,COLATTR_DESC_UPDATABLE
};

/*	SQLStatistics field position	*/
enum {
	STATS_CATALOG_NAME	= 0
	,STATS_SCHEMA_NAME
	,STATS_TABLE_NAME
	,STATS_NON_UNIQUE
	,STATS_INDEX_QUALIFIER
	,STATS_INDEX_NAME
	,STATS_TYPE
	,STATS_SEQ_IN_INDEX
	,STATS_COLUMN_NAME
	,STATS_COLLATION
	,STATS_CARDINALITY
	,STATS_PAGES
	,STATS_FILTER_CONDITION
	,NUM_OF_STATS_FIELDS
};

/*	SQLProcedureColumns field position	*/
enum {
        PROCOLS_PROCEDURE_CAT	= 0
        ,PROCOLS_PROCEDURE_SCHEM
        ,PROCOLS_PROCEDURE_NAME
        ,PROCOLS_COLUMN_NAME
        ,PROCOLS_COLUMN_TYPE
        ,PROCOLS_DATA_TYPE
        ,PROCOLS_TYPE_NAME
        ,PROCOLS_COLUMN_SIZE
        ,PROCOLS_BUFFER_LENGTH
        ,PROCOLS_DECIMAL_DIGITS
        ,PROCOLS_NUM_PREC_RADIX
        ,PROCOLS_NULLABLE
        ,PROCOLS_REMARKS
#if (ODBCVER >= 0x0300)
        ,PROCOLS_COLUMN_DEF
        ,PROCOLS_SQL_DATA_TYPE
        ,PROCOLS_SQL_DATETIME_SUB
        ,PROCOLS_CHAR_OCTET_LENGTH
        ,PROCOLS_ORDINAL_POSITION
        ,PROCOLS_IS_NULLABLE
#endif /* ODBCVER */
	,NUM_OF_PROCOLS_FIELDS
};
#endif /* __CARFUNC_H__ */
