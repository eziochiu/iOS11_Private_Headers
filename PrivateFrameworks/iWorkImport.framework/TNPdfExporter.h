/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TNPdfExporter : TNRenderingExporter <TSKEncryptedDocumentExporter> {
    NSDictionary * mOptions;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void)dealloc;
- (id)p_renderingExporterDelegate;
- (void)setCopyPassphrase:(id)arg1 hint:(id)arg2;
- (void)setOptions:(id)arg1;
- (void)setPassphrase:(id)arg1 hint:(id)arg2;
- (void)setPrintPassphrase:(id)arg1 hint:(id)arg2;
- (bool)validatePassphrases:(id*)arg1;

@end
