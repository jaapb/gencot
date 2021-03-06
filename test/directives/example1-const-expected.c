
#ORIGIN 18 +
#define mbedtls_calloc calloc
sembedtls_calloc: U32
sembedtls_calloc = mbedtls_calloc
#ENDORIG 18 +


#ORIGIN 19 +
#define mbedtls_free free
sembedtls_free: U32
sembedtls_free = mbedtls_free
#ENDORIG 19 +


#ORIGIN 43 +
#define SSL_FORCE_FLUSH 1
cogent_SSL_FORCE_FLUSH: U8
cogent_SSL_FORCE_FLUSH = SSL_FORCE_FLUSH
#ENDORIG 43 +


#ORIGIN 46 +
#define MBEDTLS_SSL_IN_BUFFER_LEN 5
seMBEDTLS_SSL_IN_BUFFER_LEN: U8
seMBEDTLS_SSL_IN_BUFFER_LEN = MBEDTLS_SSL_IN_BUFFER_LEN
#ENDORIG 46 +


#ORIGIN 47 +
#define MBEDTLS_SSL_OUT_BUFFER_LEN 10
seMBEDTLS_SSL_OUT_BUFFER_LEN: U8
seMBEDTLS_SSL_OUT_BUFFER_LEN = MBEDTLS_SSL_OUT_BUFFER_LEN
#ENDORIG 47 +


#ORIGIN 49 +
#define MBEDTLS_SSL_COMPRESS_BUFFER_LEN ( \
        ( sEMBEDTLS_SSL_IN_BUFFER_LEN > sEMBEDTLS_SSL_OUT_BUFFER_LEN ) \
        ? sEMBEDTLS_SSL_IN_BUFFER_LEN \
        : sEMBEDTLS_SSL_OUT_BUFFER_LEN \
        )
seMBEDTLS_SSL_COMPRESS_BUFFER_LEN: U32
seMBEDTLS_SSL_COMPRESS_BUFFER_LEN = MBEDTLS_SSL_COMPRESS_BUFFER_LEN
#ENDORIG 53 +

