/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSWPTextHighlightColorProvider : NSObject <TSKCGColorProvider> {
    NSArray * _highlights;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSArray *highlights;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (struct CGColor { }*)cgColor;
- (id)highlights;
- (id)initWithHighlights:(id)arg1;
- (void)setHighlights:(id)arg1;

@end
