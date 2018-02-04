/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface STPropVariant : NSObject {
    struct _SsrwPropVariant { 
        unsigned short vt; 
        union { 
            unsigned char cVal; 
            short iVal; 
            int lVal; 
            double dblVal; 
            unsigned short *bstrVal; 
            struct _SSRW_BLOB { 
                unsigned int cbSize; 
                char *pData; 
            } blob; 
            char *pszVal; 
            struct _SSRW_FILETIME { 
                unsigned int dwLowDateTime; 
                unsigned int dwHighDateTime; 
            } filetime; 
            struct _SSRW_CLIPDATA {} *pclipdata; 
            short boolVal; 
        } v; 
    }  mProp;
}

- (id)asDataOfType:(int*)arg1;
- (void)dealloc;
- (struct _SsrwPropVariant { unsigned short x1; union { unsigned char x_2_1_1; short x_2_1_2; int x_2_1_3; double x_2_1_4; unsigned short *x_2_1_5; struct _SSRW_BLOB { unsigned int x_6_2_1; char *x_6_2_2; } x_2_1_6; char *x_2_1_7; struct _SSRW_FILETIME { unsigned int x_8_2_1; unsigned int x_8_2_2; } x_2_1_8; struct _SSRW_CLIPDATA {} *x_2_1_9; short x_2_1_10; } x2; }*)propVariant;
- (void)setBlobValue:(id)arg1;
- (void)setLongValue:(int)arg1;
- (void)setShortValue:(short)arg1;
- (void)setStringValue:(id)arg1;

@end